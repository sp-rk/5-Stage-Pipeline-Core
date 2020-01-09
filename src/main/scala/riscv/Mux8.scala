package riscv

import chisel3._

class Mux8 extends Module {
  val io = IO(new Bundle {
	val i0 = Input(UInt(1.W))
	val i1 = Input(UInt(1.W))
	val i2 = Input(UInt(1.W))
	val i3 = Input(UInt(1.W))
	val i4 = Input(UInt(1.W))
	val i5 = Input(UInt(1.W))
	val i6 = Input(UInt(1.W))
	val i7 = Input(UInt(1.W))
	val s2 = Input(UInt(1.W))
	val s1 = Input(UInt(1.W))
	val s0 = Input(UInt(1.W))
	val out = Output(UInt(1.W))
 })
	val Mux1 = Module(new Mux4())
	val Mux2 = Module(new Mux4())
	val Mux3 = Module(new Mux())

	Mux1.io.i0 := io.i0
	Mux2.io.i0 := io.i1

	Mux1.io.i1 := io.i2
	Mux2.io.i1 := io.i3

	Mux1.io.i2 := io.i4
	Mux2.io.i2 := io.i5

	Mux1.io.i3 := io.i6
	Mux2.io.i3 := io.i7

	Mux1.io.s1 := io.s2
	Mux1.io.s0 := io.s1

	Mux2.io.s1 := io.s2
	Mux2.io.s0 := io.s1

	Mux3.io.a := Mux1.io.out
	Mux3.io.b := Mux2.io.out

	Mux3.io.sel := io.s0
	io.out := Mux3.io.out 
}
