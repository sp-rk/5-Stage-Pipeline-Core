package riscv

import chisel3.iotesters.PeekPokeTester

class AdderTests(c: Adder) extends PeekPokeTester(c) {
	poke(c.io.a, 1)
	poke(c.io.b, 1)
	poke(c.io.cin, 0)
	step(1)
	expect(c.io.cout, 1)
	expect(c.io.sum, 0)

}
