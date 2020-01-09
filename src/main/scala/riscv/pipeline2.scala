package riscv
import chisel3._

class pipeline2 extends Module{
	val io = IO(new Bundle{
		val R1 = Input(UInt(32.W))
		val R2 = Input(UInt(32.W))
		val IM = Input(UInt(32.W))
		val SBT = Input(UInt(32.W))
		val UJT = Input(UInt(32.W)) 
		val Branch = Input(UInt(32.W)) 
		val AOp = Input(UInt(32.W))
		val OPA = Input(UInt(32.W))
		val OPB = Input(UInt(32.W))  	

		val R1O = Output(UInt(32.W))
		val R2O = Output(UInt(32.W))
		val IMO = Output(UInt(32.W))
		val SBTO = Output(UInt(32.W))
		val UJTO = Output(UInt(32.W)) 
		val BranchO = Output(UInt(32.W)) 
		val AOpO = Output(UInt(32.W))
		val OPAO = Output(UInt(32.W))
		val OPBO = Output(UInt(32.W))  
	})
	val register1 = Reg(Vec(10,UInt(32.W)))
	register1(0) := io.R1
	register1(1) := io.R2
	register1(2) := io.IM
	register1(3) := io.SBT
	register1(4) := io.UJT
	register1(5) := io.Branch
	register1(6) := io.AOp
	register1(7) := io.OPA
	register1(8) := io.OPB

	io.R1O := register1(0)
	io.R2O := register1(1)
	io.IMO := register1(2)
	io.SBTO := register1(3)
	io.UJTO := register1(4)
	io.BranchO := register1(5)
	io.AOpO := register1(6)
	io.OPAO := register1(7)
	io.OPBO := register1(8)
}

