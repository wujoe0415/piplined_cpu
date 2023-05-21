// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhw3_tb.h for the primary calling header

#ifndef VERILATED_VHW3_TB___024ROOT_H_
#define VERILATED_VHW3_TB___024ROOT_H_  // guard

#include "verilated.h"

class Vhw3_tb__Syms;
class Vhw3_tb_hw3_tb;

VL_MODULE(Vhw3_tb___024root) {
  public:
    // CELLS
    Vhw3_tb_hw3_tb* hw3_tb;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(correctness,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vhw3_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vhw3_tb___024root(const char* name);
    ~Vhw3_tb___024root();
    VL_UNCOPYABLE(Vhw3_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vhw3_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
