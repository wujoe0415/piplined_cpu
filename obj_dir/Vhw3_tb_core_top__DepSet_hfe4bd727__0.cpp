// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb_core_top.h"

VL_INLINE_OPT void Vhw3_tb_core_top___sequent__TOP__hw3_tb__core_top_inst__2(Vhw3_tb_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vhw3_tb_core_top___sequent__TOP__hw3_tb__core_top_inst__2\n"); );
    // Init
    IData/*31:0*/ __Vdly__out;
    CData/*0:0*/ __Vdlyvset__reg_file_inst__DOT__R__v0;
    CData/*4:0*/ __Vdlyvdim0__reg_file_inst__DOT__R__v32;
    IData/*31:0*/ __Vdlyvval__reg_file_inst__DOT__R__v32;
    CData/*0:0*/ __Vdlyvset__reg_file_inst__DOT__R__v32;
    // Body
    __Vdly__out = vlSelf->__PVT__out;
    vlSelf->__Vdly__instr = vlSelf->__PVT__instr;
    __Vdlyvset__reg_file_inst__DOT__R__v0 = 0U;
    __Vdlyvset__reg_file_inst__DOT__R__v32 = 0U;
    if ((2U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type))) {
        vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter = 2U;
        if (((0U != (IData)(vlSelf->__PVT__mem_rdst_id)) 
             & (((IData)(vlSelf->__PVT__mem_rdst_id) 
                 == (0x1fU & (vlSelf->__PVT__instr 
                              >> 0x15U))) | ((IData)(vlSelf->__PVT__mem_rdst_id) 
                                             == (0x1fU 
                                                 & (vlSelf->__PVT__instr 
                                                    >> 0x10U)))))) {
            vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter = 1U;
        }
    }
    if (VL_LTS_III(32, 0U, vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter)) {
        vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter 
            = (vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter 
               - (IData)(1U));
    }
    if (((IData)(vlSelf->__PVT__wb_rdst_id) == (0x1fU 
                                                & (vlSelf->__PVT__instr 
                                                   >> 0x15U)))) {
        vlSelf->__PVT__rs1_out = vlSelf->__PVT__wb_rdata;
    }
    if (((IData)(vlSelf->__PVT__wb_rdst_id) == (0x1fU 
                                                & (vlSelf->__PVT__instr 
                                                   >> 0x10U)))) {
        vlSelf->__PVT__rs2_out = vlSelf->__PVT__wb_rdata;
    }
    if (((IData)(vlSymsp->TOP.rst) | (IData)(vlSelf->__PVT__idex_flush))) {
        vlSelf->__PVT__ex_ra = 0U;
        vlSelf->__PVT__ex_op = 0U;
        vlSelf->__PVT__ex_rs1 = 0U;
    } else {
        vlSelf->__PVT__ex_ra = ((IData)(4U) + vlSelf->__PVT__out);
        vlSelf->__PVT__ex_op = vlSelf->__PVT__op;
        vlSelf->__PVT__ex_rs1 = vlSelf->__PVT__rs1_out;
    }
    vlSelf->__PVT__mem_pc = (((IData)(vlSymsp->TOP.rst) 
                              | (IData)(vlSelf->__PVT__exmem_flush))
                              ? 0U : vlSelf->__PVT__ex_pc);
    vlSelf->__PVT__ex_ssel = ((~ ((IData)(vlSymsp->TOP.rst) 
                                  | (IData)(vlSelf->__PVT__idex_flush))) 
                              & ((0U == (vlSelf->__PVT__instr 
                                         >> 0x1aU)) 
                                 | (4U == (vlSelf->__PVT__instr 
                                           >> 0x1aU))));
    if (vlSymsp->TOP.rst) {
        __Vdly__out = 0U;
        vlSelf->__Vdly__instr = 0U;
    } else if (vlSelf->__PVT__ifid_flush) {
        __Vdly__out = 0U;
        vlSelf->__Vdly__instr = 0U;
    } else if (vlSelf->__PVT__ifid_write) {
        __Vdly__out = vlSelf->__PVT__pc;
        vlSelf->__Vdly__instr = vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM
            [(0xfU & (vlSelf->__PVT__pc >> 2U))];
    } else {
        __Vdly__out = vlSelf->__PVT__out;
        vlSelf->__Vdly__instr = vlSelf->__PVT__instr;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__reg_file_inst__DOT__i = 0x20U;
        __Vdlyvset__reg_file_inst__DOT__R__v0 = 1U;
    } else if (VL_UNLIKELY(((IData)(vlSelf->__PVT__wb_we_reg) 
                            & (0U != (IData)(vlSelf->__PVT__wb_rdst_id))))) {
        VL_WRITEF("<Reg> Put %10# in %2#\n",32,vlSelf->__PVT__wb_rdata,
                  5,(IData)(vlSelf->__PVT__wb_rdst_id));
        __Vdlyvval__reg_file_inst__DOT__R__v32 = vlSelf->__PVT__wb_rdata;
        __Vdlyvset__reg_file_inst__DOT__R__v32 = 1U;
        __Vdlyvdim0__reg_file_inst__DOT__R__v32 = vlSelf->__PVT__wb_rdst_id;
    }
    if (__Vdlyvset__reg_file_inst__DOT__R__v0) {
        vlSelf->__PVT__reg_file_inst__DOT__R[0U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[1U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[2U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[3U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[4U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[5U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[6U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[7U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[8U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[9U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0xaU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0xbU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0xcU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0xdU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0xeU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0xfU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x10U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x11U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x12U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x13U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x14U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x15U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x16U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x17U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x18U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x19U] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x1aU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x1bU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x1cU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x1dU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x1eU] = 0U;
        vlSelf->__PVT__reg_file_inst__DOT__R[0x1fU] = 0U;
    }
    if (__Vdlyvset__reg_file_inst__DOT__R__v32) {
        vlSelf->__PVT__reg_file_inst__DOT__R[__Vdlyvdim0__reg_file_inst__DOT__R__v32] 
            = __Vdlyvval__reg_file_inst__DOT__R__v32;
    }
    vlSelf->__PVT__ex_pc = (((IData)(vlSymsp->TOP.rst) 
                             | (IData)(vlSelf->__PVT__idex_flush))
                             ? 0U : vlSelf->__PVT__out);
    vlSelf->__PVT__wb_we_reg = ((~ (IData)(vlSymsp->TOP.rst)) 
                                & (IData)(vlSelf->__PVT__mem_we_reg));
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__wb_rdst_id = 0U;
        vlSelf->__PVT__wb_rdata = 0U;
    } else {
        vlSelf->__PVT__wb_rdst_id = vlSelf->__PVT__mem_rdst_id;
        vlSelf->__PVT__wb_rdata = ((0U == (IData)(vlSelf->__PVT__mem_wbsel))
                                    ? vlSelf->__PVT__mem_rd
                                    : ((1U == (IData)(vlSelf->__PVT__mem_wbsel))
                                        ? vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                       [(0xfU & (vlSelf->__PVT__mem_rd 
                                                 >> 2U))]
                                        : ((2U == (IData)(vlSelf->__PVT__mem_wbsel))
                                            ? ((IData)(4U) 
                                               + vlSelf->__PVT__pc)
                                            : 0U)));
    }
    vlSelf->__PVT__out = __Vdly__out;
    vlSelf->__PVT__mem_we_reg = ((~ ((IData)(vlSymsp->TOP.rst) 
                                     | (IData)(vlSelf->__PVT__exmem_flush))) 
                                 & (IData)(vlSelf->__PVT__ex_we_reg));
    if (((IData)(vlSymsp->TOP.rst) | (IData)(vlSelf->__PVT__exmem_flush))) {
        vlSelf->__PVT__mem_rdst_id = 0U;
        vlSelf->__PVT__mem_wbsel = 0U;
    } else {
        vlSelf->__PVT__mem_rdst_id = vlSelf->__PVT__ex_rdst_id;
        vlSelf->__PVT__mem_wbsel = vlSelf->__PVT__ex_wbsel;
    }
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__pc = 0U;
    } else if ((((1U == (IData)(vlSelf->__Vcellout__idex_instr__EX_jump_type)) 
                 & (0U == (IData)(vlSelf->__PVT__alu_inst__DOT__result))) 
                & (IData)(vlSelf->__PVT__pc_write))) {
        vlSelf->__PVT__pc = (vlSelf->__PVT__pc_increment 
                             + (vlSelf->__PVT__ex_imm 
                                << 2U));
    } else if (((3U == (IData)(vlSelf->__Vcellout__idex_instr__EX_jump_type)) 
                & (IData)(vlSelf->__PVT__pc_write))) {
        vlSelf->__PVT__pc = vlSelf->__PVT__rs1_out;
    } else if ((((2U == (IData)(vlSelf->__Vcellout__idex_instr__EX_jump_type)) 
                 | (4U == (IData)(vlSelf->__Vcellout__idex_instr__EX_jump_type))) 
                & (IData)(vlSelf->__PVT__pc_write))) {
        vlSelf->__PVT__pc = (vlSelf->__Vcellout__idex_instr__EX_jump_addr 
                             << 2U);
    } else if (vlSelf->__PVT__pc_write) {
        vlSelf->__PVT__pc = vlSelf->__PVT__pc_increment;
    }
    vlSelf->__PVT__ex_we_reg = (1U & ((~ ((IData)(vlSymsp->TOP.rst) 
                                          | (IData)(vlSelf->__PVT__idex_flush))) 
                                      & ((0U == (vlSelf->__PVT__instr 
                                                 >> 0x1aU))
                                          ? ((8U == 
                                              (0x3fU 
                                               & vlSelf->__PVT__instr))
                                              ? 0U : 1U)
                                          : ((((8U 
                                                == 
                                                (vlSelf->__PVT__instr 
                                                 >> 0x1aU)) 
                                               | (0xaU 
                                                  == 
                                                  (vlSelf->__PVT__instr 
                                                   >> 0x1aU))) 
                                              | (0x23U 
                                                 == 
                                                 (vlSelf->__PVT__instr 
                                                  >> 0x1aU))) 
                                             | (3U 
                                                == 
                                                (vlSelf->__PVT__instr 
                                                 >> 0x1aU))))));
    if (((IData)(vlSymsp->TOP.rst) | (IData)(vlSelf->__PVT__idex_flush))) {
        vlSelf->__PVT__ex_rdst_id = 0U;
        vlSelf->__PVT__ex_wbsel = 0U;
    } else {
        vlSelf->__PVT__ex_rdst_id = (0x1fU & ((0U == 
                                               (vlSelf->__PVT__instr 
                                                >> 0x1aU))
                                               ? (vlSelf->__PVT__instr 
                                                  >> 0xbU)
                                               : ((
                                                   ((8U 
                                                     == 
                                                     (vlSelf->__PVT__instr 
                                                      >> 0x1aU)) 
                                                    | (0xaU 
                                                       == 
                                                       (vlSelf->__PVT__instr 
                                                        >> 0x1aU))) 
                                                   | (0x23U 
                                                      == 
                                                      (vlSelf->__PVT__instr 
                                                       >> 0x1aU)))
                                                   ? 
                                                  (vlSelf->__PVT__instr 
                                                   >> 0x10U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (vlSelf->__PVT__instr 
                                                     >> 0x1aU))
                                                    ? 0x1fU
                                                    : 0U))));
        vlSelf->__PVT__ex_wbsel = ((0x23U == (vlSelf->__PVT__instr 
                                              >> 0x1aU))
                                    ? 1U : ((3U == 
                                             (vlSelf->__PVT__instr 
                                              >> 0x1aU))
                                             ? 2U : 0U));
    }
    vlSelf->__PVT__pc_increment = ((IData)(4U) + vlSelf->__PVT__pc);
    if (((IData)(vlSymsp->TOP.rst) | (IData)(vlSelf->__PVT__idex_flush))) {
        vlSelf->__Vcellout__idex_instr__EX_jump_type = 0U;
        vlSelf->__Vcellout__idex_instr__EX_jump_addr = 0U;
        vlSelf->__PVT__ex_imm = 0U;
    } else {
        vlSelf->__Vcellout__idex_instr__EX_jump_type 
            = vlSelf->__PVT__jump_type;
        vlSelf->__Vcellout__idex_instr__EX_jump_addr 
            = (0x3ffffffU & vlSelf->__PVT__instr);
        vlSelf->__PVT__ex_imm = (((- (IData)((1U & 
                                              (vlSelf->__PVT__instr 
                                               >> 0xfU)))) 
                                  << 0x10U) | (0xffffU 
                                               & vlSelf->__PVT__instr));
    }
}

VL_INLINE_OPT void Vhw3_tb_core_top___sequent__TOP__hw3_tb__core_top_inst__3(Vhw3_tb_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vhw3_tb_core_top___sequent__TOP__hw3_tb__core_top_inst__3\n"); );
    // Body
    vlSelf->__PVT__mem_rs2 = (((IData)(vlSymsp->TOP.rst) 
                               | (IData)(vlSelf->__PVT__exmem_flush))
                               ? 0U : vlSelf->__PVT__ex_rs2);
    vlSelf->__PVT__mem_we_dmem = ((~ ((IData)(vlSymsp->TOP.rst) 
                                      | (IData)(vlSelf->__PVT__exmem_flush))) 
                                  & (IData)(vlSelf->__PVT__ex_we_dmem));
    vlSelf->__PVT__mem_rd = (((IData)(vlSymsp->TOP.rst) 
                              | (IData)(vlSelf->__PVT__exmem_flush))
                              ? 0U : (IData)(vlSelf->__PVT__alu_inst__DOT__result));
    vlSelf->__PVT__ex_rs2 = (((IData)(vlSymsp->TOP.rst) 
                              | (IData)(vlSelf->__PVT__idex_flush))
                              ? 0U : vlSelf->__PVT__rs2_out);
    vlSelf->__PVT__ex_we_dmem = ((~ ((IData)(vlSymsp->TOP.rst) 
                                     | (IData)(vlSelf->__PVT__idex_flush))) 
                                 & (0x2bU == (vlSelf->__PVT__instr 
                                              >> 0x1aU)));
    vlSelf->__PVT__instr = vlSelf->__Vdly__instr;
    vlSelf->__PVT__alu_rs2 = ((IData)(vlSelf->__PVT__ex_ssel)
                               ? vlSelf->__PVT__ex_rs2
                               : vlSelf->__PVT__ex_imm);
    VL_WRITEF("%2#\n",6,(vlSelf->__PVT__instr >> 0x1aU));
    vlSelf->__PVT__op = ((0U == (vlSelf->__PVT__instr 
                                 >> 0x1aU)) ? ((0x20U 
                                                & vlSelf->__PVT__instr)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->__PVT__instr)
                                                    ? 0xfU
                                                    : 
                                                   ((8U 
                                                     & vlSelf->__PVT__instr)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->__PVT__instr)
                                                      ? 0xfU
                                                      : 
                                                     ((2U 
                                                       & vlSelf->__PVT__instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->__PVT__instr)
                                                        ? 0xfU
                                                        : 7U)
                                                       : 0xfU))
                                                     : 
                                                    ((4U 
                                                      & vlSelf->__PVT__instr)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->__PVT__instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->__PVT__instr)
                                                        ? 0xcU
                                                        : 0xfU)
                                                       : 
                                                      ((1U 
                                                        & vlSelf->__PVT__instr)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & vlSelf->__PVT__instr)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->__PVT__instr)
                                                        ? 0xfU
                                                        : 6U)
                                                       : 
                                                      ((1U 
                                                        & vlSelf->__PVT__instr)
                                                        ? 0xfU
                                                        : 2U)))))
                                                : 0xfU)
                          : ((4U == (vlSelf->__PVT__instr 
                                     >> 0x1aU)) ? 6U
                              : ((((8U == (vlSelf->__PVT__instr 
                                           >> 0x1aU)) 
                                   | (0x23U == (vlSelf->__PVT__instr 
                                                >> 0x1aU))) 
                                  | (0x2bU == (vlSelf->__PVT__instr 
                                               >> 0x1aU)))
                                  ? 2U : ((0xaU == 
                                           (vlSelf->__PVT__instr 
                                            >> 0x1aU))
                                           ? 7U : 0xfU))));
    vlSelf->__PVT__rs1_out = vlSelf->__PVT__reg_file_inst__DOT__R
        [(0x1fU & (vlSelf->__PVT__instr >> 0x15U))];
    vlSelf->__PVT__rs2_out = vlSelf->__PVT__reg_file_inst__DOT__R
        [(0x1fU & (vlSelf->__PVT__instr >> 0x10U))];
    vlSelf->__PVT__jump_type = ((vlSelf->__PVT__instr 
                                 >> 0x1fU) ? 0U : (
                                                   (0x40000000U 
                                                    & vlSelf->__PVT__instr)
                                                    ? 0U
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->__PVT__instr)
                                                     ? 0U
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->__PVT__instr)
                                                      ? 
                                                     ((0x8000000U 
                                                       & vlSelf->__PVT__instr)
                                                       ? 0U
                                                       : 
                                                      ((0x4000000U 
                                                        & vlSelf->__PVT__instr)
                                                        ? 0U
                                                        : 1U))
                                                      : 
                                                     ((0x8000000U 
                                                       & vlSelf->__PVT__instr)
                                                       ? 
                                                      ((0x4000000U 
                                                        & vlSelf->__PVT__instr)
                                                        ? 2U
                                                        : 4U)
                                                       : 
                                                      ((0x4000000U 
                                                        & vlSelf->__PVT__instr)
                                                        ? 0U
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSelf->__PVT__instr))
                                                         ? 3U
                                                         : 0U)))))));
    vlSelf->__PVT__branch = (0U != (IData)(vlSelf->__PVT__jump_type));
    vlSelf->__PVT__alu_inst__DOT__result = (0x1ffffffffULL 
                                            & ((8U 
                                                & (IData)(vlSelf->__PVT__ex_op))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__ex_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__ex_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__ex_op))
                                                      ? 0ULL
                                                      : (QData)((IData)(
                                                                        (vlSelf->__PVT__alu_rs2 
                                                                         << 0x10U))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__ex_op))
                                                      ? 
                                                     VL_SHIFTRS_QQI(33,33,5, 
                                                                    (0x1ffffffffULL 
                                                                     & VL_EXTENDS_QI(33,32, vlSelf->__PVT__ex_rs1)), 
                                                                    (0x1fU 
                                                                     & vlSelf->__PVT__alu_rs2))
                                                      : 
                                                     (~ 
                                                      ((QData)((IData)(vlSelf->__PVT__ex_rs1)) 
                                                       | (QData)((IData)(vlSelf->__PVT__alu_rs2))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__ex_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__ex_op))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(vlSelf->__PVT__ex_rs1)) 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->__PVT__alu_rs2)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__ex_op))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->__PVT__ex_rs1)) 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->__PVT__alu_rs2))
                                                      : 0ULL)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->__PVT__ex_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__ex_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__ex_op))
                                                      ? (QData)((IData)(
                                                                        VL_LTS_III(32, vlSelf->__PVT__ex_rs1, vlSelf->__PVT__alu_rs2)))
                                                      : 
                                                     ((QData)((IData)(vlSelf->__PVT__ex_rs1)) 
                                                      - (QData)((IData)(vlSelf->__PVT__alu_rs2))))
                                                     : 0ULL)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__ex_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__ex_op))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(vlSelf->__PVT__ex_rs1)) 
                                                      + (QData)((IData)(vlSelf->__PVT__alu_rs2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->__PVT__ex_op))
                                                      ? 
                                                     ((QData)((IData)(vlSelf->__PVT__ex_rs1)) 
                                                      | (QData)((IData)(vlSelf->__PVT__alu_rs2)))
                                                      : 
                                                     ((QData)((IData)(vlSelf->__PVT__ex_rs1)) 
                                                      & (QData)((IData)(vlSelf->__PVT__alu_rs2))))))));
    vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type 
        = ((((((((0U == (vlSelf->__PVT__instr >> 0x1aU)) 
                 | (8U == (vlSelf->__PVT__instr >> 0x1aU))) 
                | (0xaU == (vlSelf->__PVT__instr >> 0x1aU))) 
               | (0x23U == (vlSelf->__PVT__instr >> 0x1aU))) 
              | (0x2bU == (vlSelf->__PVT__instr >> 0x1aU))) 
             | (4U == (vlSelf->__PVT__instr >> 0x1aU))) 
            & (((0U != (IData)(vlSelf->__PVT__ex_rdst_id)) 
                & (((IData)(vlSelf->__PVT__ex_rdst_id) 
                    == (0x1fU & (vlSelf->__PVT__instr 
                                 >> 0x15U))) | ((IData)(vlSelf->__PVT__ex_rdst_id) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->__PVT__instr 
                                                    >> 0x10U))))) 
               | ((0U != (IData)(vlSelf->__PVT__mem_rdst_id)) 
                  & (((IData)(vlSelf->__PVT__mem_rdst_id) 
                      == (0x1fU & (vlSelf->__PVT__instr 
                                   >> 0x15U))) | ((IData)(vlSelf->__PVT__mem_rdst_id) 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->__PVT__instr 
                                                      >> 0x10U)))))))
            ? 1U : ((IData)(vlSelf->__PVT__branch) ? 2U
                     : 0U));
    vlSelf->__PVT__ifid_flush = ((1U != (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                 & (2U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)));
    vlSelf->__PVT__exmem_flush = ((1U != (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                  & (2U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)));
    vlSelf->__PVT__idex_flush = ((1U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                 | (2U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)));
    vlSelf->__PVT__pc_write = ((1U != (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                               & ((2U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                  | VL_GTES_III(32, 0U, vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter)));
    vlSelf->__PVT__ifid_write = ((1U != (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                 & ((2U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                    | VL_GTES_III(32, 0U, vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter)));
}
