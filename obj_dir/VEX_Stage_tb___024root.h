// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEX_Stage_tb.h for the primary calling header

#ifndef VERILATED_VEX_STAGE_TB___024ROOT_H_
#define VERILATED_VEX_STAGE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VEX_Stage_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VEX_Stage_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ EX_Stage_tb__DOT__fw_rs1_sel_in;
    CData/*1:0*/ EX_Stage_tb__DOT__fw_rs2_sel_in;
    CData/*0:0*/ EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ EX_Stage_tb__DOT__ex_fw_rs1_data;
    IData/*31:0*/ EX_Stage_tb__DOT__ex_fw_rs2_data;
    IData/*31:0*/ EX_Stage_tb__DOT__mem_fw_rs1_data;
    IData/*31:0*/ EX_Stage_tb__DOT__mem_fw_rs2_data;
    IData/*31:0*/ EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<6>/*171:0*/ EX_Stage_tb__DOT__idex_ctrl_signals;
    QData/*41:0*/ EX_Stage_tb__DOT__exmem_ctrl_signals;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    VEX_Stage_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VEX_Stage_tb___024root(VEX_Stage_tb__Syms* symsp, const char* namep);
    ~VEX_Stage_tb___024root();
    VL_UNCOPYABLE(VEX_Stage_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
