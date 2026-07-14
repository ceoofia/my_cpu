// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCore_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TB___024ROOT_H_
#define VERILATED_VCORE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VCore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCore_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Core_tb__DOT__clk;
    CData/*0:0*/ Core_tb__DOT__reset;
    CData/*1:0*/ Core_tb__DOT__dut__DOT__ex_fw_rs1_sel;
    CData/*1:0*/ Core_tb__DOT__dut__DOT__ex_fw_rs2_sel;
    CData/*0:0*/ Core_tb__DOT__dut__DOT__id_ctrl_signals;
    CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_result;
    CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en;
    CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw;
    CData/*2:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size;
    CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Core_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__ex_fw_rs1_data;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__ex_fw_rs2_data;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__mem_fw_rs1_data;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__mem_fw_rs2_data;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_result;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<7>/*205:0*/ Core_tb__DOT__dut__DOT__ex_ctrl_signals;
    VlWide<3>/*75:0*/ Core_tb__DOT__dut__DOT__mem_ctrl_signals;
    VlWide<3>/*72:0*/ Core_tb__DOT__dut__DOT__wb_ctrl_signals;
    VlUnpacked<IData/*31:0*/, 32> Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array;
    VlUnpacked<CData/*7:0*/, 4096> Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 4096>, false, CData/*7:0*/, 1> __VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he2f289c5__0;

    // INTERNAL VARIABLES
    VCore_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VCore_tb___024root(VCore_tb__Syms* symsp, const char* namep);
    ~VCore_tb___024root();
    VL_UNCOPYABLE(VCore_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
