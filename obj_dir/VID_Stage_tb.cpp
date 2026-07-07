// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VID_Stage_tb__pch.h"

//============================================================
// Constructors

VID_Stage_tb::VID_Stage_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VID_Stage_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VID_Stage_tb::VID_Stage_tb(const char* _vcname__)
    : VID_Stage_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VID_Stage_tb::~VID_Stage_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VID_Stage_tb___024root___eval_debug_assertions(VID_Stage_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VID_Stage_tb___024root___eval_static(VID_Stage_tb___024root* vlSelf);
void VID_Stage_tb___024root___eval_initial(VID_Stage_tb___024root* vlSelf);
void VID_Stage_tb___024root___eval_settle(VID_Stage_tb___024root* vlSelf);
void VID_Stage_tb___024root___eval(VID_Stage_tb___024root* vlSelf);

void VID_Stage_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VID_Stage_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VID_Stage_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VID_Stage_tb___024root___eval_static(&(vlSymsp->TOP));
        VID_Stage_tb___024root___eval_initial(&(vlSymsp->TOP));
        VID_Stage_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VID_Stage_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VID_Stage_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t VID_Stage_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VID_Stage_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VID_Stage_tb___024root___eval_final(VID_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VID_Stage_tb::final() {
    contextp()->executingFinal(true);
    VID_Stage_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VID_Stage_tb::hierName() const { return vlSymsp->name(); }
const char* VID_Stage_tb::modelName() const { return "VID_Stage_tb"; }
unsigned VID_Stage_tb::threads() const { return 1; }
void VID_Stage_tb::prepareClone() const { contextp()->prepareClone(); }
void VID_Stage_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
