// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VID_Stage_tb.h for the primary calling header

#include "VID_Stage_tb__pch.h"

void VID_Stage_tb___024root___ctor_var_reset(VID_Stage_tb___024root* vlSelf);

VID_Stage_tb___024root::VID_Stage_tb___024root(VID_Stage_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VID_Stage_tb___024root___ctor_var_reset(this);
}

void VID_Stage_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VID_Stage_tb___024root::~VID_Stage_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
