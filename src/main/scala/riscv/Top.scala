package riscv
import chisel3._

class Top extends Module{
	val io = IO(new Bundle {
		//val instruction = Input(UInt(32.W))
		//val pc = Input(UInt(32.W))
		val regout = Output(SInt(32.W))
		
		

	})
	
	val Instruction = Module(new Instruction())
	val pc = Module(new Pc())
	val control = Module(new Control())
	val immediate = Module(new Imme())
	val alu = Module(new Alu())
	val alucontrol = Module(new AluOp())
	val regfile = Module(new Regfile())
	val jalr = Module(new Jalrr())
	val memory = Module(new Memory())
	val p1 = Module(new pipeline1())
	val p2 = Module(new pipeline2())
	val p3 = Module(new pipeline3())
	val p4 = Module(new pipeline4())
	
	Instruction.io.wrAddr := pc.io.pc(11,2)
	p1.io.instI := Instruction.io.rdData
	p1.io.pc4I := pc.io.pc4

	p2.io.R1 := regfile.io.rs1
	p2.io.R2 := regfile.io.rs2
	p2.io.SBT := immediate.io.Sbout.asUInt
	p2.io.UJT := immediate.io.Ujout.asUInt
	p2.io.Branch := control.io.branch
	p3.io.AB := alu.io.branch
	val jalout = jalr.io.out
	val bout = p2.io.BranchO & p3.io.ABO
	
	when(control.io.nxtpc === "b00".U){
		pc.io.input := p1.io.p4O
	}.elsewhen(control.io.nxtpc === "b11".U){
		pc.io.input := jalout
	}.elsewhen(control.io.nxtpc === "b10".U){
		pc.io.input := p2.io.UJTO
	}.elsewhen(control.io.nxtpc === "b01".U){
		when(bout.asSInt === 1.S){
			pc.io.input := p2.io.SBTO
		}.otherwise{
			pc.io.input := DontCare
		}
	}.otherwise{
		pc.io.input := DontCare
	}


	control.io.opcode := p1.io.iO(6,0)
	immediate.io.inst := p1.io.iO
	immediate.io.pc := pc.io.pc
	
	p4.io.RD := p1.io.iO(11,7)

	regfile.io.r1 := p1.io.iO(19,15)
	regfile.io.r2 := p1.io.iO(24,20)
	regfile.io.rd_sel := p4.io.RDO
	p4.io.RegW := control.io.regwrite

	regfile.io.regwrite := p4.io.RegWO
	
	p2.io.AOp := alucontrol.io.out
	
	alucontrol.io.aluop := control.io.aluop
	alucontrol.io.fnc3 := p1.io.iO(14,12)
	alucontrol.io.fnc7 := p1.io.iO(30)

	p2.io.OPA := control.io.opA
	p2.io.OPB := control.io.opB

	when((p2.io.OPAO === "b00".U) || (p2.io.OPAO === "b11".U)){
		alu.io.rs1 := regfile.io.rs1
	}.elsewhen(p2.io.OPAO === "b10".U){
		alu.io.rs1 := p1.io.p4O.asSInt
	}.otherwise{
		alu.io.rs1 := DontCare
	}
	
	jalr.io.input1 := regfile.io.rs1
	when((control.io.extend === "b00".U) && (control.io.nxtpc === "b11".U)){
		jalr.io.input2 := immediate.io.Iout
	}.otherwise{
		jalr.io.input2 := DontCare
	}
	


	when(control.io.extend === "b00".U && p2.io.OPBO === "b1".U){
		p2.io.IM := immediate.io.Iout
	}.elsewhen(control.io.extend === "b10".U && p2.io.OPBO === "b1".U){
		p2.io.IM := immediate.io.Sout
	}.elsewhen(control.io.extend === "b01".U && p2.io.OPBO === "b1".U){
		p2.io.IM := immediate.io.Uout
	}.otherwise{
		p2.io.IM := regfile.io.rs2
	}
	
	alu.io.rs2 := p2.io.IMO

	p3.io.AluR := alu.io.out(9,2).asUInt
	p3.io.Data := regfile.io.rs2
	p3.io.MW := control.io.memwrite
	p3.io.MR := control.io.memread

	memory.io.load := p3.io.MRO
	memory.io.store := p3.io.MWO
	memory.io.data := p3.io.DataO
	memory.io.addd := p3.io.AluRO

	regfile.io.writedata  := p4.io.DataO
	
	p4.io.MeMReG := control.io.memtoreg
	alu.io.cntrl := p2.io.AOpO
	when(p4.io.MeMReGO === "b1".U){
		p4.io.Data := memory.io.out
	}.otherwise{
		p4.io.Data := alu.io.out
	}
	
	io.regout := regfile.io.writedata
}



