package riscv

import chisel3.iotesters.PeekPokeTester

class RegfileTests(c: Regfile) extends PeekPokeTester(c) {
	poke(c.io.regwrite, 1)
	poke(c.io.rd_sel, 2)
	poke(c.io.r1, 0)
	poke(c.io.r2, 0)
	poke(c.io.writedata, 2)
	step(1)
	expect(c.io.rs1, 0)
	expect(c.io.rs2, 0)

}
