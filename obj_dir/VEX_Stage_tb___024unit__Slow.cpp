// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEX_Stage_tb.h for the primary calling header

#include "VEX_Stage_tb__pch.h"


VEX_Stage_tb___024unit::VEX_Stage_tb___024unit() = default;
VEX_Stage_tb___024unit::~VEX_Stage_tb___024unit() = default;

void VEX_Stage_tb___024unit::ctor(VEX_Stage_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VEX_Stage_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VEX_Stage_tb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
