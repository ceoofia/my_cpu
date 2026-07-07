// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU_tb.h for the primary calling header

#ifndef VERILATED_VALU_TB___024UNIT_H_
#define VERILATED_VALU_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VALU_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VALU_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    VALU_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VALU_tb___024unit();
    ~VALU_tb___024unit();
    void ctor(VALU_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VALU_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
