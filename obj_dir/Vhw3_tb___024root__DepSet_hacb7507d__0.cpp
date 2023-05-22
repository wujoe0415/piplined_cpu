// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb___024root.h"

VL_INLINE_OPT void Vhw3_tb___024root___sequent__TOP__1(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->finish = vlSymsp->TOP__hw3_tb.finish;
}

void Vhw3_tb_core_top___sequent__TOP__hw3_tb__core_top_inst__1(Vhw3_tb_core_top* vlSelf);
void Vhw3_tb_dmem___sequent__TOP__hw3_tb__core_top_inst__dmem_inst__1(Vhw3_tb_dmem* vlSelf);
void Vhw3_tb_core_top___sequent__TOP__hw3_tb__core_top_inst__2(Vhw3_tb_core_top* vlSelf);
void Vhw3_tb_hw3_tb___sequent__TOP__hw3_tb__1(Vhw3_tb_hw3_tb* vlSelf);

void Vhw3_tb___024root___eval(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vhw3_tb_core_top___sequent__TOP__hw3_tb__core_top_inst__1((&vlSymsp->TOP__hw3_tb__core_top_inst));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vhw3_tb_dmem___sequent__TOP__hw3_tb__core_top_inst__dmem_inst__1((&vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst));
        Vhw3_tb_core_top___sequent__TOP__hw3_tb__core_top_inst__2((&vlSymsp->TOP__hw3_tb__core_top_inst));
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vhw3_tb_hw3_tb___sequent__TOP__hw3_tb__1((&vlSymsp->TOP__hw3_tb));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vhw3_tb___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}
