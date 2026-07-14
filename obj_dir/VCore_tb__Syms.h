// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCORE_TB__SYMS_H_
#define VERILATED_VCORE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCore_tb.h"

// INCLUDE MODULE CLASSES
#include "VCore_tb___024root.h"
#include "VCore_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VCore_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCore_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCore_tb___024root             TOP;

    // CONSTRUCTORS
    VCore_tb__Syms(VerilatedContext* contextp, const char* namep, VCore_tb* modelp);
    ~VCore_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
