package riscv
import chisel3._

class pipeline1 extends Module{
	val io = IO(new Bundle{
		val pc4I = Input(UInt(32.W))
		val instI = Input(UInt(32.W))
		val p4O = Output(UInt(32.W))
		val iO = Output(UInt(32.W)) 
	
	})
	val register1 = Reg(Vec(3,UInt(32.W)))
	register1(0) := io.pc4I
	register1(1) := io.instI

	io.p4O := register1(0)
	io.iO := register1(1)
}

