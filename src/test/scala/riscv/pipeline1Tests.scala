package riscv

import chisel3.iotesters.PeekPokeTester

class pipeline1Tests(c: pipeline1) extends PeekPokeTester(c) {
	poke(c.io.pc4I, 1)
	poke(c.io.instI, 0)
	step(1)
	expect(c.io.p4O, 1)
	expect(c.io.iO, 0)

}
