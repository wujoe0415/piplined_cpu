// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb_dmem.h"

VL_ATTR_COLD void Vhw3_tb_dmem___initial__TOP__hw3_tb__core_top_inst__dmem_inst__2(Vhw3_tb_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vhw3_tb_dmem___initial__TOP__hw3_tb__core_top_inst__dmem_inst__2\n"); );
    // Body
    vlSelf->RAM[0U] = 0U;
    vlSelf->RAM[1U] = 0U;
    vlSelf->RAM[2U] = 0U;
    vlSelf->RAM[3U] = 0U;
    vlSelf->RAM[4U] = 0U;
    vlSelf->RAM[5U] = 0U;
    vlSelf->RAM[6U] = 0U;
    vlSelf->RAM[7U] = 0U;
    vlSelf->RAM[8U] = 0U;
    vlSelf->RAM[9U] = 0U;
    vlSelf->RAM[0xaU] = 0U;
    vlSelf->RAM[0xbU] = 0U;
    vlSelf->RAM[0xcU] = 0U;
    vlSelf->RAM[0xdU] = 0U;
    vlSelf->RAM[0xeU] = 0U;
    vlSelf->RAM[0xfU] = 0U;
    vlSelf->__PVT__idx = 0x10U;
}

VL_ATTR_COLD void Vhw3_tb_dmem___ctor_var_reset(Vhw3_tb_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vhw3_tb_dmem___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rdata = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__idx = VL_RAND_RESET_I(32);
}
