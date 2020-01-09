package riscv
import chisel3._
import chisel3.iotesters.PeekPokeTester

class InstructionTests(c: Instruction) extends PeekPokeTester(c) {
	poke(c.io.wrAddr, 0)
	step(1)
	

}
