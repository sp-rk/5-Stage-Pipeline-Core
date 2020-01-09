// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"              // For This
#include "VTop__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTop) {
    VTop__Syms* __restrict vlSymsp = __VlSymsp = new VTop__Syms(this, name());
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTop::__Vconfigure(VTop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTop::~VTop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTop::eval() {
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VTop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VTop::_eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VTop::_initial__TOP__1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_initial__TOP__1\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,159,0,5);
    // Body
    // INITIAL at /home/mohsin/Desktop/core/Ghouri/test_run_dir/examples/Top/Top.Instruction.mem.v:7
    __Vtemp1[0U] = 0x696e7374U;
    __Vtemp1[1U] = 0x73696e2fU;
    __Vtemp1[2U] = 0x2f6d6f68U;
    __Vtemp1[3U] = 0x686f6d65U;
    __Vtemp1[4U] = 0x2fU;
    VL_READMEM_W (true,32,1024, 0,5, __Vtemp1, vlTOPp->Top__DOT__Instruction__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VTop::_sequent__TOP__2(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__2\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__Top__DOT__memory__DOT__mem__v0,0,0);
    //char	__VpadToAlign49[1];
    VL_SIG16(__Vdlyvdim0__Top__DOT__memory__DOT__mem__v0,9,0);
    VL_SIG(__Vdlyvval__Top__DOT__memory__DOT__mem__v0,31,0);
    // Body
    __Vdlyvset__Top__DOT__memory__DOT__mem__v0 = 0U;
    // ALWAYS at Top.v:1412
    if (((~ ((0x33U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
	     & (3U == (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))) 
	 & ((0x33U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
	    & ((3U != (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
	       & (0x23U == (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))))) {
	__Vdlyvval__Top__DOT__memory__DOT__mem__v0 
	    = vlTOPp->Top__DOT__regfile_io_rs2;
	__Vdlyvset__Top__DOT__memory__DOT__mem__v0 = 1U;
	__Vdlyvdim0__Top__DOT__memory__DOT__mem__v0 
	    = (0xffU & (IData)((vlTOPp->Top__DOT__alu__DOT___GEN_22 
				>> 2U)));
    }
    // ALWAYS at Top.v:989
    vlTOPp->Top__DOT__regfile__DOT__registers_0 = ((IData)(vlTOPp->Top__DOT__control_io_regwrite)
						    ? 
						   ((0U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							 >> 7U)))
						     ? 0U
						     : 
						    ((0U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							  >> 7U)))
						      ? vlTOPp->Top__DOT__regfile_io_writedata
						      : 0U))
						    : 0U);
    // ALWAYS at Top.v:1000
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((1U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_1 = 0U;
	    }
	} else {
	    if ((1U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_1 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1011
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((2U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_2 = 0U;
	    }
	} else {
	    if ((2U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_2 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1022
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((3U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_3 = 0U;
	    }
	} else {
	    if ((3U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_3 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1033
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((4U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_4 = 0U;
	    }
	} else {
	    if ((4U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_4 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1044
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((5U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_5 = 0U;
	    }
	} else {
	    if ((5U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_5 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1055
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((6U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_6 = 0U;
	    }
	} else {
	    if ((6U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_6 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1066
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((7U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_7 = 0U;
	    }
	} else {
	    if ((7U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_7 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1077
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((8U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_8 = 0U;
	    }
	} else {
	    if ((8U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_8 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1088
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((9U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_9 = 0U;
	    }
	} else {
	    if ((9U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				 >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_9 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1099
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xaU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_10 = 0U;
	    }
	} else {
	    if ((0xaU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_10 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1110
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xbU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_11 = 0U;
	    }
	} else {
	    if ((0xbU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_11 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1121
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xcU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_12 = 0U;
	    }
	} else {
	    if ((0xcU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_12 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1132
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xdU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_13 = 0U;
	    }
	} else {
	    if ((0xdU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_13 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1143
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xeU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_14 = 0U;
	    }
	} else {
	    if ((0xeU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_14 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1154
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0xfU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_15 = 0U;
	    }
	} else {
	    if ((0xfU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				   >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_15 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1165
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x10U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_16 = 0U;
	    }
	} else {
	    if ((0x10U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_16 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1176
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x11U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_17 = 0U;
	    }
	} else {
	    if ((0x11U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_17 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1187
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x12U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_18 = 0U;
	    }
	} else {
	    if ((0x12U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_18 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1198
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x13U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_19 = 0U;
	    }
	} else {
	    if ((0x13U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_19 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1209
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x14U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_20 = 0U;
	    }
	} else {
	    if ((0x14U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_20 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1220
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x15U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_21 = 0U;
	    }
	} else {
	    if ((0x15U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_21 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1231
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x16U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_22 = 0U;
	    }
	} else {
	    if ((0x16U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_22 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1242
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x17U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_23 = 0U;
	    }
	} else {
	    if ((0x17U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_23 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1253
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x18U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_24 = 0U;
	    }
	} else {
	    if ((0x18U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_24 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1264
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x19U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_25 = 0U;
	    }
	} else {
	    if ((0x19U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_25 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1275
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1aU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_26 = 0U;
	    }
	} else {
	    if ((0x1aU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_26 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1286
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1bU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_27 = 0U;
	    }
	} else {
	    if ((0x1bU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_27 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1297
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1cU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_28 = 0U;
	    }
	} else {
	    if ((0x1cU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_28 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1308
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1dU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_29 = 0U;
	    }
	} else {
	    if ((0x1dU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_29 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1319
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1eU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_30 = 0U;
	    }
	} else {
	    if ((0x1eU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_30 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:1330
    if (vlTOPp->Top__DOT__control_io_regwrite) {
	if ((0U == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
			     >> 7U)))) {
	    if ((0x1fU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_31 = 0U;
	    }
	} else {
	    if ((0x1fU == (0x1fU & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
				    >> 7U)))) {
		vlTOPp->Top__DOT__regfile__DOT__registers_31 
		    = vlTOPp->Top__DOT__regfile_io_writedata;
	    }
	}
    }
    // ALWAYS at Top.v:87
    vlTOPp->Top__DOT__pc__DOT__reg__024 = vlTOPp->Top__DOT__pc_io_input;
    // ALWAYSPOST at Top.v:1414
    if (__Vdlyvset__Top__DOT__memory__DOT__mem__v0) {
	vlTOPp->Top__DOT__memory__DOT__mem[__Vdlyvdim0__Top__DOT__memory__DOT__mem__v0] 
	    = __Vdlyvval__Top__DOT__memory__DOT__mem__v0;
    }
    vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
	= vlTOPp->Top__DOT__Instruction__DOT__mem[(0x3ffU 
						   & (vlTOPp->Top__DOT__pc__DOT__reg__024 
						      >> 2U))];
}

void VTop::_settle__TOP__3(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__3\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
	= vlTOPp->Top__DOT__Instruction__DOT__mem[(0x3ffU 
						   & (vlTOPp->Top__DOT__pc__DOT__reg__024 
						      >> 2U))];
    vlTOPp->Top__DOT__control_io_regwrite = ((0x33U 
					      == (0x7fU 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					     | ((3U 
						 == 
						 (0x7fU 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
						| (0x23U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))));
    vlTOPp->Top__DOT__control_io_nxtpc = ((0x33U == 
					   (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					   ? 0U : (
						   (3U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						     ? 0U
						     : 
						    ((0x63U 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						      ? 1U
						      : 
						     ((0x13U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						       ? 0U
						       : 
						      ((0x67U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						        ? 3U
						        : 
						       ((0x6fU 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
							 ? 2U
							 : 0U)))))));
    vlTOPp->Top__DOT__immediate__DOT___T_72 = ((((0x80000000U 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)
						  ? 0x7ffU
						  : 0U) 
						<< 0x15U) 
					       | ((0x100000U 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0xbU)) 
						  | ((0xff000U 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data) 
						     | ((0x800U 
							 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							    >> 9U)) 
							| (0x7feU 
							   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							      >> 0x14U))))));
    vlTOPp->Top__DOT__control_io_aluop = ((0x33U == 
					   (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					   ? 0U : (
						   (3U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						    ? 4U
						    : 
						   ((0x23U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						     ? 5U
						     : 
						    ((0x63U 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						      ? 2U
						      : 
						     ((0x13U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						       ? 1U
						       : 
						      ((0x67U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						        ? 3U
						        : 
						       ((0x6fU 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
							 ? 3U
							 : 6U)))))));
    vlTOPp->Top__DOT__alucontrol__DOT___T_17 = ((8U 
						 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						    >> 0x1bU)) 
						| (7U 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0xcU)));
    vlTOPp->Top__DOT__control_io_opA = ((0x33U == (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					 ? 0U : ((3U 
						  == 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						  ? 0U
						  : 
						 ((0x23U 
						   == 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						   ? 0U
						   : 
						  ((0x63U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						    ? 0U
						    : 
						   ((0x13U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						     ? 0U
						     : 
						    ((0x67U 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						      ? 2U
						      : 
						     ((0x6fU 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						       ? 2U
						       : 3U)))))));
    vlTOPp->Top__DOT__immediate__DOT___T_57 = ((((0x80000000U 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)
						  ? 0xfffffU
						  : 0U) 
						<< 0xcU) 
					       | (0xfffU 
						  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						     >> 0x14U)));
    vlTOPp->Top__DOT__regfile_io_rs2 = ((0x1fU == (0x1fU 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0x14U)))
					 ? vlTOPp->Top__DOT__regfile__DOT__registers_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						    >> 0x14U)))
					     ? vlTOPp->Top__DOT__regfile__DOT__registers_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						     >> 0x14U)))
						 ? vlTOPp->Top__DOT__regfile__DOT__registers_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0x14U)))
						  ? vlTOPp->Top__DOT__regfile__DOT__registers_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						       >> 0x14U)))
						   ? vlTOPp->Top__DOT__regfile__DOT__registers_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							>> 0x14U)))
						    ? vlTOPp->Top__DOT__regfile__DOT__registers_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							 >> 0x14U)))
						     ? vlTOPp->Top__DOT__regfile__DOT__registers_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							  >> 0x14U)))
						      ? vlTOPp->Top__DOT__regfile__DOT__registers_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							   >> 0x14U)))
						       ? vlTOPp->Top__DOT__regfile__DOT__registers_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							    >> 0x14U)))
						        ? vlTOPp->Top__DOT__regfile__DOT__registers_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							     >> 0x14U)))
							 ? vlTOPp->Top__DOT__regfile__DOT__registers_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							      >> 0x14U)))
							  ? vlTOPp->Top__DOT__regfile__DOT__registers_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							       >> 0x14U)))
							   ? vlTOPp->Top__DOT__regfile__DOT__registers_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								>> 0x14U)))
							    ? vlTOPp->Top__DOT__regfile__DOT__registers_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								 >> 0x14U)))
							     ? vlTOPp->Top__DOT__regfile__DOT__registers_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								  >> 0x14U)))
							      ? vlTOPp->Top__DOT__regfile__DOT__registers_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								   >> 0x14U)))
							       ? vlTOPp->Top__DOT__regfile__DOT__registers_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								    >> 0x14U)))
							        ? vlTOPp->Top__DOT__regfile__DOT__registers_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								     >> 0x14U)))
								 ? vlTOPp->Top__DOT__regfile__DOT__registers_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								      >> 0x14U)))
								  ? vlTOPp->Top__DOT__regfile__DOT__registers_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								       >> 0x14U)))
								   ? vlTOPp->Top__DOT__regfile__DOT__registers_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									>> 0x14U)))
								    ? vlTOPp->Top__DOT__regfile__DOT__registers_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									 >> 0x14U)))
								     ? vlTOPp->Top__DOT__regfile__DOT__registers_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									  >> 0x14U)))
								      ? vlTOPp->Top__DOT__regfile__DOT__registers_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									   >> 0x14U)))
								       ? vlTOPp->Top__DOT__regfile__DOT__registers_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									    >> 0x14U)))
								        ? vlTOPp->Top__DOT__regfile__DOT__registers_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									     >> 0x14U)))
									 ? vlTOPp->Top__DOT__regfile__DOT__registers_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									      >> 0x14U)))
									  ? vlTOPp->Top__DOT__regfile__DOT__registers_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									       >> 0x14U)))
									   ? vlTOPp->Top__DOT__regfile__DOT__registers_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0x14U)))
									    ? vlTOPp->Top__DOT__regfile__DOT__registers_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0x14U)))
									     ? vlTOPp->Top__DOT__regfile__DOT__registers_1
									     : vlTOPp->Top__DOT__regfile__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__immediate__DOT__combined0 = (
						   (0xfe0U 
						    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						       >> 0x14U)) 
						   | (0x1fU 
						      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							 >> 7U)));
    vlTOPp->Top__DOT__regfile_io_rs1 = ((0x1fU == (0x1fU 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0xfU)))
					 ? vlTOPp->Top__DOT__regfile__DOT__registers_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						    >> 0xfU)))
					     ? vlTOPp->Top__DOT__regfile__DOT__registers_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						     >> 0xfU)))
						 ? vlTOPp->Top__DOT__regfile__DOT__registers_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0xfU)))
						  ? vlTOPp->Top__DOT__regfile__DOT__registers_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						       >> 0xfU)))
						   ? vlTOPp->Top__DOT__regfile__DOT__registers_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							>> 0xfU)))
						    ? vlTOPp->Top__DOT__regfile__DOT__registers_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							 >> 0xfU)))
						     ? vlTOPp->Top__DOT__regfile__DOT__registers_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							  >> 0xfU)))
						      ? vlTOPp->Top__DOT__regfile__DOT__registers_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							   >> 0xfU)))
						       ? vlTOPp->Top__DOT__regfile__DOT__registers_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							    >> 0xfU)))
						        ? vlTOPp->Top__DOT__regfile__DOT__registers_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							     >> 0xfU)))
							 ? vlTOPp->Top__DOT__regfile__DOT__registers_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							      >> 0xfU)))
							  ? vlTOPp->Top__DOT__regfile__DOT__registers_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							       >> 0xfU)))
							   ? vlTOPp->Top__DOT__regfile__DOT__registers_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								>> 0xfU)))
							    ? vlTOPp->Top__DOT__regfile__DOT__registers_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								 >> 0xfU)))
							     ? vlTOPp->Top__DOT__regfile__DOT__registers_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								  >> 0xfU)))
							      ? vlTOPp->Top__DOT__regfile__DOT__registers_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								   >> 0xfU)))
							       ? vlTOPp->Top__DOT__regfile__DOT__registers_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								    >> 0xfU)))
							        ? vlTOPp->Top__DOT__regfile__DOT__registers_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								     >> 0xfU)))
								 ? vlTOPp->Top__DOT__regfile__DOT__registers_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								      >> 0xfU)))
								  ? vlTOPp->Top__DOT__regfile__DOT__registers_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								       >> 0xfU)))
								   ? vlTOPp->Top__DOT__regfile__DOT__registers_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									>> 0xfU)))
								    ? vlTOPp->Top__DOT__regfile__DOT__registers_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									 >> 0xfU)))
								     ? vlTOPp->Top__DOT__regfile__DOT__registers_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									  >> 0xfU)))
								      ? vlTOPp->Top__DOT__regfile__DOT__registers_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									   >> 0xfU)))
								       ? vlTOPp->Top__DOT__regfile__DOT__registers_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									    >> 0xfU)))
								        ? vlTOPp->Top__DOT__regfile__DOT__registers_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									     >> 0xfU)))
									 ? vlTOPp->Top__DOT__regfile__DOT__registers_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									      >> 0xfU)))
									  ? vlTOPp->Top__DOT__regfile__DOT__registers_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									       >> 0xfU)))
									   ? vlTOPp->Top__DOT__regfile__DOT__registers_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0xfU)))
									    ? vlTOPp->Top__DOT__regfile__DOT__registers_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0xfU)))
									     ? vlTOPp->Top__DOT__regfile__DOT__registers_1
									     : vlTOPp->Top__DOT__regfile__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__control__DOT___GEN_17 = ((0x67U 
						!= 
						(0x7fU 
						 & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					       & (0x6fU 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)));
}

VL_INLINE_OPT void VTop::_sequent__TOP__4(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__4\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__control_io_regwrite = ((0x33U 
					      == (0x7fU 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					     | ((3U 
						 == 
						 (0x7fU 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
						| (0x23U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))));
    vlTOPp->Top__DOT__control_io_nxtpc = ((0x33U == 
					   (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					   ? 0U : (
						   (3U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						    ? 0U
						    : 
						   ((0x23U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						     ? 0U
						     : 
						    ((0x63U 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						      ? 1U
						      : 
						     ((0x13U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						       ? 0U
						       : 
						      ((0x67U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						        ? 3U
						        : 
						       ((0x6fU 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
							 ? 2U
							 : 0U)))))));
    vlTOPp->Top__DOT__immediate__DOT___T_72 = ((((0x80000000U 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)
						  ? 0x7ffU
						  : 0U) 
						<< 0x15U) 
					       | ((0x100000U 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0xbU)) 
						  | ((0xff000U 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data) 
						     | ((0x800U 
							 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							    >> 9U)) 
							| (0x7feU 
							   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							      >> 0x14U))))));
    vlTOPp->Top__DOT__control_io_aluop = ((0x33U == 
					   (0x7fU & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					   ? 0U : (
						   (3U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						    ? 4U
						    : 
						   ((0x23U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						     ? 5U
						     : 
						    ((0x63U 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						      ? 2U
						      : 
						     ((0x13U 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						       ? 1U
						       : 
						      ((0x67U 
							== 
							(0x7fU 
							 & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						        ? 3U
						        : 
						       ((0x6fU 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
							 ? 3U
							 : 6U)))))));
    vlTOPp->Top__DOT__alucontrol__DOT___T_17 = ((8U 
						 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						    >> 0x1bU)) 
						| (7U 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0xcU)));
    vlTOPp->Top__DOT__control_io_opA = ((0x33U == (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					 ? 0U : ((3U 
						  == 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						  ? 0U
						  : 
						 ((0x23U 
						   == 
						   (0x7fU 
						    & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						   ? 0U
						   : 
						  ((0x63U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						    ? 0U
						    : 
						   ((0x13U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						     ? 0U
						     : 
						    ((0x67U 
						      == 
						      (0x7fU 
						       & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						      ? 2U
						      : 
						     ((0x6fU 
						       == 
						       (0x7fU 
							& vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
						       ? 2U
						       : 3U)))))));
    vlTOPp->Top__DOT__immediate__DOT___T_57 = ((((0x80000000U 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)
						  ? 0xfffffU
						  : 0U) 
						<< 0xcU) 
					       | (0xfffU 
						  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						     >> 0x14U)));
    vlTOPp->Top__DOT__regfile_io_rs2 = ((0x1fU == (0x1fU 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0x14U)))
					 ? vlTOPp->Top__DOT__regfile__DOT__registers_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						    >> 0x14U)))
					     ? vlTOPp->Top__DOT__regfile__DOT__registers_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						     >> 0x14U)))
						 ? vlTOPp->Top__DOT__regfile__DOT__registers_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0x14U)))
						  ? vlTOPp->Top__DOT__regfile__DOT__registers_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						       >> 0x14U)))
						   ? vlTOPp->Top__DOT__regfile__DOT__registers_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							>> 0x14U)))
						    ? vlTOPp->Top__DOT__regfile__DOT__registers_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							 >> 0x14U)))
						     ? vlTOPp->Top__DOT__regfile__DOT__registers_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							  >> 0x14U)))
						      ? vlTOPp->Top__DOT__regfile__DOT__registers_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							   >> 0x14U)))
						       ? vlTOPp->Top__DOT__regfile__DOT__registers_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							    >> 0x14U)))
						        ? vlTOPp->Top__DOT__regfile__DOT__registers_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							     >> 0x14U)))
							 ? vlTOPp->Top__DOT__regfile__DOT__registers_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							      >> 0x14U)))
							  ? vlTOPp->Top__DOT__regfile__DOT__registers_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							       >> 0x14U)))
							   ? vlTOPp->Top__DOT__regfile__DOT__registers_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								>> 0x14U)))
							    ? vlTOPp->Top__DOT__regfile__DOT__registers_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								 >> 0x14U)))
							     ? vlTOPp->Top__DOT__regfile__DOT__registers_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								  >> 0x14U)))
							      ? vlTOPp->Top__DOT__regfile__DOT__registers_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								   >> 0x14U)))
							       ? vlTOPp->Top__DOT__regfile__DOT__registers_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								    >> 0x14U)))
							        ? vlTOPp->Top__DOT__regfile__DOT__registers_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								     >> 0x14U)))
								 ? vlTOPp->Top__DOT__regfile__DOT__registers_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								      >> 0x14U)))
								  ? vlTOPp->Top__DOT__regfile__DOT__registers_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								       >> 0x14U)))
								   ? vlTOPp->Top__DOT__regfile__DOT__registers_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									>> 0x14U)))
								    ? vlTOPp->Top__DOT__regfile__DOT__registers_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									 >> 0x14U)))
								     ? vlTOPp->Top__DOT__regfile__DOT__registers_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									  >> 0x14U)))
								      ? vlTOPp->Top__DOT__regfile__DOT__registers_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									   >> 0x14U)))
								       ? vlTOPp->Top__DOT__regfile__DOT__registers_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									    >> 0x14U)))
								        ? vlTOPp->Top__DOT__regfile__DOT__registers_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									     >> 0x14U)))
									 ? vlTOPp->Top__DOT__regfile__DOT__registers_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									      >> 0x14U)))
									  ? vlTOPp->Top__DOT__regfile__DOT__registers_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									       >> 0x14U)))
									   ? vlTOPp->Top__DOT__regfile__DOT__registers_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0x14U)))
									    ? vlTOPp->Top__DOT__regfile__DOT__registers_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0x14U)))
									     ? vlTOPp->Top__DOT__regfile__DOT__registers_1
									     : vlTOPp->Top__DOT__regfile__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__immediate__DOT__combined0 = (
						   (0xfe0U 
						    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						       >> 0x14U)) 
						   | (0x1fU 
						      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							 >> 7U)));
    vlTOPp->Top__DOT__regfile_io_rs1 = ((0x1fU == (0x1fU 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0xfU)))
					 ? vlTOPp->Top__DOT__regfile__DOT__registers_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						    >> 0xfU)))
					     ? vlTOPp->Top__DOT__regfile__DOT__registers_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						     >> 0xfU)))
						 ? vlTOPp->Top__DOT__regfile__DOT__registers_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						      >> 0xfU)))
						  ? vlTOPp->Top__DOT__regfile__DOT__registers_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						       >> 0xfU)))
						   ? vlTOPp->Top__DOT__regfile__DOT__registers_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							>> 0xfU)))
						    ? vlTOPp->Top__DOT__regfile__DOT__registers_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							 >> 0xfU)))
						     ? vlTOPp->Top__DOT__regfile__DOT__registers_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							  >> 0xfU)))
						      ? vlTOPp->Top__DOT__regfile__DOT__registers_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							   >> 0xfU)))
						       ? vlTOPp->Top__DOT__regfile__DOT__registers_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							    >> 0xfU)))
						        ? vlTOPp->Top__DOT__regfile__DOT__registers_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							     >> 0xfU)))
							 ? vlTOPp->Top__DOT__regfile__DOT__registers_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							      >> 0xfU)))
							  ? vlTOPp->Top__DOT__regfile__DOT__registers_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							       >> 0xfU)))
							   ? vlTOPp->Top__DOT__regfile__DOT__registers_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								>> 0xfU)))
							    ? vlTOPp->Top__DOT__regfile__DOT__registers_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								 >> 0xfU)))
							     ? vlTOPp->Top__DOT__regfile__DOT__registers_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								  >> 0xfU)))
							      ? vlTOPp->Top__DOT__regfile__DOT__registers_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								   >> 0xfU)))
							       ? vlTOPp->Top__DOT__regfile__DOT__registers_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								    >> 0xfU)))
							        ? vlTOPp->Top__DOT__regfile__DOT__registers_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								     >> 0xfU)))
								 ? vlTOPp->Top__DOT__regfile__DOT__registers_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								      >> 0xfU)))
								  ? vlTOPp->Top__DOT__regfile__DOT__registers_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
								       >> 0xfU)))
								   ? vlTOPp->Top__DOT__regfile__DOT__registers_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									>> 0xfU)))
								    ? vlTOPp->Top__DOT__regfile__DOT__registers_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									 >> 0xfU)))
								     ? vlTOPp->Top__DOT__regfile__DOT__registers_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									  >> 0xfU)))
								      ? vlTOPp->Top__DOT__regfile__DOT__registers_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									   >> 0xfU)))
								       ? vlTOPp->Top__DOT__regfile__DOT__registers_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									    >> 0xfU)))
								        ? vlTOPp->Top__DOT__regfile__DOT__registers_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									     >> 0xfU)))
									 ? vlTOPp->Top__DOT__regfile__DOT__registers_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									      >> 0xfU)))
									  ? vlTOPp->Top__DOT__regfile__DOT__registers_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
									       >> 0xfU)))
									   ? vlTOPp->Top__DOT__regfile__DOT__registers_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0xfU)))
									    ? vlTOPp->Top__DOT__regfile__DOT__registers_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0xfU)))
									     ? vlTOPp->Top__DOT__regfile__DOT__registers_1
									     : vlTOPp->Top__DOT__regfile__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__control__DOT___GEN_17 = ((0x67U 
						!= 
						(0x7fU 
						 & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					       & (0x6fU 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)));
    vlTOPp->Top__DOT__alucontrol_io_out = ((0U == (IData)(vlTOPp->Top__DOT__control_io_aluop))
					    ? (IData)(vlTOPp->Top__DOT__alucontrol__DOT___T_17)
					    : ((4U 
						== (IData)(vlTOPp->Top__DOT__control_io_aluop))
					        ? 0U
					        : (
						   (5U 
						    == (IData)(vlTOPp->Top__DOT__control_io_aluop))
						    ? 0U
						    : 
						   ((2U 
						     == (IData)(vlTOPp->Top__DOT__control_io_aluop))
						     ? 
						    (0x10U 
						     | (7U 
							& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							   >> 0xcU)))
						     : 
						    ((1U 
						      == (IData)(vlTOPp->Top__DOT__control_io_aluop))
						      ? 
						     ((5U 
						       == 
						       (7U 
							& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							   >> 0xcU)))
						       ? (IData)(vlTOPp->Top__DOT__alucontrol__DOT___T_17)
						       : 
						      (7U 
						       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							  >> 0xcU)))
						      : 
						     ((3U 
						       == (IData)(vlTOPp->Top__DOT__control_io_aluop))
						       ? 0x1fU
						       : 0U))))));
    vlTOPp->Top__DOT__immediate__DOT___T_48 = ((((0x800U 
						  & (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0))
						  ? 0x7ffffU
						  : 0U) 
						<< 0xdU) 
					       | ((0x1000U 
						   & ((IData)(vlTOPp->Top__DOT__immediate__DOT__combined0) 
						      << 1U)) 
						  | ((0x800U 
						      & ((IData)(vlTOPp->Top__DOT__immediate__DOT__combined0) 
							 << 0xbU)) 
						     | (0x7feU 
							& (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0)))));
    vlTOPp->Top__DOT__alu_io_rs1 = (((0U == (IData)(vlTOPp->Top__DOT__control_io_opA)) 
				     | (3U == (IData)(vlTOPp->Top__DOT__control_io_opA)))
				     ? vlTOPp->Top__DOT__regfile_io_rs1
				     : ((IData)(4U) 
					+ vlTOPp->Top__DOT__pc__DOT__reg__024));
    vlTOPp->Top__DOT__control_io_opB = ((0x33U != (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					& ((3U == (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					   | ((0x23U 
					       == (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					      | ((0x63U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
						 & ((0x13U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
						    | (IData)(vlTOPp->Top__DOT__control__DOT___GEN_17))))));
    vlTOPp->Top__DOT__control_io_extend = ((0x33U == 
					    (0x7fU 
					     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					    ? 0U : 
					   ((3U == 
					     (0x7fU 
					      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					     ? 0U : 
					    ((0x23U 
					      == (0x7fU 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					      ? 2U : 
					     ((0x63U 
					       != (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					      & ((0x13U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
						 & (IData)(vlTOPp->Top__DOT__control__DOT___GEN_17))))));
}

void VTop::_settle__TOP__5(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__5\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alucontrol_io_out = ((0U == (IData)(vlTOPp->Top__DOT__control_io_aluop))
					    ? (IData)(vlTOPp->Top__DOT__alucontrol__DOT___T_17)
					    : ((4U 
						== (IData)(vlTOPp->Top__DOT__control_io_aluop))
					        ? 0U
					        : (
						   (5U 
						    == (IData)(vlTOPp->Top__DOT__control_io_aluop))
						    ? 0U
						    : 
						   ((2U 
						     == (IData)(vlTOPp->Top__DOT__control_io_aluop))
						     ? 
						    (0x10U 
						     | (7U 
							& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							   >> 0xcU)))
						     : 
						    ((1U 
						      == (IData)(vlTOPp->Top__DOT__control_io_aluop))
						      ? 
						     ((5U 
						       == 
						       (7U 
							& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							   >> 0xcU)))
						       ? (IData)(vlTOPp->Top__DOT__alucontrol__DOT___T_17)
						       : 
						      (7U 
						       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
							  >> 0xcU)))
						      : 
						     ((3U 
						       == (IData)(vlTOPp->Top__DOT__control_io_aluop))
						       ? 0x1fU
						       : 0U))))));
    vlTOPp->Top__DOT__immediate__DOT___T_48 = ((((0x800U 
						  & (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0))
						  ? 0x7ffffU
						  : 0U) 
						<< 0xdU) 
					       | ((0x1000U 
						   & ((IData)(vlTOPp->Top__DOT__immediate__DOT__combined0) 
						      << 1U)) 
						  | ((0x800U 
						      & ((IData)(vlTOPp->Top__DOT__immediate__DOT__combined0) 
							 << 0xbU)) 
						     | (0x7feU 
							& (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0)))));
    vlTOPp->Top__DOT__alu_io_rs1 = (((0U == (IData)(vlTOPp->Top__DOT__control_io_opA)) 
				     | (3U == (IData)(vlTOPp->Top__DOT__control_io_opA)))
				     ? vlTOPp->Top__DOT__regfile_io_rs1
				     : ((IData)(4U) 
					+ vlTOPp->Top__DOT__pc__DOT__reg__024));
    vlTOPp->Top__DOT__control_io_opB = ((0x33U != (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					& ((3U == (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					   | ((0x23U 
					       == (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					      | ((0x63U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
						 & ((0x13U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
						    | (IData)(vlTOPp->Top__DOT__control__DOT___GEN_17))))));
    vlTOPp->Top__DOT__control_io_extend = ((0x33U == 
					    (0x7fU 
					     & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					    ? 0U : 
					   ((3U == 
					     (0x7fU 
					      & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					     ? 0U : 
					    ((0x23U 
					      == (0x7fU 
						  & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data))
					      ? 2U : 
					     ((0x63U 
					       != (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					      & ((0x13U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
						 & (IData)(vlTOPp->Top__DOT__control__DOT___GEN_17))))));
    vlTOPp->Top__DOT__pc_io_input = ((0U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
				      ? ((IData)(4U) 
					 + vlTOPp->Top__DOT__pc__DOT__reg__024)
				      : ((3U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
					  ? (0xfffffffeU 
					     & (vlTOPp->Top__DOT__regfile_io_rs1 
						+ vlTOPp->Top__DOT__immediate__DOT___T_57))
					  : ((2U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
					      ? (vlTOPp->Top__DOT__immediate__DOT___T_72 
						 + vlTOPp->Top__DOT__pc__DOT__reg__024)
					      : (vlTOPp->Top__DOT__immediate__DOT___T_48 
						 + vlTOPp->Top__DOT__pc__DOT__reg__024))));
    vlTOPp->Top__DOT__alu_io_rs2 = (((0U == (IData)(vlTOPp->Top__DOT__control_io_extend)) 
				     & (IData)(vlTOPp->Top__DOT__control_io_opB))
				     ? vlTOPp->Top__DOT__immediate__DOT___T_57
				     : (((2U == (IData)(vlTOPp->Top__DOT__control_io_extend)) 
					 & (IData)(vlTOPp->Top__DOT__control_io_opB))
					 ? ((((0x800U 
					       & (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0))
					       ? 0xfffffU
					       : 0U) 
					     << 0xcU) 
					    | ((0xfe0U 
						& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						   >> 0x14U)) 
					       | (0x1fU 
						  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						     >> 7U))))
					 : (((1U == (IData)(vlTOPp->Top__DOT__control_io_extend)) 
					     & (IData)(vlTOPp->Top__DOT__control_io_opB))
					     ? (IData)(
						       (VL_ULL(0x7fffffffffff) 
							& ((QData)((IData)(
									   ((((0x80000000U 
									       & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)
									       ? 0xfffU
									       : 0U) 
									     << 0x14U) 
									    | (0xfffffU 
									       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0xcU))))) 
							   << 0xcU)))
					     : vlTOPp->Top__DOT__regfile_io_rs2)));
}

VL_INLINE_OPT void VTop::_sequent__TOP__6(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__6\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__pc_io_input = ((0U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
				      ? ((IData)(4U) 
					 + vlTOPp->Top__DOT__pc__DOT__reg__024)
				      : ((3U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
					  ? (0xfffffffeU 
					     & (vlTOPp->Top__DOT__regfile_io_rs1 
						+ vlTOPp->Top__DOT__immediate__DOT___T_57))
					  : ((2U == (IData)(vlTOPp->Top__DOT__control_io_nxtpc))
					      ? (vlTOPp->Top__DOT__immediate__DOT___T_72 
						 + vlTOPp->Top__DOT__pc__DOT__reg__024)
					      : (vlTOPp->Top__DOT__immediate__DOT___T_48 
						 + vlTOPp->Top__DOT__pc__DOT__reg__024))));
    vlTOPp->Top__DOT__alu_io_rs2 = (((0U == (IData)(vlTOPp->Top__DOT__control_io_extend)) 
				     & (IData)(vlTOPp->Top__DOT__control_io_opB))
				     ? vlTOPp->Top__DOT__immediate__DOT___T_57
				     : (((2U == (IData)(vlTOPp->Top__DOT__control_io_extend)) 
					 & (IData)(vlTOPp->Top__DOT__control_io_opB))
					 ? ((((0x800U 
					       & (IData)(vlTOPp->Top__DOT__immediate__DOT__combined0))
					       ? 0xfffffU
					       : 0U) 
					     << 0xcU) 
					    | ((0xfe0U 
						& (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						   >> 0x14U)) 
					       | (0x1fU 
						  & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
						     >> 7U))))
					 : (((1U == (IData)(vlTOPp->Top__DOT__control_io_extend)) 
					     & (IData)(vlTOPp->Top__DOT__control_io_opB))
					     ? (IData)(
						       (VL_ULL(0x7fffffffffff) 
							& ((QData)((IData)(
									   ((((0x80000000U 
									       & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)
									       ? 0xfffU
									       : 0U) 
									     << 0x14U) 
									    | (0xfffffU 
									       & (vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data 
										>> 0xcU))))) 
							   << 0xcU)))
					     : vlTOPp->Top__DOT__regfile_io_rs2)));
    vlTOPp->Top__DOT__alu__DOT___T_26 = VL_LTS_III(1,32,32, vlTOPp->Top__DOT__alu_io_rs1, vlTOPp->Top__DOT__alu_io_rs2);
    vlTOPp->Top__DOT__alu__DOT___T_46 = VL_SHIFTRS_III(32,32,5, vlTOPp->Top__DOT__alu_io_rs1, 
						       (0x1fU 
							& vlTOPp->Top__DOT__alu_io_rs2));
    vlTOPp->Top__DOT__alu__DOT___T_81 = VL_GTES_III(1,32,32, vlTOPp->Top__DOT__alu_io_rs1, vlTOPp->Top__DOT__alu_io_rs2);
}

void VTop::_settle__TOP__7(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__7\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu__DOT___T_26 = VL_LTS_III(1,32,32, vlTOPp->Top__DOT__alu_io_rs1, vlTOPp->Top__DOT__alu_io_rs2);
    vlTOPp->Top__DOT__alu__DOT___T_46 = VL_SHIFTRS_III(32,32,5, vlTOPp->Top__DOT__alu_io_rs1, 
						       (0x1fU 
							& vlTOPp->Top__DOT__alu_io_rs2));
    vlTOPp->Top__DOT__alu__DOT___T_81 = VL_GTES_III(1,32,32, vlTOPp->Top__DOT__alu_io_rs1, vlTOPp->Top__DOT__alu_io_rs2);
    vlTOPp->Top__DOT__alu__DOT___GEN_20 = ((2U == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
					    ? ((0xfffffffcU 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_26)
									     ? 1U
									     : 0U) 
									   >> 1U)))) 
						   << 2U)) 
					       | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_26)
						   ? 1U
						   : 0U))
					    : (((3U 
						 == (IData)(vlTOPp->Top__DOT__alucontrol_io_out)) 
						| (0x16U 
						   == (IData)(vlTOPp->Top__DOT__alucontrol_io_out)))
					        ? (
						   (0xfffffffcU 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (((vlTOPp->Top__DOT__alu_io_rs1 
										< vlTOPp->Top__DOT__alu_io_rs2)
										 ? 1U
										 : 0U) 
									       >> 1U)))) 
						       << 2U)) 
						   | ((vlTOPp->Top__DOT__alu_io_rs1 
						       < vlTOPp->Top__DOT__alu_io_rs2)
						       ? 1U
						       : 0U))
					        : (
						   (4U 
						    == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						    ? 
						   (vlTOPp->Top__DOT__alu_io_rs1 
						    ^ vlTOPp->Top__DOT__alu_io_rs2)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						     ? vlTOPp->Top__DOT__alu__DOT___T_46
						     : 
						    ((6U 
						      == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						      ? 
						     (vlTOPp->Top__DOT__alu_io_rs1 
						      | vlTOPp->Top__DOT__alu_io_rs2)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						       ? 
						      (vlTOPp->Top__DOT__alu_io_rs1 
						       & vlTOPp->Top__DOT__alu_io_rs2)
						       : 
						      ((8U 
							== (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						        ? 
						       (vlTOPp->Top__DOT__alu_io_rs1 
							- vlTOPp->Top__DOT__alu_io_rs2)
						        : 
						       ((0xdU 
							 == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							 ? vlTOPp->Top__DOT__alu__DOT___T_46
							 : 
							((0x10U 
							  == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							  ? 
							 ((0xfffffffcU 
							   & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->Top__DOT__alu_io_rs1 
										== vlTOPp->Top__DOT__alu_io_rs2)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							      << 2U)) 
							  | ((vlTOPp->Top__DOT__alu_io_rs1 
							      == vlTOPp->Top__DOT__alu_io_rs2)
							      ? 1U
							      : 0U))
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							   ? 
							  ((0xfffffffcU 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->Top__DOT__alu_io_rs1 
										!= vlTOPp->Top__DOT__alu_io_rs2)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							       << 2U)) 
							   | ((vlTOPp->Top__DOT__alu_io_rs1 
							       != vlTOPp->Top__DOT__alu_io_rs2)
							       ? 1U
							       : 0U))
							   : 
							  ((0x14U 
							    == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							    ? 
							   ((0xfffffffcU 
							     & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_26)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								<< 2U)) 
							    | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_26)
							        ? 1U
							        : 0U))
							    : 
							   ((0x15U 
							     == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							     ? 
							    ((0xfffffffcU 
							      & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_81)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								 << 2U)) 
							     | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_81)
								 ? 1U
								 : 0U))
							     : 
							    ((0x17U 
							      == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							      ? 
							     ((0xfffffffcU 
							       & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_81)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								  << 2U)) 
							      | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_81)
								  ? 1U
								  : 0U))
							      : vlTOPp->Top__DOT__alu_io_rs1)))))))))))));
}

VL_INLINE_OPT void VTop::_sequent__TOP__8(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__8\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu__DOT___GEN_20 = ((2U == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
					    ? ((0xfffffffcU 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_26)
									     ? 1U
									     : 0U) 
									   >> 1U)))) 
						   << 2U)) 
					       | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_26)
						   ? 1U
						   : 0U))
					    : (((3U 
						 == (IData)(vlTOPp->Top__DOT__alucontrol_io_out)) 
						| (0x16U 
						   == (IData)(vlTOPp->Top__DOT__alucontrol_io_out)))
					        ? (
						   (0xfffffffcU 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (((vlTOPp->Top__DOT__alu_io_rs1 
										< vlTOPp->Top__DOT__alu_io_rs2)
										 ? 1U
										 : 0U) 
									       >> 1U)))) 
						       << 2U)) 
						   | ((vlTOPp->Top__DOT__alu_io_rs1 
						       < vlTOPp->Top__DOT__alu_io_rs2)
						       ? 1U
						       : 0U))
					        : (
						   (4U 
						    == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						    ? 
						   (vlTOPp->Top__DOT__alu_io_rs1 
						    ^ vlTOPp->Top__DOT__alu_io_rs2)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						     ? vlTOPp->Top__DOT__alu__DOT___T_46
						     : 
						    ((6U 
						      == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						      ? 
						     (vlTOPp->Top__DOT__alu_io_rs1 
						      | vlTOPp->Top__DOT__alu_io_rs2)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						       ? 
						      (vlTOPp->Top__DOT__alu_io_rs1 
						       & vlTOPp->Top__DOT__alu_io_rs2)
						       : 
						      ((8U 
							== (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						        ? 
						       (vlTOPp->Top__DOT__alu_io_rs1 
							- vlTOPp->Top__DOT__alu_io_rs2)
						        : 
						       ((0xdU 
							 == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							 ? vlTOPp->Top__DOT__alu__DOT___T_46
							 : 
							((0x10U 
							  == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							  ? 
							 ((0xfffffffcU 
							   & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->Top__DOT__alu_io_rs1 
										== vlTOPp->Top__DOT__alu_io_rs2)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							      << 2U)) 
							  | ((vlTOPp->Top__DOT__alu_io_rs1 
							      == vlTOPp->Top__DOT__alu_io_rs2)
							      ? 1U
							      : 0U))
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							   ? 
							  ((0xfffffffcU 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& (((vlTOPp->Top__DOT__alu_io_rs1 
										!= vlTOPp->Top__DOT__alu_io_rs2)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							       << 2U)) 
							   | ((vlTOPp->Top__DOT__alu_io_rs1 
							       != vlTOPp->Top__DOT__alu_io_rs2)
							       ? 1U
							       : 0U))
							   : 
							  ((0x14U 
							    == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							    ? 
							   ((0xfffffffcU 
							     & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_26)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								<< 2U)) 
							    | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_26)
							        ? 1U
							        : 0U))
							    : 
							   ((0x15U 
							     == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							     ? 
							    ((0xfffffffcU 
							      & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_81)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								 << 2U)) 
							     | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_81)
								 ? 1U
								 : 0U))
							     : 
							    ((0x17U 
							      == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
							      ? 
							     ((0xfffffffcU 
							       & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_81)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								  << 2U)) 
							      | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_81)
								  ? 1U
								  : 0U))
							      : vlTOPp->Top__DOT__alu_io_rs1)))))))))))));
    vlTOPp->Top__DOT__alu__DOT___GEN_22 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->Top__DOT__alu_io_rs1 
										+ vlTOPp->Top__DOT__alu_io_rs2) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->Top__DOT__alu_io_rs1 
								     + vlTOPp->Top__DOT__alu_io_rs2))))
					       : ((1U 
						   == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						   ? 
						  ((((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__alu_io_rs1 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->Top__DOT__alu_io_rs1))) 
						   << 
						   (0x1fU 
						    & vlTOPp->Top__DOT__alu_io_rs2))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__alu__DOT___GEN_20 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_20))))));
}

void VTop::_settle__TOP__9(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__9\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu__DOT___GEN_22 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->Top__DOT__alu_io_rs1 
										+ vlTOPp->Top__DOT__alu_io_rs2) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->Top__DOT__alu_io_rs1 
								     + vlTOPp->Top__DOT__alu_io_rs2))))
					       : ((1U 
						   == (IData)(vlTOPp->Top__DOT__alucontrol_io_out))
						   ? 
						  ((((QData)((IData)(
								     (0x7fffffffU 
								      & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__alu_io_rs1 
										>> 0x1fU))))))) 
						     << 0x20U) 
						    | (QData)((IData)(vlTOPp->Top__DOT__alu_io_rs1))) 
						   << 
						   (0x1fU 
						    & vlTOPp->Top__DOT__alu_io_rs2))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__alu__DOT___GEN_20 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_20))))));
    vlTOPp->Top__DOT__memory__DOT__mem___05FT_19_data 
	= vlTOPp->Top__DOT__memory__DOT__mem[(0xffU 
					      & (IData)(
							(vlTOPp->Top__DOT__alu__DOT___GEN_22 
							 >> 2U)))];
}

VL_INLINE_OPT void VTop::_sequent__TOP__10(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__10\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__memory__DOT__mem___05FT_19_data 
	= vlTOPp->Top__DOT__memory__DOT__mem[(0xffU 
					      & (IData)(
							(vlTOPp->Top__DOT__alu__DOT___GEN_22 
							 >> 2U)))];
    vlTOPp->Top__DOT__regfile_io_writedata = (((0x33U 
						!= 
						(0x7fU 
						 & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					       & (3U 
						  == 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))
					       ? vlTOPp->Top__DOT__memory__DOT__mem___05FT_19_data
					       : (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22));
}

void VTop::_settle__TOP__11(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__11\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__regfile_io_writedata = (((0x33U 
						!= 
						(0x7fU 
						 & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)) 
					       & (3U 
						  == 
						  (0x7fU 
						   & vlTOPp->Top__DOT__Instruction__DOT__mem___05FT_11_data)))
					       ? vlTOPp->Top__DOT__memory__DOT__mem___05FT_19_data
					       : (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22));
    vlTOPp->io_regout = vlTOPp->Top__DOT__regfile_io_writedata;
}

VL_INLINE_OPT void VTop::_sequent__TOP__12(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__12\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_regout = vlTOPp->Top__DOT__regfile_io_writedata;
}

void VTop::_eval(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTop::_eval_initial(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval_initial\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VTop::final() {
    VL_DEBUG_IF(VL_PRINTF("    VTop::final\n"); );
    // Variables
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop::_eval_settle(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval_settle\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
}

VL_INLINE_OPT QData VTop::_change_request(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_change_request\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_regout = VL_RAND_RESET_I(32);
    Top__DOT__pc_io_input = VL_RAND_RESET_I(32);
    Top__DOT__control_io_regwrite = VL_RAND_RESET_I(1);
    Top__DOT__control_io_aluop = VL_RAND_RESET_I(3);
    Top__DOT__control_io_opA = VL_RAND_RESET_I(2);
    Top__DOT__control_io_opB = VL_RAND_RESET_I(1);
    Top__DOT__control_io_extend = VL_RAND_RESET_I(2);
    Top__DOT__control_io_nxtpc = VL_RAND_RESET_I(2);
    Top__DOT__alu_io_rs1 = VL_RAND_RESET_I(32);
    Top__DOT__alu_io_rs2 = VL_RAND_RESET_I(32);
    Top__DOT__alucontrol_io_out = VL_RAND_RESET_I(5);
    Top__DOT__regfile_io_writedata = VL_RAND_RESET_I(32);
    Top__DOT__regfile_io_rs1 = VL_RAND_RESET_I(32);
    Top__DOT__regfile_io_rs2 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Top__DOT__Instruction__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__Instruction__DOT__mem___05FT_11_data = VL_RAND_RESET_I(32);
    Top__DOT__pc__DOT__reg__024 = VL_RAND_RESET_I(32);
    Top__DOT__control__DOT___GEN_17 = VL_RAND_RESET_I(1);
    Top__DOT__immediate__DOT__combined0 = VL_RAND_RESET_I(12);
    Top__DOT__immediate__DOT___T_48 = VL_RAND_RESET_I(32);
    Top__DOT__immediate__DOT___T_57 = VL_RAND_RESET_I(32);
    Top__DOT__immediate__DOT___T_72 = VL_RAND_RESET_I(32);
    Top__DOT__alu__DOT___T_26 = VL_RAND_RESET_I(1);
    Top__DOT__alu__DOT___T_46 = VL_RAND_RESET_I(32);
    Top__DOT__alu__DOT___T_81 = VL_RAND_RESET_I(1);
    Top__DOT__alu__DOT___GEN_20 = VL_RAND_RESET_I(32);
    Top__DOT__alu__DOT___GEN_22 = VL_RAND_RESET_Q(63);
    Top__DOT__alucontrol__DOT___T_17 = VL_RAND_RESET_I(5);
    Top__DOT__regfile__DOT__registers_0 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_1 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_2 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_3 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_4 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_5 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_6 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_7 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_8 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_9 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_10 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_11 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_12 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_13 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_14 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_15 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_16 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_17 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_18 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_19 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_20 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_21 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_22 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_23 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_24 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_25 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_26 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_27 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_28 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_29 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_30 = VL_RAND_RESET_I(32);
    Top__DOT__regfile__DOT__registers_31 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Top__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__memory__DOT__mem___05FT_19_data = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VTop::_configure_coverage(VTop__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
