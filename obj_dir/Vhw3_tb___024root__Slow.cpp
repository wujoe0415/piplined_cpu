// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb___024root.h"

void Vhw3_tb___024root___ctor_var_reset(Vhw3_tb___024root* vlSelf);

Vhw3_tb___024root::Vhw3_tb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vhw3_tb___024root___ctor_var_reset(this);
}

void Vhw3_tb___024root::__Vconfigure(Vhw3_tb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vhw3_tb___024root::~Vhw3_tb___024root() {
}
