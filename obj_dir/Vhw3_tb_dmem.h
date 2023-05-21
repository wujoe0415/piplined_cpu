// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhw3_tb.h for the primary calling header

#ifndef VERILATED_VHW3_TB_DMEM_H_
#define VERILATED_VHW3_TB_DMEM_H_  // guard

#include "verilated.h"

class Vhw3_tb__Syms;
VL_MODULE(Vhw3_tb_dmem) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__addr,5,0);
    VL_IN8(__PVT__we,0,0);
    VL_IN(__PVT__wdata,31,0);
    VL_OUT(__PVT__rdata,31,0);
    IData/*31:0*/ __PVT__idx;
    VlUnpacked<IData/*31:0*/, 16> RAM;

    // INTERNAL VARIABLES
    Vhw3_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vhw3_tb_dmem(const char* name);
    ~Vhw3_tb_dmem();
    VL_UNCOPYABLE(Vhw3_tb_dmem);

    // INTERNAL METHODS
    void __Vconfigure(Vhw3_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
