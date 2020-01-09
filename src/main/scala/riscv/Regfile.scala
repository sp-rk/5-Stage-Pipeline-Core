package riscv
import chisel3._

class Regfile extends Module{
	val io = IO(new Bundle{
		val regwrite = Input(UInt(1.W))
		val rd_sel = Input(UInt(5.W))
		val r1 = Input(UInt(5.W))
		val r2 = Input(UInt(5.W))
		val writedata = Input(SInt(32.W))

		val rs1 = Output(SInt(32.W))
		val rs2 = Output(SInt(32.W))
	})
	val registers = Reg(Vec(32,SInt(32.W)))
	registers(0) := 0.S
	io.rs1 := registers(io.r1)
	io.rs2 := registers(io.r2)
	when(io.regwrite === 1.U){
		when(io.rd_sel === "b00000".U){
			registers(io.rd_sel) := 0.S
		}.otherwise {
			registers(io.rd_sel) := io.writedata		
		}
		
	}
	
}
