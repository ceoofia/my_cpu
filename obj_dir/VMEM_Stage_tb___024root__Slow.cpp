// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMEM_Stage_tb.h for the primary calling header

#include "VMEM_Stage_tb__pch.h"

void VMEM_Stage_tb___024root___ctor_var_reset(VMEM_Stage_tb___024root* vlSelf);

VMEM_Stage_tb___024root::VMEM_Stage_tb___024root(VMEM_Stage_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VMEM_Stage_tb___024root___ctor_var_reset(this);
}

void VMEM_Stage_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMEM_Stage_tb___024root::~VMEM_Stage_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
