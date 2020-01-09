package riscv

import chisel3.iotesters.PeekPokeTester

class Adder32Tests(c: Adder32) extends PeekPokeTester(c) {
	poke(c.io.a, 0)
	poke(c.io.b, 1)
	poke(c.io.c, 0)
	poke(c.io.d, 1)
	poke(c.io.sel, 3)
	step(1)
	expect(c.io.out, 1)
	

}
