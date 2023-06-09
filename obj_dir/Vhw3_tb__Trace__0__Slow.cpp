// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw3_tb__Syms.h"


VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBit(c+175,"rst", false,-1);
    tracep->declBit(c+176,"finish", false,-1);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBit(c+175,"rst", false,-1);
    tracep->declBit(c+122,"finish", false,-1);
    tracep->declBus(c+195,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->declBus(c+196,"tmp", false,-1, 31,0);
    tracep->declBus(c+124,"cycle_count", false,-1, 31,0);
    tracep->declBus(c+197,"cycle_for_ans", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+125+i*1,"golden_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+157+i*1,"golden_dmem", true,(i+0), 31,0);
    }
    tracep->declBit(c+173,"start", false,-1);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+195,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBit(c+175,"rst", false,-1);
    tracep->declBus(c+198,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+199,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+200,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+201,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+202,"J_TYPE_J", false,-1, 2,0);
    tracep->declBus(c+18,"pc", false,-1, 31,0);
    tracep->declBus(c+19,"pc_increment", false,-1, 31,0);
    tracep->declBus(c+20,"instr", false,-1, 31,0);
    tracep->declBus(c+21,"op", false,-1, 3,0);
    tracep->declBit(c+22,"ssel", false,-1);
    tracep->declBus(c+23,"wbsel", false,-1, 1,0);
    tracep->declBit(c+24,"we_regfile", false,-1);
    tracep->declBit(c+25,"we_dmem", false,-1);
    tracep->declBus(c+26,"jump_type", false,-1, 2,0);
    tracep->declBus(c+27,"jump_addr", false,-1, 25,0);
    tracep->declBus(c+28,"imm", false,-1, 31,0);
    tracep->declBus(c+29,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+30,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+31,"rdst_id", false,-1, 4,0);
    tracep->declBit(c+32,"branch", false,-1);
    tracep->declBit(c+33,"mem_read", false,-1);
    tracep->declBus(c+177,"rd", false,-1, 31,0);
    tracep->declBus(c+34,"rs1_out", false,-1, 31,0);
    tracep->declBus(c+35,"rs2_out", false,-1, 31,0);
    tracep->declBus(c+36,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+37,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+38,"alu_out", false,-1, 31,0);
    tracep->declBit(c+39,"zero", false,-1);
    tracep->declBit(c+40,"overflow", false,-1);
    tracep->declBus(c+178,"dmem_out", false,-1, 31,0);
    tracep->declBus(c+41,"rdata", false,-1, 31,0);
    tracep->declBus(c+42,"out", false,-1, 31,0);
    tracep->declBus(c+43,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+44,"ex_jump_addr", false,-1, 31,0);
    tracep->declBus(c+45,"ex_op", false,-1, 3,0);
    tracep->declBus(c+46,"ex_imm", false,-1, 31,0);
    tracep->declBus(c+47,"ex_ra", false,-1, 31,0);
    tracep->declBus(c+36,"ex_rs1", false,-1, 31,0);
    tracep->declBus(c+48,"ex_rs2", false,-1, 31,0);
    tracep->declBus(c+49,"ex_rdst_id", false,-1, 4,0);
    tracep->declBit(c+50,"ex_we_reg", false,-1);
    tracep->declBit(c+51,"ex_we_dmem", false,-1);
    tracep->declBus(c+52,"ex_wbsel", false,-1, 1,0);
    tracep->declBit(c+53,"ex_ssel", false,-1);
    tracep->declBus(c+54,"ex_jump_type", false,-1, 3,0);
    tracep->declBus(c+55,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+56,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+57,"mem_rs2", false,-1, 31,0);
    tracep->declBus(c+58,"mem_rdst_id", false,-1, 4,0);
    tracep->declBit(c+59,"mem_we_reg", false,-1);
    tracep->declBit(c+60,"mem_we_dmem", false,-1);
    tracep->declBus(c+61,"mem_wbsel", false,-1, 1,0);
    tracep->declBus(c+62,"wb_rdata", false,-1, 31,0);
    tracep->declBus(c+63,"wb_rdst_id", false,-1, 4,0);
    tracep->declBit(c+64,"wb_we_reg", false,-1);
    tracep->declBit(c+65,"ifid_write", false,-1);
    tracep->declBit(c+66,"pc_write", false,-1);
    tracep->declBit(c+67,"ifid_flush", false,-1);
    tracep->declBit(c+68,"idex_flush", false,-1);
    tracep->declBit(c+203,"exmem_flush", false,-1);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+195,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"op", false,-1, 3,0);
    tracep->declBus(c+36,"rs1", false,-1, 31,0);
    tracep->declBus(c+37,"rs2", false,-1, 31,0);
    tracep->declBus(c+38,"rd", false,-1, 31,0);
    tracep->declBit(c+39,"zero", false,-1);
    tracep->declBit(c+40,"overflow", false,-1);
    tracep->declBus(c+204,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+205,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+206,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+207,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+208,"OP_NOR", false,-1, 3,0);
    tracep->declBus(c+209,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+210,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+211,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+212,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+213,"OP_LUI", false,-1, 3,0);
    tracep->declQuad(c+69,"result", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBus(c+195,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+20,"instr", false,-1, 31,0);
    tracep->declBus(c+21,"op", false,-1, 3,0);
    tracep->declBit(c+22,"ssel", false,-1);
    tracep->declBus(c+23,"wbsel", false,-1, 1,0);
    tracep->declBit(c+24,"we_regfile", false,-1);
    tracep->declBit(c+25,"we_dmem", false,-1);
    tracep->declBus(c+26,"jump_type", false,-1, 2,0);
    tracep->declBus(c+27,"jump_addr", false,-1, 25,0);
    tracep->declBus(c+28,"imm", false,-1, 31,0);
    tracep->declBus(c+29,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+30,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+31,"rdst_id", false,-1, 4,0);
    tracep->declBit(c+33,"mem_read", false,-1);
    tracep->declBit(c+32,"is_branch", false,-1);
    tracep->declBus(c+214,"OP_R_TYPE", false,-1, 5,0);
    tracep->declBus(c+215,"OP_ADDI", false,-1, 5,0);
    tracep->declBus(c+216,"OP_SLTI", false,-1, 5,0);
    tracep->declBus(c+217,"OP_LW", false,-1, 5,0);
    tracep->declBus(c+218,"OP_SW", false,-1, 5,0);
    tracep->declBus(c+219,"OP_BEQ", false,-1, 5,0);
    tracep->declBus(c+220,"OP_JAL", false,-1, 5,0);
    tracep->declBus(c+221,"OP_J", false,-1, 5,0);
    tracep->declBus(c+222,"FUNCT_ADD", false,-1, 5,0);
    tracep->declBus(c+223,"FUNCT_SUB", false,-1, 5,0);
    tracep->declBus(c+224,"FUNCT_AND", false,-1, 5,0);
    tracep->declBus(c+225,"FUNCT_OR", false,-1, 5,0);
    tracep->declBus(c+226,"FUNCT_NOR", false,-1, 5,0);
    tracep->declBus(c+227,"FUNCT_SLT", false,-1, 5,0);
    tracep->declBus(c+215,"FUNCT_JR", false,-1, 5,0);
    tracep->declBus(c+204,"ALU_OP_AND", false,-1, 3,0);
    tracep->declBus(c+205,"ALU_OP_OR", false,-1, 3,0);
    tracep->declBus(c+206,"ALU_OP_ADD", false,-1, 3,0);
    tracep->declBus(c+207,"ALU_OP_SUB", false,-1, 3,0);
    tracep->declBus(c+208,"ALU_OP_NOR", false,-1, 3,0);
    tracep->declBus(c+209,"ALU_OP_SLT", false,-1, 3,0);
    tracep->declBus(c+228,"ALU_OP_NOP", false,-1, 3,0);
    tracep->declBus(c+198,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+199,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+200,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+201,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+202,"J_TYPE_J", false,-1, 2,0);
    tracep->declBus(c+71,"opcode", false,-1, 5,0);
    tracep->declBus(c+29,"rs", false,-1, 4,0);
    tracep->declBus(c+30,"rt", false,-1, 4,0);
    tracep->declBus(c+72,"rd", false,-1, 4,0);
    tracep->declBus(c+73,"shamt", false,-1, 4,0);
    tracep->declBus(c+74,"funct", false,-1, 5,0);
    tracep->declBus(c+75,"immediate", false,-1, 15,0);
    tracep->declBus(c+27,"address", false,-1, 25,0);
    tracep->declBit(c+76,"is_r_type", false,-1);
    tracep->declBit(c+77,"is_addi", false,-1);
    tracep->declBit(c+78,"is_slti", false,-1);
    tracep->declBit(c+79,"is_lw", false,-1);
    tracep->declBit(c+25,"is_sw", false,-1);
    tracep->declBit(c+80,"is_beq", false,-1);
    tracep->declBit(c+81,"is_jal", false,-1);
    tracep->declBit(c+82,"is_j", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exmem_inst ");
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBit(c+175,"rst", false,-1);
    tracep->declBit(c+203,"flush", false,-1);
    tracep->declBus(c+43,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+38,"rd", false,-1, 31,0);
    tracep->declBus(c+48,"rs2", false,-1, 31,0);
    tracep->declBus(c+49,"ex_rdst_id", false,-1, 4,0);
    tracep->declBit(c+50,"ex_we_reg", false,-1);
    tracep->declBit(c+51,"ex_we_dmem", false,-1);
    tracep->declBus(c+52,"ex_wbsel", false,-1, 1,0);
    tracep->declBit(c+59,"mem_we_reg", false,-1);
    tracep->declBit(c+60,"mem_we_dmem", false,-1);
    tracep->declBus(c+55,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+56,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+57,"mem_rs2", false,-1, 31,0);
    tracep->declBus(c+58,"mem_rdst_id", false,-1, 4,0);
    tracep->declBus(c+61,"mem_wbsel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_ctrl_inst ");
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBit(c+175,"rst", false,-1);
    tracep->declBit(c+32,"branch", false,-1);
    tracep->declBit(c+39,"zero", false,-1);
    tracep->declBit(c+33,"mem_read", false,-1);
    tracep->declBit(c+50,"ex_we_reg", false,-1);
    tracep->declBit(c+59,"mem_we_reg", false,-1);
    tracep->declBus(c+52,"ex_wbsel", false,-1, 1,0);
    tracep->declBus(c+61,"mem_wbsel", false,-1, 1,0);
    tracep->declBus(c+29,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+30,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+49,"idex_regt", false,-1, 4,0);
    tracep->declBus(c+58,"exmem_regt", false,-1, 4,0);
    tracep->declBit(c+65,"ifid_write", false,-1);
    tracep->declBit(c+66,"pc_write", false,-1);
    tracep->declBit(c+67,"ifid_flush", false,-1);
    tracep->declBit(c+68,"idex_flush", false,-1);
    tracep->declBit(c+203,"exmem_flush", false,-1);
    tracep->declBus(c+83,"hazard_type", false,-1, 1,0);
    tracep->declBit(c+84,"data_stall_counter", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idex_instr ");
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBit(c+175,"rst", false,-1);
    tracep->declBit(c+68,"flush", false,-1);
    tracep->declBus(c+42,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+27,"ID_jump_addr", false,-1, 25,0);
    tracep->declBus(c+21,"ID_op", false,-1, 3,0);
    tracep->declBus(c+28,"ID_imm", false,-1, 31,0);
    tracep->declBus(c+34,"ID_rs1", false,-1, 31,0);
    tracep->declBus(c+35,"ID_rs2", false,-1, 31,0);
    tracep->declBus(c+31,"ID_rdst_id", false,-1, 4,0);
    tracep->declBit(c+24,"ID_we_reg", false,-1);
    tracep->declBit(c+25,"ID_we_dmem", false,-1);
    tracep->declBus(c+23,"ID_wbsel", false,-1, 1,0);
    tracep->declBit(c+22,"ID_ssel", false,-1);
    tracep->declBus(c+26,"ID_jump_type", false,-1, 2,0);
    tracep->declBit(c+50,"EX_we_reg", false,-1);
    tracep->declBit(c+51,"EX_we_dmem", false,-1);
    tracep->declBus(c+43,"EX_pc", false,-1, 31,0);
    tracep->declBus(c+85,"EX_jump_addr", false,-1, 25,0);
    tracep->declBus(c+45,"EX_op", false,-1, 3,0);
    tracep->declBus(c+46,"EX_imm", false,-1, 31,0);
    tracep->declBus(c+47,"EX_ra", false,-1, 31,0);
    tracep->declBus(c+36,"EX_rs1", false,-1, 31,0);
    tracep->declBus(c+48,"EX_rs2", false,-1, 31,0);
    tracep->declBus(c+49,"EX_rdst_id", false,-1, 4,0);
    tracep->declBus(c+52,"EX_wbsel", false,-1, 1,0);
    tracep->declBit(c+53,"EX_ssel", false,-1);
    tracep->declBus(c+86,"EX_jump_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifid_inst ");
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBit(c+175,"rst", false,-1);
    tracep->declBit(c+67,"flush", false,-1);
    tracep->declBit(c+65,"ifid_write", false,-1);
    tracep->declBus(c+18,"pc", false,-1, 31,0);
    tracep->declBus(c+41,"rdata", false,-1, 31,0);
    tracep->declBus(c+42,"pc_out", false,-1, 31,0);
    tracep->declBus(c+20,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_inst ");
    tracep->declBus(c+87,"addr", false,-1, 5,0);
    tracep->declBus(c+41,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memwb_inst ");
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBit(c+175,"rst", false,-1);
    tracep->declBus(c+177,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+58,"mem_rdst_id", false,-1, 4,0);
    tracep->declBit(c+59,"mem_we_reg", false,-1);
    tracep->declBit(c+60,"mem_we_dmem", false,-1);
    tracep->declBit(c+64,"wb_we_reg", false,-1);
    tracep->declBus(c+62,"wb_rdata", false,-1, 31,0);
    tracep->declBus(c+63,"wb_rdst_id", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_inst ");
    tracep->declBus(c+195,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBit(c+175,"rst", false,-1);
    tracep->declBus(c+29,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+30,"rs2_id", false,-1, 4,0);
    tracep->declBit(c+64,"we", false,-1);
    tracep->declBus(c+63,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+62,"rdst", false,-1, 31,0);
    tracep->declBus(c+34,"rs1", false,-1, 31,0);
    tracep->declBus(c+35,"rs2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+88+i*1,"R", true,(i+0), 31,0);
    }
    tracep->declBus(c+120,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__dmem_inst__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__dmem_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+174,"clk", false,-1);
    tracep->declBus(c+121,"addr", false,-1, 5,0);
    tracep->declBit(c+60,"we", false,-1);
    tracep->declBus(c+57,"wdata", false,-1, 31,0);
    tracep->declBus(c+178,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+179+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->declBus(c+17,"idx", false,-1, 31,0);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_top(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_top\n"); );
    // Body
    Vhw3_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("hw3_tb ");
    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__0(vlSelf, tracep);
    tracep->pushNamePrefix("core_top_inst ");
    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__0(vlSelf, tracep);
    tracep->pushNamePrefix("dmem_inst ");
    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__dmem_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vhw3_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vhw3_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhw3_tb___024root__trace_register(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vhw3_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vhw3_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vhw3_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_full_top_0\n"); );
    // Init
    Vhw3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw3_tb___024root*>(voidSelf);
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhw3_tb___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[0]),32);
    tracep->fullIData(oldp+2,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[1]),32);
    tracep->fullIData(oldp+3,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[2]),32);
    tracep->fullIData(oldp+4,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[3]),32);
    tracep->fullIData(oldp+5,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[4]),32);
    tracep->fullIData(oldp+6,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[5]),32);
    tracep->fullIData(oldp+7,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[6]),32);
    tracep->fullIData(oldp+8,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[7]),32);
    tracep->fullIData(oldp+9,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[8]),32);
    tracep->fullIData(oldp+10,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[9]),32);
    tracep->fullIData(oldp+11,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[10]),32);
    tracep->fullIData(oldp+12,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[11]),32);
    tracep->fullIData(oldp+13,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[12]),32);
    tracep->fullIData(oldp+14,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[13]),32);
    tracep->fullIData(oldp+15,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[14]),32);
    tracep->fullIData(oldp+16,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM[15]),32);
    tracep->fullIData(oldp+17,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.__PVT__idx),32);
    tracep->fullIData(oldp+18,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc),32);
    tracep->fullIData(oldp+19,(((IData)(4U) + vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)),32);
    tracep->fullIData(oldp+20,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr),32);
    tracep->fullCData(oldp+21,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__op),4);
    tracep->fullBit(oldp+22,(((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                      >> 0x1aU)) | 
                              (4U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                      >> 0x1aU)))));
    tracep->fullCData(oldp+23,(((0x23U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                           >> 0x1aU))
                                 ? 1U : ((3U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                 >> 0x1aU))
                                          ? 2U : 0U))),2);
    tracep->fullBit(oldp+24,((1U & ((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                            >> 0x1aU))
                                     ? ((8U == (0x3fU 
                                                & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr))
                                         ? 0U : 1U)
                                     : ((((8U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                  >> 0x1aU)) 
                                          | (0xaU == 
                                             (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                              >> 0x1aU))) 
                                         | (0x23U == 
                                            (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                             >> 0x1aU))) 
                                        | (3U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                  >> 0x1aU)))))));
    tracep->fullBit(oldp+25,((0x2bU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
    tracep->fullCData(oldp+26,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__jump_type),3);
    tracep->fullIData(oldp+27,((0x3ffffffU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),26);
    tracep->fullIData(oldp+28,((((- (IData)((1U & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr))),32);
    tracep->fullCData(oldp+29,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                         >> 0x15U))),5);
    tracep->fullCData(oldp+30,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                         >> 0x10U))),5);
    tracep->fullCData(oldp+31,((0x1fU & ((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
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
                                              ? (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                 >> 0x10U)
                                              : ((3U 
                                                  == 
                                                  (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                   >> 0x1aU))
                                                  ? 0x1fU
                                                  : 0U))))),5);
    tracep->fullBit(oldp+32,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__branch));
    tracep->fullBit(oldp+33,(((((((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
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
    tracep->fullIData(oldp+34,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__rs1_out),32);
    tracep->fullIData(oldp+35,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__rs2_out),32);
    tracep->fullIData(oldp+36,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs1),32);
    tracep->fullIData(oldp+37,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_rs2),32);
    tracep->fullIData(oldp+38,((IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result)),32);
    tracep->fullBit(oldp+39,((0U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result))));
    tracep->fullBit(oldp+40,((1U & ((2U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_op))
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
    tracep->fullIData(oldp+41,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__imem_inst__DOT__RAM
                               [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc 
                                         >> 2U))]),32);
    tracep->fullIData(oldp+42,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__out),32);
    tracep->fullIData(oldp+43,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_pc),32);
    tracep->fullIData(oldp+44,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_addr),32);
    tracep->fullCData(oldp+45,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_op),4);
    tracep->fullIData(oldp+46,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_imm),32);
    tracep->fullIData(oldp+47,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_ra),32);
    tracep->fullIData(oldp+48,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs2),32);
    tracep->fullCData(oldp+49,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rdst_id),5);
    tracep->fullBit(oldp+50,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_we_reg));
    tracep->fullBit(oldp+51,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_we_dmem));
    tracep->fullCData(oldp+52,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_wbsel),2);
    tracep->fullBit(oldp+53,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_ssel));
    tracep->fullCData(oldp+54,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_type),4);
    tracep->fullIData(oldp+55,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_pc),32);
    tracep->fullIData(oldp+56,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd),32);
    tracep->fullIData(oldp+57,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rs2),32);
    tracep->fullCData(oldp+58,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rdst_id),5);
    tracep->fullBit(oldp+59,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_we_reg));
    tracep->fullBit(oldp+60,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_we_dmem));
    tracep->fullCData(oldp+61,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel),2);
    tracep->fullIData(oldp+62,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_rdata),32);
    tracep->fullCData(oldp+63,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_rdst_id),5);
    tracep->fullBit(oldp+64,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_we_reg));
    tracep->fullBit(oldp+65,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ifid_write));
    tracep->fullBit(oldp+66,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc_write));
    tracep->fullBit(oldp+67,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ifid_flush));
    tracep->fullBit(oldp+68,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__idex_flush));
    tracep->fullQData(oldp+69,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result),33);
    tracep->fullCData(oldp+71,((vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                >> 0x1aU)),6);
    tracep->fullCData(oldp+72,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                         >> 0xbU))),5);
    tracep->fullCData(oldp+73,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                         >> 6U))),5);
    tracep->fullCData(oldp+74,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),6);
    tracep->fullSData(oldp+75,((0xffffU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),16);
    tracep->fullBit(oldp+76,((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullBit(oldp+77,((8U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullBit(oldp+78,((0xaU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                       >> 0x1aU))));
    tracep->fullBit(oldp+79,((0x23U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
    tracep->fullBit(oldp+80,((4U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullBit(oldp+81,((3U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullBit(oldp+82,((2U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullCData(oldp+83,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__hazard_ctrl_inst__DOT__hazard_type),2);
    tracep->fullBit(oldp+84,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__hazard_ctrl_inst__DOT__data_stall_counter));
    tracep->fullIData(oldp+85,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_addr),26);
    tracep->fullCData(oldp+86,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_type),3);
    tracep->fullCData(oldp+87,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)),6);
    tracep->fullIData(oldp+88,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[0]),32);
    tracep->fullIData(oldp+89,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[1]),32);
    tracep->fullIData(oldp+90,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[2]),32);
    tracep->fullIData(oldp+91,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[3]),32);
    tracep->fullIData(oldp+92,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[4]),32);
    tracep->fullIData(oldp+93,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[5]),32);
    tracep->fullIData(oldp+94,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[6]),32);
    tracep->fullIData(oldp+95,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[7]),32);
    tracep->fullIData(oldp+96,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[8]),32);
    tracep->fullIData(oldp+97,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[9]),32);
    tracep->fullIData(oldp+98,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[10]),32);
    tracep->fullIData(oldp+99,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[11]),32);
    tracep->fullIData(oldp+100,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[12]),32);
    tracep->fullIData(oldp+101,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[13]),32);
    tracep->fullIData(oldp+102,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[14]),32);
    tracep->fullIData(oldp+103,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[15]),32);
    tracep->fullIData(oldp+104,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[16]),32);
    tracep->fullIData(oldp+105,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[17]),32);
    tracep->fullIData(oldp+106,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[18]),32);
    tracep->fullIData(oldp+107,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[19]),32);
    tracep->fullIData(oldp+108,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[20]),32);
    tracep->fullIData(oldp+109,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[21]),32);
    tracep->fullIData(oldp+110,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[22]),32);
    tracep->fullIData(oldp+111,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[23]),32);
    tracep->fullIData(oldp+112,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[24]),32);
    tracep->fullIData(oldp+113,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[25]),32);
    tracep->fullIData(oldp+114,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[26]),32);
    tracep->fullIData(oldp+115,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[27]),32);
    tracep->fullIData(oldp+116,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[28]),32);
    tracep->fullIData(oldp+117,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[29]),32);
    tracep->fullIData(oldp+118,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[30]),32);
    tracep->fullIData(oldp+119,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[31]),32);
    tracep->fullIData(oldp+120,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__i),32);
    tracep->fullCData(oldp+121,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd)),6);
    tracep->fullBit(oldp+122,(vlSymsp->TOP__hw3_tb.finish));
    tracep->fullIData(oldp+123,(vlSymsp->TOP__hw3_tb.__PVT__i),32);
    tracep->fullIData(oldp+124,(vlSymsp->TOP__hw3_tb.__PVT__cycle_count),32);
    tracep->fullIData(oldp+125,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[0]),32);
    tracep->fullIData(oldp+126,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[1]),32);
    tracep->fullIData(oldp+127,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[2]),32);
    tracep->fullIData(oldp+128,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[3]),32);
    tracep->fullIData(oldp+129,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[4]),32);
    tracep->fullIData(oldp+130,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[5]),32);
    tracep->fullIData(oldp+131,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[6]),32);
    tracep->fullIData(oldp+132,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[7]),32);
    tracep->fullIData(oldp+133,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[8]),32);
    tracep->fullIData(oldp+134,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[9]),32);
    tracep->fullIData(oldp+135,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[10]),32);
    tracep->fullIData(oldp+136,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[11]),32);
    tracep->fullIData(oldp+137,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[12]),32);
    tracep->fullIData(oldp+138,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[13]),32);
    tracep->fullIData(oldp+139,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[14]),32);
    tracep->fullIData(oldp+140,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[15]),32);
    tracep->fullIData(oldp+141,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[16]),32);
    tracep->fullIData(oldp+142,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[17]),32);
    tracep->fullIData(oldp+143,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[18]),32);
    tracep->fullIData(oldp+144,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[19]),32);
    tracep->fullIData(oldp+145,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[20]),32);
    tracep->fullIData(oldp+146,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[21]),32);
    tracep->fullIData(oldp+147,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[22]),32);
    tracep->fullIData(oldp+148,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[23]),32);
    tracep->fullIData(oldp+149,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[24]),32);
    tracep->fullIData(oldp+150,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[25]),32);
    tracep->fullIData(oldp+151,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[26]),32);
    tracep->fullIData(oldp+152,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[27]),32);
    tracep->fullIData(oldp+153,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[28]),32);
    tracep->fullIData(oldp+154,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[29]),32);
    tracep->fullIData(oldp+155,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[30]),32);
    tracep->fullIData(oldp+156,(vlSymsp->TOP__hw3_tb.__PVT__golden_reg[31]),32);
    tracep->fullIData(oldp+157,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[0]),32);
    tracep->fullIData(oldp+158,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[1]),32);
    tracep->fullIData(oldp+159,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[2]),32);
    tracep->fullIData(oldp+160,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[3]),32);
    tracep->fullIData(oldp+161,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[4]),32);
    tracep->fullIData(oldp+162,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[5]),32);
    tracep->fullIData(oldp+163,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[6]),32);
    tracep->fullIData(oldp+164,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[7]),32);
    tracep->fullIData(oldp+165,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[8]),32);
    tracep->fullIData(oldp+166,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[9]),32);
    tracep->fullIData(oldp+167,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[10]),32);
    tracep->fullIData(oldp+168,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[11]),32);
    tracep->fullIData(oldp+169,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[12]),32);
    tracep->fullIData(oldp+170,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[13]),32);
    tracep->fullIData(oldp+171,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[14]),32);
    tracep->fullIData(oldp+172,(vlSymsp->TOP__hw3_tb.__PVT__golden_dmem[15]),32);
    tracep->fullBit(oldp+173,(vlSymsp->TOP__hw3_tb.__PVT__start));
    tracep->fullBit(oldp+174,(vlSelf->clk));
    tracep->fullBit(oldp+175,(vlSelf->rst));
    tracep->fullBit(oldp+176,(vlSelf->finish));
    tracep->fullIData(oldp+177,(((0U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                  ? vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd
                                  : ((1U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                      ? vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                     [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                                               >> 2U))]
                                      : ((2U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                          ? ((IData)(4U) 
                                             + vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)
                                          : 0U)))),32);
    tracep->fullIData(oldp+178,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                                          >> 2U))]),32);
    tracep->fullIData(oldp+179,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[0]),32);
    tracep->fullIData(oldp+180,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[1]),32);
    tracep->fullIData(oldp+181,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[2]),32);
    tracep->fullIData(oldp+182,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[3]),32);
    tracep->fullIData(oldp+183,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[4]),32);
    tracep->fullIData(oldp+184,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[5]),32);
    tracep->fullIData(oldp+185,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[6]),32);
    tracep->fullIData(oldp+186,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[7]),32);
    tracep->fullIData(oldp+187,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[8]),32);
    tracep->fullIData(oldp+188,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[9]),32);
    tracep->fullIData(oldp+189,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[10]),32);
    tracep->fullIData(oldp+190,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[11]),32);
    tracep->fullIData(oldp+191,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[12]),32);
    tracep->fullIData(oldp+192,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[13]),32);
    tracep->fullIData(oldp+193,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[14]),32);
    tracep->fullIData(oldp+194,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[15]),32);
    tracep->fullIData(oldp+195,(0x20U),32);
    tracep->fullIData(oldp+196,(vlSymsp->TOP__hw3_tb.__PVT__tmp),32);
    tracep->fullIData(oldp+197,(0x32U),32);
    tracep->fullCData(oldp+198,(0U),3);
    tracep->fullCData(oldp+199,(1U),3);
    tracep->fullCData(oldp+200,(2U),3);
    tracep->fullCData(oldp+201,(3U),3);
    tracep->fullCData(oldp+202,(4U),3);
    tracep->fullBit(oldp+203,(0U));
    tracep->fullCData(oldp+204,(0U),4);
    tracep->fullCData(oldp+205,(1U),4);
    tracep->fullCData(oldp+206,(2U),4);
    tracep->fullCData(oldp+207,(6U),4);
    tracep->fullCData(oldp+208,(0xcU),4);
    tracep->fullCData(oldp+209,(7U),4);
    tracep->fullCData(oldp+210,(9U),4);
    tracep->fullCData(oldp+211,(0xaU),4);
    tracep->fullCData(oldp+212,(0xdU),4);
    tracep->fullCData(oldp+213,(0xeU),4);
    tracep->fullCData(oldp+214,(0U),6);
    tracep->fullCData(oldp+215,(8U),6);
    tracep->fullCData(oldp+216,(0xaU),6);
    tracep->fullCData(oldp+217,(0x23U),6);
    tracep->fullCData(oldp+218,(0x2bU),6);
    tracep->fullCData(oldp+219,(4U),6);
    tracep->fullCData(oldp+220,(3U),6);
    tracep->fullCData(oldp+221,(2U),6);
    tracep->fullCData(oldp+222,(0x20U),6);
    tracep->fullCData(oldp+223,(0x22U),6);
    tracep->fullCData(oldp+224,(0x24U),6);
    tracep->fullCData(oldp+225,(0x25U),6);
    tracep->fullCData(oldp+226,(0x27U),6);
    tracep->fullCData(oldp+227,(0x2aU),6);
    tracep->fullCData(oldp+228,(0xfU),4);
}
