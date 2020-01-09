package riscv
import chisel3._
class Adder32 extends Module{
	val io = IO(new Bundle{
		val a = Input(UInt(1.W))
		val b = Input(UInt(1.W))
		val c = Input(UInt(1.W))
		val d = Input(UInt(1.W))
		val sel = Input(UInt(2.W))
		val out = Output(UInt(1.W))
	})
	when( io.sel === "b00".U){
		io.out := io.a
	}.elsewhen( io.sel === "b01".U){
		io.out := io.b
	}.elsewhen( io.sel === "b10".U){
		io.out := io.c
	}.elsewhen( io.sel === "b11".U){
		io.out := io.d
	}.otherwise{
		io.out := DontCare
	}
}
