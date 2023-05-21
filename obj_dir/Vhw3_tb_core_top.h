// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhw3_tb.h for the primary calling header

#ifndef VERILATED_VHW3_TB_CORE_TOP_H_
#define VERILATED_VHW3_TB_CORE_TOP_H_  // guard

#include "verilated.h"

class Vhw3_tb__Syms;
class Vhw3_tb_imem;
class Vhw3_tb_dmem;

VL_MODULE(Vhw3_tb_core_top) {
  public:
    // CELLS
    Vhw3_tb_imem* imem_inst;
    Vhw3_tb_dmem* dmem_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    CData/*3:0*/ __PVT__op;
    CData/*0:0*/ __PVT__we_regfile;
    CData/*2:0*/ __PVT__jump_type;
    CData/*0:0*/ __PVT__branch;
    CData/*3:0*/ __PVT__ex_op;
    CData/*4:0*/ __PVT__ex_rdst_id;
    CData/*0:0*/ __PVT__ex_we_reg;
    CData/*0:0*/ __PVT__ex_we_dmem;
    CData/*1:0*/ __PVT__ex_wbsel;
    CData/*0:0*/ __PVT__ex_ssel;
    CData/*4:0*/ __PVT__mem_rdst_id;
    CData/*0:0*/ __PVT__mem_we_reg;
    CData/*0:0*/ __PVT__mem_we_dmem;
    CData/*1:0*/ __PVT__mem_wbsel;
    CData/*4:0*/ __PVT__wb_rdst_id;
    CData/*0:0*/ __PVT__wb_we_reg;
    CData/*0:0*/ __PVT__ifid_write;
    CData/*0:0*/ __PVT__pc_write;
    CData/*0:0*/ __PVT__ifid_flush;
    CData/*0:0*/ __PVT__idex_flush;
    CData/*2:0*/ __Vcellout__idex_instr__EX_jump_type;
    CData/*1:0*/ __PVT__hazard_ctrl_inst__DOT__hazard_type;
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __PVT__pc_increment;
    IData/*31:0*/ __PVT__instr;
    IData/*31:0*/ __PVT__rs1_out;
    IData/*31:0*/ __PVT__rs2_out;
    IData/*31:0*/ __PVT__alu_rs2;
    IData/*31:0*/ __PVT__out;
    IData/*31:0*/ __PVT__ex_pc;
    IData/*31:0*/ __PVT__ex_imm;
    IData/*31:0*/ __PVT__ex_ra;
    IData/*31:0*/ __PVT__ex_rs1;
    IData/*31:0*/ __PVT__ex_rs2;
    IData/*31:0*/ __PVT__mem_pc;
    IData/*31:0*/ __PVT__mem_rd;
    IData/*31:0*/ __PVT__mem_rs2;
    IData/*31:0*/ __PVT__wb_rdata;
    IData/*25:0*/ __Vcellout__idex_instr__EX_jump_addr;
    IData/*31:0*/ __PVT__reg_file_inst__DOT__i;
    IData/*31:0*/ __PVT__hazard_ctrl_inst__DOT__data_stall_counter;
    IData/*31:0*/ __Vdly__instr;
    QData/*32:0*/ __PVT__alu_inst__DOT__result;
    VlUnpacked<IData/*31:0*/, 32> __PVT__reg_file_inst__DOT__R;

    // INTERNAL VARIABLES
    Vhw3_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vhw3_tb_core_top(const char* name);
    ~Vhw3_tb_core_top();
    VL_UNCOPYABLE(Vhw3_tb_core_top);

    // INTERNAL METHODS
    void __Vconfigure(Vhw3_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
