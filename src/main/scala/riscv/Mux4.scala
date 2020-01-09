package riscv

import chisel3._

class Mux4 extends Module {
  val io = IO(new Bundle {
	val i0 = Input(UInt(1.W))
	val i1 = Input(UInt(1.W))
	val i2 = Input(UInt(1.W))
	val i3 = Input(UInt(1.W))
	val s0 = Input(UInt(1.W))
	val s1 = Input(UInt(1.W))
	val out = Output(UInt(1.W))
 })
	val Mux1 = Module(new Mux())
	val Mux2 = Module(new Mux())
	val Mux3 = Module(new Mux())

	Mux1.io.a := io.i0
	Mux1.io.b := io.i1

	Mux2.io.a := io.i2
	Mux2.io.b := io.i3

	Mux3.io.a := Mux1.io.out
	Mux3.io.b := Mux2.io.out

	Mux1.io.sel := io.s0
	Mux2.io.sel := io.s0
	Mux3.io.sel := io.s1

	io.out := Mux3.io.out
}
