// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhw3_tb.h"
#include "Vhw3_tb__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vhw3_tb::Vhw3_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vhw3_tb__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , finish{vlSymsp->TOP.finish}
    , hw3_tb{vlSymsp->TOP.hw3_tb}
    , rootp{&(vlSymsp->TOP)}
{
}

Vhw3_tb::Vhw3_tb(const char* _vcname__)
    : Vhw3_tb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vhw3_tb::~Vhw3_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vhw3_tb___024root___eval_initial(Vhw3_tb___024root* vlSelf);
void Vhw3_tb___024root___eval_settle(Vhw3_tb___024root* vlSelf);
void Vhw3_tb___024root___eval(Vhw3_tb___024root* vlSelf);
#ifdef VL_DEBUG
void Vhw3_tb___024root___eval_debug_assertions(Vhw3_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vhw3_tb___024root___final(Vhw3_tb___024root* vlSelf);

static void _eval_initial_loop(Vhw3_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vhw3_tb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vhw3_tb___024root___eval_settle(&(vlSymsp->TOP));
        Vhw3_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vhw3_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhw3_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhw3_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vhw3_tb___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vhw3_tb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vhw3_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vhw3_tb::final() {
    Vhw3_tb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vhw3_tb___024root__trace_init_top(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhw3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw3_tb___024root*>(voidSelf);
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vhw3_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_register(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhw3_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhw3_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
