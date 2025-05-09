package pvu

import chisel3._
import chisel3.util._
import chisel3.experimental._

// 前导零计数器模块 - 使用BlackBox实现以与现有代码兼容 #保持接口一致性
class LZC(val WIDTH: Int, val MODE: Boolean = true, val nd: Int = -1) extends BlackBox(Map(
  "WIDTH" -> WIDTH,
  "MODE"  -> (if (MODE) 1 else 0)
)) with HasBlackBoxResource {
  val io = IO(new Bundle {
    val in_i    = Input(UInt(WIDTH.W))
    val cnt_o   = Output(UInt((if (nd >= 0) nd else log2Ceil(WIDTH+1)).W))
    val empty_o = Output(Bool())
  })
  addResource("/pvu/lzc.sv")
}
