// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VID_Stage_tb.h for the primary calling header

#include "VID_Stage_tb__pch.h"


VID_Stage_tb___024unit::VID_Stage_tb___024unit() = default;
VID_Stage_tb___024unit::~VID_Stage_tb___024unit() = default;

void VID_Stage_tb___024unit::ctor(VID_Stage_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VID_Stage_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VID_Stage_tb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
