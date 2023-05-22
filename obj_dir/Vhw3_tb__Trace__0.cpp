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
        tracep->chgIData(oldp+0,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[0]),32);
        tracep->chgIData(oldp+1,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[1]),32);
        tracep->chgIData(oldp+2,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[2]),32);
        tracep->chgIData(oldp+3,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[3]),32);
        tracep->chgIData(oldp+4,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[4]),32);
        tracep->chgIData(oldp+5,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[5]),32);
        tracep->chgIData(oldp+6,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[6]),32);
        tracep->chgIData(oldp+7,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[7]),32);
        tracep->chgIData(oldp+8,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[8]),32);
        tracep->chgIData(oldp+9,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[9]),32);
        tracep->chgIData(oldp+10,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[10]),32);
        tracep->chgIData(oldp+11,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[11]),32);
        tracep->chgIData(oldp+12,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[12]),32);
        tracep->chgIData(oldp+13,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[13]),32);
        tracep->chgIData(oldp+14,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[14]),32);
        tracep->chgIData(oldp+15,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[15]),32);
        tracep->chgIData(oldp+16,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.__PVT__idx),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+17,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc),32);
        tracep->chgIData(oldp+18,(((IData)(4U) + vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)),32);
        tracep->chgIData(oldp+19,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr),32);
        tracep->chgCData(oldp+20,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__op),4);
        tracep->chgBit(oldp+21,(((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                         >> 0x1aU)) 
                                 | (4U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                           >> 0x1aU)))));
        tracep->chgCData(oldp+22,(((0x23U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                              >> 0x1aU))
                                    ? 1U : ((3U == 
                                             (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                              >> 0x1aU))
                                             ? 2U : 0U))),2);
        tracep->chgBit(oldp+23,((1U & ((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                               >> 0x1aU))
                                        ? ((8U == (0x3fU 
                                                   & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr))
                                            ? 0U : 1U)
                                        : ((((8U == 
                                              (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                               >> 0x1aU)) 
                                             | (0xaU 
                                                == 
                                                (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                 >> 0x1aU))) 
                                            | (0x23U 
                                               == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                   >> 0x1aU))) 
                                           | (3U == 
                                              (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                               >> 0x1aU)))))));
        tracep->chgBit(oldp+24,((0x2bU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                           >> 0x1aU))));
        tracep->chgCData(oldp+25,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__jump_type),3);
        tracep->chgIData(oldp+26,((0x3ffffffU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),26);
        tracep->chgIData(oldp+27,((((- (IData)((1U 
                                                & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr))),32);
        tracep->chgCData(oldp+28,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                            >> 0x15U))),5);
        tracep->chgCData(oldp+29,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                            >> 0x10U))),5);
        tracep->chgCData(oldp+30,((0x1fU & ((0U == 
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
        tracep->chgBit(oldp+31,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__branch));
        tracep->chgBit(oldp+32,(((((((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
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
        tracep->chgIData(oldp+33,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__rs1_out),32);
        tracep->chgIData(oldp+34,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__rs2_out),32);
        tracep->chgIData(oldp+35,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs1),32);
        tracep->chgIData(oldp+36,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_rs2),32);
        tracep->chgIData(oldp+37,((IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result)),32);
        tracep->chgBit(oldp+38,((0U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result))));
        tracep->chgBit(oldp+39,((1U & ((2U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_op))
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
        tracep->chgIData(oldp+40,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM
                                  [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc 
                                            >> 2U))]),32);
        tracep->chgIData(oldp+41,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__out),32);
        tracep->chgIData(oldp+42,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_pc),32);
        tracep->chgIData(oldp+43,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_addr),32);
        tracep->chgCData(oldp+44,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_op),4);
        tracep->chgIData(oldp+45,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_imm),32);
        tracep->chgIData(oldp+46,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_ra),32);
        tracep->chgIData(oldp+47,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs2),32);
        tracep->chgCData(oldp+48,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rdst_id),5);
        tracep->chgBit(oldp+49,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_we_reg));
        tracep->chgBit(oldp+50,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_we_dmem));
        tracep->chgCData(oldp+51,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_wbsel),2);
        tracep->chgBit(oldp+52,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_ssel));
        tracep->chgCData(oldp+53,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_type),4);
        tracep->chgIData(oldp+54,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_pc),32);
        tracep->chgIData(oldp+55,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd),32);
        tracep->chgIData(oldp+56,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rs2),32);
        tracep->chgCData(oldp+57,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rdst_id),5);
        tracep->chgBit(oldp+58,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_we_reg));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_we_dmem));
        tracep->chgCData(oldp+60,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel),2);
        tracep->chgIData(oldp+61,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_rdata),32);
        tracep->chgCData(oldp+62,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_rdst_id),5);
        tracep->chgBit(oldp+63,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_we_reg));
        tracep->chgBit(oldp+64,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ifid_write));
        tracep->chgBit(oldp+65,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc_write));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ifid_flush));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__idex_flush));
        tracep->chgQData(oldp+68,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result),33);
        tracep->chgCData(oldp+70,((vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                   >> 0x1aU)),6);
        tracep->chgCData(oldp+71,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                            >> 0xbU))),5);
        tracep->chgCData(oldp+72,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                            >> 6U))),5);
        tracep->chgCData(oldp+73,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),6);
        tracep->chgSData(oldp+74,((0xffffU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),16);
        tracep->chgBit(oldp+75,((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+76,((8U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+77,((0xaU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                          >> 0x1aU))));
        tracep->chgBit(oldp+78,((0x23U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                           >> 0x1aU))));
        tracep->chgBit(oldp+79,((4U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+80,((3U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+81,((2U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
        tracep->chgCData(oldp+82,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__hazard_ctrl_inst__DOT__hazard_type),2);
        tracep->chgBit(oldp+83,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__hazard_ctrl_inst__DOT__data_stall_counter));
        tracep->chgIData(oldp+84,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_addr),26);
        tracep->chgCData(oldp+85,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_type),3);
        tracep->chgCData(oldp+86,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)),6);
        tracep->chgIData(oldp+87,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[0]),32);
        tracep->chgIData(oldp+88,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[1]),32);
        tracep->chgIData(oldp+89,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[2]),32);
        tracep->chgIData(oldp+90,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[3]),32);
        tracep->chgIData(oldp+91,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[4]),32);
        tracep->chgIData(oldp+92,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[5]),32);
        tracep->chgIData(oldp+93,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[6]),32);
        tracep->chgIData(oldp+94,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[7]),32);
        tracep->chgIData(oldp+95,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[8]),32);
        tracep->chgIData(oldp+96,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[9]),32);
        tracep->chgIData(oldp+97,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[10]),32);
        tracep->chgIData(oldp+98,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[11]),32);
        tracep->chgIData(oldp+99,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[12]),32);
        tracep->chgIData(oldp+100,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[13]),32);
        tracep->chgIData(oldp+101,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[14]),32);
        tracep->chgIData(oldp+102,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[15]),32);
        tracep->chgIData(oldp+103,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[16]),32);
        tracep->chgIData(oldp+104,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[17]),32);
        tracep->chgIData(oldp+105,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[18]),32);
        tracep->chgIData(oldp+106,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[19]),32);
        tracep->chgIData(oldp+107,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[20]),32);
        tracep->chgIData(oldp+108,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[21]),32);
        tracep->chgIData(oldp+109,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[22]),32);
        tracep->chgIData(oldp+110,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[23]),32);
        tracep->chgIData(oldp+111,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[24]),32);
        tracep->chgIData(oldp+112,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[25]),32);
        tracep->chgIData(oldp+113,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[26]),32);
        tracep->chgIData(oldp+114,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[27]),32);
        tracep->chgIData(oldp+115,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[28]),32);
        tracep->chgIData(oldp+116,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[29]),32);
        tracep->chgIData(oldp+117,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[30]),32);
        tracep->chgIData(oldp+118,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[31]),32);
        tracep->chgIData(oldp+119,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__i),32);
        tracep->chgCData(oldp+120,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd)),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+121,(vlSymsp->TOP__hw3_tb.finish));
        tracep->chgIData(oldp+122,(vlSymsp->TOP__hw3_tb.__PVT__i),32);
        tracep->chgIData(oldp+123,(vlSymsp->TOP__hw3_tb.__PVT__cycle_count),32);
        tracep->chgIData(oldp+124,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[0]),32);
        tracep->chgIData(oldp+125,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[1]),32);
        tracep->chgIData(oldp+126,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[2]),32);
        tracep->chgIData(oldp+127,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[3]),32);
        tracep->chgIData(oldp+128,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[4]),32);
        tracep->chgIData(oldp+129,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[5]),32);
        tracep->chgIData(oldp+130,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[6]),32);
        tracep->chgIData(oldp+131,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[7]),32);
        tracep->chgIData(oldp+132,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[8]),32);
        tracep->chgIData(oldp+133,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[9]),32);
        tracep->chgIData(oldp+134,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[10]),32);
        tracep->chgIData(oldp+135,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[11]),32);
        tracep->chgIData(oldp+136,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[12]),32);
        tracep->chgIData(oldp+137,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[13]),32);
        tracep->chgIData(oldp+138,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[14]),32);
        tracep->chgIData(oldp+139,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[15]),32);
        tracep->chgIData(oldp+140,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[16]),32);
        tracep->chgIData(oldp+141,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[17]),32);
        tracep->chgIData(oldp+142,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[18]),32);
        tracep->chgIData(oldp+143,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[19]),32);
        tracep->chgIData(oldp+144,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[20]),32);
        tracep->chgIData(oldp+145,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[21]),32);
        tracep->chgIData(oldp+146,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[22]),32);
        tracep->chgIData(oldp+147,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[23]),32);
        tracep->chgIData(oldp+148,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[24]),32);
        tracep->chgIData(oldp+149,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[25]),32);
        tracep->chgIData(oldp+150,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[26]),32);
        tracep->chgIData(oldp+151,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[27]),32);
        tracep->chgIData(oldp+152,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[28]),32);
        tracep->chgIData(oldp+153,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[29]),32);
        tracep->chgIData(oldp+154,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[30]),32);
        tracep->chgIData(oldp+155,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[31]),32);
        tracep->chgIData(oldp+156,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[0]),32);
        tracep->chgIData(oldp+157,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[1]),32);
        tracep->chgIData(oldp+158,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[2]),32);
        tracep->chgIData(oldp+159,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[3]),32);
        tracep->chgIData(oldp+160,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[4]),32);
        tracep->chgIData(oldp+161,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[5]),32);
        tracep->chgIData(oldp+162,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[6]),32);
        tracep->chgIData(oldp+163,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[7]),32);
        tracep->chgIData(oldp+164,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[8]),32);
        tracep->chgIData(oldp+165,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[9]),32);
        tracep->chgIData(oldp+166,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[10]),32);
        tracep->chgIData(oldp+167,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[11]),32);
        tracep->chgIData(oldp+168,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[12]),32);
        tracep->chgIData(oldp+169,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[13]),32);
        tracep->chgIData(oldp+170,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[14]),32);
        tracep->chgIData(oldp+171,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[15]),32);
        tracep->chgBit(oldp+172,(vlSymsp->TOP__hw3_tb.__PVT__start));
    }
    tracep->chgBit(oldp+173,(vlSelf->clk));
    tracep->chgBit(oldp+174,(vlSelf->rst));
    tracep->chgBit(oldp+175,(vlSelf->finish));
    tracep->chgIData(oldp+176,(((0U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                 ? vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd
                                 : ((1U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                     ? vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                    [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                                              >> 2U))]
                                     : ((2U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                         ? ((IData)(4U) 
                                            + vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)
                                         : 0U)))),32);
    tracep->chgIData(oldp+177,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                               [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                                         >> 2U))]),32);
    tracep->chgIData(oldp+178,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[0]),32);
    tracep->chgIData(oldp+179,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[1]),32);
    tracep->chgIData(oldp+180,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[2]),32);
    tracep->chgIData(oldp+181,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[3]),32);
    tracep->chgIData(oldp+182,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[4]),32);
    tracep->chgIData(oldp+183,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[5]),32);
    tracep->chgIData(oldp+184,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[6]),32);
    tracep->chgIData(oldp+185,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[7]),32);
    tracep->chgIData(oldp+186,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[8]),32);
    tracep->chgIData(oldp+187,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[9]),32);
    tracep->chgIData(oldp+188,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[10]),32);
    tracep->chgIData(oldp+189,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[11]),32);
    tracep->chgIData(oldp+190,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[12]),32);
    tracep->chgIData(oldp+191,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[13]),32);
    tracep->chgIData(oldp+192,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[14]),32);
    tracep->chgIData(oldp+193,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[15]),32);
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
