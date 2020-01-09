// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef _VTop___024unit_H_
#define _VTop___024unit_H_

#include "verilated.h"
class VTop__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTop___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    VTop__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VTop___024unit& operator= (const VTop___024unit&);	///< Copying not allowed
    VTop___024unit(const VTop___024unit&);	///< Copying not allowed
  public:
    VTop___024unit(const char* name="TOP");
    ~VTop___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VTop__Syms* symsp, bool first);
  private:
    void	_configure_coverage(VTop__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
