// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw3_tb__Syms.h"


void Vhw3_tb___024root__trace_chg_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep);

void Vhw3_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vhw3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw3_tb___024root*>(voidSelf);
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhw3_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vhw3_tb___024root__trace_chg_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.__PVT__idx),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+1,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc),32);
        tracep->chgIData(oldp+2,(((IData)(4U) + vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)),32);
        tracep->chgIData(oldp+3,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr),32);
        tracep->chgCData(oldp+4,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__op),4);
        tracep->chgBit(oldp+5,(((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU)) 
                                | (4U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                          >> 0x1aU)))));
        tracep->chgCData(oldp+6,(((0x23U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                             >> 0x1aU))
                                   ? 1U : ((3U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                   >> 0x1aU))
                                            ? 2U : 0U))),2);
        tracep->chgBit(oldp+7,((1U & ((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                              >> 0x1aU))
                                       ? ((8U == (0x3fU 
                                                  & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr))
                                           ? 0U : 1U)
                                       : ((((8U == 
                                             (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                              >> 0x1aU)) 
                                            | (0xaU 
                                               == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                   >> 0x1aU))) 
                                           | (0x23U 
                                              == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                  >> 0x1aU))) 
                                          | (3U == 
                                             (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                              >> 0x1aU)))))));
        tracep->chgBit(oldp+8,((0x2bU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                          >> 0x1aU))));
        tracep->chgCData(oldp+9,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__jump_type),3);
        tracep->chgIData(oldp+10,((0x3ffffffU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),26);
        tracep->chgIData(oldp+11,((((- (IData)((1U 
                                                & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr))),32);
        tracep->chgCData(oldp+12,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                            >> 0x15U))),5);
        tracep->chgCData(oldp+13,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                            >> 0x10U))),5);
        tracep->chgCData(oldp+14,((0x1fU & ((0U == 
                                             (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                              >> 0x1aU))
                                             ? (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                >> 0xbU)
                                             : ((((8U 
                                                   == 
                                                   (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                    >> 0x1aU)) 
                                                  | (0xaU 
                                                     == 
                                                     (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                      >> 0x1aU))) 
                                                 | (0x23U 
                                                    == 
                                                    (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                     >> 0x1aU)))
                                                 ? 
                                                (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                 >> 0x10U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                   >> 0x1aU))
                                                  ? 0x1fU
                                                  : 0U))))),5);
        tracep->chgBit(oldp+15,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__branch));
        tracep->chgBit(oldp+16,(((((((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                             >> 0x1aU)) 
                                     | (8U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                               >> 0x1aU))) 
                                    | (0xaU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                >> 0x1aU))) 
                                   | (0x23U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                >> 0x1aU))) 
                                  | (0x2bU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                               >> 0x1aU))) 
                                 | (4U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                           >> 0x1aU)))));
        tracep->chgIData(oldp+17,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__rs1_out),32);
        tracep->chgIData(oldp+18,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__rs2_out),32);
        tracep->chgIData(oldp+19,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs1),32);
        tracep->chgIData(oldp+20,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_rs2),32);
        tracep->chgIData(oldp+21,((IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result)),32);
        tracep->chgBit(oldp+22,((0U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result))));
        tracep->chgBit(oldp+23,((1U & ((2U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_op))
                                        ? ((~ ((vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs1 
                                                ^ vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_rs2) 
                                               >> 0x1fU)) 
                                           & ((vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs1 
                                               >> 0x1fU) 
                                              ^ (IData)(
                                                        (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result 
                                                         >> 0x1fU))))
                                        : ((6U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_op)) 
                                           & (((vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs1 
                                                ^ vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_rs2) 
                                               >> 0x1fU) 
                                              & ((vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs1 
                                                  >> 0x1fU) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result 
                                                            >> 0x1fU)))))))));
        tracep->chgIData(oldp+24,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__out),32);
        tracep->chgIData(oldp+25,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_pc),32);
        tracep->chgIData(oldp+26,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_addr),32);
        tracep->chgCData(oldp+27,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_op),4);
        tracep->chgIData(oldp+28,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_imm),32);
        tracep->chgIData(oldp+29,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_ra),32);
        tracep->chgIData(oldp+30,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs2),32);
        tracep->chgCData(oldp+31,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rdst_id),5);
        tracep->chgBit(oldp+32,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_we_reg));
        tracep->chgBit(oldp+33,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_we_dmem));
        tracep->chgCData(oldp+34,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_wbsel),2);
        tracep->chgBit(oldp+35,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_ssel));
        tracep->chgCData(oldp+36,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_type),4);
        tracep->chgIData(oldp+37,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_pc),32);
        tracep->chgIData(oldp+38,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd),32);
        tracep->chgIData(oldp+39,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rs2),32);
        tracep->chgCData(oldp+40,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rdst_id),5);
        tracep->chgBit(oldp+41,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_we_reg));
        tracep->chgBit(oldp+42,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_we_dmem));
        tracep->chgCData(oldp+43,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel),2);
        tracep->chgIData(oldp+44,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_rdata),32);
        tracep->chgCData(oldp+45,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_rdst_id),5);
        tracep->chgBit(oldp+46,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_we_reg));
        tracep->chgBit(oldp+47,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ifid_write));
        tracep->chgBit(oldp+48,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc_write));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ifid_flush));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__idex_flush));
        tracep->chgQData(oldp+51,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result),33);
        tracep->chgCData(oldp+53,((vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                   >> 0x1aU)),6);
        tracep->chgCData(oldp+54,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                            >> 0xbU))),5);
        tracep->chgCData(oldp+55,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                            >> 6U))),5);
        tracep->chgCData(oldp+56,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),6);
        tracep->chgSData(oldp+57,((0xffffU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),16);
        tracep->chgBit(oldp+58,((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+59,((8U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+60,((0xaU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                          >> 0x1aU))));
        tracep->chgBit(oldp+61,((0x23U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                           >> 0x1aU))));
        tracep->chgBit(oldp+62,((4U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+63,((3U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+64,((2U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+65,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__hazard_ctrl_inst__DOT__hazard_type),2);
        tracep->chgBit(oldp+66,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__hazard_ctrl_inst__DOT__data_stall_counter));
        tracep->chgIData(oldp+67,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_addr),26);
        tracep->chgCData(oldp+68,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_type),3);
        tracep->chgIData(oldp+69,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[0]),32);
        tracep->chgIData(oldp+70,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[1]),32);
        tracep->chgIData(oldp+71,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[2]),32);
        tracep->chgIData(oldp+72,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[3]),32);
        tracep->chgIData(oldp+73,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[4]),32);
        tracep->chgIData(oldp+74,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[5]),32);
        tracep->chgIData(oldp+75,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[6]),32);
        tracep->chgIData(oldp+76,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[7]),32);
        tracep->chgIData(oldp+77,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[8]),32);
        tracep->chgIData(oldp+78,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[9]),32);
        tracep->chgIData(oldp+79,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[10]),32);
        tracep->chgIData(oldp+80,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[11]),32);
        tracep->chgIData(oldp+81,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[12]),32);
        tracep->chgIData(oldp+82,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[13]),32);
        tracep->chgIData(oldp+83,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[14]),32);
        tracep->chgIData(oldp+84,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[15]),32);
        tracep->chgIData(oldp+85,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[16]),32);
        tracep->chgIData(oldp+86,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[17]),32);
        tracep->chgIData(oldp+87,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[18]),32);
        tracep->chgIData(oldp+88,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[19]),32);
        tracep->chgIData(oldp+89,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[20]),32);
        tracep->chgIData(oldp+90,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[21]),32);
        tracep->chgIData(oldp+91,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[22]),32);
        tracep->chgIData(oldp+92,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[23]),32);
        tracep->chgIData(oldp+93,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[24]),32);
        tracep->chgIData(oldp+94,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[25]),32);
        tracep->chgIData(oldp+95,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[26]),32);
        tracep->chgIData(oldp+96,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[27]),32);
        tracep->chgIData(oldp+97,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[28]),32);
        tracep->chgIData(oldp+98,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[29]),32);
        tracep->chgIData(oldp+99,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[30]),32);
        tracep->chgIData(oldp+100,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[31]),32);
        tracep->chgIData(oldp+101,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__i),32);
        tracep->chgCData(oldp+102,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd)),6);
        tracep->chgCData(oldp+103,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+104,(vlSymsp->TOP__hw3_tb.finish));
        tracep->chgIData(oldp+105,(vlSymsp->TOP__hw3_tb.__PVT__i),32);
        tracep->chgIData(oldp+106,(vlSymsp->TOP__hw3_tb.__PVT__cycle_count),32);
        tracep->chgIData(oldp+107,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[0]),32);
        tracep->chgIData(oldp+108,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[1]),32);
        tracep->chgIData(oldp+109,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[2]),32);
        tracep->chgIData(oldp+110,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[3]),32);
        tracep->chgIData(oldp+111,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[4]),32);
        tracep->chgIData(oldp+112,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[5]),32);
        tracep->chgIData(oldp+113,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[6]),32);
        tracep->chgIData(oldp+114,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[7]),32);
        tracep->chgIData(oldp+115,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[8]),32);
        tracep->chgIData(oldp+116,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[9]),32);
        tracep->chgIData(oldp+117,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[10]),32);
        tracep->chgIData(oldp+118,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[11]),32);
        tracep->chgIData(oldp+119,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[12]),32);
        tracep->chgIData(oldp+120,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[13]),32);
        tracep->chgIData(oldp+121,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[14]),32);
        tracep->chgIData(oldp+122,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[15]),32);
        tracep->chgIData(oldp+123,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[16]),32);
        tracep->chgIData(oldp+124,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[17]),32);
        tracep->chgIData(oldp+125,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[18]),32);
        tracep->chgIData(oldp+126,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[19]),32);
        tracep->chgIData(oldp+127,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[20]),32);
        tracep->chgIData(oldp+128,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[21]),32);
        tracep->chgIData(oldp+129,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[22]),32);
        tracep->chgIData(oldp+130,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[23]),32);
        tracep->chgIData(oldp+131,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[24]),32);
        tracep->chgIData(oldp+132,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[25]),32);
        tracep->chgIData(oldp+133,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[26]),32);
        tracep->chgIData(oldp+134,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[27]),32);
        tracep->chgIData(oldp+135,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[28]),32);
        tracep->chgIData(oldp+136,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[29]),32);
        tracep->chgIData(oldp+137,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[30]),32);
        tracep->chgIData(oldp+138,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[31]),32);
        tracep->chgIData(oldp+139,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[0]),32);
        tracep->chgIData(oldp+140,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[1]),32);
        tracep->chgIData(oldp+141,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[2]),32);
        tracep->chgIData(oldp+142,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[3]),32);
        tracep->chgIData(oldp+143,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[4]),32);
        tracep->chgIData(oldp+144,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[5]),32);
        tracep->chgIData(oldp+145,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[6]),32);
        tracep->chgIData(oldp+146,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[7]),32);
        tracep->chgIData(oldp+147,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[8]),32);
        tracep->chgIData(oldp+148,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[9]),32);
        tracep->chgIData(oldp+149,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[10]),32);
        tracep->chgIData(oldp+150,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[11]),32);
        tracep->chgIData(oldp+151,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[12]),32);
        tracep->chgIData(oldp+152,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[13]),32);
        tracep->chgIData(oldp+153,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[14]),32);
        tracep->chgIData(oldp+154,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[15]),32);
        tracep->chgBit(oldp+155,(vlSymsp->TOP__hw3_tb.__PVT__start));
    }
    tracep->chgBit(oldp+156,(vlSelf->clk));
    tracep->chgBit(oldp+157,(vlSelf->rst));
    tracep->chgBit(oldp+158,(vlSelf->finish));
    tracep->chgIData(oldp+159,(((0U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                 ? vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd
                                 : ((1U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                     ? vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                    [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                                              >> 2U))]
                                     : ((2U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                         ? ((IData)(4U) 
                                            + vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)
                                         : 0U)))),32);
    tracep->chgIData(oldp+160,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                               [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                                         >> 2U))]),32);
    tracep->chgIData(oldp+161,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM
                               [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc 
                                         >> 2U))]),32);
    tracep->chgIData(oldp+162,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[0]),32);
    tracep->chgIData(oldp+163,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[1]),32);
    tracep->chgIData(oldp+164,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[2]),32);
    tracep->chgIData(oldp+165,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[3]),32);
    tracep->chgIData(oldp+166,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[4]),32);
    tracep->chgIData(oldp+167,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[5]),32);
    tracep->chgIData(oldp+168,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[6]),32);
    tracep->chgIData(oldp+169,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[7]),32);
    tracep->chgIData(oldp+170,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[8]),32);
    tracep->chgIData(oldp+171,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[9]),32);
    tracep->chgIData(oldp+172,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[10]),32);
    tracep->chgIData(oldp+173,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[11]),32);
    tracep->chgIData(oldp+174,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[12]),32);
    tracep->chgIData(oldp+175,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[13]),32);
    tracep->chgIData(oldp+176,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[14]),32);
    tracep->chgIData(oldp+177,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[15]),32);
    tracep->chgIData(oldp+178,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[0]),32);
    tracep->chgIData(oldp+179,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[1]),32);
    tracep->chgIData(oldp+180,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[2]),32);
    tracep->chgIData(oldp+181,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[3]),32);
    tracep->chgIData(oldp+182,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[4]),32);
    tracep->chgIData(oldp+183,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[5]),32);
    tracep->chgIData(oldp+184,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[6]),32);
    tracep->chgIData(oldp+185,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[7]),32);
    tracep->chgIData(oldp+186,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[8]),32);
    tracep->chgIData(oldp+187,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[9]),32);
    tracep->chgIData(oldp+188,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[10]),32);
    tracep->chgIData(oldp+189,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[11]),32);
    tracep->chgIData(oldp+190,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[12]),32);
    tracep->chgIData(oldp+191,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[13]),32);
    tracep->chgIData(oldp+192,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[14]),32);
    tracep->chgIData(oldp+193,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[15]),32);
}

void Vhw3_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_cleanup\n"); );
    // Init
    Vhw3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw3_tb___024root*>(voidSelf);
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
