// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb_hw3_tb.h"

VL_INLINE_OPT void Vhw3_tb_hw3_tb___sequent__TOP__hw3_tb__2(Vhw3_tb_hw3_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vhw3_tb_hw3_tb___sequent__TOP__hw3_tb__2\n"); );
    // Body
    vlSelf->__PVT__correctness_reg = ((0xfffffffcU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [1U] == 
                                           vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [1U]) << 1U) 
                                         | (vlSelf->golden_reg
                                            [0U] == 
                                            vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                            [0U])));
    vlSelf->__PVT__correctness_reg = ((0xfffffff3U 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [3U] == 
                                           vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [3U]) << 3U) 
                                         | ((vlSelf->golden_reg
                                             [2U] == 
                                             vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [2U]) 
                                            << 2U)));
    vlSelf->__PVT__correctness_reg = ((0xffffffcfU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [5U] == 
                                           vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [5U]) << 5U) 
                                         | ((vlSelf->golden_reg
                                             [4U] == 
                                             vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [4U]) 
                                            << 4U)));
    vlSelf->__PVT__correctness_reg = ((0xffffff3fU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [7U] == 
                                           vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [7U]) << 7U) 
                                         | ((vlSelf->golden_reg
                                             [6U] == 
                                             vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [6U]) 
                                            << 6U)));
    vlSelf->__PVT__correctness_reg = ((0xfffffcffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [9U] == 
                                           vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [9U]) << 9U) 
                                         | ((vlSelf->golden_reg
                                             [8U] == 
                                             vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [8U]) 
                                            << 8U)));
    vlSelf->__PVT__correctness_reg = ((0xfffff3ffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0xbU] == 
                                           vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0xbU]) 
                                          << 0xbU) 
                                         | ((vlSelf->golden_reg
                                             [0xaU] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0xaU]) 
                                            << 0xaU)));
    vlSelf->__PVT__correctness_reg = ((0xffffcfffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0xdU] == 
                                           vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0xdU]) 
                                          << 0xdU) 
                                         | ((vlSelf->golden_reg
                                             [0xcU] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0xcU]) 
                                            << 0xcU)));
    vlSelf->__PVT__correctness_reg = ((0xffff3fffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0xfU] == 
                                           vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0xfU]) 
                                          << 0xfU) 
                                         | ((vlSelf->golden_reg
                                             [0xeU] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0xeU]) 
                                            << 0xeU)));
    vlSelf->__PVT__correctness_reg = ((0xfffcffffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0x11U] 
                                           == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0x11U]) 
                                          << 0x11U) 
                                         | ((vlSelf->golden_reg
                                             [0x10U] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0x10U]) 
                                            << 0x10U)));
    vlSelf->__PVT__correctness_reg = ((0xfff3ffffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0x13U] 
                                           == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0x13U]) 
                                          << 0x13U) 
                                         | ((vlSelf->golden_reg
                                             [0x12U] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0x12U]) 
                                            << 0x12U)));
    vlSelf->__PVT__correctness_reg = ((0xffcfffffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0x15U] 
                                           == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0x15U]) 
                                          << 0x15U) 
                                         | ((vlSelf->golden_reg
                                             [0x14U] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0x14U]) 
                                            << 0x14U)));
    vlSelf->__PVT__correctness_reg = ((0xff3fffffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0x17U] 
                                           == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0x17U]) 
                                          << 0x17U) 
                                         | ((vlSelf->golden_reg
                                             [0x16U] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0x16U]) 
                                            << 0x16U)));
    vlSelf->__PVT__correctness_reg = ((0xfcffffffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0x19U] 
                                           == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0x19U]) 
                                          << 0x19U) 
                                         | ((vlSelf->golden_reg
                                             [0x18U] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0x18U]) 
                                            << 0x18U)));
    vlSelf->__PVT__correctness_reg = ((0xf3ffffffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0x1bU] 
                                           == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0x1bU]) 
                                          << 0x1bU) 
                                         | ((vlSelf->golden_reg
                                             [0x1aU] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0x1aU]) 
                                            << 0x1aU)));
    vlSelf->__PVT__correctness_reg = ((0xcfffffffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0x1dU] 
                                           == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0x1dU]) 
                                          << 0x1dU) 
                                         | ((vlSelf->golden_reg
                                             [0x1cU] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0x1cU]) 
                                            << 0x1cU)));
    vlSelf->__PVT__correctness_reg = ((0x3fffffffU 
                                       & vlSelf->__PVT__correctness_reg) 
                                      | (((vlSelf->golden_reg
                                           [0x1fU] 
                                           == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                           [0x1fU]) 
                                          << 0x1fU) 
                                         | ((vlSelf->golden_reg
                                             [0x1eU] 
                                             == vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R
                                             [0x1eU]) 
                                            << 0x1eU)));
    vlSelf->__PVT__correctness_dmem = ((0xfffcU & (IData)(vlSelf->__PVT__correctness_dmem)) 
                                       | (((vlSelf->golden_dmem
                                            [1U] == 
                                            vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                            [1U]) << 1U) 
                                          | (vlSelf->golden_dmem
                                             [0U] == 
                                             vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                             [0U])));
    vlSelf->__PVT__correctness_dmem = ((0xfff3U & (IData)(vlSelf->__PVT__correctness_dmem)) 
                                       | (((vlSelf->golden_dmem
                                            [3U] == 
                                            vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                            [3U]) << 3U) 
                                          | ((vlSelf->golden_dmem
                                              [2U] 
                                              == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                              [2U]) 
                                             << 2U)));
    vlSelf->__PVT__correctness_dmem = ((0xffcfU & (IData)(vlSelf->__PVT__correctness_dmem)) 
                                       | (((vlSelf->golden_dmem
                                            [5U] == 
                                            vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                            [5U]) << 5U) 
                                          | ((vlSelf->golden_dmem
                                              [4U] 
                                              == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                              [4U]) 
                                             << 4U)));
    vlSelf->__PVT__correctness_dmem = ((0xff3fU & (IData)(vlSelf->__PVT__correctness_dmem)) 
                                       | (((vlSelf->golden_dmem
                                            [7U] == 
                                            vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                            [7U]) << 7U) 
                                          | ((vlSelf->golden_dmem
                                              [6U] 
                                              == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                              [6U]) 
                                             << 6U)));
    vlSelf->__PVT__correctness_dmem = ((0xfcffU & (IData)(vlSelf->__PVT__correctness_dmem)) 
                                       | (((vlSelf->golden_dmem
                                            [9U] == 
                                            vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                            [9U]) << 9U) 
                                          | ((vlSelf->golden_dmem
                                              [8U] 
                                              == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                              [8U]) 
                                             << 8U)));
    vlSelf->__PVT__correctness_dmem = ((0xf3ffU & (IData)(vlSelf->__PVT__correctness_dmem)) 
                                       | (((vlSelf->golden_dmem
                                            [0xbU] 
                                            == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                            [0xbU]) 
                                           << 0xbU) 
                                          | ((vlSelf->golden_dmem
                                              [0xaU] 
                                              == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                              [0xaU]) 
                                             << 0xaU)));
    vlSelf->__PVT__correctness_dmem = ((0xcfffU & (IData)(vlSelf->__PVT__correctness_dmem)) 
                                       | (((vlSelf->golden_dmem
                                            [0xdU] 
                                            == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                            [0xdU]) 
                                           << 0xdU) 
                                          | ((vlSelf->golden_dmem
                                              [0xcU] 
                                              == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                              [0xcU]) 
                                             << 0xcU)));
    vlSelf->__PVT__correctness_dmem = ((0x3fffU & (IData)(vlSelf->__PVT__correctness_dmem)) 
                                       | (((vlSelf->golden_dmem
                                            [0xfU] 
                                            == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                            [0xfU]) 
                                           << 0xfU) 
                                          | ((vlSelf->golden_dmem
                                              [0xeU] 
                                              == vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                              [0xeU]) 
                                             << 0xeU)));
    vlSelf->correctness = ((0xffffffffU == vlSelf->__PVT__correctness_reg) 
                           & (0xffffU == (IData)(vlSelf->__PVT__correctness_dmem)));
}
