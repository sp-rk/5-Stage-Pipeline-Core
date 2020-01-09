package riscv
import chisel3._

import chisel3.iotesters.PeekPokeTester

class ControlTests(c: Control) extends PeekPokeTester(c) {
	poke(c.io.opcode, "b0110011".U)
	step(1)
	expect(c.io.memwrite, 0)
	expect(c.io.branch, 0)
	expect(c.io.memread, 0)
	expect(c.io.regwrite, 1)
	expect(c.io.memtoreg, 0)
	expect(c.io.aluop, 0)
	expect(c.io.opA, 0)
	expect(c.io.opB, 0)
	expect(c.io.extend, 0)
	expect(c.io.nxtpc, 0)

}
