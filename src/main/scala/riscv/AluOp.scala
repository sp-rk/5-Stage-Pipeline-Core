package riscv

import chisel3._
import chisel3.util.Cat

class AluOp extends Module {
	val io = IO(new Bundle {
		val fnc3 = Input(UInt(3.W))
		val fnc7 = Input(UInt(1.W))
		val aluop = Input(UInt(3.W))
		val out = Output(UInt(5.W))
	})
	
	when (io.aluop === "b000".U){
		io.out := Cat("b0".U, io.fnc7, io.fnc3)
	}.elsewhen (io.aluop === "b100".U){
		io.out := "b00000".U
	}.elsewhen (io.aluop === "b101".U){
		io.out := "b00000".U
	}.elsewhen (io.aluop === "b010".U){
		io.out := Cat("b10".U, io.fnc3)
	}.elsewhen (io.aluop === "b001".U){
		when (io.fnc3 === "b101".U){
			io.out := Cat("b0".U, io.fnc7, io.fnc3)
		}.otherwise {
			io.out := Cat("b00".U, io.fnc3)		
		}
	}.elsewhen (io.aluop === "b011".U){
		io.out := "b11111".U
	}.elsewhen (io.aluop === "b110".U){
		io.out := "b00000".U
	}.otherwise {
		io.out := DontCare
	}
	
}
