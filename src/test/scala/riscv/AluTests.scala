package riscv

import chisel3.iotesters.PeekPokeTester

class AluTests(c: Alu) extends PeekPokeTester(c) {
	poke(c.io.rs1, -1)
	poke(c.io.rs2, -3)
	poke(c.io.cntrl, 0)
	step(1)
	expect(c.io.out, -4)
	expect(c.io.branch, 0)

}
