// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb_dmem.h"

void Vhw3_tb_dmem___ctor_var_reset(Vhw3_tb_dmem* vlSelf);

Vhw3_tb_dmem::Vhw3_tb_dmem(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vhw3_tb_dmem___ctor_var_reset(this);
}

void Vhw3_tb_dmem::__Vconfigure(Vhw3_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vhw3_tb_dmem::~Vhw3_tb_dmem() {
}
