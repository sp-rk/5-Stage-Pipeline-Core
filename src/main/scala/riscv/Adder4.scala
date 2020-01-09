package riscv

import chisel3._

class Adder4 extends Module {
  val io = IO(new Bundle {
	val a0 = Input(UInt(1.W))
	val a1 = Input(UInt(1.W))
	val b0 = Input(UInt(1.W))
	val b1 = Input(UInt(1.W))
	val a2 = Input(UInt(1.W))
	val a3 = Input(UInt(1.W))
	val b2 = Input(UInt(1.W))
	val b3 = Input(UInt(1.W))
	val cin = Input(UInt(1.W))
	val sum0 = Output(UInt(1.W))
	val sum1 = Output(UInt(1.W))
	val sum2 = Output(UInt(1.W))
	val sum3 = Output(UInt(1.W))
	val cout = Output(UInt(1.W))
 })
	val Adder1 = Module(new Adder())
	val Adder2 = Module(new Adder())
	val Adder3 = Module(new Adder())
	val Adder4 = Module(new Adder())
	
	Adder1.io.a := io.a0
	Adder2.io.a := io.a1
	Adder3.io.a := io.a2
	Adder4.io.a := io.a3

	Adder1.io.cin := io.cin

	Adder1.io.b := io.b0
	Adder2.io.b := io.b1
	Adder3.io.b := io.b2
	Adder4.io.b := io.b3

	Adder2.io.cin := Adder1.io.cout
	Adder3.io.cin := Adder2.io.cout
	Adder4.io.cin := Adder3.io.cout

	io.sum0 := Adder1.io.sum
	io.sum1 := Adder2.io.sum
	io.sum2 := Adder3.io.sum
	io.sum3 := Adder4.io.sum

	io.cout := Adder4.io.cout
}
