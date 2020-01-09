package riscv
import chisel3._

class Control extends Module{
	val io = IO(new Bundle{
		val opcode = Input(UInt(7.W))
		val memwrite = Output(UInt(1.W))
		val branch = Output(SInt(1.W))	
		val memread = Output(UInt(1.W))
		val regwrite = Output(UInt(1.W))
		val memtoreg = Output(UInt(1.W))
		val aluop = Output(UInt(3.W))
		val opA = Output(UInt(2.W))
		val opB = Output(UInt(1.W))
		val extend = Output(UInt(2.W))
		val nxtpc = Output(UInt(2.W))
	})
	when(io.opcode === "b0110011".U){    //R-type
		io.memwrite := 0.U
		io.branch := 0.S
		io.memread := 0.U
		io.regwrite := 1.U
		io.memtoreg := 0.U
		io.aluop := "b000".U
		io.opA := "b00".U
		io.opB := 0.U
		io.extend := "b00".U
		io.nxtpc := "b00".U

	}.elsewhen(io.opcode === "b0000011".U){   //Load
		io.memwrite := 0.U
		io.branch := 0.S
		io.memread := 1.U
		io.regwrite := 1.U
		io.memtoreg := 1.U
		io.aluop := "b100".U
		io.opA := "b00".U
		io.opB := 1.U
		io.extend := "b00".U
		io.nxtpc := "b00".U

	}.elsewhen(io.opcode === "b0100011".U){   //Store
		io.memwrite := 1.U
		io.branch := 0.S
		io.memread := 0.U
		io.regwrite := 0.U
		io.memtoreg := 0.U
		io.aluop := "b101".U
		io.opA := "b00".U
		io.opB := 1.U
		io.extend := "b10".U
		io.nxtpc := "b00".U

	}.elsewhen(io.opcode === "b1100011".U){  //Branch
		io.memwrite := 0.U
		io.branch := 1.S
		io.memread := 0.U
		io.regwrite := 1.U
		io.memtoreg := 0.U
		io.aluop := "b010".U
		io.opA := "b00".U
		io.opB := 0.U
		io.extend := "b00".U
		io.nxtpc := "b01".U

	}.elsewhen(io.opcode === "b0010011".U){   //I-type
		io.memwrite := 0.U
		io.branch := 0.S
		io.memread := 0.U
		io.regwrite := 1.U
		io.memtoreg := 0.U
		io.aluop := "b001".U
		io.opA := "b00".U
		io.opB := 1.U
		io.extend := "b00".U
		io.nxtpc := "b00".U

	}.elsewhen(io.opcode === "b1100111".U){   //Jalr
		io.memwrite := 0.U
		io.branch := 0.S
		io.memread := 0.U
		io.regwrite := 1.U
		io.memtoreg := 0.U
		io.aluop := "b011".U
		io.opA := "b10".U
		io.opB := 0.U
		io.extend := "b00".U
		io.nxtpc := "b11".U

	}.elsewhen(io.opcode === "b1101111".U){   //Jal
		io.memwrite := 0.U
		io.branch := 0.S
		io.memread := 0.U
		io.regwrite := 1.U
		io.memtoreg := 0.U
		io.aluop := "b011".U
		io.opA := "b10".U
		io.opB := 0.U
		io.extend := "b00".U
		io.nxtpc := "b10".U

	}.elsewhen(io.opcode === "b0110111".U){   //Lui
		io.memwrite := 0.U
		io.branch := 0.S
		io.memread := 0.U
		io.regwrite := 1.U
		io.memtoreg := 0.U
		io.aluop := "b110".U
		io.opA := "b11".U
		io.opB := 1.U
		io.extend := "b01".U
		io.nxtpc := "b00".U

	}.otherwise{
		io.memwrite := DontCare
		io.branch := DontCare
		io.memread := DontCare
		io.regwrite := DontCare
		io.memtoreg := DontCare
		io.aluop := DontCare
		io.opA := DontCare
		io.opB := DontCare
		io.extend := DontCare
		io.nxtpc := DontCare
	}
	
	
}
