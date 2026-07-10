// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VEX_Stage_tb__pch.h"

//============================================================
// Constructors

VEX_Stage_tb::VEX_Stage_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VEX_Stage_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VEX_Stage_tb::VEX_Stage_tb(const char* _vcname__)
    : VEX_Stage_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VEX_Stage_tb::~VEX_Stage_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VEX_Stage_tb___024root___eval_debug_assertions(VEX_Stage_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VEX_Stage_tb___024root___eval_static(VEX_Stage_tb___024root* vlSelf);
void VEX_Stage_tb___024root___eval_initial(VEX_Stage_tb___024root* vlSelf);
void VEX_Stage_tb___024root___eval_settle(VEX_Stage_tb___024root* vlSelf);
void VEX_Stage_tb___024root___eval(VEX_Stage_tb___024root* vlSelf);

void VEX_Stage_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEX_Stage_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VEX_Stage_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VEX_Stage_tb___024root___eval_static(&(vlSymsp->TOP));
        VEX_Stage_tb___024root___eval_initial(&(vlSymsp->TOP));
        VEX_Stage_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VEX_Stage_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VEX_Stage_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VEX_Stage_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VEX_Stage_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VEX_Stage_tb___024root___eval_final(VEX_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VEX_Stage_tb::final() {
    contextp()->executingFinal(true);
    VEX_Stage_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VEX_Stage_tb::hierName() const { return vlSymsp->name(); }
const char* VEX_Stage_tb::modelName() const { return "VEX_Stage_tb"; }
unsigned VEX_Stage_tb::threads() const { return 1; }
void VEX_Stage_tb::prepareClone() const { contextp()->prepareClone(); }
void VEX_Stage_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
