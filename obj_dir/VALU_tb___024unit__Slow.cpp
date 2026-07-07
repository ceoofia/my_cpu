// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_tb.h for the primary calling header

#include "VALU_tb__pch.h"


VALU_tb___024unit::VALU_tb___024unit() = default;
VALU_tb___024unit::~VALU_tb___024unit() = default;

void VALU_tb___024unit::ctor(VALU_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VALU_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VALU_tb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
