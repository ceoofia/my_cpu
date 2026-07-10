// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEX_Stage_tb.h for the primary calling header

#include "VEX_Stage_tb__pch.h"

void VEX_Stage_tb___024root___ctor_var_reset(VEX_Stage_tb___024root* vlSelf);

VEX_Stage_tb___024root::VEX_Stage_tb___024root(VEX_Stage_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VEX_Stage_tb___024root___ctor_var_reset(this);
}

void VEX_Stage_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VEX_Stage_tb___024root::~VEX_Stage_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
