// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VEX_STAGE_TB__SYMS_H_
#define VERILATED_VEX_STAGE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VEX_Stage_tb.h"

// INCLUDE MODULE CLASSES
#include "VEX_Stage_tb___024root.h"
#include "VEX_Stage_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VEX_Stage_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VEX_Stage_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VEX_Stage_tb___024root         TOP;

    // CONSTRUCTORS
    VEX_Stage_tb__Syms(VerilatedContext* contextp, const char* namep, VEX_Stage_tb* modelp);
    ~VEX_Stage_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
