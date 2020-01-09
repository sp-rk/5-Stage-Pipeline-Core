package riscv

import chisel3.iotesters.PeekPokeTester

class AluOpTests(c: AluOp) extends PeekPokeTester(c) {
	poke(c.io.fnc3, 0)
	poke(c.io.fnc7, 0)
	poke(c.io.aluop, 0)
	step(1)
	expect(c.io.out, 0)

}
