// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEX_Stage_tb.h for the primary calling header

#ifndef VERILATED_VEX_STAGE_TB___024UNIT_H_
#define VERILATED_VEX_STAGE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VEX_Stage_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VEX_Stage_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    VEX_Stage_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VEX_Stage_tb___024unit();
    ~VEX_Stage_tb___024unit();
    void ctor(VEX_Stage_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VEX_Stage_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
