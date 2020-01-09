package riscv

import chisel3.iotesters.PeekPokeTester

class Adder4Tests(c: Adder4) extends PeekPokeTester(c) {
	poke(c.io.a0, 0)
	poke(c.io.a1, 1)
	poke(c.io.b0, 0)
	poke(c.io.b1, 1)
	poke(c.io.a2, 0)
	poke(c.io.a3, 1)
	poke(c.io.b2, 0)
	poke(c.io.b3, 1)
	poke(c.io.cin, 0)
	step(1)
	expect(c.io.sum0, 0)
	expect(c.io.sum1, 0)
	expect(c.io.sum2, 1)
	expect(c.io.sum3, 0)
	expect(c.io.cout, 1)

}
