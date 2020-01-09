package riscv

import chisel3.iotesters.PeekPokeTester

class ImmeTests(c: Imme) extends PeekPokeTester(c) {
	poke(c.io.inst, 512)
	poke(c.io.pc, 0)
	step(1)
	expect(c.io.Sout, 4)

}
