// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMEM_Stage_tb.h for the primary calling header

#ifndef VERILATED_VMEM_STAGE_TB___024UNIT_H_
#define VERILATED_VMEM_STAGE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VMEM_Stage_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMEM_Stage_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    VMEM_Stage_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VMEM_Stage_tb___024unit();
    ~VMEM_Stage_tb___024unit();
    void ctor(VMEM_Stage_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VMEM_Stage_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
