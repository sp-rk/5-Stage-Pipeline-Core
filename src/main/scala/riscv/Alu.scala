package riscv
import chisel3._


class Alu extends Module{
	val io = IO(new Bundle {
		val rs1 = Input(SInt(32.W))
		val rs2 = Input(SInt(32.W))
		val cntrl = Input(UInt(5.W))
		val out = Output(SInt(32.W))
		val branch = Output(SInt(32.W))

	})

	when(io.cntrl === "b00000".U){
		io.out := io.rs1 + io.rs2
	
	}.elsewhen(io.cntrl === "b00001".U){
		val shift = io.rs2(4,0)
		io.out := io.rs1 << shift

	}.elsewhen(io.cntrl === "b00010".U){
		when(io.rs1 < io.rs2){
			io.out := 1.S		
		}.otherwise{
			io.out := 0.S		
		}
	
	}.elsewhen(io.cntrl === "b00011".U || io.cntrl === "b10110".U){
		when(io.rs1.asUInt < io.rs2.asUInt){
			io.out := 1.S
		}.otherwise{
			io.out := 0.S
		}
		
	}.elsewhen(io.cntrl === "b00100".U){
		io.out := io.rs1 ^ io.rs2

	}.elsewhen(io.cntrl === "b00101".U){
		val shift2 = io.rs2(4,0)
		io.out := io.rs1 >> shift2

	}.elsewhen(io.cntrl === "b00110".U){
		io.out := io.rs1 | io.rs2

	}.elsewhen(io.cntrl === "b00111".U){
		io.out := io.rs1 & io.rs2

	}.elsewhen(io.cntrl === "b001000".U){
		io.out := io.rs1 - io.rs2

	}.elsewhen(io.cntrl === "b01101".U){
		val shift3 = io.rs2(4,0)
		io.out := io.rs1 >> shift3

	}.elsewhen(io.cntrl === "b10000".U){
		when(io.rs1 === io.rs2){
			io.out := 1.S
		}.otherwise{
			io.out := 0.S
		}

	}.elsewhen(io.cntrl === "b10001".U){
		when(io.rs1 =/= io.rs2){
			io.out := 1.S
		}.otherwise{
			io.out := 0.S
		}

	}.elsewhen(io.cntrl === "b10100".U){
		when(io.rs1 < io.rs2){
			io.out := 1.S
		}.otherwise{
			io.out := 0.S
		}

	}.elsewhen(io.cntrl === "b10101".U){
		when(io.rs1 >= io.rs2){
			io.out := 1.S
		}.otherwise{
			io.out := 0.S
		}

	}.elsewhen(io.cntrl === "b10111".U){
		when(io.rs1 >= io.rs2){
			io.out := 1.S
		}.otherwise{
			io.out := 0.S
		}

	}.elsewhen(io.cntrl === "b11111".U){
		io.out := io.rs1

	}.otherwise{
		io.out := DontCare
	}

	val branchcheck = io.cntrl(4,3)
	when(branchcheck === "b10".U && io.out === 1.S){
		io.branch := 1.S
	}.otherwise{
		io.branch := 0.S
	}
}
