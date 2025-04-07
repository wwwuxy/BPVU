package pvu

import chisel3._
import chisel3.util._

/**
 * PositQuantizeToInt8模块 - 将Posit值量化为Int8整数
 * 实现向量化Posit值量化至固定Int8范围(-128至127)
 * 量化策略：基于滑动窗口的自适应缩放，保持数据流中的量化一致性
 * 
 * @param MAX_POSIT_WIDTH 最大posit位宽
 * @param MAX_VECTOR_SIZE 最大向量大小
 * @param MAX_ALIGN_WIDTH 最大对齐宽度
 * @param ES ES参数
 * @param WINDOW_SIZE 滑动窗口大小，默认为8
 */
class PositQuantizeToInt8(
  val MAX_POSIT_WIDTH: Int,
  val MAX_VECTOR_SIZE: Int,
  val MAX_ALIGN_WIDTH: Int,
  val ES: Int,
  val WINDOW_SIZE: Int = 8
) extends Module {
  
  // 定义相关常量
  val SRC_ND_MAX: Int         = log2Ceil(MAX_POSIT_WIDTH - 1)
  val SRC_EXP_WIDTH_MAX: Int  = SRC_ND_MAX + ES + 1
  val SRC_FRAC_WIDTH_MAX: Int = MAX_POSIT_WIDTH + 1
  val INT8_WIDTH: Int         = 8  // 固定为Int8位宽
  
  val io = IO(new Bundle {
    // 输入信号 - PIR格式
    val pir_sign_i = Input(Vec(MAX_VECTOR_SIZE, UInt(1.W)))
    val pir_exp_i  = Input(Vec(MAX_VECTOR_SIZE, SInt(SRC_EXP_WIDTH_MAX.W)))
    val pir_frac_i = Input(Vec(MAX_VECTOR_SIZE, UInt(SRC_FRAC_WIDTH_MAX.W)))
    
    // 输出信号 - Int8量化结果
    val int8_o = Output(Vec(MAX_VECTOR_SIZE, SInt(INT8_WIDTH.W)))
    
    // 控制信号
    val reset_window = Input(Bool()) // 重置滑动窗口
  })
  
  // 添加异常值检测阈值
  val MAX_NORMAL_VALUE = 127.S(33.W)
  val MIN_NORMAL_VALUE = -128.S(33.W)
  
  // 简化滑动窗口存储结构
  val windowMax = RegInit(VecInit(Seq.fill(WINDOW_SIZE)(MAX_NORMAL_VALUE)))
  val windowMin = RegInit(VecInit(Seq.fill(WINDOW_SIZE)(MIN_NORMAL_VALUE)))
  val windowValid = RegInit(VecInit(Seq.fill(WINDOW_SIZE)(false.B)))
  val windowPtr = RegInit(0.U(log2Ceil(WINDOW_SIZE).W))
  
  // 全局最大最小值跟踪（包括异常值）
  val globalMax = RegInit(MAX_NORMAL_VALUE)  
  val globalMin = RegInit(MIN_NORMAL_VALUE)
  val globalScale = RegInit(1.U(33.W))
  val globalOffset = RegInit(0.S(33.W))
  
  // 批次处理变量 
  val batchMax = RegInit(MIN_NORMAL_VALUE)
  val batchMin = RegInit(MAX_NORMAL_VALUE)
  val batchHasData = RegInit(false.B)
  
  // 当前批次处理状态
  val sIdle :: sCollect :: sUpdate :: sQuantize :: Nil = Enum(4)
  val state = RegInit(sIdle)
  
  // 第一步：计算每个Posit转换后的原始整数值
  val rawInts = Wire(Vec(MAX_VECTOR_SIZE, SInt(33.W))) // 使用33位宽度避免溢出
  val validValues = Wire(Vec(MAX_VECTOR_SIZE, Bool()))
  
  // 初始化数组
  for (i <- 0 until MAX_VECTOR_SIZE) {
    rawInts(i) := 0.S
    validValues(i) := false.B
  }
  
  // 将每个Posit转换为原始整数值(不限制在Int8范围)
  for (i <- 0 until MAX_VECTOR_SIZE) {
    // 提取输入参数
    val sgn = io.pir_sign_i(i)                 // 符号位
    val frac = io.pir_frac_i(i)                // 小数
    val k = io.pir_exp_i(i)                    // 解码后的指数
    
    // 检查是否为零或特殊值
    val zn = frac === 0.U
    val nudf = (k <= 0.S) && (frac =/= 0.U)  // 下溢
    
    // 准备移位操作
    val paddedFrac = Wire(UInt(32.W))
    paddedFrac := Cat(~sgn, frac(frac.getWidth-2, 0), 0.U(4.W)) // 添加隐含位和4个0用于舍入
    
    // 计算移位量
    val shiftVal_tmp = Wire(SInt(8.W))
    shiftVal_tmp := 30.S - k
    
    // 确定最终移位量
    val shiftVal = Wire(UInt(6.W))
    when (shiftVal_tmp >= 0.S) {
      shiftVal := shiftVal_tmp(5, 0).asUInt
    }.otherwise {
      shiftVal := 0.U
    }
    
    // 执行右移
    val shiftedFrac = Wire(UInt(32.W))
    val sticky = Wire(Bool())
    val stickyBits = WireDefault(0.U(32.W))
    
    when (shiftVal >= 32.U) {
      shiftedFrac := Mux(sgn === 1.U, Fill(32, 1.U(1.W)), 0.U(32.W))
      sticky := paddedFrac.orR
    }.otherwise {
      shiftedFrac := paddedFrac >> shiftVal
      when (shiftVal === 0.U) {
        sticky := false.B
      }.otherwise {
        val mask = (1.U << shiftVal) - 1.U
        stickyBits := paddedFrac & mask
        sticky := stickyBits.orR
      }
    }
    
    // 调整舍入逻辑 - 使用IEEE舍入到最近偶数标准
    val rnd = shiftedFrac(0)
    val lsb = shiftedFrac(1)
    val guard = rnd
    val round = guard && (sticky || lsb(0))  // 修正舍入条件，只在必要时舍入
    
    // 计算整数结果
    val fracPart = shiftedFrac(31, 1)
    val intPart = fracPart // 保留完整位宽
    
    // 添加舍入位
    val roundedInt = intPart + round.asUInt
    
    // 根据符号位计算有符号整数值
    when (zn || nudf) {
      // 零或下溢情况
      rawInts(i) := 0.S
      validValues(i) := false.B
    }.elsewhen (sgn === 0.U) {
      // 正数
      rawInts(i) := roundedInt.asSInt
      validValues(i) := true.B
    }.otherwise {
      // 负数，改进补码转换
      rawInts(i) := (~roundedInt).asSInt + 1.S
      validValues(i) := true.B
    }
  }
  
  // 数据收集阶段
  when (state === sIdle) {
    // 初始化批次状态
    batchMax := MIN_NORMAL_VALUE  
    batchMin := MAX_NORMAL_VALUE
    batchHasData := false.B
    state := sCollect
  } .elsewhen (state === sCollect) {
    // 收集当前批次的极值
    for (i <- 0 until MAX_VECTOR_SIZE) {
      when (validValues(i)) {
        when (!batchHasData) {
          batchMax := rawInts(i)
          batchMin := rawInts(i)
          batchHasData := true.B
        } .otherwise {
          when (rawInts(i) > batchMax) {
            batchMax := rawInts(i)
          }
          when (rawInts(i) < batchMin) {
            batchMin := rawInts(i)
          }
        }
      }
    }
    state := sUpdate
  } .elsewhen (state === sUpdate) {
    // 更新滑动窗口和全局极值
    when (io.reset_window) {
      // 重置滑动窗口
      for (i <- 0 until WINDOW_SIZE) {
        windowMax(i) := MAX_NORMAL_VALUE
        windowMin(i) := MIN_NORMAL_VALUE
        windowValid(i) := false.B
      }
      windowPtr := 0.U
      globalMax := MAX_NORMAL_VALUE
      globalMin := MIN_NORMAL_VALUE
    } .elsewhen (batchHasData) {
      // 更新滑动窗口
      windowMax(windowPtr) := batchMax
      windowMin(windowPtr) := batchMin
      windowValid(windowPtr) := true.B
      windowPtr := (windowPtr + 1.U) % WINDOW_SIZE.U
      
      // 更新全局极值（始终追踪整体最大最小值）
      when (batchMax > globalMax) {
        globalMax := batchMax
      }
      when (batchMin < globalMin) {
        globalMin := batchMin
      }
      
      // 计算全局缩放因子和偏移量
      val range = (globalMax - globalMin).abs.asUInt
      when (range === 0.U) {
        // 避免除零
        globalScale := 1.U
        globalOffset := 0.S
      } .elsewhen (range > 255.U) {
        // 需要缩放到int8范围
        globalScale := (range + 127.U) / 255.U  // 确保能覆盖完整范围
        
        // 计算中点作为偏移量
        val mid = (globalMax + globalMin) >> 1
        globalOffset := mid
      } .otherwise {
        // 范围已经在int8以内
        globalScale := 1.U
        globalOffset := 0.S
      }
    }
    state := sQuantize
  } .elsewhen (state === sQuantize) {
    // 实际量化计算在下面的组合逻辑中完成
    state := sIdle
  }
  
  // 量化计算（组合逻辑）
  for (i <- 0 until MAX_VECTOR_SIZE) {
    // 初始化输出值
    val outputValue = WireDefault(0.S(8.W))
    
    when (validValues(i)) {
      // 根据全局范围对值进行缩放
      val inputValue = rawInts(i)
      
      // 首先检查是否为常规int8范围内的值
      when ((inputValue >= MIN_NORMAL_VALUE) && (inputValue <= MAX_NORMAL_VALUE)) {
        // 正常范围内的值直接使用
        outputValue := inputValue(7, 0).asSInt
      } .otherwise {
        // 超出范围的值需要缩放处理
        when (globalScale === 1.U) {
          // 如果缩放因子为1但值超范围，说明是极端值，直接截断到边界
          when (inputValue > MAX_NORMAL_VALUE) {
            outputValue := 127.S(8.W)
          } .otherwise {
            outputValue := -128.S(8.W)
          }
        } .otherwise {
          // 应用线性变换缩放
          // 1. 减去偏移量，将输入居中
          val centered = inputValue - globalOffset
          
          // 2. 除以缩放因子
          val scaled = centered / globalScale.asSInt
          
          // 3. 计算用于舍入的余数
          val remainder = centered % globalScale.asSInt
          val halfScale = globalScale.asSInt >> 1
          
          // 4. 根据舍入规则应用舍入
          // 舍入到最近偶数
          val roundToEven = (remainder.abs > halfScale) || 
                           ((remainder.abs === halfScale) && (scaled(0) === 1.U))
                           
          // 根据需要应用舍入
          val roundedValue = scaled + Mux(
            remainder >= 0.S,
            Mux(roundToEven, 1.S, 0.S),
            Mux(roundToEven, -1.S, 0.S)
          )
          
          // 5. 确保结果在int8范围内
          when (roundedValue > 127.S) {
            outputValue := 127.S(8.W)
          } .elsewhen (roundedValue < -128.S) {
            outputValue := -128.S(8.W)
          } .otherwise {
            outputValue := roundedValue(7, 0).asSInt
          }
        }
      }
    }
    
    // 将结果输出
    io.int8_o(i) := outputValue
  }
}