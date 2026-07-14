// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCore_tb__pch.h"

//============================================================
// Constructors

VCore_tb::VCore_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCore_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCore_tb::VCore_tb(const char* _vcname__)
    : VCore_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCore_tb::~VCore_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCore_tb___024root___eval_debug_assertions(VCore_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VCore_tb___024root___eval_static(VCore_tb___024root* vlSelf);
void VCore_tb___024root___eval_initial(VCore_tb___024root* vlSelf);
void VCore_tb___024root___eval_settle(VCore_tb___024root* vlSelf);
void VCore_tb___024root___eval(VCore_tb___024root* vlSelf);

void VCore_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCore_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCore_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCore_tb___024root___eval_static(&(vlSymsp->TOP));
        VCore_tb___024root___eval_initial(&(vlSymsp->TOP));
        VCore_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCore_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCore_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VCore_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VCore_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCore_tb___024root___eval_final(VCore_tb___024root* vlSelf);

VL_ATTR_COLD void VCore_tb::final() {
    contextp()->executingFinal(true);
    VCore_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCore_tb::hierName() const { return vlSymsp->name(); }
const char* VCore_tb::modelName() const { return "VCore_tb"; }
unsigned VCore_tb::threads() const { return 1; }
void VCore_tb::prepareClone() const { contextp()->prepareClone(); }
void VCore_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
