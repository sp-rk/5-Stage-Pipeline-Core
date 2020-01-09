// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


//======================

void VTop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop* t=(VTop*)userthis;
    VTop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTop::traceChgThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTop::traceChgThis__2(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data),32);
	vcdp->chgBus  (c+2,(((0U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
			      ? ((IData)(4U) + vlTOPp->Top__DOT__pc__DOT__reg__024)
			      : ((3U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
				  ? (0xfffffffeU & 
				     (vlTOPp->Top__DOT__regfile_io_rs1 
				      + vlTOPp->Top__DOT__immediate__DOT___T_57))
				  : ((2U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
				      ? (vlTOPp->Top__DOT__immediate__DOT___T_72 
					 + vlTOPp->Top__DOT__pc__DOT__reg__024)
				      : (vlTOPp->Top__DOT__immediate__DOT___T_48 
					 + vlTOPp->Top__DOT__pc__DOT__reg__024))))),32);
	vcdp->chgBus  (c+3,((0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)),7);
	vcdp->chgBit  (c+4,(((0x33U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
			     & ((3U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
				& (0x23U == (0x7fU 
					     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))))));
	vcdp->chgBit  (c+5,(((0x33U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
			     & (3U == (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))));
	vcdp->chgBit  (c+6,(vlTOPp->Top__DOT__control_io_regwrite));
	vcdp->chgBus  (c+7,(vlTOPp->Top__DOT__control_io_aluop),3);
	vcdp->chgBus  (c+8,(vlTOPp->Top__DOT__control_io_opA),2);
	vcdp->chgBit  (c+9,(vlTOPp->Top__DOT__control_io_opB));
	vcdp->chgBus  (c+10,(vlTOPp->Top__DOT__control_io_extend),2);
	vcdp->chgBus  (c+11,(vlTOPp->Top__DOT__control_io_nxtpc),2);
	vcdp->chgBus  (c+12,(((((0x800U & (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0))
				 ? 0xfffffU : 0U) << 0xcU) 
			      | ((0xfe0U & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					    >> 0x14U)) 
				 | (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					     >> 7U))))),32);
	vcdp->chgBus  (c+13,((IData)((VL_ULL(0x7fffffffffff) 
				      & ((QData)((IData)(
							 ((((0x80000000U 
							     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)
							     ? 0xfffU
							     : 0U) 
							   << 0x14U) 
							  | (0xfffffU 
							     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								>> 0xcU))))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+14,((vlTOPp->Top__DOT__immediate__DOT___T_48 
			      + vlTOPp->Top__DOT__pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+15,((vlTOPp->Top__DOT__immediate__DOT___T_72 
			      + vlTOPp->Top__DOT__pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+16,(vlTOPp->Top__DOT__immediate__DOT___T_57),32);
	vcdp->chgBus  (c+17,(vlTOPp->Top__DOT__alu_io_rs1),32);
	vcdp->chgBus  (c+18,(vlTOPp->Top__DOT__alu_io_rs2),32);
	vcdp->chgBus  (c+19,(vlTOPp->Top__DOT__alucontrol_io_out),5);
	vcdp->chgBus  (c+20,((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22)),32);
	vcdp->chgBus  (c+21,((7U & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+22,((1U & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 0x1eU))));
	vcdp->chgBus  (c+23,((0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				       >> 7U))),5);
	vcdp->chgBus  (c+24,((0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+25,((0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+26,(vlTOPp->Top__DOT__regfile_io_writedata),32);
	vcdp->chgBus  (c+27,(vlTOPp->Top__DOT__regfile_io_rs1),32);
	vcdp->chgBus  (c+28,(vlTOPp->Top__DOT__regfile_io_rs2),32);
	vcdp->chgBus  (c+29,((0xfffffffeU & (vlTOPp->Top__DOT__regfile_io_rs1 
					     + vlTOPp->Top__DOT__immediate__DOT___T_57))),32);
	vcdp->chgBus  (c+30,(vlTOPp->Top__DOT__memory__DOT__mem___05FT_19_data),32);
	vcdp->chgBus  (c+31,((0xffU & (IData)((vlTOPp->Top__DOT__alu__DOT___GEN_22 
					       >> 2U)))),8);
	vcdp->chgBus  (c+32,((0x7fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				       >> 0x19U))),7);
	vcdp->chgBus  (c+33,(vlTOPp->Top__DOT__immediate__DOT__combined0),12);
	vcdp->chgBus  (c+34,((0xfffffU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					  >> 0xcU))),20);
	vcdp->chgBus  (c+35,(((0x1000U & ((IData)(vlTOPp->Top__DOT__immediate__DOT__combined0) 
					  << 1U)) | 
			      ((0x800U & ((IData)(vlTOPp->Top__DOT__immediate__DOT__combined0) 
					  << 0xbU)) 
			       | (0x7feU & (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0))))),13);
	vcdp->chgBus  (c+36,((0xfffU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					>> 0x14U))),12);
	vcdp->chgBus  (c+37,(vlTOPp->Top__DOT__memory__DOT__mem___05FT_19_data),32);
	vcdp->chgBus  (c+38,((0xffU & (IData)((vlTOPp->Top__DOT__alu__DOT___GEN_22 
					       >> 2U)))),10);
	vcdp->chgBit  (c+39,(((~ ((0x33U != (0x7fU 
					     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
				  & (3U == (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))) 
			      & ((0x33U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
				 & ((3U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
				    & (0x23U == (0x7fU 
						 & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))))));
    }
}

void VTop::traceChgThis__3(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+40,((0x3ffU & (vlTOPp->Top__DOT__pc__DOT__reg__024 
					>> 2U))),10);
	vcdp->chgBus  (c+41,(((IData)(4U) + vlTOPp->Top__DOT__pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+42,(vlTOPp->Top__DOT__pc__DOT__reg__024),32);
	vcdp->chgBus  (c+43,(vlTOPp->Top__DOT__regfile__DOT__registers_0),32);
	vcdp->chgBus  (c+44,(vlTOPp->Top__DOT__regfile__DOT__registers_1),32);
	vcdp->chgBus  (c+45,(vlTOPp->Top__DOT__regfile__DOT__registers_2),32);
	vcdp->chgBus  (c+46,(vlTOPp->Top__DOT__regfile__DOT__registers_3),32);
	vcdp->chgBus  (c+47,(vlTOPp->Top__DOT__regfile__DOT__registers_4),32);
	vcdp->chgBus  (c+48,(vlTOPp->Top__DOT__regfile__DOT__registers_5),32);
	vcdp->chgBus  (c+49,(vlTOPp->Top__DOT__regfile__DOT__registers_6),32);
	vcdp->chgBus  (c+50,(vlTOPp->Top__DOT__regfile__DOT__registers_7),32);
	vcdp->chgBus  (c+51,(vlTOPp->Top__DOT__regfile__DOT__registers_8),32);
	vcdp->chgBus  (c+52,(vlTOPp->Top__DOT__regfile__DOT__registers_9),32);
	vcdp->chgBus  (c+53,(vlTOPp->Top__DOT__regfile__DOT__registers_10),32);
	vcdp->chgBus  (c+54,(vlTOPp->Top__DOT__regfile__DOT__registers_11),32);
	vcdp->chgBus  (c+55,(vlTOPp->Top__DOT__regfile__DOT__registers_12),32);
	vcdp->chgBus  (c+56,(vlTOPp->Top__DOT__regfile__DOT__registers_13),32);
	vcdp->chgBus  (c+57,(vlTOPp->Top__DOT__regfile__DOT__registers_14),32);
	vcdp->chgBus  (c+58,(vlTOPp->Top__DOT__regfile__DOT__registers_15),32);
	vcdp->chgBus  (c+59,(vlTOPp->Top__DOT__regfile__DOT__registers_16),32);
	vcdp->chgBus  (c+60,(vlTOPp->Top__DOT__regfile__DOT__registers_17),32);
	vcdp->chgBus  (c+61,(vlTOPp->Top__DOT__regfile__DOT__registers_18),32);
	vcdp->chgBus  (c+62,(vlTOPp->Top__DOT__regfile__DOT__registers_19),32);
	vcdp->chgBus  (c+63,(vlTOPp->Top__DOT__regfile__DOT__registers_20),32);
	vcdp->chgBus  (c+64,(vlTOPp->Top__DOT__regfile__DOT__registers_21),32);
	vcdp->chgBus  (c+65,(vlTOPp->Top__DOT__regfile__DOT__registers_22),32);
	vcdp->chgBus  (c+66,(vlTOPp->Top__DOT__regfile__DOT__registers_23),32);
	vcdp->chgBus  (c+67,(vlTOPp->Top__DOT__regfile__DOT__registers_24),32);
	vcdp->chgBus  (c+68,(vlTOPp->Top__DOT__regfile__DOT__registers_25),32);
	vcdp->chgBus  (c+69,(vlTOPp->Top__DOT__regfile__DOT__registers_26),32);
	vcdp->chgBus  (c+70,(vlTOPp->Top__DOT__regfile__DOT__registers_27),32);
	vcdp->chgBus  (c+71,(vlTOPp->Top__DOT__regfile__DOT__registers_28),32);
	vcdp->chgBus  (c+72,(vlTOPp->Top__DOT__regfile__DOT__registers_29),32);
	vcdp->chgBus  (c+73,(vlTOPp->Top__DOT__regfile__DOT__registers_30),32);
	vcdp->chgBus  (c+74,(vlTOPp->Top__DOT__regfile__DOT__registers_31),32);
    }
}

void VTop::traceChgThis__4(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+75,(vlTOPp->clock));
	vcdp->chgBit  (c+76,(vlTOPp->reset));
	vcdp->chgBus  (c+77,(vlTOPp->io_regout),32);
    }
}
