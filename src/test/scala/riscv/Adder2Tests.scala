package riscv

import chisel3.iotesters.PeekPokeTester

class Adder2Tests(c: Adder2) extends PeekPokeTester(c) {
	poke(c.io.a0, 0)
	poke(c.io.a1, 1)
	poke(c.io.b0, 0)
	poke(c.io.b1, 1)
	poke(c.io.cin, 1)
	step(1)
	expect(c.io.sum0, 1)
	expect(c.io.sum1, 0)
	expect(c.io.cout, 1)

}
