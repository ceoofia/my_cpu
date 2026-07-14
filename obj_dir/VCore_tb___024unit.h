// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TB___024UNIT_H_
#define VERILATED_VCORE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VCore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCore_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    VCore_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VCore_tb___024unit();
    ~VCore_tb___024unit();
    void ctor(VCore_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VCore_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
