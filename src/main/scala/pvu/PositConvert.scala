package pvu

import chisel3._
import chisel3.util._

/**
  * Posit数精度转换模块
  * 输入：源精度的Posit数
  * 输出：目标精度的Posit数
  * 
  * @param SRC_WIDTH 源Posit数的位宽
  * @param DST_WIDTH 目标Posit数的位宽
  * @param SRC_ES 源Posit数的ES参数
  * @param DST_ES 目标Posit数的ES参数
  * @param VECTOR_SIZE 向量大小
  */

class PositConvert(
  val SRC_WIDTH: Int, 
  val DST_WIDTH: Int, 
  val SRC_ES: Int, 
  val DST_ES: Int,
  val VECTOR_SIZE: Int,
  val ALIGN_WIDTH: Int
) extends Module {
  require(SRC_WIDTH > 0 && DST_WIDTH > 0, "位宽必须大于0")
  require(SRC_ES >= 0 && DST_ES >= 0, "ES必须大于等于0")
  require(VECTOR_SIZE > 0, "向量大小必须大于0")

  // 计算源和目标格式的参数（使用安全的方式）
  val src_nd         = log2Ceil(SRC_WIDTH - 1)
  val dst_nd         = log2Ceil(DST_WIDTH - 1)
  val src_exp_width  = src_nd + SRC_ES + 1
  val dst_exp_width  = dst_nd + DST_ES + 1
  val src_frac_width = Math.max(0, SRC_WIDTH - SRC_ES - 3) // 确保不会出现负值
  val dst_frac_width = Math.max(0, DST_WIDTH - DST_ES - 3) // 确保不会出现负值

  // 计算目标指数的最大和最小值
  val dst_exp_max = (1 << (dst_exp_width - 1)) - 1
  val dst_exp_min = -(1 << (dst_exp_width - 1))

  val io = IO(new Bundle {
    // 输入
    val pir_sign1_i = Input(Vec(VECTOR_SIZE, UInt(1.W)))
    val pir_exp1_i  = Input(Vec(VECTOR_SIZE, SInt(src_exp_width.W)))
    val pir_frac1_i = Input(Vec(VECTOR_SIZE, UInt((src_frac_width + 1).W)))
    
    // 直接输出Posit编码结果，而不是PIR格式
    val posit_o = Output(Vec(VECTOR_SIZE, UInt(DST_WIDTH.W)))
  })

  // 处理指数和尾数的转换
  val pir_sign_converted = Wire(Vec(VECTOR_SIZE, UInt(1.W)))
  val pir_exp_converted  = Wire(Vec(VECTOR_SIZE, SInt(dst_exp_width.W)))
  val pir_frac_converted = Wire(Vec(VECTOR_SIZE, UInt((dst_frac_width + 1).W)))

  // 初始化中间变量
  for (i <- 0 until VECTOR_SIZE) {
    pir_sign_converted(i) := 0.U
    pir_exp_converted(i)  := 0.S
    pir_frac_converted(i) := 0.U
  }

  for (i <- 0 until VECTOR_SIZE) {
    // 检查是否为特殊值（0或无穷大）
    val is_zero    = io.pir_frac1_i(i) === 0.U
    val is_special = is_zero   // 在posit格式中，0就是特殊值，可以根据需要扩展其他特殊值

    when(is_special) {
      // 处理特殊值
      when(is_zero) {
        // 对于0，保持符号位不变，指数和尾数都为0
        pir_sign_converted(i) := io.pir_sign1_i(i)
        pir_exp_converted(i)  := 0.S
        pir_frac_converted(i) := 0.U
      }
    }.otherwise {
      // 1. 符号位直接传递
      pir_sign_converted(i) := io.pir_sign1_i(i)

      // 2. 指数转换
      // 根据ES的差异调整指数值，避免使用负数UInt
      val adjusted_exp = Wire(SInt(dst_exp_width.W))
      
      if (SRC_ES == DST_ES) {
        // ES相同，直接传递
        adjusted_exp := io.pir_exp1_i(i)
      } else if (SRC_ES > DST_ES) {
        // 源ES大于目标ES，需要右移指数
        val shift_amount = SRC_ES - DST_ES
        adjusted_exp := io.pir_exp1_i(i) >> shift_amount.U
      } else {
        // 源ES小于目标ES，需要左移指数
        val shift_amount = DST_ES - SRC_ES
        adjusted_exp := io.pir_exp1_i(i) << shift_amount.U
      }
      
      // 添加指数范围检查，确保不会溢出
      when(adjusted_exp > dst_exp_max.S) {
        // 指数上溢，饱和到最大值
        pir_exp_converted(i) := dst_exp_max.S
      }.elsewhen(adjusted_exp < dst_exp_min.S) {
        // 指数下溢，饱和到最小值
        pir_exp_converted(i) := dst_exp_min.S
      }.otherwise {
        // 正常范围内，使用调整后的指数
        pir_exp_converted(i) := adjusted_exp
      }

      // 3. 尾数转换
      // 为目标尾数创建一个临时变量，避免组合循环
      val temp_frac_result = Wire(UInt((dst_frac_width + 1).W))
      temp_frac_result := 0.U  // 默认值
      
      if (dst_frac_width == src_frac_width) {
        // 目标精度与源精度相同，直接使用源尾数
        temp_frac_result := io.pir_frac1_i(i)
      } else if (dst_frac_width > src_frac_width) {
        // 目标精度更高，补0
        val extension_width = dst_frac_width - src_frac_width
        temp_frac_result := Cat(io.pir_frac1_i(i), 0.U(extension_width.W))
      } else {
        // 目标精度更低，需要舍入
        val round_pos     = src_frac_width - dst_frac_width
        val frac_to_round = io.pir_frac1_i(i)
        
        // 调试输出
        // printf("src_frac_width=%d, dst_frac_width=%d, round_pos=%d, frac_to_round=0x%x\n", 
        //        src_frac_width.U, dst_frac_width.U, round_pos.U, frac_to_round)
        
        // 安全获取舍入位 - 使用Mux确保在运行时安全获取舍入位
        val round_bit = Mux(round_pos.U < frac_to_round.getWidth.U, 
                           frac_to_round(round_pos), 
                           false.B)
        
        // 重新实现粘滞位计算，增强安全性
        val sticky_bit = Wire(Bool())
        
        when(round_pos.U === 0.U) {
          sticky_bit := false.B
        }.otherwise {
          // 使用更安全的方式，使用局部变量，避免变量名冲突
          val sticky_tmp = Wire(Vec(src_frac_width, Bool()))
          for (j <- 0 until src_frac_width) {  // 使用j而不是i作为循环索引
            when(j.U < round_pos.U && j.U < frac_to_round.getWidth.U) {
              sticky_tmp(j) := frac_to_round(j)
            }.otherwise {
              sticky_tmp(j) := false.B
            }
          }
          sticky_bit := sticky_tmp.asUInt.orR
        }
        
        // 获取保护位 - 使用Mux确保在运行时安全获取保护位
        val guard_pos = round_pos + 1
        val guard_bit = Mux(guard_pos.U < frac_to_round.getWidth.U,
                           frac_to_round(guard_pos),
                           false.B)
        
        // 用于舍入的lsb判断 - 使用Mux确保在运行时安全获取lsb位
        val lsb_pos = dst_frac_width
        val lsb_bit = Mux(lsb_pos.U < frac_to_round.getWidth.U,
                          frac_to_round(lsb_pos),
                          false.B)
        
        // 根据IEEE 754风格的舍入规则，决定是否向上舍入
        val round_up = round_bit & (sticky_bit | guard_bit | lsb_bit)
        
        // 调试输出
        // printf("round_bit=%d, sticky_bit=%d, guard_bit=%d, lsb_bit=%d, round_up=%d\n", 
        //        round_bit, sticky_bit, guard_bit, lsb_bit, round_up)
        
        // 执行舍入操作
        val shifted_frac = frac_to_round >> round_pos.U
        val rounded_frac = Mux(round_up, shifted_frac + 1.U, shifted_frac)
        
        // 截取需要的位数，确保不会越界
        val truncated_result = if (dst_frac_width >= 0) {
          // 安全地获取截断后的结果
          val mask = (1.U << (dst_frac_width + 1).U) - 1.U
          rounded_frac & mask
        } else {
          0.U((dst_frac_width + 1).W)
        }
        
        // 调试输出
        // printf("shifted_frac=0x%x, rounded_frac=0x%x, truncated_result=0x%x\n", 
        //        shifted_frac, rounded_frac, truncated_result)
        
        temp_frac_result := truncated_result
      }
      
      // 确保当输入不为0时，输出至少保留一个有效位
      val final_result = Mux(io.pir_frac1_i(i) =/= 0.U && temp_frac_result === 0.U,
                          1.U((dst_frac_width + 1).W),
                          temp_frac_result)
      
      // 保存转换后的结果
      pir_frac_converted(i) := final_result
    }
  }

  // 内部实例化PositEncode模块，直接生成Posit编码格式
  val posit_encoder = Module(new PositEncode(DST_WIDTH, VECTOR_SIZE, DST_ES))
  
  // 设置默认值
  for (i <- 0 until VECTOR_SIZE) {
    posit_encoder.io.pir_sign(i) := 0.U
    posit_encoder.io.pir_exp(i)  := 0.S
    posit_encoder.io.pir_frac(i) := 0.U
  }
  
  // 连接转换后的PIR数据到编码器
  for (i <- 0 until VECTOR_SIZE) {
    posit_encoder.io.pir_sign(i) := pir_sign_converted(i)
    posit_encoder.io.pir_exp(i)  := pir_exp_converted(i)
    posit_encoder.io.pir_frac(i) := pir_frac_converted(i)
    
    // 直接输出编码后的Posit结果
    io.posit_o(i) := posit_encoder.io.posit(i)
  }
} 