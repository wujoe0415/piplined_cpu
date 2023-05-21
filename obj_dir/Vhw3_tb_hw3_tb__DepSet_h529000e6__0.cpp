// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb_hw3_tb.h"

void Vhw3_tb_hw3_tb::writereg(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vhw3_tb_hw3_tb::writereg\n"); );
    // Body
    this->golden_reg[(0x1fU & byte_addr)] = val;
}

void Vhw3_tb_hw3_tb::writedmem(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vhw3_tb_hw3_tb::writedmem\n"); );
    // Body
    this->golden_dmem[(0xfU & byte_addr)] = val;
}
