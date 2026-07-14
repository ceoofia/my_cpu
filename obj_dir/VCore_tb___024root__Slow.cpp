// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore_tb.h for the primary calling header

#include "VCore_tb__pch.h"

void VCore_tb___024root___ctor_var_reset(VCore_tb___024root* vlSelf);

VCore_tb___024root::VCore_tb___024root(VCore_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VCore_tb___024root___ctor_var_reset(this);
}

void VCore_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VCore_tb___024root::~VCore_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
