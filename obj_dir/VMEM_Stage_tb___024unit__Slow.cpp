// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMEM_Stage_tb.h for the primary calling header

#include "VMEM_Stage_tb__pch.h"


VMEM_Stage_tb___024unit::VMEM_Stage_tb___024unit() = default;
VMEM_Stage_tb___024unit::~VMEM_Stage_tb___024unit() = default;

void VMEM_Stage_tb___024unit::ctor(VMEM_Stage_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VMEM_Stage_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VMEM_Stage_tb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
