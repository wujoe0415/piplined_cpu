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
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBit(c+109,"rst", false,-1);
    tracep->declBit(c+110,"correctness", false,-1);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBit(c+109,"rst", false,-1);
    tracep->declBit(c+2,"correctness", false,-1);
    tracep->declBus(c+194,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+195,"i", false,-1, 31,0);
    tracep->declBus(c+196,"tmp", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+111+i*1,"golden_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+143+i*1,"golden_dmem", true,(i+0), 31,0);
    }
    tracep->declBus(c+3,"correctness_reg", false,-1, 31,0);
    tracep->declBus(c+4,"correctness_dmem", false,-1, 15,0);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+194,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBit(c+109,"rst", false,-1);
    tracep->declBus(c+197,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+198,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+199,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+200,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+201,"J_TYPE_J", false,-1, 2,0);
    tracep->declBus(c+5,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"pc_increment", false,-1, 31,0);
    tracep->declBus(c+7,"instr", false,-1, 31,0);
    tracep->declBus(c+8,"op", false,-1, 3,0);
    tracep->declBit(c+9,"ssel", false,-1);
    tracep->declBus(c+10,"wbsel", false,-1, 1,0);
    tracep->declBit(c+11,"we_regfile", false,-1);
    tracep->declBit(c+12,"we_dmem", false,-1);
    tracep->declBus(c+13,"jump_type", false,-1, 2,0);
    tracep->declBus(c+14,"jump_addr", false,-1, 25,0);
    tracep->declBus(c+15,"imm", false,-1, 31,0);
    tracep->declBus(c+16,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+17,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+18,"rdst_id", false,-1, 4,0);
    tracep->declBit(c+19,"branch", false,-1);
    tracep->declBit(c+20,"mem_read", false,-1);
    tracep->declBus(c+159,"rd", false,-1, 31,0);
    tracep->declBus(c+21,"rs1_out", false,-1, 31,0);
    tracep->declBus(c+22,"rs2_out", false,-1, 31,0);
    tracep->declBus(c+23,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+24,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+25,"alu_out", false,-1, 31,0);
    tracep->declBit(c+26,"zero", false,-1);
    tracep->declBit(c+27,"overflow", false,-1);
    tracep->declBus(c+160,"dmem_out", false,-1, 31,0);
    tracep->declBus(c+161,"rdata", false,-1, 31,0);
    tracep->declBus(c+28,"out", false,-1, 31,0);
    tracep->declBus(c+29,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+30,"ex_jump_addr", false,-1, 31,0);
    tracep->declBus(c+31,"ex_op", false,-1, 3,0);
    tracep->declBus(c+32,"ex_imm", false,-1, 31,0);
    tracep->declBus(c+33,"ex_ra", false,-1, 31,0);
    tracep->declBus(c+23,"ex_rs1", false,-1, 31,0);
    tracep->declBus(c+34,"ex_rs2", false,-1, 31,0);
    tracep->declBus(c+35,"ex_rdst_id", false,-1, 4,0);
    tracep->declBit(c+36,"ex_we_reg", false,-1);
    tracep->declBit(c+37,"ex_we_dmem", false,-1);
    tracep->declBus(c+38,"ex_wbsel", false,-1, 1,0);
    tracep->declBit(c+39,"ex_ssel", false,-1);
    tracep->declBus(c+40,"ex_jump_type", false,-1, 3,0);
    tracep->declBus(c+41,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+42,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+43,"mem_rs2", false,-1, 31,0);
    tracep->declBus(c+44,"mem_rdst_id", false,-1, 4,0);
    tracep->declBit(c+45,"mem_we_reg", false,-1);
    tracep->declBit(c+46,"mem_we_dmem", false,-1);
    tracep->declBus(c+47,"mem_wbsel", false,-1, 1,0);
    tracep->declBus(c+48,"wb_rdata", false,-1, 31,0);
    tracep->declBus(c+49,"wb_rdst_id", false,-1, 4,0);
    tracep->declBit(c+50,"wb_we_reg", false,-1);
    tracep->declBit(c+51,"ifid_write", false,-1);
    tracep->declBit(c+52,"pc_write", false,-1);
    tracep->declBit(c+53,"ifid_flush", false,-1);
    tracep->declBit(c+54,"idex_flush", false,-1);
    tracep->declBit(c+55,"exmem_flush", false,-1);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+194,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+31,"op", false,-1, 3,0);
    tracep->declBus(c+23,"rs1", false,-1, 31,0);
    tracep->declBus(c+24,"rs2", false,-1, 31,0);
    tracep->declBus(c+25,"rd", false,-1, 31,0);
    tracep->declBit(c+26,"zero", false,-1);
    tracep->declBit(c+27,"overflow", false,-1);
    tracep->declBus(c+202,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+203,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+204,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+205,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+206,"OP_NOR", false,-1, 3,0);
    tracep->declBus(c+207,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+208,"OP_SLL", false,-1, 3,0);
    tracep->declBus(c+209,"OP_SRL", false,-1, 3,0);
    tracep->declBus(c+210,"OP_SRA", false,-1, 3,0);
    tracep->declBus(c+211,"OP_LUI", false,-1, 3,0);
    tracep->declQuad(c+56,"result", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBus(c+194,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"instr", false,-1, 31,0);
    tracep->declBus(c+8,"op", false,-1, 3,0);
    tracep->declBit(c+9,"ssel", false,-1);
    tracep->declBus(c+10,"wbsel", false,-1, 1,0);
    tracep->declBit(c+11,"we_regfile", false,-1);
    tracep->declBit(c+12,"we_dmem", false,-1);
    tracep->declBus(c+13,"jump_type", false,-1, 2,0);
    tracep->declBus(c+14,"jump_addr", false,-1, 25,0);
    tracep->declBus(c+15,"imm", false,-1, 31,0);
    tracep->declBus(c+16,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+17,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+18,"rdst_id", false,-1, 4,0);
    tracep->declBit(c+20,"mem_read", false,-1);
    tracep->declBit(c+19,"is_branch", false,-1);
    tracep->declBus(c+212,"OP_R_TYPE", false,-1, 5,0);
    tracep->declBus(c+213,"OP_ADDI", false,-1, 5,0);
    tracep->declBus(c+214,"OP_SLTI", false,-1, 5,0);
    tracep->declBus(c+215,"OP_LW", false,-1, 5,0);
    tracep->declBus(c+216,"OP_SW", false,-1, 5,0);
    tracep->declBus(c+217,"OP_BEQ", false,-1, 5,0);
    tracep->declBus(c+218,"OP_JAL", false,-1, 5,0);
    tracep->declBus(c+219,"OP_J", false,-1, 5,0);
    tracep->declBus(c+220,"FUNCT_ADD", false,-1, 5,0);
    tracep->declBus(c+221,"FUNCT_SUB", false,-1, 5,0);
    tracep->declBus(c+222,"FUNCT_AND", false,-1, 5,0);
    tracep->declBus(c+223,"FUNCT_OR", false,-1, 5,0);
    tracep->declBus(c+224,"FUNCT_NOR", false,-1, 5,0);
    tracep->declBus(c+225,"FUNCT_SLT", false,-1, 5,0);
    tracep->declBus(c+213,"FUNCT_JR", false,-1, 5,0);
    tracep->declBus(c+202,"ALU_OP_AND", false,-1, 3,0);
    tracep->declBus(c+203,"ALU_OP_OR", false,-1, 3,0);
    tracep->declBus(c+204,"ALU_OP_ADD", false,-1, 3,0);
    tracep->declBus(c+205,"ALU_OP_SUB", false,-1, 3,0);
    tracep->declBus(c+206,"ALU_OP_NOR", false,-1, 3,0);
    tracep->declBus(c+207,"ALU_OP_SLT", false,-1, 3,0);
    tracep->declBus(c+226,"ALU_OP_NOP", false,-1, 3,0);
    tracep->declBus(c+197,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+198,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+199,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+200,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+201,"J_TYPE_J", false,-1, 2,0);
    tracep->declBus(c+58,"opcode", false,-1, 5,0);
    tracep->declBus(c+16,"rs", false,-1, 4,0);
    tracep->declBus(c+17,"rt", false,-1, 4,0);
    tracep->declBus(c+59,"rd", false,-1, 4,0);
    tracep->declBus(c+60,"shamt", false,-1, 4,0);
    tracep->declBus(c+61,"funct", false,-1, 5,0);
    tracep->declBus(c+62,"immediate", false,-1, 15,0);
    tracep->declBus(c+14,"address", false,-1, 25,0);
    tracep->declBit(c+63,"is_r_type", false,-1);
    tracep->declBit(c+64,"is_addi", false,-1);
    tracep->declBit(c+65,"is_slti", false,-1);
    tracep->declBit(c+66,"is_lw", false,-1);
    tracep->declBit(c+12,"is_sw", false,-1);
    tracep->declBit(c+67,"is_beq", false,-1);
    tracep->declBit(c+68,"is_jal", false,-1);
    tracep->declBit(c+69,"is_j", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exmem_inst ");
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBit(c+109,"rst", false,-1);
    tracep->declBit(c+55,"flush", false,-1);
    tracep->declBus(c+29,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+25,"rd", false,-1, 31,0);
    tracep->declBus(c+34,"rs2", false,-1, 31,0);
    tracep->declBus(c+35,"ex_rdst_id", false,-1, 4,0);
    tracep->declBit(c+36,"ex_we_reg", false,-1);
    tracep->declBit(c+37,"ex_we_dmem", false,-1);
    tracep->declBus(c+38,"ex_wbsel", false,-1, 1,0);
    tracep->declBit(c+45,"mem_we_reg", false,-1);
    tracep->declBit(c+46,"mem_we_dmem", false,-1);
    tracep->declBus(c+41,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+42,"mem_rd", false,-1, 31,0);
    tracep->declBus(c+43,"mem_rs2", false,-1, 31,0);
    tracep->declBus(c+44,"mem_rdst_id", false,-1, 4,0);
    tracep->declBus(c+47,"mem_wbsel", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_ctrl_inst ");
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBit(c+109,"rst", false,-1);
    tracep->declBit(c+19,"branch", false,-1);
    tracep->declBit(c+26,"zero", false,-1);
    tracep->declBit(c+20,"mem_read", false,-1);
    tracep->declBus(c+16,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+17,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+35,"idex_regt", false,-1, 4,0);
    tracep->declBit(c+51,"ifid_write", false,-1);
    tracep->declBit(c+52,"pc_write", false,-1);
    tracep->declBit(c+53,"ifid_flush", false,-1);
    tracep->declBit(c+54,"idex_flush", false,-1);
    tracep->declBit(c+55,"exmem_flush", false,-1);
    tracep->declBus(c+70,"data_stall_counter", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idex_instr ");
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBit(c+109,"rst", false,-1);
    tracep->declBit(c+54,"flush", false,-1);
    tracep->declBus(c+28,"ID_pc", false,-1, 31,0);
    tracep->declBus(c+14,"ID_jump_addr", false,-1, 25,0);
    tracep->declBus(c+8,"ID_op", false,-1, 3,0);
    tracep->declBus(c+15,"ID_imm", false,-1, 31,0);
    tracep->declBus(c+21,"ID_rs1", false,-1, 31,0);
    tracep->declBus(c+22,"ID_rs2", false,-1, 31,0);
    tracep->declBus(c+18,"ID_rdst_id", false,-1, 4,0);
    tracep->declBit(c+11,"ID_we_reg", false,-1);
    tracep->declBit(c+12,"ID_we_dmem", false,-1);
    tracep->declBus(c+10,"ID_wbsel", false,-1, 1,0);
    tracep->declBit(c+9,"ID_ssel", false,-1);
    tracep->declBus(c+13,"ID_jump_type", false,-1, 2,0);
    tracep->declBit(c+36,"EX_we_reg", false,-1);
    tracep->declBit(c+37,"EX_we_dmem", false,-1);
    tracep->declBus(c+29,"EX_pc", false,-1, 31,0);
    tracep->declBus(c+71,"EX_jump_addr", false,-1, 25,0);
    tracep->declBus(c+31,"EX_op", false,-1, 3,0);
    tracep->declBus(c+32,"EX_imm", false,-1, 31,0);
    tracep->declBus(c+33,"EX_ra", false,-1, 31,0);
    tracep->declBus(c+23,"EX_rs1", false,-1, 31,0);
    tracep->declBus(c+34,"EX_rs2", false,-1, 31,0);
    tracep->declBus(c+35,"EX_rdst_id", false,-1, 4,0);
    tracep->declBus(c+38,"EX_wbsel", false,-1, 1,0);
    tracep->declBit(c+39,"EX_ssel", false,-1);
    tracep->declBus(c+72,"EX_jump_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifid_inst ");
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBit(c+109,"rst", false,-1);
    tracep->declBit(c+53,"flush", false,-1);
    tracep->declBit(c+51,"ifid_write", false,-1);
    tracep->declBus(c+5,"pc", false,-1, 31,0);
    tracep->declBus(c+161,"rdata", false,-1, 31,0);
    tracep->declBus(c+28,"pc_out", false,-1, 31,0);
    tracep->declBus(c+7,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memwb_inst ");
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBit(c+109,"rst", false,-1);
    tracep->declBus(c+159,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+44,"mem_rdst_id", false,-1, 4,0);
    tracep->declBit(c+45,"mem_we_reg", false,-1);
    tracep->declBit(c+46,"mem_we_dmem", false,-1);
    tracep->declBit(c+50,"wb_we_reg", false,-1);
    tracep->declBus(c+48,"wb_rdata", false,-1, 31,0);
    tracep->declBus(c+49,"wb_rdst_id", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_inst ");
    tracep->declBus(c+194,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBit(c+109,"rst", false,-1);
    tracep->declBus(c+16,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+17,"rs2_id", false,-1, 4,0);
    tracep->declBit(c+50,"we", false,-1);
    tracep->declBus(c+49,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+48,"rdst", false,-1, 31,0);
    tracep->declBus(c+21,"rs1", false,-1, 31,0);
    tracep->declBus(c+22,"rs2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+73+i*1,"R", true,(i+0), 31,0);
    }
    tracep->declBus(c+105,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__dmem_inst__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__dmem_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+108,"clk", false,-1);
    tracep->declBus(c+106,"addr", false,-1, 5,0);
    tracep->declBit(c+46,"we", false,-1);
    tracep->declBus(c+43,"wdata", false,-1, 31,0);
    tracep->declBus(c+160,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+162+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"idx", false,-1, 31,0);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__imem_inst__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__imem_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+107,"addr", false,-1, 5,0);
    tracep->declBus(c+161,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+178+i*1,"RAM", true,(i+0), 31,0);
    }
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
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_inst ");
    Vhw3_tb___024root__trace_init_sub__TOP__hw3_tb__core_top_inst__imem_inst__0(vlSelf, tracep);
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
    tracep->fullIData(oldp+1,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.__PVT__idx),32);
    tracep->fullBit(oldp+2,(vlSymsp->TOP__hw3_tb.correctness));
    tracep->fullIData(oldp+3,(vlSymsp->TOP__hw3_tb.__PVT__correctness_reg),32);
    tracep->fullSData(oldp+4,(vlSymsp->TOP__hw3_tb.__PVT__correctness_dmem),16);
    tracep->fullIData(oldp+5,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc),32);
    tracep->fullIData(oldp+6,(((IData)(4U) + vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)),32);
    tracep->fullIData(oldp+7,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr),32);
    tracep->fullCData(oldp+8,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__op),4);
    tracep->fullBit(oldp+9,(((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU)) | (4U 
                                                   == 
                                                   (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                    >> 0x1aU)))));
    tracep->fullCData(oldp+10,(((0x23U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                           >> 0x1aU))
                                 ? 1U : ((3U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                 >> 0x1aU))
                                          ? 2U : 0U))),2);
    tracep->fullBit(oldp+11,((1U & ((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
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
    tracep->fullBit(oldp+12,((0x2bU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
    tracep->fullCData(oldp+13,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__jump_type),3);
    tracep->fullIData(oldp+14,((0x3ffffffU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),26);
    tracep->fullIData(oldp+15,((((- (IData)((1U & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                                   >> 0xfU)))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr))),32);
    tracep->fullCData(oldp+16,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                         >> 0x15U))),5);
    tracep->fullCData(oldp+17,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                         >> 0x10U))),5);
    tracep->fullCData(oldp+18,((0x1fU & ((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
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
    tracep->fullBit(oldp+19,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__branch));
    tracep->fullBit(oldp+20,(((((((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
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
    tracep->fullIData(oldp+21,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__rs1_out),32);
    tracep->fullIData(oldp+22,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__rs2_out),32);
    tracep->fullIData(oldp+23,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs1),32);
    tracep->fullIData(oldp+24,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_rs2),32);
    tracep->fullIData(oldp+25,((IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result)),32);
    tracep->fullBit(oldp+26,((0U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result))));
    tracep->fullBit(oldp+27,((1U & ((2U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_op))
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
    tracep->fullIData(oldp+28,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__out),32);
    tracep->fullIData(oldp+29,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_pc),32);
    tracep->fullIData(oldp+30,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_addr),32);
    tracep->fullCData(oldp+31,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_op),4);
    tracep->fullIData(oldp+32,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_imm),32);
    tracep->fullIData(oldp+33,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_ra),32);
    tracep->fullIData(oldp+34,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rs2),32);
    tracep->fullCData(oldp+35,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_rdst_id),5);
    tracep->fullBit(oldp+36,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_we_reg));
    tracep->fullBit(oldp+37,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_we_dmem));
    tracep->fullCData(oldp+38,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_wbsel),2);
    tracep->fullBit(oldp+39,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ex_ssel));
    tracep->fullCData(oldp+40,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_type),4);
    tracep->fullIData(oldp+41,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_pc),32);
    tracep->fullIData(oldp+42,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd),32);
    tracep->fullIData(oldp+43,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rs2),32);
    tracep->fullCData(oldp+44,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rdst_id),5);
    tracep->fullBit(oldp+45,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_we_reg));
    tracep->fullBit(oldp+46,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_we_dmem));
    tracep->fullCData(oldp+47,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel),2);
    tracep->fullIData(oldp+48,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_rdata),32);
    tracep->fullCData(oldp+49,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_rdst_id),5);
    tracep->fullBit(oldp+50,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__wb_we_reg));
    tracep->fullBit(oldp+51,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ifid_write));
    tracep->fullBit(oldp+52,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc_write));
    tracep->fullBit(oldp+53,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__ifid_flush));
    tracep->fullBit(oldp+54,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__idex_flush));
    tracep->fullBit(oldp+55,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__exmem_flush));
    tracep->fullQData(oldp+56,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__alu_inst__DOT__result),33);
    tracep->fullCData(oldp+58,((vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                >> 0x1aU)),6);
    tracep->fullCData(oldp+59,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                         >> 0xbU))),5);
    tracep->fullCData(oldp+60,((0x1fU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                         >> 6U))),5);
    tracep->fullCData(oldp+61,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),6);
    tracep->fullSData(oldp+62,((0xffffU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr)),16);
    tracep->fullBit(oldp+63,((0U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullBit(oldp+64,((8U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullBit(oldp+65,((0xaU == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                       >> 0x1aU))));
    tracep->fullBit(oldp+66,((0x23U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                        >> 0x1aU))));
    tracep->fullBit(oldp+67,((4U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullBit(oldp+68,((3U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullBit(oldp+69,((2U == (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__instr 
                                     >> 0x1aU))));
    tracep->fullIData(oldp+70,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__hazard_ctrl_inst__DOT__data_stall_counter),32);
    tracep->fullIData(oldp+71,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_addr),26);
    tracep->fullCData(oldp+72,(vlSymsp->TOP__hw3_tb__core_top_inst.__Vcellout__idex_instr__EX_jump_type),3);
    tracep->fullIData(oldp+73,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[0]),32);
    tracep->fullIData(oldp+74,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[1]),32);
    tracep->fullIData(oldp+75,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[2]),32);
    tracep->fullIData(oldp+76,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[3]),32);
    tracep->fullIData(oldp+77,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[4]),32);
    tracep->fullIData(oldp+78,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[5]),32);
    tracep->fullIData(oldp+79,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[6]),32);
    tracep->fullIData(oldp+80,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[7]),32);
    tracep->fullIData(oldp+81,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[8]),32);
    tracep->fullIData(oldp+82,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[9]),32);
    tracep->fullIData(oldp+83,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[10]),32);
    tracep->fullIData(oldp+84,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[11]),32);
    tracep->fullIData(oldp+85,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[12]),32);
    tracep->fullIData(oldp+86,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[13]),32);
    tracep->fullIData(oldp+87,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[14]),32);
    tracep->fullIData(oldp+88,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[15]),32);
    tracep->fullIData(oldp+89,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[16]),32);
    tracep->fullIData(oldp+90,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[17]),32);
    tracep->fullIData(oldp+91,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[18]),32);
    tracep->fullIData(oldp+92,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[19]),32);
    tracep->fullIData(oldp+93,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[20]),32);
    tracep->fullIData(oldp+94,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[21]),32);
    tracep->fullIData(oldp+95,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[22]),32);
    tracep->fullIData(oldp+96,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[23]),32);
    tracep->fullIData(oldp+97,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[24]),32);
    tracep->fullIData(oldp+98,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[25]),32);
    tracep->fullIData(oldp+99,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[26]),32);
    tracep->fullIData(oldp+100,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[27]),32);
    tracep->fullIData(oldp+101,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[28]),32);
    tracep->fullIData(oldp+102,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[29]),32);
    tracep->fullIData(oldp+103,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[30]),32);
    tracep->fullIData(oldp+104,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__R[31]),32);
    tracep->fullIData(oldp+105,(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__reg_file_inst__DOT__i),32);
    tracep->fullCData(oldp+106,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd)),6);
    tracep->fullCData(oldp+107,((0x3fU & vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)),6);
    tracep->fullBit(oldp+108,(vlSelf->clk));
    tracep->fullBit(oldp+109,(vlSelf->rst));
    tracep->fullBit(oldp+110,(vlSelf->correctness));
    tracep->fullIData(oldp+111,(vlSymsp->TOP__hw3_tb.golden_reg[0]),32);
    tracep->fullIData(oldp+112,(vlSymsp->TOP__hw3_tb.golden_reg[1]),32);
    tracep->fullIData(oldp+113,(vlSymsp->TOP__hw3_tb.golden_reg[2]),32);
    tracep->fullIData(oldp+114,(vlSymsp->TOP__hw3_tb.golden_reg[3]),32);
    tracep->fullIData(oldp+115,(vlSymsp->TOP__hw3_tb.golden_reg[4]),32);
    tracep->fullIData(oldp+116,(vlSymsp->TOP__hw3_tb.golden_reg[5]),32);
    tracep->fullIData(oldp+117,(vlSymsp->TOP__hw3_tb.golden_reg[6]),32);
    tracep->fullIData(oldp+118,(vlSymsp->TOP__hw3_tb.golden_reg[7]),32);
    tracep->fullIData(oldp+119,(vlSymsp->TOP__hw3_tb.golden_reg[8]),32);
    tracep->fullIData(oldp+120,(vlSymsp->TOP__hw3_tb.golden_reg[9]),32);
    tracep->fullIData(oldp+121,(vlSymsp->TOP__hw3_tb.golden_reg[10]),32);
    tracep->fullIData(oldp+122,(vlSymsp->TOP__hw3_tb.golden_reg[11]),32);
    tracep->fullIData(oldp+123,(vlSymsp->TOP__hw3_tb.golden_reg[12]),32);
    tracep->fullIData(oldp+124,(vlSymsp->TOP__hw3_tb.golden_reg[13]),32);
    tracep->fullIData(oldp+125,(vlSymsp->TOP__hw3_tb.golden_reg[14]),32);
    tracep->fullIData(oldp+126,(vlSymsp->TOP__hw3_tb.golden_reg[15]),32);
    tracep->fullIData(oldp+127,(vlSymsp->TOP__hw3_tb.golden_reg[16]),32);
    tracep->fullIData(oldp+128,(vlSymsp->TOP__hw3_tb.golden_reg[17]),32);
    tracep->fullIData(oldp+129,(vlSymsp->TOP__hw3_tb.golden_reg[18]),32);
    tracep->fullIData(oldp+130,(vlSymsp->TOP__hw3_tb.golden_reg[19]),32);
    tracep->fullIData(oldp+131,(vlSymsp->TOP__hw3_tb.golden_reg[20]),32);
    tracep->fullIData(oldp+132,(vlSymsp->TOP__hw3_tb.golden_reg[21]),32);
    tracep->fullIData(oldp+133,(vlSymsp->TOP__hw3_tb.golden_reg[22]),32);
    tracep->fullIData(oldp+134,(vlSymsp->TOP__hw3_tb.golden_reg[23]),32);
    tracep->fullIData(oldp+135,(vlSymsp->TOP__hw3_tb.golden_reg[24]),32);
    tracep->fullIData(oldp+136,(vlSymsp->TOP__hw3_tb.golden_reg[25]),32);
    tracep->fullIData(oldp+137,(vlSymsp->TOP__hw3_tb.golden_reg[26]),32);
    tracep->fullIData(oldp+138,(vlSymsp->TOP__hw3_tb.golden_reg[27]),32);
    tracep->fullIData(oldp+139,(vlSymsp->TOP__hw3_tb.golden_reg[28]),32);
    tracep->fullIData(oldp+140,(vlSymsp->TOP__hw3_tb.golden_reg[29]),32);
    tracep->fullIData(oldp+141,(vlSymsp->TOP__hw3_tb.golden_reg[30]),32);
    tracep->fullIData(oldp+142,(vlSymsp->TOP__hw3_tb.golden_reg[31]),32);
    tracep->fullIData(oldp+143,(vlSymsp->TOP__hw3_tb.golden_dmem[0]),32);
    tracep->fullIData(oldp+144,(vlSymsp->TOP__hw3_tb.golden_dmem[1]),32);
    tracep->fullIData(oldp+145,(vlSymsp->TOP__hw3_tb.golden_dmem[2]),32);
    tracep->fullIData(oldp+146,(vlSymsp->TOP__hw3_tb.golden_dmem[3]),32);
    tracep->fullIData(oldp+147,(vlSymsp->TOP__hw3_tb.golden_dmem[4]),32);
    tracep->fullIData(oldp+148,(vlSymsp->TOP__hw3_tb.golden_dmem[5]),32);
    tracep->fullIData(oldp+149,(vlSymsp->TOP__hw3_tb.golden_dmem[6]),32);
    tracep->fullIData(oldp+150,(vlSymsp->TOP__hw3_tb.golden_dmem[7]),32);
    tracep->fullIData(oldp+151,(vlSymsp->TOP__hw3_tb.golden_dmem[8]),32);
    tracep->fullIData(oldp+152,(vlSymsp->TOP__hw3_tb.golden_dmem[9]),32);
    tracep->fullIData(oldp+153,(vlSymsp->TOP__hw3_tb.golden_dmem[10]),32);
    tracep->fullIData(oldp+154,(vlSymsp->TOP__hw3_tb.golden_dmem[11]),32);
    tracep->fullIData(oldp+155,(vlSymsp->TOP__hw3_tb.golden_dmem[12]),32);
    tracep->fullIData(oldp+156,(vlSymsp->TOP__hw3_tb.golden_dmem[13]),32);
    tracep->fullIData(oldp+157,(vlSymsp->TOP__hw3_tb.golden_dmem[14]),32);
    tracep->fullIData(oldp+158,(vlSymsp->TOP__hw3_tb.golden_dmem[15]),32);
    tracep->fullIData(oldp+159,(((0U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                  ? vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd
                                  : ((1U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                      ? vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                     [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                                               >> 2U))]
                                      : ((2U == (IData)(vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_wbsel))
                                          ? ((IData)(4U) 
                                             + vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc)
                                          : 0U)))),32);
    tracep->fullIData(oldp+160,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM
                                [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__mem_rd 
                                          >> 2U))]),32);
    tracep->fullIData(oldp+161,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM
                                [(0xfU & (vlSymsp->TOP__hw3_tb__core_top_inst.__PVT__pc 
                                          >> 2U))]),32);
    tracep->fullIData(oldp+162,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[0]),32);
    tracep->fullIData(oldp+163,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[1]),32);
    tracep->fullIData(oldp+164,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[2]),32);
    tracep->fullIData(oldp+165,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[3]),32);
    tracep->fullIData(oldp+166,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[4]),32);
    tracep->fullIData(oldp+167,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[5]),32);
    tracep->fullIData(oldp+168,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[6]),32);
    tracep->fullIData(oldp+169,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[7]),32);
    tracep->fullIData(oldp+170,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[8]),32);
    tracep->fullIData(oldp+171,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[9]),32);
    tracep->fullIData(oldp+172,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[10]),32);
    tracep->fullIData(oldp+173,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[11]),32);
    tracep->fullIData(oldp+174,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[12]),32);
    tracep->fullIData(oldp+175,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[13]),32);
    tracep->fullIData(oldp+176,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[14]),32);
    tracep->fullIData(oldp+177,(vlSymsp->TOP__hw3_tb__core_top_inst__dmem_inst.RAM[15]),32);
    tracep->fullIData(oldp+178,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[0]),32);
    tracep->fullIData(oldp+179,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[1]),32);
    tracep->fullIData(oldp+180,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[2]),32);
    tracep->fullIData(oldp+181,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[3]),32);
    tracep->fullIData(oldp+182,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[4]),32);
    tracep->fullIData(oldp+183,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[5]),32);
    tracep->fullIData(oldp+184,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[6]),32);
    tracep->fullIData(oldp+185,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[7]),32);
    tracep->fullIData(oldp+186,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[8]),32);
    tracep->fullIData(oldp+187,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[9]),32);
    tracep->fullIData(oldp+188,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[10]),32);
    tracep->fullIData(oldp+189,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[11]),32);
    tracep->fullIData(oldp+190,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[12]),32);
    tracep->fullIData(oldp+191,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[13]),32);
    tracep->fullIData(oldp+192,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[14]),32);
    tracep->fullIData(oldp+193,(vlSymsp->TOP__hw3_tb__core_top_inst__imem_inst.RAM[15]),32);
    tracep->fullIData(oldp+194,(0x20U),32);
    tracep->fullIData(oldp+195,(0x10U),32);
    tracep->fullIData(oldp+196,(vlSymsp->TOP__hw3_tb.__PVT__tmp),32);
    tracep->fullCData(oldp+197,(0U),3);
    tracep->fullCData(oldp+198,(1U),3);
    tracep->fullCData(oldp+199,(2U),3);
    tracep->fullCData(oldp+200,(3U),3);
    tracep->fullCData(oldp+201,(4U),3);
    tracep->fullCData(oldp+202,(0U),4);
    tracep->fullCData(oldp+203,(1U),4);
    tracep->fullCData(oldp+204,(2U),4);
    tracep->fullCData(oldp+205,(6U),4);
    tracep->fullCData(oldp+206,(0xcU),4);
    tracep->fullCData(oldp+207,(7U),4);
    tracep->fullCData(oldp+208,(9U),4);
    tracep->fullCData(oldp+209,(0xaU),4);
    tracep->fullCData(oldp+210,(0xdU),4);
    tracep->fullCData(oldp+211,(0xeU),4);
    tracep->fullCData(oldp+212,(0U),6);
    tracep->fullCData(oldp+213,(8U),6);
    tracep->fullCData(oldp+214,(0xaU),6);
    tracep->fullCData(oldp+215,(0x23U),6);
    tracep->fullCData(oldp+216,(0x2bU),6);
    tracep->fullCData(oldp+217,(4U),6);
    tracep->fullCData(oldp+218,(3U),6);
    tracep->fullCData(oldp+219,(2U),6);
    tracep->fullCData(oldp+220,(0x20U),6);
    tracep->fullCData(oldp+221,(0x22U),6);
    tracep->fullCData(oldp+222,(0x24U),6);
    tracep->fullCData(oldp+223,(0x25U),6);
    tracep->fullCData(oldp+224,(0x27U),6);
    tracep->fullCData(oldp+225,(0x2aU),6);
    tracep->fullCData(oldp+226,(0xfU),4);
}
