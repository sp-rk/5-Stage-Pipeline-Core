package riscv
import chisel3._

class pipeline4 extends Module{
	val io = IO(new Bundle{
		
		val RD = Input(UInt(32.W))
		val RegW = Input(UInt(32.W))
		val MeMReG = Input(UInt(32.W))
		val Data = Input(UInt(32.W))
		
		
		val RDO = Output(UInt(32.W))
		val RegWO = Output(UInt(32.W))
		val MeMReGO = Output(UInt(32.W))
		val DataO = Output(UInt(32.W))
		 
	})
	val register1 = Reg(Vec(5,UInt(32.W)))
	
	register1(1) := io.RD
	register1(2) := io.RegW
	register1(3) := io.MeMReG
	register1(4) := io.Data


	
	io.RDO := register1(1)
	io.RegWO := register1(2)
	io.MeMReGO := register1(3)
	io.DataO := register1(4)
}

