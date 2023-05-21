// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb_hw3_tb.h"

void Vhw3_tb_hw3_tb___ctor_var_reset(Vhw3_tb_hw3_tb* vlSelf);

Vhw3_tb_hw3_tb::Vhw3_tb_hw3_tb(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vhw3_tb_hw3_tb___ctor_var_reset(this);
}

void Vhw3_tb_hw3_tb::__Vconfigure(Vhw3_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vhw3_tb_hw3_tb::~Vhw3_tb_hw3_tb() {
}
