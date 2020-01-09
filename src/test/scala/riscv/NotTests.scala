package riscv

import chisel3.iotesters.PeekPokeTester

class NotTests(c: Not) extends PeekPokeTester(c) {
	poke(c.io.a, 0)
	step(1)
	expect(c.io.o, 1)

}
