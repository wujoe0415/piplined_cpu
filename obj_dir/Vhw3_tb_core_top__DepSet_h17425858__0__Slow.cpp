// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb_core_top.h"

VL_ATTR_COLD void Vhw3_tb_core_top___initial__TOP__hw3_tb__core_top_inst__3(Vhw3_tb_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vhw3_tb_core_top___initial__TOP__hw3_tb__core_top_inst__3\n"); );
    // Body
    vlSelf->__PVT__pc_write = 1U;
    vlSelf->__PVT__ifid_write = 1U;
}

extern const VlUnpacked<CData/*3:0*/, 4096> Vhw3_tb__ConstPool__TABLE_h1fd373ac_0;

VL_ATTR_COLD void Vhw3_tb_core_top___settle__TOP__hw3_tb__core_top_inst__4(Vhw3_tb_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vhw3_tb_core_top___settle__TOP__hw3_tb__core_top_inst__4\n"); );
    // Init
    SData/*11:0*/ __Vtableidx1;
    // Body
    vlSelf->__PVT__pc_increment = ((IData)(4U) + vlSelf->__PVT__pc);
    vlSelf->__PVT__alu_rs2 = ((IData)(vlSelf->__PVT__ex_ssel)
                               ? vlSelf->__PVT__ex_rs2
                               : vlSelf->__PVT__ex_imm);
    vlSelf->__PVT__rs1_out = vlSelf->__PVT__reg_file_inst__DOT__R
        [(0x1fU & (vlSelf->__PVT__instr >> 0x15U))];
    vlSelf->__PVT__rs2_out = vlSelf->__PVT__reg_file_inst__DOT__R
        [(0x1fU & (vlSelf->__PVT__instr >> 0x10U))];
    __Vtableidx1 = (((0xaU == (vlSelf->__PVT__instr 
                               >> 0x1aU)) << 0xbU) 
                    | (((0x2bU == (vlSelf->__PVT__instr 
                                   >> 0x1aU)) << 0xaU) 
                       | (((0x23U == (vlSelf->__PVT__instr 
                                      >> 0x1aU)) << 9U) 
                          | (((8U == (vlSelf->__PVT__instr 
                                      >> 0x1aU)) << 8U) 
                             | (((4U == (vlSelf->__PVT__instr 
                                         >> 0x1aU)) 
                                 << 7U) | ((0x7eU & 
                                            (vlSelf->__PVT__instr 
                                             << 1U)) 
                                           | (0U == 
                                              (vlSelf->__PVT__instr 
                                               >> 0x1aU))))))));
    vlSelf->__PVT__op = Vhw3_tb__ConstPool__TABLE_h1fd373ac_0
        [__Vtableidx1];
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
        = ((((((1U == (IData)(vlSelf->__PVT__ex_wbsel)) 
               | (IData)(vlSelf->__PVT__ex_we_reg)) 
              & (0U != (IData)(vlSelf->__PVT__ex_rdst_id))) 
             & (((IData)(vlSelf->__PVT__ex_rdst_id) 
                 == (0x1fU & (vlSelf->__PVT__instr 
                              >> 0x15U))) | ((IData)(vlSelf->__PVT__ex_rdst_id) 
                                             == (0x1fU 
                                                 & (vlSelf->__PVT__instr 
                                                    >> 0x10U))))) 
            | ((((1U == (IData)(vlSelf->__PVT__mem_wbsel)) 
                 | (IData)(vlSelf->__PVT__mem_we_reg)) 
                & (0U != (IData)(vlSelf->__PVT__mem_rdst_id))) 
               & (((IData)(vlSelf->__PVT__mem_rdst_id) 
                   == (0x1fU & (vlSelf->__PVT__instr 
                                >> 0x15U))) | ((IData)(vlSelf->__PVT__mem_rdst_id) 
                                               == (0x1fU 
                                                   & (vlSelf->__PVT__instr 
                                                      >> 0x10U))))))
            ? 1U : ((IData)(vlSelf->__PVT__branch) ? 2U
                     : 0U));
    vlSelf->__PVT__ifid_flush = ((1U != (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                 & (2U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)));
    vlSelf->__PVT__idex_flush = (1U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type));
    vlSelf->__PVT__pc_write = ((1U != (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                               & ((2U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                  | (~ (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter))));
    vlSelf->__PVT__ifid_write = ((1U != (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                 & ((2U == (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type)) 
                                    | (~ (IData)(vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter))));
}

VL_ATTR_COLD void Vhw3_tb_core_top___ctor_var_reset(Vhw3_tb_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vhw3_tb_core_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_increment = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op = VL_RAND_RESET_I(4);
    vlSelf->__PVT__jump_type = VL_RAND_RESET_I(3);
    vlSelf->__PVT__branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs2_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_op = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ex_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_ra = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_rdst_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_we_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_we_dmem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_wbsel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ex_ssel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rdst_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_we_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_we_dmem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wbsel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__wb_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wb_rdst_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wb_we_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifid_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifid_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idex_flush = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__idex_instr__EX_jump_type = VL_RAND_RESET_I(3);
    vlSelf->__Vcellout__idex_instr__EX_jump_addr = VL_RAND_RESET_I(26);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__reg_file_inst__DOT__R[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__reg_file_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_inst__DOT__result = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__hazard_ctrl_inst__DOT__hazard_type = VL_RAND_RESET_I(2);
    vlSelf->__PVT__hazard_ctrl_inst__DOT__data_stall_counter = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__instr = VL_RAND_RESET_I(32);
}
