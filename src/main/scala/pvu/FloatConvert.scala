package pvu
import chisel3._
import chisel3.util._

// 改进的FloatConvert模块 #实现不同精度浮点数转换，更精确处理输入输出
class FloatConvert(
  val SRC_EXP_WIDTH: Int,  // 源浮点数指数宽度
  val SRC_FRAC_WIDTH: Int, // 源浮点数尾数宽度
  val DST_EXP_WIDTH: Int,  // 目标浮点数指数宽度
  val DST_FRAC_WIDTH: Int, // 目标浮点数尾数宽度
  val VECTOR_SIZE: Int     // 向量大小
) extends Module {
  val io = IO(new Bundle {
    // 源浮点数输入,使用最大位宽存储
    val float_in = Input(Vec(VECTOR_SIZE, UInt((1 + 11 + 52).W)))
    // 转换后的浮点数输出,使用最大位宽存储
    val float_out = Output(Vec(VECTOR_SIZE, UInt((1 + 11 + 52).W)))
  })

  // 最大宽度定义
  val MAX_WIDTH = 1 + 11 + 52

  // 源浮点数总宽度
  val SRC_WIDTH = 1 + SRC_EXP_WIDTH + SRC_FRAC_WIDTH
  
  // 目标浮点数总宽度
  val DST_WIDTH = 1 + DST_EXP_WIDTH + DST_FRAC_WIDTH

  // 源浮点数偏置值
  val SRC_BIAS = (1 << (SRC_EXP_WIDTH - 1)) - 1
  
  // 目标浮点数偏置值
  val DST_BIAS = (1 << (DST_EXP_WIDTH - 1)) - 1

  // 处理每个向量元素
  for (i <- 0 until VECTOR_SIZE) {
    // 第一阶段：输入处理和数据提取
    // ===================================
    // 计算有效数据位移
    val data_shift = MAX_WIDTH - SRC_WIDTH
    
    // 从输入中提取有效数据位，使用位操作而非Cat函数
    val src_mask = ((BigInt(1) << SRC_WIDTH) - 1).U(MAX_WIDTH.W)
    val src_float = (io.float_in(i) >> data_shift) & src_mask
    
    // 提取浮点数各部分
    val sign = src_float(SRC_WIDTH-1)
    val exp = src_float(SRC_WIDTH-2, SRC_FRAC_WIDTH)
    val frac = src_float(SRC_FRAC_WIDTH-1, 0)
    
    // 计算偏移量差值
    val bias_diff = DST_BIAS.S - SRC_BIAS.S
    
    // 检测特殊值
    val is_zero = (exp === 0.U) && (frac === 0.U)
    val is_inf = (exp === ((1 << SRC_EXP_WIDTH) - 1).U) && (frac === 0.U)
    val is_nan = (exp === ((1 << SRC_EXP_WIDTH) - 1).U) && (frac =/= 0.U)
    val is_denorm = (exp === 0.U) && (frac =/= 0.U)  // 检测非规格化数
    
    // 第二阶段：输出处理和格式转换
    // ===================================
    // 转换后的浮点数
    val dst_sign = sign
    val dst_exp = Wire(UInt(DST_EXP_WIDTH.W))
    val dst_frac = Wire(UInt(DST_FRAC_WIDTH.W))
    
    // 默认初始化，避免"sink not fully initialized"错误
    dst_exp := 0.U
    dst_frac := 0.U
    
    // 处理特殊值
    when (is_zero) {
      // 零值处理
      dst_exp := 0.U
      dst_frac := 0.U
    }.elsewhen (is_inf) {
      // 无穷大处理
      dst_exp := ((1 << DST_EXP_WIDTH) - 1).U
      dst_frac := 0.U
    }.elsewhen (is_nan) {
      // NaN处理
      dst_exp := ((1 << DST_EXP_WIDTH) - 1).U
      dst_frac := 1.U << (DST_FRAC_WIDTH - 1)
    }.elsewhen (is_denorm) {
      // 处理非规格化数
      // 计算前导零的数量
      val countLeadingZeros = Wire(UInt(log2Ceil(SRC_FRAC_WIDTH + 1).W))
      
      if (SRC_FRAC_WIDTH <= 2) {
        // 对于非常小的尾数宽度，手动计算前导零
        countLeadingZeros := MuxLookup(frac, 0.U)(Seq(
          0.U -> SRC_FRAC_WIDTH.U,
          1.U -> (SRC_FRAC_WIDTH-1).U,
          2.U -> (SRC_FRAC_WIDTH-2).U,
          3.U -> 0.U
        ))
      } else {
        // 使用PriorityEncoder计算前导零
        countLeadingZeros := PriorityEncoder(Reverse(frac))
      }
      
      val shift_amount = countLeadingZeros + 1.U
      
      // 尝试将非规格化数转为规格化数
      when (shift_amount < SRC_FRAC_WIDTH.U) {
        // 可以转为规格化数
        val adjusted_exp = 1.S - shift_amount.asSInt + bias_diff
        
        when (adjusted_exp > 0.S && adjusted_exp < ((1 << DST_EXP_WIDTH) - 1).S) {
          // 在有效范围内
          dst_exp := adjusted_exp.asUInt
          
          // 安全的左移操作
          val safe_shift = Mux(shift_amount > SRC_FRAC_WIDTH.U, SRC_FRAC_WIDTH.U, shift_amount)
          val shifted_frac = (frac << safe_shift)(SRC_FRAC_WIDTH-1, 0)
          
          // 调整尾数
          if (SRC_FRAC_WIDTH <= DST_FRAC_WIDTH) {
            // 尾数扩展
            val pad_width = DST_FRAC_WIDTH - SRC_FRAC_WIDTH
            val extended_frac = (shifted_frac << pad_width)(DST_FRAC_WIDTH-1, 0)
            dst_frac := extended_frac
          } else {
            // 尾数截断，添加舍入处理
            val truncated_bits = shifted_frac(SRC_FRAC_WIDTH-DST_FRAC_WIDTH-1, 0)
            val round_bit = truncated_bits.orR && (shifted_frac(SRC_FRAC_WIDTH-DST_FRAC_WIDTH) === 1.U)
            val main_frac = shifted_frac(SRC_FRAC_WIDTH-1, SRC_FRAC_WIDTH-DST_FRAC_WIDTH)
            dst_frac := Mux(round_bit, main_frac + 1.U, main_frac)
          }
        }.otherwise {
          // 下溢出为零
          dst_exp := 0.U
          dst_frac := 0.U
        }
      }.otherwise {
        // 下溢出为零
        dst_exp := 0.U
        dst_frac := 0.U
      }
    }.otherwise {
      // 普通值处理
      
      // 调整指数
      val adjusted_exp = exp.zext + bias_diff
      
      when (adjusted_exp >= ((1 << DST_EXP_WIDTH) - 1).S) {
        // 上溢出为无穷大
        dst_exp := ((1 << DST_EXP_WIDTH) - 1).U
        dst_frac := 0.U
      }.elsewhen (adjusted_exp <= 0.S) {
        // 处理指数下溢
        val underflow_shift = (1.S - adjusted_exp).asUInt
        when (underflow_shift < DST_FRAC_WIDTH.U) {
          // 可以转为非规格化数
          dst_exp := 0.U
          
          // 提取隐含的1，并右移形成非规格化数
          val implicit_1 = 1.U << DST_FRAC_WIDTH
          val with_implicit_1 = if (SRC_FRAC_WIDTH <= DST_FRAC_WIDTH) {
            val pad_width = DST_FRAC_WIDTH - SRC_FRAC_WIDTH
            (implicit_1 | (frac << pad_width))(DST_FRAC_WIDTH+1, 0)
          } else {
            val main_frac = frac(SRC_FRAC_WIDTH-1, SRC_FRAC_WIDTH-DST_FRAC_WIDTH)
            (implicit_1 | main_frac)(DST_FRAC_WIDTH+1, 0)
          }
          
          // 右移形成非规格化数
          val shifted_frac = (with_implicit_1 >> underflow_shift)(DST_FRAC_WIDTH, 0)
          dst_frac := shifted_frac(DST_FRAC_WIDTH-1, 0)
        }.otherwise {
          // 完全下溢出为零
          dst_exp := 0.U
          dst_frac := 0.U
        }
      }.otherwise {
        // 正常范围
        dst_exp := adjusted_exp.asUInt
        
        // 调整尾数
        if (SRC_FRAC_WIDTH <= DST_FRAC_WIDTH) {
          // 尾数扩展 - 在右侧填充0
          val pad_width = DST_FRAC_WIDTH - SRC_FRAC_WIDTH
          dst_frac := (frac << pad_width)(DST_FRAC_WIDTH-1, 0)
        } else {
          // 尾数截断，添加舍入处理
          val truncated_bits = frac(SRC_FRAC_WIDTH-DST_FRAC_WIDTH-1, 0)
          val round_bit = truncated_bits.orR && (frac(SRC_FRAC_WIDTH-DST_FRAC_WIDTH) === 1.U)
          val main_frac = frac(SRC_FRAC_WIDTH-1, SRC_FRAC_WIDTH-DST_FRAC_WIDTH)
          dst_frac := Mux(round_bit, main_frac + 1.U, main_frac)
        }
      }
    }
    
    // 第三阶段：结果输出
    // ===================================
    // 将结果各部分重新组合
    val dst_float = Wire(UInt(DST_WIDTH.W))
    dst_float := (dst_sign << (DST_WIDTH-1)) | (dst_exp << DST_FRAC_WIDTH) | dst_frac
    
    // 创建对齐输出，初始化为全0
    val aligned_input = Wire(UInt(MAX_WIDTH.W))
    aligned_input := 0.U
    
    // 将结果放置到最高有效位，避免使用Cat连接可能导致的位宽问题
    val aligned_result = aligned_input | (dst_float << (MAX_WIDTH - DST_WIDTH))
    io.float_out(i) := aligned_result
  }
} 