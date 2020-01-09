// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


//======================

void VTop::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VTop::traceInit, &VTop::traceFull, &VTop::traceChg, this);
}
void VTop::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTop* t=(VTop*)userthis;
    VTop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTop::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop* t=(VTop*)userthis;
    VTop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VTop::traceInitThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTop::traceFullThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTop::traceInitThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+75,"clock",-1);
	vcdp->declBit  (c+76,"reset",-1);
	vcdp->declBus  (c+77,"io_regout",-1,31,0);
	vcdp->declBit  (c+75,"Top clock",-1);
	vcdp->declBit  (c+76,"Top reset",-1);
	vcdp->declBus  (c+77,"Top io_regout",-1,31,0);
	vcdp->declBit  (c+75,"Top Instruction_clock",-1);
	vcdp->declBus  (c+40,"Top Instruction_io_wrAddr",-1,9,0);
	vcdp->declBus  (c+1,"Top Instruction_io_rdData",-1,31,0);
	vcdp->declBit  (c+75,"Top pc_clock",-1);
	vcdp->declBus  (c+2,"Top pc_io_input",-1,31,0);
	vcdp->declBus  (c+41,"Top pc_io_pc4",-1,31,0);
	vcdp->declBus  (c+42,"Top pc_io_pc",-1,31,0);
	vcdp->declBus  (c+3,"Top control_io_opcode",-1,6,0);
	vcdp->declBit  (c+4,"Top control_io_memwrite",-1);
	vcdp->declBit  (c+5,"Top control_io_memread",-1);
	vcdp->declBit  (c+6,"Top control_io_regwrite",-1);
	vcdp->declBit  (c+5,"Top control_io_memtoreg",-1);
	vcdp->declBus  (c+7,"Top control_io_aluop",-1,2,0);
	vcdp->declBus  (c+8,"Top control_io_opA",-1,1,0);
	vcdp->declBit  (c+9,"Top control_io_opB",-1);
	vcdp->declBus  (c+10,"Top control_io_extend",-1,1,0);
	vcdp->declBus  (c+11,"Top control_io_nxtpc",-1,1,0);
	vcdp->declBus  (c+1,"Top immediate_io_inst",-1,31,0);
	vcdp->declBus  (c+42,"Top immediate_io_pc",-1,31,0);
	vcdp->declBus  (c+12,"Top immediate_io_Sout",-1,31,0);
	vcdp->declBus  (c+13,"Top immediate_io_Uout",-1,31,0);
	vcdp->declBus  (c+14,"Top immediate_io_Sbout",-1,31,0);
	vcdp->declBus  (c+15,"Top immediate_io_Ujout",-1,31,0);
	vcdp->declBus  (c+16,"Top immediate_io_Iout",-1,31,0);
	vcdp->declBus  (c+17,"Top alu_io_rs1",-1,31,0);
	vcdp->declBus  (c+18,"Top alu_io_rs2",-1,31,0);
	vcdp->declBus  (c+19,"Top alu_io_cntrl",-1,4,0);
	vcdp->declBus  (c+20,"Top alu_io_out",-1,31,0);
	vcdp->declBus  (c+21,"Top alucontrol_io_fnc3",-1,2,0);
	vcdp->declBit  (c+22,"Top alucontrol_io_fnc7",-1);
	vcdp->declBus  (c+7,"Top alucontrol_io_aluop",-1,2,0);
	vcdp->declBus  (c+19,"Top alucontrol_io_out",-1,4,0);
	vcdp->declBit  (c+75,"Top regfile_clock",-1);
	vcdp->declBit  (c+6,"Top regfile_io_regwrite",-1);
	vcdp->declBus  (c+23,"Top regfile_io_rd_sel",-1,4,0);
	vcdp->declBus  (c+24,"Top regfile_io_r1",-1,4,0);
	vcdp->declBus  (c+25,"Top regfile_io_r2",-1,4,0);
	vcdp->declBus  (c+26,"Top regfile_io_writedata",-1,31,0);
	vcdp->declBus  (c+27,"Top regfile_io_rs1",-1,31,0);
	vcdp->declBus  (c+28,"Top regfile_io_rs2",-1,31,0);
	vcdp->declBus  (c+27,"Top jalr_io_input1",-1,31,0);
	vcdp->declBus  (c+16,"Top jalr_io_input2",-1,31,0);
	vcdp->declBus  (c+29,"Top jalr_io_out",-1,31,0);
	vcdp->declBit  (c+75,"Top memory_clock",-1);
	vcdp->declBus  (c+30,"Top memory_io_out",-1,31,0);
	vcdp->declBit  (c+5,"Top memory_io_load",-1);
	vcdp->declBit  (c+4,"Top memory_io_store",-1);
	vcdp->declBus  (c+31,"Top memory_io_addd",-1,7,0);
	vcdp->declBus  (c+28,"Top memory_io_data",-1,31,0);
	// Tracing: Top _T_10 // Ignored: Inlined leading underscore at Top.v:1472
	// Tracing: Top _T_12 // Ignored: Inlined leading underscore at Top.v:1473
	// Tracing: Top _T_14 // Ignored: Inlined leading underscore at Top.v:1474
	// Tracing: Top _T_15 // Ignored: Inlined leading underscore at Top.v:1475
	// Tracing: Top _T_20 // Ignored: Inlined leading underscore at Top.v:1476
	// Tracing: Top _GEN_2 // Ignored: Inlined leading underscore at Top.v:1477
	// Tracing: Top _GEN_3 // Ignored: Inlined leading underscore at Top.v:1478
	// Tracing: Top _T_28 // Ignored: Inlined leading underscore at Top.v:1479
	// Tracing: Top _T_30 // Ignored: Inlined leading underscore at Top.v:1480
	// Tracing: Top _T_31 // Ignored: Inlined leading underscore at Top.v:1481
	// Tracing: Top _T_34 // Ignored: Inlined leading underscore at Top.v:1482
	// Tracing: Top _T_36 // Ignored: Inlined leading underscore at Top.v:1483
	// Tracing: Top _T_43 // Ignored: Inlined leading underscore at Top.v:1484
	// Tracing: Top _T_44 // Ignored: Inlined leading underscore at Top.v:1485
	// Tracing: Top _T_46 // Ignored: Inlined leading underscore at Top.v:1486
	// Tracing: Top _T_49 // Ignored: Inlined leading underscore at Top.v:1487
	// Tracing: Top _T_51 // Ignored: Inlined leading underscore at Top.v:1488
	// Tracing: Top _T_54 // Ignored: Inlined leading underscore at Top.v:1489
	// Tracing: Top _GEN_8 // Ignored: Inlined leading underscore at Top.v:1490
	// Tracing: Top _GEN_9 // Ignored: Inlined leading underscore at Top.v:1491
	// Tracing: Top _T_57 // Ignored: Inlined leading underscore at Top.v:1492
	vcdp->declBit  (c+75,"Top Instruction clock",-1);
	vcdp->declBus  (c+40,"Top Instruction io_wrAddr",-1,9,0);
	vcdp->declBus  (c+1,"Top Instruction io_rdData",-1,31,0);
	// Tracing: Top Instruction mem // Ignored: Wide memory > --trace-max-array ents at Top.v:6
	// Tracing: Top Instruction _RAND_0 // Ignored: Inlined leading underscore at Top.v:7
	vcdp->declBus  (c+1,"Top Instruction mem__T_11_data",-1,31,0);
	vcdp->declBus  (c+40,"Top Instruction mem__T_11_addr",-1,9,0);
	vcdp->declBit  (c+75,"Top Instruction BindsTo_0_Instruction_Inst clock",-1);
	vcdp->declBus  (c+40,"Top Instruction BindsTo_0_Instruction_Inst io_wrAddr",-1,9,0);
	vcdp->declBus  (c+1,"Top Instruction BindsTo_0_Instruction_Inst io_rdData",-1,31,0);
	vcdp->declBit  (c+75,"Top pc clock",-1);
	vcdp->declBus  (c+2,"Top pc io_input",-1,31,0);
	vcdp->declBus  (c+41,"Top pc io_pc4",-1,31,0);
	vcdp->declBus  (c+42,"Top pc io_pc",-1,31,0);
	vcdp->declBus  (c+42,"Top pc reg$",-1,31,0);
	// Tracing: Top pc _RAND_0 // Ignored: Inlined leading underscore at Top.v:52
	// Tracing: Top pc _T_14 // Ignored: Inlined leading underscore at Top.v:53
	vcdp->declBus  (c+3,"Top control io_opcode",-1,6,0);
	vcdp->declBit  (c+4,"Top control io_memwrite",-1);
	vcdp->declBit  (c+5,"Top control io_memread",-1);
	vcdp->declBit  (c+6,"Top control io_regwrite",-1);
	vcdp->declBit  (c+5,"Top control io_memtoreg",-1);
	vcdp->declBus  (c+7,"Top control io_aluop",-1,2,0);
	vcdp->declBus  (c+8,"Top control io_opA",-1,1,0);
	vcdp->declBit  (c+9,"Top control io_opB",-1);
	vcdp->declBus  (c+10,"Top control io_extend",-1,1,0);
	vcdp->declBus  (c+11,"Top control io_nxtpc",-1,1,0);
	// Tracing: Top control _T_28 // Ignored: Inlined leading underscore at Top.v:103
	// Tracing: Top control _T_40 // Ignored: Inlined leading underscore at Top.v:104
	// Tracing: Top control _T_52 // Ignored: Inlined leading underscore at Top.v:105
	// Tracing: Top control _T_64 // Ignored: Inlined leading underscore at Top.v:106
	// Tracing: Top control _T_76 // Ignored: Inlined leading underscore at Top.v:107
	// Tracing: Top control _T_88 // Ignored: Inlined leading underscore at Top.v:108
	// Tracing: Top control _T_100 // Ignored: Inlined leading underscore at Top.v:109
	// Tracing: Top control _GEN_8 // Ignored: Inlined leading underscore at Top.v:110
	// Tracing: Top control _GEN_9 // Ignored: Inlined leading underscore at Top.v:111
	// Tracing: Top control _GEN_10 // Ignored: Inlined leading underscore at Top.v:112
	// Tracing: Top control _GEN_11 // Ignored: Inlined leading underscore at Top.v:113
	// Tracing: Top control _GEN_15 // Ignored: Inlined leading underscore at Top.v:114
	// Tracing: Top control _GEN_16 // Ignored: Inlined leading underscore at Top.v:115
	// Tracing: Top control _GEN_17 // Ignored: Inlined leading underscore at Top.v:116
	// Tracing: Top control _GEN_18 // Ignored: Inlined leading underscore at Top.v:117
	// Tracing: Top control _GEN_22 // Ignored: Inlined leading underscore at Top.v:118
	// Tracing: Top control _GEN_23 // Ignored: Inlined leading underscore at Top.v:119
	// Tracing: Top control _GEN_24 // Ignored: Inlined leading underscore at Top.v:120
	// Tracing: Top control _GEN_25 // Ignored: Inlined leading underscore at Top.v:121
	// Tracing: Top control _GEN_26 // Ignored: Inlined leading underscore at Top.v:122
	// Tracing: Top control _GEN_30 // Ignored: Inlined leading underscore at Top.v:123
	// Tracing: Top control _GEN_31 // Ignored: Inlined leading underscore at Top.v:124
	// Tracing: Top control _GEN_32 // Ignored: Inlined leading underscore at Top.v:125
	// Tracing: Top control _GEN_33 // Ignored: Inlined leading underscore at Top.v:126
	// Tracing: Top control _GEN_34 // Ignored: Inlined leading underscore at Top.v:127
	// Tracing: Top control _GEN_38 // Ignored: Inlined leading underscore at Top.v:128
	// Tracing: Top control _GEN_39 // Ignored: Inlined leading underscore at Top.v:129
	// Tracing: Top control _GEN_40 // Ignored: Inlined leading underscore at Top.v:130
	// Tracing: Top control _GEN_41 // Ignored: Inlined leading underscore at Top.v:131
	// Tracing: Top control _GEN_42 // Ignored: Inlined leading underscore at Top.v:132
	// Tracing: Top control _GEN_43 // Ignored: Inlined leading underscore at Top.v:133
	// Tracing: Top control _GEN_44 // Ignored: Inlined leading underscore at Top.v:134
	// Tracing: Top control _GEN_47 // Ignored: Inlined leading underscore at Top.v:135
	// Tracing: Top control _GEN_48 // Ignored: Inlined leading underscore at Top.v:136
	// Tracing: Top control _GEN_49 // Ignored: Inlined leading underscore at Top.v:137
	// Tracing: Top control _GEN_50 // Ignored: Inlined leading underscore at Top.v:138
	// Tracing: Top control _GEN_51 // Ignored: Inlined leading underscore at Top.v:139
	// Tracing: Top control _GEN_52 // Ignored: Inlined leading underscore at Top.v:140
	vcdp->declBus  (c+1,"Top immediate io_inst",-1,31,0);
	vcdp->declBus  (c+42,"Top immediate io_pc",-1,31,0);
	vcdp->declBus  (c+12,"Top immediate io_Sout",-1,31,0);
	vcdp->declBus  (c+13,"Top immediate io_Uout",-1,31,0);
	vcdp->declBus  (c+14,"Top immediate io_Sbout",-1,31,0);
	vcdp->declBus  (c+15,"Top immediate io_Ujout",-1,31,0);
	vcdp->declBus  (c+16,"Top immediate io_Iout",-1,31,0);
	vcdp->declBus  (c+23,"Top immediate extract1",-1,4,0);
	vcdp->declBus  (c+32,"Top immediate extract2",-1,6,0);
	vcdp->declBus  (c+33,"Top immediate combined0",-1,11,0);
	// Tracing: Top immediate _T_19 // Ignored: Inlined leading underscore at Top.v:201
	// Tracing: Top immediate _T_23 // Ignored: Inlined leading underscore at Top.v:202
	// Tracing: Top immediate _T_24 // Ignored: Inlined leading underscore at Top.v:203
	vcdp->declBus  (c+34,"Top immediate extract3",-1,19,0);
	// Tracing: Top immediate _T_26 // Ignored: Inlined leading underscore at Top.v:205
	// Tracing: Top immediate _T_30 // Ignored: Inlined leading underscore at Top.v:206
	// Tracing: Top immediate _T_31 // Ignored: Inlined leading underscore at Top.v:207
	// Tracing: Top immediate _GEN_0 // Ignored: Inlined leading underscore at Top.v:208
	// Tracing: Top immediate _T_33 // Ignored: Inlined leading underscore at Top.v:209
	// Tracing: Top immediate _T_34 // Ignored: Inlined leading underscore at Top.v:210
	// Tracing: Top immediate _T_36 // Ignored: Inlined leading underscore at Top.v:211
	// Tracing: Top immediate _T_37 // Ignored: Inlined leading underscore at Top.v:212
	// Tracing: Top immediate _T_38 // Ignored: Inlined leading underscore at Top.v:213
	vcdp->declBus  (c+35,"Top immediate combined1",-1,12,0);
	// Tracing: Top immediate _T_43 // Ignored: Inlined leading underscore at Top.v:215
	// Tracing: Top immediate _T_47 // Ignored: Inlined leading underscore at Top.v:216
	// Tracing: Top immediate _T_48 // Ignored: Inlined leading underscore at Top.v:217
	// Tracing: Top immediate _T_49 // Ignored: Inlined leading underscore at Top.v:218
	// Tracing: Top immediate _T_50 // Ignored: Inlined leading underscore at Top.v:219
	vcdp->declBus  (c+36,"Top immediate extract4",-1,11,0);
	// Tracing: Top immediate _T_52 // Ignored: Inlined leading underscore at Top.v:221
	// Tracing: Top immediate _T_56 // Ignored: Inlined leading underscore at Top.v:222
	// Tracing: Top immediate _T_57 // Ignored: Inlined leading underscore at Top.v:223
	// Tracing: Top immediate _T_59 // Ignored: Inlined leading underscore at Top.v:224
	// Tracing: Top immediate _T_60 // Ignored: Inlined leading underscore at Top.v:225
	// Tracing: Top immediate _T_61 // Ignored: Inlined leading underscore at Top.v:226
	// Tracing: Top immediate _T_62 // Ignored: Inlined leading underscore at Top.v:227
	// Tracing: Top immediate _T_71 // Ignored: Inlined leading underscore at Top.v:228
	// Tracing: Top immediate _T_72 // Ignored: Inlined leading underscore at Top.v:229
	// Tracing: Top immediate _T_73 // Ignored: Inlined leading underscore at Top.v:230
	// Tracing: Top immediate _T_74 // Ignored: Inlined leading underscore at Top.v:231
	// Tracing: Top immediate _GEN_1 // Ignored: Inlined leading underscore at Top.v:232
	vcdp->declBus  (c+17,"Top alu io_rs1",-1,31,0);
	vcdp->declBus  (c+18,"Top alu io_rs2",-1,31,0);
	vcdp->declBus  (c+19,"Top alu io_cntrl",-1,4,0);
	vcdp->declBus  (c+20,"Top alu io_out",-1,31,0);
	// Tracing: Top alu _T_16 // Ignored: Inlined leading underscore at Top.v:280
	// Tracing: Top alu _T_17 // Ignored: Inlined leading underscore at Top.v:281
	// Tracing: Top alu _T_18 // Ignored: Inlined leading underscore at Top.v:282
	// Tracing: Top alu _T_19 // Ignored: Inlined leading underscore at Top.v:283
	// Tracing: Top alu _T_21 // Ignored: Inlined leading underscore at Top.v:284
	// Tracing: Top alu _T_22 // Ignored: Inlined leading underscore at Top.v:285
	// Tracing: Top alu _GEN_24 // Ignored: Inlined leading underscore at Top.v:286
	// Tracing: Top alu _T_23 // Ignored: Inlined leading underscore at Top.v:287
	// Tracing: Top alu _T_25 // Ignored: Inlined leading underscore at Top.v:288
	// Tracing: Top alu _T_26 // Ignored: Inlined leading underscore at Top.v:289
	// Tracing: Top alu _GEN_0 // Ignored: Inlined leading underscore at Top.v:290
	// Tracing: Top alu _T_30 // Ignored: Inlined leading underscore at Top.v:291
	// Tracing: Top alu _T_32 // Ignored: Inlined leading underscore at Top.v:292
	// Tracing: Top alu _T_33 // Ignored: Inlined leading underscore at Top.v:293
	// Tracing: Top alu _T_34 // Ignored: Inlined leading underscore at Top.v:294
	// Tracing: Top alu _T_35 // Ignored: Inlined leading underscore at Top.v:295
	// Tracing: Top alu _T_36 // Ignored: Inlined leading underscore at Top.v:296
	// Tracing: Top alu _GEN_1 // Ignored: Inlined leading underscore at Top.v:297
	// Tracing: Top alu _T_40 // Ignored: Inlined leading underscore at Top.v:298
	// Tracing: Top alu _T_41 // Ignored: Inlined leading underscore at Top.v:299
	// Tracing: Top alu _T_42 // Ignored: Inlined leading underscore at Top.v:300
	// Tracing: Top alu _T_44 // Ignored: Inlined leading underscore at Top.v:301
	// Tracing: Top alu _T_46 // Ignored: Inlined leading underscore at Top.v:302
	// Tracing: Top alu _T_48 // Ignored: Inlined leading underscore at Top.v:303
	// Tracing: Top alu _T_49 // Ignored: Inlined leading underscore at Top.v:304
	// Tracing: Top alu _T_50 // Ignored: Inlined leading underscore at Top.v:305
	// Tracing: Top alu _T_52 // Ignored: Inlined leading underscore at Top.v:306
	// Tracing: Top alu _T_53 // Ignored: Inlined leading underscore at Top.v:307
	// Tracing: Top alu _T_54 // Ignored: Inlined leading underscore at Top.v:308
	// Tracing: Top alu _T_56 // Ignored: Inlined leading underscore at Top.v:309
	// Tracing: Top alu _T_57 // Ignored: Inlined leading underscore at Top.v:310
	// Tracing: Top alu _T_58 // Ignored: Inlined leading underscore at Top.v:311
	// Tracing: Top alu _T_59 // Ignored: Inlined leading underscore at Top.v:312
	// Tracing: Top alu _T_61 // Ignored: Inlined leading underscore at Top.v:313
	// Tracing: Top alu _T_65 // Ignored: Inlined leading underscore at Top.v:314
	// Tracing: Top alu _T_66 // Ignored: Inlined leading underscore at Top.v:315
	// Tracing: Top alu _GEN_2 // Ignored: Inlined leading underscore at Top.v:316
	// Tracing: Top alu _T_70 // Ignored: Inlined leading underscore at Top.v:317
	// Tracing: Top alu _T_71 // Ignored: Inlined leading underscore at Top.v:318
	// Tracing: Top alu _GEN_3 // Ignored: Inlined leading underscore at Top.v:319
	// Tracing: Top alu _T_75 // Ignored: Inlined leading underscore at Top.v:320
	// Tracing: Top alu _T_80 // Ignored: Inlined leading underscore at Top.v:321
	// Tracing: Top alu _T_81 // Ignored: Inlined leading underscore at Top.v:322
	// Tracing: Top alu _GEN_5 // Ignored: Inlined leading underscore at Top.v:323
	// Tracing: Top alu _T_85 // Ignored: Inlined leading underscore at Top.v:324
	// Tracing: Top alu _GEN_8 // Ignored: Inlined leading underscore at Top.v:325
	// Tracing: Top alu _GEN_9 // Ignored: Inlined leading underscore at Top.v:326
	// Tracing: Top alu _GEN_10 // Ignored: Inlined leading underscore at Top.v:327
	// Tracing: Top alu _GEN_11 // Ignored: Inlined leading underscore at Top.v:328
	// Tracing: Top alu _GEN_12 // Ignored: Inlined leading underscore at Top.v:329
	// Tracing: Top alu _GEN_13 // Ignored: Inlined leading underscore at Top.v:330
	// Tracing: Top alu _GEN_14 // Ignored: Inlined leading underscore at Top.v:331
	// Tracing: Top alu _GEN_15 // Ignored: Inlined leading underscore at Top.v:332
	// Tracing: Top alu _GEN_16 // Ignored: Inlined leading underscore at Top.v:333
	// Tracing: Top alu _GEN_17 // Ignored: Inlined leading underscore at Top.v:334
	// Tracing: Top alu _GEN_18 // Ignored: Inlined leading underscore at Top.v:335
	// Tracing: Top alu _GEN_19 // Ignored: Inlined leading underscore at Top.v:336
	// Tracing: Top alu _GEN_20 // Ignored: Inlined leading underscore at Top.v:337
	// Tracing: Top alu _GEN_21 // Ignored: Inlined leading underscore at Top.v:338
	// Tracing: Top alu _GEN_22 // Ignored: Inlined leading underscore at Top.v:339
	// Tracing: Top alu _GEN_25 // Ignored: Inlined leading underscore at Top.v:340
	vcdp->declBus  (c+21,"Top alucontrol io_fnc3",-1,2,0);
	vcdp->declBit  (c+22,"Top alucontrol io_fnc7",-1);
	vcdp->declBus  (c+7,"Top alucontrol io_aluop",-1,2,0);
	vcdp->declBus  (c+19,"Top alucontrol io_out",-1,4,0);
	// Tracing: Top alucontrol _T_14 // Ignored: Inlined leading underscore at Top.v:410
	// Tracing: Top alucontrol _T_17 // Ignored: Inlined leading underscore at Top.v:411
	// Tracing: Top alucontrol _T_19 // Ignored: Inlined leading underscore at Top.v:412
	// Tracing: Top alucontrol _T_22 // Ignored: Inlined leading underscore at Top.v:413
	// Tracing: Top alucontrol _T_25 // Ignored: Inlined leading underscore at Top.v:414
	// Tracing: Top alucontrol _T_27 // Ignored: Inlined leading underscore at Top.v:415
	// Tracing: Top alucontrol _T_29 // Ignored: Inlined leading underscore at Top.v:416
	// Tracing: Top alucontrol _T_31 // Ignored: Inlined leading underscore at Top.v:417
	// Tracing: Top alucontrol _T_36 // Ignored: Inlined leading underscore at Top.v:418
	// Tracing: Top alucontrol _GEN_0 // Ignored: Inlined leading underscore at Top.v:419
	// Tracing: Top alucontrol _T_38 // Ignored: Inlined leading underscore at Top.v:420
	// Tracing: Top alucontrol _GEN_2 // Ignored: Inlined leading underscore at Top.v:421
	// Tracing: Top alucontrol _GEN_3 // Ignored: Inlined leading underscore at Top.v:422
	// Tracing: Top alucontrol _GEN_4 // Ignored: Inlined leading underscore at Top.v:423
	// Tracing: Top alucontrol _GEN_5 // Ignored: Inlined leading underscore at Top.v:424
	// Tracing: Top alucontrol _GEN_6 // Ignored: Inlined leading underscore at Top.v:425
	vcdp->declBit  (c+75,"Top regfile clock",-1);
	vcdp->declBit  (c+6,"Top regfile io_regwrite",-1);
	vcdp->declBus  (c+23,"Top regfile io_rd_sel",-1,4,0);
	vcdp->declBus  (c+24,"Top regfile io_r1",-1,4,0);
	vcdp->declBus  (c+25,"Top regfile io_r2",-1,4,0);
	vcdp->declBus  (c+26,"Top regfile io_writedata",-1,31,0);
	vcdp->declBus  (c+27,"Top regfile io_rs1",-1,31,0);
	vcdp->declBus  (c+28,"Top regfile io_rs2",-1,31,0);
	vcdp->declBus  (c+43,"Top regfile registers_0",-1,31,0);
	// Tracing: Top regfile _RAND_0 // Ignored: Inlined leading underscore at Top.v:455
	vcdp->declBus  (c+44,"Top regfile registers_1",-1,31,0);
	// Tracing: Top regfile _RAND_1 // Ignored: Inlined leading underscore at Top.v:457
	vcdp->declBus  (c+45,"Top regfile registers_2",-1,31,0);
	// Tracing: Top regfile _RAND_2 // Ignored: Inlined leading underscore at Top.v:459
	vcdp->declBus  (c+46,"Top regfile registers_3",-1,31,0);
	// Tracing: Top regfile _RAND_3 // Ignored: Inlined leading underscore at Top.v:461
	vcdp->declBus  (c+47,"Top regfile registers_4",-1,31,0);
	// Tracing: Top regfile _RAND_4 // Ignored: Inlined leading underscore at Top.v:463
	vcdp->declBus  (c+48,"Top regfile registers_5",-1,31,0);
	// Tracing: Top regfile _RAND_5 // Ignored: Inlined leading underscore at Top.v:465
	vcdp->declBus  (c+49,"Top regfile registers_6",-1,31,0);
	// Tracing: Top regfile _RAND_6 // Ignored: Inlined leading underscore at Top.v:467
	vcdp->declBus  (c+50,"Top regfile registers_7",-1,31,0);
	// Tracing: Top regfile _RAND_7 // Ignored: Inlined leading underscore at Top.v:469
	vcdp->declBus  (c+51,"Top regfile registers_8",-1,31,0);
	// Tracing: Top regfile _RAND_8 // Ignored: Inlined leading underscore at Top.v:471
	vcdp->declBus  (c+52,"Top regfile registers_9",-1,31,0);
	// Tracing: Top regfile _RAND_9 // Ignored: Inlined leading underscore at Top.v:473
	vcdp->declBus  (c+53,"Top regfile registers_10",-1,31,0);
	// Tracing: Top regfile _RAND_10 // Ignored: Inlined leading underscore at Top.v:475
	vcdp->declBus  (c+54,"Top regfile registers_11",-1,31,0);
	// Tracing: Top regfile _RAND_11 // Ignored: Inlined leading underscore at Top.v:477
	vcdp->declBus  (c+55,"Top regfile registers_12",-1,31,0);
	// Tracing: Top regfile _RAND_12 // Ignored: Inlined leading underscore at Top.v:479
	vcdp->declBus  (c+56,"Top regfile registers_13",-1,31,0);
	// Tracing: Top regfile _RAND_13 // Ignored: Inlined leading underscore at Top.v:481
	vcdp->declBus  (c+57,"Top regfile registers_14",-1,31,0);
	// Tracing: Top regfile _RAND_14 // Ignored: Inlined leading underscore at Top.v:483
	vcdp->declBus  (c+58,"Top regfile registers_15",-1,31,0);
	// Tracing: Top regfile _RAND_15 // Ignored: Inlined leading underscore at Top.v:485
	vcdp->declBus  (c+59,"Top regfile registers_16",-1,31,0);
	// Tracing: Top regfile _RAND_16 // Ignored: Inlined leading underscore at Top.v:487
	vcdp->declBus  (c+60,"Top regfile registers_17",-1,31,0);
	// Tracing: Top regfile _RAND_17 // Ignored: Inlined leading underscore at Top.v:489
	vcdp->declBus  (c+61,"Top regfile registers_18",-1,31,0);
	// Tracing: Top regfile _RAND_18 // Ignored: Inlined leading underscore at Top.v:491
	vcdp->declBus  (c+62,"Top regfile registers_19",-1,31,0);
	// Tracing: Top regfile _RAND_19 // Ignored: Inlined leading underscore at Top.v:493
	vcdp->declBus  (c+63,"Top regfile registers_20",-1,31,0);
	// Tracing: Top regfile _RAND_20 // Ignored: Inlined leading underscore at Top.v:495
	vcdp->declBus  (c+64,"Top regfile registers_21",-1,31,0);
	// Tracing: Top regfile _RAND_21 // Ignored: Inlined leading underscore at Top.v:497
	vcdp->declBus  (c+65,"Top regfile registers_22",-1,31,0);
	// Tracing: Top regfile _RAND_22 // Ignored: Inlined leading underscore at Top.v:499
	vcdp->declBus  (c+66,"Top regfile registers_23",-1,31,0);
	// Tracing: Top regfile _RAND_23 // Ignored: Inlined leading underscore at Top.v:501
	vcdp->declBus  (c+67,"Top regfile registers_24",-1,31,0);
	// Tracing: Top regfile _RAND_24 // Ignored: Inlined leading underscore at Top.v:503
	vcdp->declBus  (c+68,"Top regfile registers_25",-1,31,0);
	// Tracing: Top regfile _RAND_25 // Ignored: Inlined leading underscore at Top.v:505
	vcdp->declBus  (c+69,"Top regfile registers_26",-1,31,0);
	// Tracing: Top regfile _RAND_26 // Ignored: Inlined leading underscore at Top.v:507
	vcdp->declBus  (c+70,"Top regfile registers_27",-1,31,0);
	// Tracing: Top regfile _RAND_27 // Ignored: Inlined leading underscore at Top.v:509
	vcdp->declBus  (c+71,"Top regfile registers_28",-1,31,0);
	// Tracing: Top regfile _RAND_28 // Ignored: Inlined leading underscore at Top.v:511
	vcdp->declBus  (c+72,"Top regfile registers_29",-1,31,0);
	// Tracing: Top regfile _RAND_29 // Ignored: Inlined leading underscore at Top.v:513
	vcdp->declBus  (c+73,"Top regfile registers_30",-1,31,0);
	// Tracing: Top regfile _RAND_30 // Ignored: Inlined leading underscore at Top.v:515
	vcdp->declBus  (c+74,"Top regfile registers_31",-1,31,0);
	// Tracing: Top regfile _RAND_31 // Ignored: Inlined leading underscore at Top.v:517
	// Tracing: Top regfile _GEN_1 // Ignored: Inlined leading underscore at Top.v:518
	// Tracing: Top regfile _GEN_2 // Ignored: Inlined leading underscore at Top.v:519
	// Tracing: Top regfile _GEN_3 // Ignored: Inlined leading underscore at Top.v:520
	// Tracing: Top regfile _GEN_4 // Ignored: Inlined leading underscore at Top.v:521
	// Tracing: Top regfile _GEN_5 // Ignored: Inlined leading underscore at Top.v:522
	// Tracing: Top regfile _GEN_6 // Ignored: Inlined leading underscore at Top.v:523
	// Tracing: Top regfile _GEN_7 // Ignored: Inlined leading underscore at Top.v:524
	// Tracing: Top regfile _GEN_8 // Ignored: Inlined leading underscore at Top.v:525
	// Tracing: Top regfile _GEN_9 // Ignored: Inlined leading underscore at Top.v:526
	// Tracing: Top regfile _GEN_10 // Ignored: Inlined leading underscore at Top.v:527
	// Tracing: Top regfile _GEN_11 // Ignored: Inlined leading underscore at Top.v:528
	// Tracing: Top regfile _GEN_12 // Ignored: Inlined leading underscore at Top.v:529
	// Tracing: Top regfile _GEN_13 // Ignored: Inlined leading underscore at Top.v:530
	// Tracing: Top regfile _GEN_14 // Ignored: Inlined leading underscore at Top.v:531
	// Tracing: Top regfile _GEN_15 // Ignored: Inlined leading underscore at Top.v:532
	// Tracing: Top regfile _GEN_16 // Ignored: Inlined leading underscore at Top.v:533
	// Tracing: Top regfile _GEN_17 // Ignored: Inlined leading underscore at Top.v:534
	// Tracing: Top regfile _GEN_18 // Ignored: Inlined leading underscore at Top.v:535
	// Tracing: Top regfile _GEN_19 // Ignored: Inlined leading underscore at Top.v:536
	// Tracing: Top regfile _GEN_20 // Ignored: Inlined leading underscore at Top.v:537
	// Tracing: Top regfile _GEN_21 // Ignored: Inlined leading underscore at Top.v:538
	// Tracing: Top regfile _GEN_22 // Ignored: Inlined leading underscore at Top.v:539
	// Tracing: Top regfile _GEN_23 // Ignored: Inlined leading underscore at Top.v:540
	// Tracing: Top regfile _GEN_24 // Ignored: Inlined leading underscore at Top.v:541
	// Tracing: Top regfile _GEN_25 // Ignored: Inlined leading underscore at Top.v:542
	// Tracing: Top regfile _GEN_26 // Ignored: Inlined leading underscore at Top.v:543
	// Tracing: Top regfile _GEN_27 // Ignored: Inlined leading underscore at Top.v:544
	// Tracing: Top regfile _GEN_28 // Ignored: Inlined leading underscore at Top.v:545
	// Tracing: Top regfile _GEN_29 // Ignored: Inlined leading underscore at Top.v:546
	// Tracing: Top regfile _GEN_30 // Ignored: Inlined leading underscore at Top.v:547
	// Tracing: Top regfile _GEN_33 // Ignored: Inlined leading underscore at Top.v:548
	// Tracing: Top regfile _GEN_34 // Ignored: Inlined leading underscore at Top.v:549
	// Tracing: Top regfile _GEN_35 // Ignored: Inlined leading underscore at Top.v:550
	// Tracing: Top regfile _GEN_36 // Ignored: Inlined leading underscore at Top.v:551
	// Tracing: Top regfile _GEN_37 // Ignored: Inlined leading underscore at Top.v:552
	// Tracing: Top regfile _GEN_38 // Ignored: Inlined leading underscore at Top.v:553
	// Tracing: Top regfile _GEN_39 // Ignored: Inlined leading underscore at Top.v:554
	// Tracing: Top regfile _GEN_40 // Ignored: Inlined leading underscore at Top.v:555
	// Tracing: Top regfile _GEN_41 // Ignored: Inlined leading underscore at Top.v:556
	// Tracing: Top regfile _GEN_42 // Ignored: Inlined leading underscore at Top.v:557
	// Tracing: Top regfile _GEN_43 // Ignored: Inlined leading underscore at Top.v:558
	// Tracing: Top regfile _GEN_44 // Ignored: Inlined leading underscore at Top.v:559
	// Tracing: Top regfile _GEN_45 // Ignored: Inlined leading underscore at Top.v:560
	// Tracing: Top regfile _GEN_46 // Ignored: Inlined leading underscore at Top.v:561
	// Tracing: Top regfile _GEN_47 // Ignored: Inlined leading underscore at Top.v:562
	// Tracing: Top regfile _GEN_48 // Ignored: Inlined leading underscore at Top.v:563
	// Tracing: Top regfile _GEN_49 // Ignored: Inlined leading underscore at Top.v:564
	// Tracing: Top regfile _GEN_50 // Ignored: Inlined leading underscore at Top.v:565
	// Tracing: Top regfile _GEN_51 // Ignored: Inlined leading underscore at Top.v:566
	// Tracing: Top regfile _GEN_52 // Ignored: Inlined leading underscore at Top.v:567
	// Tracing: Top regfile _GEN_53 // Ignored: Inlined leading underscore at Top.v:568
	// Tracing: Top regfile _GEN_54 // Ignored: Inlined leading underscore at Top.v:569
	// Tracing: Top regfile _GEN_55 // Ignored: Inlined leading underscore at Top.v:570
	// Tracing: Top regfile _GEN_56 // Ignored: Inlined leading underscore at Top.v:571
	// Tracing: Top regfile _GEN_57 // Ignored: Inlined leading underscore at Top.v:572
	// Tracing: Top regfile _GEN_58 // Ignored: Inlined leading underscore at Top.v:573
	// Tracing: Top regfile _GEN_59 // Ignored: Inlined leading underscore at Top.v:574
	// Tracing: Top regfile _GEN_60 // Ignored: Inlined leading underscore at Top.v:575
	// Tracing: Top regfile _GEN_61 // Ignored: Inlined leading underscore at Top.v:576
	// Tracing: Top regfile _GEN_62 // Ignored: Inlined leading underscore at Top.v:577
	// Tracing: Top regfile _T_62 // Ignored: Inlined leading underscore at Top.v:578
	// Tracing: Top regfile _GEN_65 // Ignored: Inlined leading underscore at Top.v:579
	// Tracing: Top regfile _GEN_66 // Ignored: Inlined leading underscore at Top.v:580
	// Tracing: Top regfile _GEN_67 // Ignored: Inlined leading underscore at Top.v:581
	// Tracing: Top regfile _GEN_68 // Ignored: Inlined leading underscore at Top.v:582
	// Tracing: Top regfile _GEN_69 // Ignored: Inlined leading underscore at Top.v:583
	// Tracing: Top regfile _GEN_70 // Ignored: Inlined leading underscore at Top.v:584
	// Tracing: Top regfile _GEN_71 // Ignored: Inlined leading underscore at Top.v:585
	// Tracing: Top regfile _GEN_72 // Ignored: Inlined leading underscore at Top.v:586
	// Tracing: Top regfile _GEN_73 // Ignored: Inlined leading underscore at Top.v:587
	// Tracing: Top regfile _GEN_74 // Ignored: Inlined leading underscore at Top.v:588
	// Tracing: Top regfile _GEN_75 // Ignored: Inlined leading underscore at Top.v:589
	// Tracing: Top regfile _GEN_76 // Ignored: Inlined leading underscore at Top.v:590
	// Tracing: Top regfile _GEN_77 // Ignored: Inlined leading underscore at Top.v:591
	// Tracing: Top regfile _GEN_78 // Ignored: Inlined leading underscore at Top.v:592
	// Tracing: Top regfile _GEN_79 // Ignored: Inlined leading underscore at Top.v:593
	// Tracing: Top regfile _GEN_80 // Ignored: Inlined leading underscore at Top.v:594
	// Tracing: Top regfile _GEN_81 // Ignored: Inlined leading underscore at Top.v:595
	// Tracing: Top regfile _GEN_82 // Ignored: Inlined leading underscore at Top.v:596
	// Tracing: Top regfile _GEN_83 // Ignored: Inlined leading underscore at Top.v:597
	// Tracing: Top regfile _GEN_84 // Ignored: Inlined leading underscore at Top.v:598
	// Tracing: Top regfile _GEN_85 // Ignored: Inlined leading underscore at Top.v:599
	// Tracing: Top regfile _GEN_86 // Ignored: Inlined leading underscore at Top.v:600
	// Tracing: Top regfile _GEN_87 // Ignored: Inlined leading underscore at Top.v:601
	// Tracing: Top regfile _GEN_88 // Ignored: Inlined leading underscore at Top.v:602
	// Tracing: Top regfile _GEN_89 // Ignored: Inlined leading underscore at Top.v:603
	// Tracing: Top regfile _GEN_90 // Ignored: Inlined leading underscore at Top.v:604
	// Tracing: Top regfile _GEN_91 // Ignored: Inlined leading underscore at Top.v:605
	// Tracing: Top regfile _GEN_92 // Ignored: Inlined leading underscore at Top.v:606
	// Tracing: Top regfile _GEN_93 // Ignored: Inlined leading underscore at Top.v:607
	// Tracing: Top regfile _GEN_94 // Ignored: Inlined leading underscore at Top.v:608
	// Tracing: Top regfile _GEN_95 // Ignored: Inlined leading underscore at Top.v:609
	// Tracing: Top regfile _GEN_96 // Ignored: Inlined leading underscore at Top.v:610
	// Tracing: Top regfile _GEN_97 // Ignored: Inlined leading underscore at Top.v:611
	// Tracing: Top regfile _GEN_98 // Ignored: Inlined leading underscore at Top.v:612
	// Tracing: Top regfile _GEN_99 // Ignored: Inlined leading underscore at Top.v:613
	// Tracing: Top regfile _GEN_100 // Ignored: Inlined leading underscore at Top.v:614
	// Tracing: Top regfile _GEN_101 // Ignored: Inlined leading underscore at Top.v:615
	// Tracing: Top regfile _GEN_102 // Ignored: Inlined leading underscore at Top.v:616
	// Tracing: Top regfile _GEN_103 // Ignored: Inlined leading underscore at Top.v:617
	// Tracing: Top regfile _GEN_104 // Ignored: Inlined leading underscore at Top.v:618
	// Tracing: Top regfile _GEN_105 // Ignored: Inlined leading underscore at Top.v:619
	// Tracing: Top regfile _GEN_106 // Ignored: Inlined leading underscore at Top.v:620
	// Tracing: Top regfile _GEN_107 // Ignored: Inlined leading underscore at Top.v:621
	// Tracing: Top regfile _GEN_108 // Ignored: Inlined leading underscore at Top.v:622
	// Tracing: Top regfile _GEN_109 // Ignored: Inlined leading underscore at Top.v:623
	// Tracing: Top regfile _GEN_110 // Ignored: Inlined leading underscore at Top.v:624
	// Tracing: Top regfile _GEN_111 // Ignored: Inlined leading underscore at Top.v:625
	// Tracing: Top regfile _GEN_112 // Ignored: Inlined leading underscore at Top.v:626
	// Tracing: Top regfile _GEN_113 // Ignored: Inlined leading underscore at Top.v:627
	// Tracing: Top regfile _GEN_114 // Ignored: Inlined leading underscore at Top.v:628
	// Tracing: Top regfile _GEN_115 // Ignored: Inlined leading underscore at Top.v:629
	// Tracing: Top regfile _GEN_116 // Ignored: Inlined leading underscore at Top.v:630
	// Tracing: Top regfile _GEN_117 // Ignored: Inlined leading underscore at Top.v:631
	// Tracing: Top regfile _GEN_118 // Ignored: Inlined leading underscore at Top.v:632
	// Tracing: Top regfile _GEN_119 // Ignored: Inlined leading underscore at Top.v:633
	// Tracing: Top regfile _GEN_120 // Ignored: Inlined leading underscore at Top.v:634
	// Tracing: Top regfile _GEN_121 // Ignored: Inlined leading underscore at Top.v:635
	// Tracing: Top regfile _GEN_122 // Ignored: Inlined leading underscore at Top.v:636
	// Tracing: Top regfile _GEN_123 // Ignored: Inlined leading underscore at Top.v:637
	// Tracing: Top regfile _GEN_124 // Ignored: Inlined leading underscore at Top.v:638
	// Tracing: Top regfile _GEN_125 // Ignored: Inlined leading underscore at Top.v:639
	// Tracing: Top regfile _GEN_126 // Ignored: Inlined leading underscore at Top.v:640
	// Tracing: Top regfile _GEN_127 // Ignored: Inlined leading underscore at Top.v:641
	// Tracing: Top regfile _GEN_129 // Ignored: Inlined leading underscore at Top.v:642
	// Tracing: Top regfile _GEN_130 // Ignored: Inlined leading underscore at Top.v:643
	// Tracing: Top regfile _GEN_131 // Ignored: Inlined leading underscore at Top.v:644
	// Tracing: Top regfile _GEN_132 // Ignored: Inlined leading underscore at Top.v:645
	// Tracing: Top regfile _GEN_133 // Ignored: Inlined leading underscore at Top.v:646
	// Tracing: Top regfile _GEN_134 // Ignored: Inlined leading underscore at Top.v:647
	// Tracing: Top regfile _GEN_135 // Ignored: Inlined leading underscore at Top.v:648
	// Tracing: Top regfile _GEN_136 // Ignored: Inlined leading underscore at Top.v:649
	// Tracing: Top regfile _GEN_137 // Ignored: Inlined leading underscore at Top.v:650
	// Tracing: Top regfile _GEN_138 // Ignored: Inlined leading underscore at Top.v:651
	// Tracing: Top regfile _GEN_139 // Ignored: Inlined leading underscore at Top.v:652
	// Tracing: Top regfile _GEN_140 // Ignored: Inlined leading underscore at Top.v:653
	// Tracing: Top regfile _GEN_141 // Ignored: Inlined leading underscore at Top.v:654
	// Tracing: Top regfile _GEN_142 // Ignored: Inlined leading underscore at Top.v:655
	// Tracing: Top regfile _GEN_143 // Ignored: Inlined leading underscore at Top.v:656
	// Tracing: Top regfile _GEN_144 // Ignored: Inlined leading underscore at Top.v:657
	// Tracing: Top regfile _GEN_145 // Ignored: Inlined leading underscore at Top.v:658
	// Tracing: Top regfile _GEN_146 // Ignored: Inlined leading underscore at Top.v:659
	// Tracing: Top regfile _GEN_147 // Ignored: Inlined leading underscore at Top.v:660
	// Tracing: Top regfile _GEN_148 // Ignored: Inlined leading underscore at Top.v:661
	// Tracing: Top regfile _GEN_149 // Ignored: Inlined leading underscore at Top.v:662
	// Tracing: Top regfile _GEN_150 // Ignored: Inlined leading underscore at Top.v:663
	// Tracing: Top regfile _GEN_151 // Ignored: Inlined leading underscore at Top.v:664
	// Tracing: Top regfile _GEN_152 // Ignored: Inlined leading underscore at Top.v:665
	// Tracing: Top regfile _GEN_153 // Ignored: Inlined leading underscore at Top.v:666
	// Tracing: Top regfile _GEN_154 // Ignored: Inlined leading underscore at Top.v:667
	// Tracing: Top regfile _GEN_155 // Ignored: Inlined leading underscore at Top.v:668
	// Tracing: Top regfile _GEN_156 // Ignored: Inlined leading underscore at Top.v:669
	// Tracing: Top regfile _GEN_157 // Ignored: Inlined leading underscore at Top.v:670
	// Tracing: Top regfile _GEN_158 // Ignored: Inlined leading underscore at Top.v:671
	// Tracing: Top regfile _GEN_159 // Ignored: Inlined leading underscore at Top.v:672
	// Tracing: Top regfile _GEN_160 // Ignored: Inlined leading underscore at Top.v:673
	vcdp->declBus  (c+27,"Top jalr io_input1",-1,31,0);
	vcdp->declBus  (c+16,"Top jalr io_input2",-1,31,0);
	vcdp->declBus  (c+29,"Top jalr io_out",-1,31,0);
	// Tracing: Top jalr _T_11 // Ignored: Inlined leading underscore at Top.v:1348
	// Tracing: Top jalr _T_12 // Ignored: Inlined leading underscore at Top.v:1349
	// Tracing: Top jalr _T_13 // Ignored: Inlined leading underscore at Top.v:1350
	// Tracing: Top jalr _T_14 // Ignored: Inlined leading underscore at Top.v:1351
	vcdp->declBit  (c+75,"Top memory clock",-1);
	vcdp->declBus  (c+30,"Top memory io_out",-1,31,0);
	vcdp->declBit  (c+5,"Top memory io_load",-1);
	vcdp->declBit  (c+4,"Top memory io_store",-1);
	vcdp->declBus  (c+31,"Top memory io_addd",-1,7,0);
	vcdp->declBus  (c+28,"Top memory io_data",-1,31,0);
	// Tracing: Top memory mem // Ignored: Wide memory > --trace-max-array ents at Top.v:1366
	// Tracing: Top memory _RAND_0 // Ignored: Inlined leading underscore at Top.v:1367
	vcdp->declBus  (c+37,"Top memory mem__T_19_data",-1,31,0);
	vcdp->declBus  (c+38,"Top memory mem__T_19_addr",-1,9,0);
	vcdp->declBus  (c+28,"Top memory mem__T_23_data",-1,31,0);
	vcdp->declBus  (c+38,"Top memory mem__T_23_addr",-1,9,0);
	vcdp->declBit  (c+78,"Top memory mem__T_23_mask",-1);
	vcdp->declBit  (c+39,"Top memory mem__T_23_en",-1);
    }
}

void VTop::traceFullThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data),32);
	vcdp->fullBus  (c+2,(((0U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
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
	vcdp->fullBus  (c+3,((0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)),7);
	vcdp->fullBit  (c+4,(((0x33U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
			      & ((3U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
				 & (0x23U == (0x7fU 
					      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))))));
	vcdp->fullBit  (c+5,(((0x33U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
			      & (3U == (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))));
	vcdp->fullBit  (c+6,(vlTOPp->Top__DOT__control_io_regwrite));
	vcdp->fullBus  (c+7,(vlTOPp->Top__DOT__control_io_aluop),3);
	vcdp->fullBus  (c+8,(vlTOPp->Top__DOT__control_io_opA),2);
	vcdp->fullBit  (c+9,(vlTOPp->Top__DOT__control_io_opB));
	vcdp->fullBus  (c+10,(vlTOPp->Top__DOT__control_io_extend),2);
	vcdp->fullBus  (c+11,(vlTOPp->Top__DOT__control_io_nxtpc),2);
	vcdp->fullBus  (c+12,(((((0x800U & (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0))
				  ? 0xfffffU : 0U) 
				<< 0xcU) | ((0xfe0U 
					     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						>> 0x14U)) 
					    | (0x1fU 
					       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						  >> 7U))))),32);
	vcdp->fullBus  (c+13,((IData)((VL_ULL(0x7fffffffffff) 
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
	vcdp->fullBus  (c+14,((vlTOPp->Top__DOT__immediate__DOT___T_48 
			       + vlTOPp->Top__DOT__pc__DOT__reg__024)),32);
	vcdp->fullBus  (c+15,((vlTOPp->Top__DOT__immediate__DOT___T_72 
			       + vlTOPp->Top__DOT__pc__DOT__reg__024)),32);
	vcdp->fullBus  (c+16,(vlTOPp->Top__DOT__immediate__DOT___T_57),32);
	vcdp->fullBus  (c+17,(vlTOPp->Top__DOT__alu_io_rs1),32);
	vcdp->fullBus  (c+18,(vlTOPp->Top__DOT__alu_io_rs2),32);
	vcdp->fullBus  (c+19,(vlTOPp->Top__DOT__alucontrol_io_out),5);
	vcdp->fullBus  (c+20,((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22)),32);
	vcdp->fullBus  (c+21,((7U & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				     >> 0xcU))),3);
	vcdp->fullBit  (c+22,((1U & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				     >> 0x1eU))));
	vcdp->fullBus  (c+23,((0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					>> 7U))),5);
	vcdp->fullBus  (c+24,((0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					>> 0xfU))),5);
	vcdp->fullBus  (c+25,((0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					>> 0x14U))),5);
	vcdp->fullBus  (c+26,(vlTOPp->Top__DOT__regfile_io_writedata),32);
	vcdp->fullBus  (c+27,(vlTOPp->Top__DOT__regfile_io_rs1),32);
	vcdp->fullBus  (c+28,(vlTOPp->Top__DOT__regfile_io_rs2),32);
	vcdp->fullBus  (c+29,((0xfffffffeU & (vlTOPp->Top__DOT__regfile_io_rs1 
					      + vlTOPp->Top__DOT__immediate__DOT___T_57))),32);
	vcdp->fullBus  (c+30,(vlTOPp->Top__DOT__memory__DOT__mem___05FT_19_data),32);
	vcdp->fullBus  (c+31,((0xffU & (IData)((vlTOPp->Top__DOT__alu__DOT___GEN_22 
						>> 2U)))),8);
	vcdp->fullBus  (c+32,((0x7fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					>> 0x19U))),7);
	vcdp->fullBus  (c+33,(vlTOPp->Top__DOT__immediate__DOT__combined0),12);
	vcdp->fullBus  (c+34,((0xfffffU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					   >> 0xcU))),20);
	vcdp->fullBus  (c+35,(((0x1000U & ((IData)(vlTOPp->Top__DOT__immediate__DOT__combined0) 
					   << 1U)) 
			       | ((0x800U & ((IData)(vlTOPp->Top__DOT__immediate__DOT__combined0) 
					     << 0xbU)) 
				  | (0x7feU & (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0))))),13);
	vcdp->fullBus  (c+36,((0xfffU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
					 >> 0x14U))),12);
	vcdp->fullBus  (c+37,(vlTOPp->Top__DOT__memory__DOT__mem___05FT_19_data),32);
	vcdp->fullBus  (c+38,((0xffU & (IData)((vlTOPp->Top__DOT__alu__DOT___GEN_22 
						>> 2U)))),10);
	vcdp->fullBit  (c+39,(((~ ((0x33U != (0x7fU 
					      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
				   & (3U == (0x7fU 
					     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))) 
			       & ((0x33U != (0x7fU 
					     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
				  & ((3U != (0x7fU 
					     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
				     & (0x23U == (0x7fU 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))))));
	vcdp->fullBus  (c+40,((0x3ffU & (vlTOPp->Top__DOT__pc__DOT__reg__024 
					 >> 2U))),10);
	vcdp->fullBus  (c+41,(((IData)(4U) + vlTOPp->Top__DOT__pc__DOT__reg__024)),32);
	vcdp->fullBus  (c+42,(vlTOPp->Top__DOT__pc__DOT__reg__024),32);
	vcdp->fullBus  (c+43,(vlTOPp->Top__DOT__regfile__DOT__registers_0),32);
	vcdp->fullBus  (c+44,(vlTOPp->Top__DOT__regfile__DOT__registers_1),32);
	vcdp->fullBus  (c+45,(vlTOPp->Top__DOT__regfile__DOT__registers_2),32);
	vcdp->fullBus  (c+46,(vlTOPp->Top__DOT__regfile__DOT__registers_3),32);
	vcdp->fullBus  (c+47,(vlTOPp->Top__DOT__regfile__DOT__registers_4),32);
	vcdp->fullBus  (c+48,(vlTOPp->Top__DOT__regfile__DOT__registers_5),32);
	vcdp->fullBus  (c+49,(vlTOPp->Top__DOT__regfile__DOT__registers_6),32);
	vcdp->fullBus  (c+50,(vlTOPp->Top__DOT__regfile__DOT__registers_7),32);
	vcdp->fullBus  (c+51,(vlTOPp->Top__DOT__regfile__DOT__registers_8),32);
	vcdp->fullBus  (c+52,(vlTOPp->Top__DOT__regfile__DOT__registers_9),32);
	vcdp->fullBus  (c+53,(vlTOPp->Top__DOT__regfile__DOT__registers_10),32);
	vcdp->fullBus  (c+54,(vlTOPp->Top__DOT__regfile__DOT__registers_11),32);
	vcdp->fullBus  (c+55,(vlTOPp->Top__DOT__regfile__DOT__registers_12),32);
	vcdp->fullBus  (c+56,(vlTOPp->Top__DOT__regfile__DOT__registers_13),32);
	vcdp->fullBus  (c+57,(vlTOPp->Top__DOT__regfile__DOT__registers_14),32);
	vcdp->fullBus  (c+58,(vlTOPp->Top__DOT__regfile__DOT__registers_15),32);
	vcdp->fullBus  (c+59,(vlTOPp->Top__DOT__regfile__DOT__registers_16),32);
	vcdp->fullBus  (c+60,(vlTOPp->Top__DOT__regfile__DOT__registers_17),32);
	vcdp->fullBus  (c+61,(vlTOPp->Top__DOT__regfile__DOT__registers_18),32);
	vcdp->fullBus  (c+62,(vlTOPp->Top__DOT__regfile__DOT__registers_19),32);
	vcdp->fullBus  (c+63,(vlTOPp->Top__DOT__regfile__DOT__registers_20),32);
	vcdp->fullBus  (c+64,(vlTOPp->Top__DOT__regfile__DOT__registers_21),32);
	vcdp->fullBus  (c+65,(vlTOPp->Top__DOT__regfile__DOT__registers_22),32);
	vcdp->fullBus  (c+66,(vlTOPp->Top__DOT__regfile__DOT__registers_23),32);
	vcdp->fullBus  (c+67,(vlTOPp->Top__DOT__regfile__DOT__registers_24),32);
	vcdp->fullBus  (c+68,(vlTOPp->Top__DOT__regfile__DOT__registers_25),32);
	vcdp->fullBus  (c+69,(vlTOPp->Top__DOT__regfile__DOT__registers_26),32);
	vcdp->fullBus  (c+70,(vlTOPp->Top__DOT__regfile__DOT__registers_27),32);
	vcdp->fullBus  (c+71,(vlTOPp->Top__DOT__regfile__DOT__registers_28),32);
	vcdp->fullBus  (c+72,(vlTOPp->Top__DOT__regfile__DOT__registers_29),32);
	vcdp->fullBus  (c+73,(vlTOPp->Top__DOT__regfile__DOT__registers_30),32);
	vcdp->fullBus  (c+74,(vlTOPp->Top__DOT__regfile__DOT__registers_31),32);
	vcdp->fullBit  (c+75,(vlTOPp->clock));
	vcdp->fullBit  (c+76,(vlTOPp->reset));
	vcdp->fullBus  (c+77,(vlTOPp->io_regout),32);
	vcdp->fullBit  (c+78,(1U));
    }
}
