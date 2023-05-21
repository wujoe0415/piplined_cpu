// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vhw3_tb__Syms.h"
#include "Vhw3_tb.h"
#include "Vhw3_tb___024root.h"
#include "Vhw3_tb_hw3_tb.h"
#include "Vhw3_tb_core_top.h"
#include "Vhw3_tb_dmem.h"
#include "Vhw3_tb_imem.h"

// FUNCTIONS
Vhw3_tb__Syms::~Vhw3_tb__Syms()
{
}

Vhw3_tb__Syms::Vhw3_tb__Syms(VerilatedContext* contextp, const char* namep,Vhw3_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__hw3_tb(Verilated::catName(namep, "hw3_tb"))
    , TOP__hw3_tb__core_top_inst(Verilated::catName(namep, "hw3_tb.core_top_inst"))
    , TOP__hw3_tb__core_top_inst__dmem_inst(Verilated::catName(namep, "hw3_tb.core_top_inst.dmem_inst"))
    , TOP__hw3_tb__core_top_inst__imem_inst(Verilated::catName(namep, "hw3_tb.core_top_inst.imem_inst"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.hw3_tb = &TOP__hw3_tb;
    TOP__hw3_tb.core_top_inst = &TOP__hw3_tb__core_top_inst;
    TOP__hw3_tb__core_top_inst.dmem_inst = &TOP__hw3_tb__core_top_inst__dmem_inst;
    TOP__hw3_tb__core_top_inst.imem_inst = &TOP__hw3_tb__core_top_inst__imem_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__hw3_tb.__Vconfigure(this, true);
    TOP__hw3_tb__core_top_inst.__Vconfigure(this, true);
    TOP__hw3_tb__core_top_inst__dmem_inst.__Vconfigure(this, true);
    TOP__hw3_tb__core_top_inst__imem_inst.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_hw3_tb.configure(this, name(), "hw3_tb", "hw3_tb", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_hw3_tb__core_top_inst__dmem_inst.configure(this, name(), "hw3_tb.core_top_inst.dmem_inst", "dmem_inst", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_hw3_tb__core_top_inst__imem_inst.configure(this, name(), "hw3_tb.core_top_inst.imem_inst", "imem_inst", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_hw3_tb.varInsert(__Vfinal,"golden_dmem", &(TOP__hw3_tb.golden_dmem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,15);
        __Vscope_hw3_tb.varInsert(__Vfinal,"golden_reg", &(TOP__hw3_tb.golden_reg), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
        __Vscope_hw3_tb__core_top_inst__dmem_inst.varInsert(__Vfinal,"RAM", &(TOP__hw3_tb__core_top_inst__dmem_inst.RAM), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,15,0);
        __Vscope_hw3_tb__core_top_inst__imem_inst.varInsert(__Vfinal,"RAM", &(TOP__hw3_tb__core_top_inst__imem_inst.RAM), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,15,0);
    }
}
