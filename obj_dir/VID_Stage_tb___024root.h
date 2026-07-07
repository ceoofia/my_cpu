// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VID_Stage_tb.h for the primary calling header

#ifndef VERILATED_VID_STAGE_TB___024ROOT_H_
#define VERILATED_VID_STAGE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VID_Stage_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VID_Stage_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ID_Stage_tb__DOT__clk;
    CData/*0:0*/ ID_Stage_tb__DOT__reset;
    CData/*0:0*/ ID_Stage_tb__DOT__id_instr_valid_in;
    CData/*4:0*/ ID_Stage_tb__DOT__wb_rd_addr_in;
    CData/*0:0*/ ID_Stage_tb__DOT__wb_reg_write_in;
    CData/*0:0*/ ID_Stage_tb__DOT__dut__DOT__id_use_rs1;
    CData/*0:0*/ ID_Stage_tb__DOT__dut__DOT__id_use_rs2;
    CData/*0:0*/ ID_Stage_tb__DOT__dut__DOT__id_stall;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ID_Stage_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ ID_Stage_tb__DOT__id_instr_data_in;
    IData/*31:0*/ ID_Stage_tb__DOT__id_instr_pc_in;
    IData/*31:0*/ ID_Stage_tb__DOT__wb_rd_data_in;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlWide<6>/*171:0*/ ID_Stage_tb__DOT__dut_id_ctrl_signals;
    VlUnpacked<IData/*31:0*/, 32> ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_3__lsu_op_to_str;
    std::string __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_2__alu_op_to_str;
    std::string __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_1__alu_b_src_to_str;
    std::string __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_0__alu_a_src_to_str;
    std::string __Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__3__Vfuncout;
    std::string __Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__4__Vfuncout;
    std::string __Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__Vfuncout;
    std::string __Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__6__Vfuncout;
    std::string __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_3__lsu_op_to_str;
    std::string __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_2__alu_op_to_str;
    std::string __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_1__alu_b_src_to_str;
    std::string __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_0__alu_a_src_to_str;
    std::string __Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__10__Vfuncout;
    std::string __Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__11__Vfuncout;
    std::string __Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__Vfuncout;
    std::string __Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__13__Vfuncout;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he403f4e5__0;

    // INTERNAL VARIABLES
    VID_Stage_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VID_Stage_tb___024root(VID_Stage_tb__Syms* symsp, const char* namep);
    ~VID_Stage_tb___024root();
    VL_UNCOPYABLE(VID_Stage_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
