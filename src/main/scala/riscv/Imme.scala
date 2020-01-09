package riscv
import chisel3._
import chisel3.util.Fill
import chisel3.util.Cat
import chisel3.core.SInt

class Imme extends Module {
	val io = IO(new Bundle {
		val inst = Input(UInt(32.W))
		val pc = Input(UInt(32.W))
		val Sout = Output(SInt(32.W))
		val Uout = Output(SInt(32.W))
		val Sbout = Output(SInt(32.W))
		val Ujout = Output(SInt(32.W))
		val Iout = Output(SInt(32.W))
	})
	//S
	val extract1 = io.inst(11,7)
	val extract2 = io.inst(31,25)
	val combined0 = Cat(extract2, extract1)
	io.Sout := Cat(Fill(20, combined0(11)), combined0).asSInt

	//U
	val extract3 = io.inst(31,12)
	io.Uout := (Cat(Fill(12, extract3(19)), extract3) << 12.U).asSInt

	//SB
	val combined1 = Cat(combined0(11), combined0(0), combined0(10,5), combined0(4,1), 0.U)
	io.Sbout := (Cat(Fill(19, combined1(12)), combined1) + io.pc).asSInt

	//I
	val extract4 = io.inst(31,20)
	io.Iout := Cat(Fill(20, extract4(11)), extract4).asSInt

	//UJ
	//val combined2 = Cat(extract3(19), extract3(9,0), extract3(10), extract3(18,11), 0.U)
	val combined2 = Cat(io.inst(31), io.inst(19,12), io.inst(20), io.inst(30,21), 0.U)
	io.Ujout := (Cat(Fill(11, io.inst(31)), combined2) + io.pc).asSInt

	

}

