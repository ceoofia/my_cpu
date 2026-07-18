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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Core_tb__DOT__clk;
        CData/*0:0*/ Core_tb__DOT__reset;
        CData/*0:0*/ Core_tb__DOT__mem_en;
        CData/*0:0*/ Core_tb__DOT__detected_tb;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__if_instr_valid;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__if_update_en;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__if_branch_taken;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__ifid_stall;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__id_instr_valid;
        CData/*1:0*/ Core_tb__DOT__dut__DOT__ex_fw_rs1_sel;
        CData/*1:0*/ Core_tb__DOT__dut__DOT__ex_fw_rs2_sel;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_IF__DOT__if_instr_req_valid;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en;
        CData/*2:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op;
        CData/*1:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src;
        CData/*1:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en;
        CData/*2:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op;
        CData/*1:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src;
        CData/*1:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src;
        CData/*1:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src;
        CData/*2:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op;
        CData/*2:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_en;
        CData/*1:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_stall;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_is_load;
        CData/*2:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_result_out;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw;
        CData/*2:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size;
        CData/*2:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size;
        CData/*0:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Core_tb__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ Core_tb__DOT__cycle_count;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__if_branch_dest;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__if_instr_data;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__if_BTB_update_pc;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__id_instr_data;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__id_instr_pc;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__id_instr_pc4;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__ex_fw_data_to_reg;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__ex_fw_data;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__mem_fw_data;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__next_pc;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__i;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__id_instr_pc4;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__i;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_dest;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs1_data_in;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in;
    };
    struct {
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__ALU_result_out;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_a_in;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_b_in;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_addr;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data;
        IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlWide<7>/*206:0*/ Core_tb__DOT__dut__DOT__idex_ctrl_signals;
        VlWide<7>/*206:0*/ Core_tb__DOT__dut__DOT__ex_ctrl_signals;
        VlWide<3>/*76:0*/ Core_tb__DOT__dut__DOT__mem_ctrl_signals;
        VlWide<3>/*72:0*/ Core_tb__DOT__dut__DOT__wb_ctrl_signals;
        VlUnpacked<CData/*7:0*/, 1024> Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory;
        VlUnpacked<CData/*1:0*/, 8> Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT;
        VlUnpacked<IData/*31:0*/, 32> Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array;
        VlUnpacked<CData/*7:0*/, 4096> Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 4096>, false, CData/*7:0*/, 1> __VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he2f289c5__0;
    VlTriggerScheduler __VtrigSched_he2f29695__0;

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
