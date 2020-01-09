package riscv
import chisel3._
import chisel3.iotesters.PeekPokeTester

class MemoryTests(c: Memory) extends PeekPokeTester(c) {
	poke(c.io.load, 1)
	poke(c.io.store, 0)
	poke(c.io.addd, 1)
	poke(c.io.data, 1)

	step(1)
	

}
