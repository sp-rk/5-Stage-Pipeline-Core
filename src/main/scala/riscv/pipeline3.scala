package riscv
import chisel3._

class pipeline3 extends Module{
	val io = IO(new Bundle{
		val AluR = Input(UInt(32.W))
		val Data = Input(UInt(32.W))
		val MW = Input(UInt(32.W))
		val AB = Input(UInt(32.W))
		val MR = Input(UInt(32.W))
		
		val AluRO = Output(UInt(32.W))
		val DataO = Output(UInt(32.W))
		val MWO = Output(UInt(32.W))
		val ABO = Output(UInt(32.W))
		val MRO = Output(UInt(32.W))
		 
	})
	val register1 = Reg(Vec(5,UInt(32.W)))
	register1(0) := io.AluR
	register1(1) := io.Data
	register1(2) := io.MW
	register1(3) := io.AB
	register1(4) := io.MR


	io.AluRO := register1(0)
	io.DataO := register1(1)
	io.MWO := register1(2)
	io.ABO := register1(3)
	io.MRO := register1(4)
}

