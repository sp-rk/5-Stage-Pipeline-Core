package riscv
import chisel3._

class Jalrr extends Module{
	val io = IO(new Bundle{
		val input1 = Input(SInt(32.W))
		val input2 = Input(SInt(32.W))
		val out = Output(UInt(32.W))
		
	})
	io.out := (io.input1 + io.input2).asUInt & "hfffffffe".U
}
