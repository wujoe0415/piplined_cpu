// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhw3_tb.h for the primary calling header

#ifndef VERILATED_VHW3_TB_HW3_TB_H_
#define VERILATED_VHW3_TB_HW3_TB_H_  // guard

#include "verilated.h"

class Vhw3_tb__Syms;
class Vhw3_tb_core_top;

VL_MODULE(Vhw3_tb_hw3_tb) {
  public:
    // CELLS
    Vhw3_tb_core_top* core_top_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(finish,0,0);
    CData/*0:0*/ __PVT__start;
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __PVT__tmp;
    IData/*31:0*/ __PVT__cycle_count;
    VlUnpacked<IData/*31:0*/, 32> __PVT__golden_reg;
    VlUnpacked<IData/*31:0*/, 16> __PVT__golden_dmem;

    // INTERNAL VARIABLES
    Vhw3_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vhw3_tb_hw3_tb(const char* name);
    ~Vhw3_tb_hw3_tb();
    VL_UNCOPYABLE(Vhw3_tb_hw3_tb);

    // INTERNAL METHODS
    void __Vconfigure(Vhw3_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
