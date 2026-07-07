// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VID_Stage_tb.h for the primary calling header

#ifndef VERILATED_VID_STAGE_TB___024UNIT_H_
#define VERILATED_VID_STAGE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VID_Stage_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VID_Stage_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    VID_Stage_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VID_Stage_tb___024unit();
    ~VID_Stage_tb___024unit();
    void ctor(VID_Stage_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VID_Stage_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
