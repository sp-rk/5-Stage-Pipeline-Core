package riscv
import chisel3._
import chisel3.iotesters.PeekPokeTester

class JalrrTests(c: Jalrr) extends PeekPokeTester(c) {
	poke(c.io.input1, 1)
	poke(c.io.input2, 1)
	step(1)
	expect(c.io.out, 2)
	

}
