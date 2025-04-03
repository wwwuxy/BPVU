error id: local14
file://<WORKSPACE>/src/main/scala/pvu/QuireToPosit.scala
empty definition using pc, found symbol in pc: 
empty definition using semanticdb

found definition using fallback; symbol S
offset: 2161
uri: file://<WORKSPACE>/src/main/scala/pvu/QuireToPosit.scala
text:
```scala
package pvu
import chisel3._
import chisel3.util._

// Quire到Posit转换模块
class QuireToPosit(
  val POSIT_WIDTH: Int,   // Posit位宽
  val ES: Int             // ES参数
) extends Module {
  // Quire宽度为512位
  val QUIRE_WIDTH = 512

  // 输入/输出接口
  val io = IO(new Bundle {
    // 输入
    val quire_i = Input(UInt(QUIRE_WIDTH.W))  // Quire格式的输入
    val dst_posit_width = Input(UInt(6.W))    // 目标Posit位宽

    // 输出
    val posit_o = Output(UInt(POSIT_WIDTH.W)) // Posit格式的输出
    
    // PIR格式输出，用于与其他模块接口
    val pir_sign_o = Output(UInt(1.W))        // 符号位
    val pir_exp_o  = Output(SInt(32.W))       // 指数
    val pir_frac_o = Output(UInt(POSIT_WIDTH.W)) // 尾数
  })

  // 1. 处理特殊情况：检查是否为NAR (Not-A-Real)
  val isNaR = io.quire_i(QUIRE_WIDTH-1) === 1.U && io.quire_i(QUIRE_WIDTH-2, 0) === 0.U
  
  // 2. 提取Quire的符号位
  val quire_sign = io.quire_i(QUIRE_WIDTH-1)
  
  // 3. 查找最高有效位（MSB），用于指数计算
  // 获取符号位之外的所有位
  val absQuire = Mux(quire_sign === 1.U, (~io.quire_i) + 1.U, io.quire_i)
  
  // 找到第一个非零位的位置
  val leadingBits = PriorityEncoder(absQuire)
  val leadingPos  = (QUIRE_WIDTH - 1).U - leadingBits
  
  // 4. 从Quire提取有效数字位
  // 从leadingPos开始提取足够的位来形成尾数
  val frac_width     = POSIT_WIDTH + 2        // 额外位用于舍入
  val extracted_frac = (absQuire << (QUIRE_WIDTH.U - 1.U - leadingPos))(QUIRE_WIDTH-1, QUIRE_WIDTH-frac_width)
  
  // 5. 计算指数
  // Quire的指数偏移是240，需要调整到Posit的指数
  val bias          = 240.S
  val extracted_exp = (bias - leadingPos.asSInt)
  
  // 6. 规格化尾数
  val normalized_frac = extracted_frac
  
  // 7. 构建PIR (Posit Intermediate Representation) 格式
  val pir_sign = quire_sign
  val pir_exp  = extracted_exp
  val pir_frac = normalized_frac(frac_width-3, 0)  // 去除额外位
  
  // 8. 是否需要舍入
  val round_bit  = normalized_frac(1)
  val sticky_bit = normalized_frac(0)
  val round_up   = round_bit === 1.U && (sticky_bit === 1.U || pir_frac(0) === 1.U)
  
  // 9. 舍入后的尾数
  val rounded_frac = Mux(round_up, pir_frac + 1.U, pir_frac)
  
  // 10. 生成Posit编码
  // Posit格式：sign | regime | exponent | fraction
  
  // 计算regime长度和值
  val k = Wire(SInt(8.W))
  k := pir_exp >> ES.U  // 指数除以2^ES得到k值
  
  // 生成regime位
  val regime_len  = Mux(k >= 0.S, k + 1.S, -k) + 1.S@@
  val regime_bits = Wire(UInt(POSIT_WIDTH.W))
  
  // 根据k的正负，生成不同的regime编码
  when(k >= 0.S) {
    // k >= 0: k个1后跟一个0
    regime_bits := ((1.U << (k.asUInt + 1.U)) - 1.U) << 1.U
  }.otherwise {
    // k < 0: 一个0后跟|k|个1
    regime_bits := (1.U << (-k).asUInt) - 1.U
  }
  
  // 提取指数位
  val exp_bits = Wire(UInt(ES.W))
  // 使用掩码方式获取指数低位，而不是按位与操作
  val exp_mask = ((1.U << ES.U) - 1.U).asSInt
  exp_bits := (pir_exp & exp_mask).asUInt
  
  // 计算尾数位需要右移的位数
  val available_frac_bits = io.dst_posit_width - regime_len.asUInt - ES.U - 1.U
  
  // 尾数位，根据可用位数截断
  val frac_bits = Mux(available_frac_bits > 0.U, 
                     rounded_frac >> (POSIT_WIDTH.U - available_frac_bits), 
                     0.U)
  
  // 组合所有部分形成posit
  val posit_without_sign = Cat(regime_bits(POSIT_WIDTH-2, 0), exp_bits, frac_bits)
  
  // 根据符号确定最终posit值
  val final_posit = Mux(pir_sign === 1.U, 
                      Cat(1.U(1.W), posit_without_sign(POSIT_WIDTH-2, 0)), 
                      Cat(0.U(1.W), posit_without_sign(POSIT_WIDTH-2, 0)))
  
  // 特殊情况处理：如果是NAR，返回最高位为1，其余为0的值
  val result_posit = Mux(isNaR, 
                       Cat(1.U(1.W), 0.U((POSIT_WIDTH-1).W)), 
                       final_posit)
  
  // 输出
  io.posit_o := result_posit
  io.pir_sign_o := pir_sign
  io.pir_exp_o := pir_exp
  io.pir_frac_o := pir_frac
} 
```


#### Short summary: 

empty definition using pc, found symbol in pc: 