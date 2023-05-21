// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHW3_TB__SYMS_H_
#define VERILATED_VHW3_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhw3_tb.h"

// INCLUDE MODULE CLASSES
#include "Vhw3_tb___024root.h"
#include "Vhw3_tb_hw3_tb.h"
#include "Vhw3_tb_core_top.h"
#include "Vhw3_tb_dmem.h"
#include "Vhw3_tb_imem.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vhw3_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhw3_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhw3_tb___024root              TOP;
    Vhw3_tb_hw3_tb                 TOP__hw3_tb;
    Vhw3_tb_core_top               TOP__hw3_tb__core_top_inst;
    Vhw3_tb_dmem                   TOP__hw3_tb__core_top_inst__dmem_inst;
    Vhw3_tb_imem                   TOP__hw3_tb__core_top_inst__imem_inst;

    // SCOPE NAMES
    VerilatedScope __Vscope_hw3_tb;
    VerilatedScope __Vscope_hw3_tb__core_top_inst__dmem_inst;
    VerilatedScope __Vscope_hw3_tb__core_top_inst__imem_inst;

    // CONSTRUCTORS
    Vhw3_tb__Syms(VerilatedContext* contextp, const char* namep, Vhw3_tb* modelp);
    ~Vhw3_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
