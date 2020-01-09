package riscv
import chisel3._
import chisel3.iotesters.PeekPokeTester

class PcTests(c: Pc) extends PeekPokeTester(c) {
	poke(c.io.input, 0)
	step(1)


}
