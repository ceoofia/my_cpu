// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMEM_Stage_tb.h for the primary calling header

#ifndef VERILATED_VMEM_STAGE_TB___024ROOT_H_
#define VERILATED_VMEM_STAGE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VMEM_Stage_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMEM_Stage_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ MEM_Stage_tb__DOT__clk;
    CData/*0:0*/ MEM_Stage_tb__DOT__reset;
    CData/*0:0*/ MEM_Stage_tb__DOT__dut__DOT__mem_int_en;
    CData/*0:0*/ MEM_Stage_tb__DOT__dut__DOT__mem_int_rw;
    CData/*2:0*/ MEM_Stage_tb__DOT__dut__DOT__mem_int_store_size;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__MEM_Stage_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<3>/*75:0*/ MEM_Stage_tb__DOT__exmem_signals_tb;
    VlWide<3>/*72:0*/ MEM_Stage_tb__DOT__mem_signals_tb;
    VlUnpacked<CData/*7:0*/, 4096> MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 4096>, false, CData/*7:0*/, 1> __VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6d275678__0;

    // INTERNAL VARIABLES
    VMEM_Stage_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VMEM_Stage_tb___024root(VMEM_Stage_tb__Syms* symsp, const char* namep);
    ~VMEM_Stage_tb___024root();
    VL_UNCOPYABLE(VMEM_Stage_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
