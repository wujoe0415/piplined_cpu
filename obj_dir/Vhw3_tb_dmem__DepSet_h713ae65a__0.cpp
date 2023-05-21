// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb_dmem.h"

VL_INLINE_OPT void Vhw3_tb_dmem___sequent__TOP__hw3_tb__core_top_inst__dmem_inst__2(Vhw3_tb_dmem* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vhw3_tb_dmem___sequent__TOP__hw3_tb__core_top_inst__dmem_inst__2\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__RAM__v0;
    IData/*31:0*/ __Vdlyvval__RAM__v0;
    CData/*0:0*/ __Vdlyvset__RAM__v0;
    // Body
    __Vdlyvset__RAM__v0 = 0U;
    if (VL_UNLIKELY(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_we_dmem)) {
        VL_WRITEF("<Dmem> Save %10# in %2#\n",32,vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rs2,
                  4,(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                             >> 2U)));
        __Vdlyvval__RAM__v0 = vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rs2;
        __Vdlyvset__RAM__v0 = 1U;
        __Vdlyvdim0__RAM__v0 = (0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                                        >> 2U));
    }
    if (__Vdlyvset__RAM__v0) {
        vlSelf->RAM[__Vdlyvdim0__RAM__v0] = __Vdlyvval__RAM__v0;
    }
}
