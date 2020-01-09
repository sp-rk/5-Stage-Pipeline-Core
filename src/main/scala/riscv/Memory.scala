package riscv
import chisel3._

class Memory extends Module{
	val io = IO(new Bundle{
		val out = Output(SInt(32.W))
		val load = Input(UInt(1.W))
		val store = Input(UInt(1.W))
		val addd = Input(UInt(8.W))
		val data = Input(SInt(32.W))
		
	})
	val mem = Mem(1024, UInt(32.W))
	when(io.load === "b1".U){
		io.out := mem(io.addd).asSInt
	}.elsewhen(io.store === "b1".U){
		mem(io.addd) := (io.data).asUInt
		io.out := DontCare
	}.otherwise{
		io.out := DontCare
	}
	
}
