package riscv

import chisel3._

class Adder2 extends Module {
  val io = IO(new Bundle {
	val a0 = Input(UInt(1.W))
	val a1 = Input(UInt(1.W))
	val b0 = Input(UInt(1.W))
	val b1 = Input(UInt(1.W))
	val cout = Output(UInt(1.W))
	val sum0 = Output(UInt(1.W))
	val cin = Input(UInt(1.W))
	val sum1 = Output(UInt(1.W))
 })
	val Adder1 = Module(new Adder())
	val Adder2 = Module(new Adder())

	Adder1.io.a := io.a0
	Adder1.io.b := io.b0
	Adder2.io.a := io.a1
	Adder2.io.b := io.b1
	Adder2.io.cin := Adder1.io.cout
	Adder1.io.cin := io.cin
	io.cout := Adder2.io.cout
	io.sum0 := Adder1.io.sum
	io.sum1 := Adder2.io.sum
}
