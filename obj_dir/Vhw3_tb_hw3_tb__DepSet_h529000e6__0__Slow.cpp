// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb_hw3_tb.h"

VL_ATTR_COLD void Vhw3_tb_hw3_tb___initial__TOP__hw3_tb__2(Vhw3_tb_hw3_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vhw3_tb_hw3_tb___initial__TOP__hw3_tb__2\n"); );
    // Body
    vlSelf->__PVT__cycle_count = 0U;
    vlSelf->finish = 0U;
    vlSelf->__PVT__start = 1U;
}

VL_ATTR_COLD void Vhw3_tb_hw3_tb___ctor_var_reset(Vhw3_tb_hw3_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vhw3_tb_hw3_tb___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->finish = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__golden_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->__PVT__golden_dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__start = VL_RAND_RESET_I(1);
}
