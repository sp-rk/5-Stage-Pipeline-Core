package riscv

import chisel3.iotesters.PeekPokeTester

class Mux8Tests(c: Mux8) extends PeekPokeTester(c) {
	poke(c.io.i0, 0)
	poke(c.io.i1, 0)
	poke(c.io.i2, 0)
	poke(c.io.i3, 1)
	poke(c.io.i4, 0)
	poke(c.io.i5, 0)
	poke(c.io.i6, 0)
	poke(c.io.i7, 0)
	poke(c.io.s0, 1)
	poke(c.io.s1, 1)
	poke(c.io.s2, 0)
	step(1)
	expect(c.io.out, 1)

}
