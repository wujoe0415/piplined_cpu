// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb___024root.h"

VL_ATTR_COLD void Vhw3_tb_hw3_tb___initial__TOP__hw3_tb__1(Vhw3_tb_hw3_tb* vlSelf);
VL_ATTR_COLD void Vhw3_tb_imem___initial__TOP__hw3_tb__core_top_inst__imem_inst__1(Vhw3_tb_imem* vlSelf);
VL_ATTR_COLD void Vhw3_tb_dmem___initial__TOP__hw3_tb__core_top_inst__dmem_inst__1(Vhw3_tb_dmem* vlSelf);
VL_ATTR_COLD void Vhw3_tb_core_top___initial__TOP__hw3_tb__core_top_inst__1(Vhw3_tb_core_top* vlSelf);

VL_ATTR_COLD void Vhw3_tb___024root___eval_initial(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___eval_initial\n"); );
    // Body
    Vhw3_tb_hw3_tb___initial__TOP__hw3_tb__1((&vlSymsp->TOP__hw3_tb));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vhw3_tb_imem___initial__TOP__hw3_tb__core_top_inst__imem_inst__1((&vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst));
    Vhw3_tb_dmem___initial__TOP__hw3_tb__core_top_inst__dmem_inst__1((&vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst));
    Vhw3_tb_core_top___initial__TOP__hw3_tb__core_top_inst__1((&vlSymsp->TOP__hw3_tb__core_top_inst));
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vhw3_tb_core_top___settle__TOP__hw3_tb__core_top_inst__4(Vhw3_tb_core_top* vlSelf);
void Vhw3_tb_hw3_tb___sequent__TOP__hw3_tb__2(Vhw3_tb_hw3_tb* vlSelf);
void Vhw3_tb___024root___sequent__TOP__1(Vhw3_tb___024root* vlSelf);

VL_ATTR_COLD void Vhw3_tb___024root___eval_settle(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___eval_settle\n"); );
    // Body
    Vhw3_tb_core_top___settle__TOP__hw3_tb__core_top_inst__4((&vlSymsp->TOP__hw3_tb__core_top_inst));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vhw3_tb_hw3_tb___sequent__TOP__hw3_tb__2((&vlSymsp->TOP__hw3_tb));
    Vhw3_tb___024root___sequent__TOP__1(vlSelf);
}
