// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VCore_tb__Syms.h"


VL_ATTR_COLD void VCore_tb___024root__trace_init_dtype____0(VCore_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VCore_tb___024root__trace_init_dtype____1(VCore_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VCore_tb___024root__trace_init_sub__TOP__cpu_pkg__0(VCore_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCore_tb___024root__trace_init_sub__TOP__0(VCore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_init_sub__TOP__0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "Core_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"mem_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+164,0,"detected_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+165,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"mem_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"dummy_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"if_redirect_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"if_redirect_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"if_branch_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"if_instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"if_instr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"if_update_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"if_BTB_update_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"if_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"if_curr_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"if_curr_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ifid_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"ifid_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"ex_pc_redirect_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"id_instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"id_instr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"id_instr_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"id_instr_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"wb_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"wb_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+12,0,"idex_ctrl_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 206,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"idex_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"idex_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+19,0,"ex_ctrl_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 206,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"idex_fw_rs1_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"idex_fw_rs2_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"ex_fw_rs1_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"ex_fw_rs2_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"ex_fw_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"ex_fw_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"mem_fw_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"mem_fw_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+32,0,"exmem_ctrl_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 76,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"ex_pc_redirect_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"ex_fw_data_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+36,0,"mem_ctrl_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 76,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"ex_fw_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+39,0,"memwb_ctrl_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 72,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"mem_fw_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"mem_fw_data_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+43,0,"wb_ctrl_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 72,0);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_EX", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_WIDE(tracep,c+19,0,"idex_ctrl_signals",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 206,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"ex_fw_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"ex_fw_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"mem_fw_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"mem_fw_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"fw_rs1_sel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"fw_rs2_sel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+32,0,"exmem_ctrl_signals",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 76,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"pc_redirect_dest_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"pc_redirect_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"ex_fw_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"ex_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"ex_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"ex_alu_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"ex_alu_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"ex_comp_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"ex_comp_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"ex_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"ex_comp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"ex_int_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"ex_int_redir_dest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"ex_int_redir_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"ex_store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_ALU", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"alu_operand_a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"alu_operand_b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"alu_op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"ALU_result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_comp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"comp_operand_a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"comp_operand_b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"comp_op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"comp_result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_fwd_mux", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"rs1_fw_ex_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"rs2_fw_ex_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"rs1_fw_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"rs2_fw_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"fw_rs1_sel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"fw_rs2_sel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"rs1_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"rs2_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"fw_mux_rs1_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"fw_mux_rs2_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_int_operand_parser", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"alu_a_src_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"alu_b_src_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"comp_a_src_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"comp_b_src_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"rs1_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"rs2_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"imm_value_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"instr_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"alu_operand_a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"alu_operand_b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"comp_operand_a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"comp_operand_b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ex_int_result_parser", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"alu_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"comp_result_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"rs2_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"lsu_op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"branch_op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"jump_op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"comp_op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"instr_pc4_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"EX_Result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"pc_redirect_dest_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"pc_redirect_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"store_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_EX_MEM_Reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"ex_fw_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+32,0,"ex_ctrl_signals",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 76,0);
    VL_TRACE_DECL_WIDE(tracep,c+36,0,"mem_ctrl_signals",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 76,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"ex_fw_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_Fw_Control", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"rs1_src_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"rs2_src_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"post_ex_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+72,0,"post_ex_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"post_mem_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"post_mem_reg_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"post_ex_is_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"fw_rs1_src_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"fw_rs2_src_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_ID", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"id_instr_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"id_instr_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"id_instr_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"id_instr_pc4_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"wb_rd_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"wb_rd_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"wb_reg_write_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+12,0,"id_ctrl_signals",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 206,0);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"id_alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"id_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"id_alu_a_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"id_alu_b_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"id_comp_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"id_comp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"id_comp_a_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"id_comp_b_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"id_wb_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"id_branch_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"id_jump_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"id_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"id_use_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"id_rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"id_use_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"id_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"id_use_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"id_reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"id_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"id_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"id_lsu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"id_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"id_lsu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"id_instr_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"id_instr_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"id_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"id_is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"id_imm_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"id_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "ID_Decoder", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"instr_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"instr_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"instr_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"instr_pc4_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"insert_NOP_bubble_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"alu_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"alu_op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"alu_a_src_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"alu_b_src_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"comp_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"comp_op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"comp_a_src_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"comp_b_src_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"branch_op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"jump_op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"rs1_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"use_rs1_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"rs2_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"use_rs2_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"rd_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+90,0,"use_rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"reg_write_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"lsu_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"opcode_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"lsu_op_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"wb_src_sel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"instr_pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"instr_pc4_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"imm_type_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"is_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ID_Imm_Parser", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"instr_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"imm_type_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"Imm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "ID_Register_File", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"rs1_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"rs1_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"rs2_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"rs2_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"rd_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rd_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"write_en_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"NUM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    VCore_tb___024root__trace_init_dtype____0(vlSelf, tracep, "Register_array", 0, c+102, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_ID_EX_Reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"stall_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"idex_flush_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"fw_rs1_sel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"fw_rs2_sel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+12,0,"id_ctrl_signals",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 206,0);
    VL_TRACE_DECL_WIDE(tracep,c+19,0,"id_ex_ctrl_signals",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 206,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"fw_rs1_sel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"fw_rs2_sel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_IF", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"mem_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"if_stall_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"if_redirect_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"if_redirect_dest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"if_branch_dest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"if_instr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"if_instr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"if_update_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"if_update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"if_branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"if_curr_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"if_curr_pc4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"if_int_current_pc_fetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"if_int_current_pc4_fetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"if_int_predicted_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"if_instr_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "IF_Branch_predictor", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"current_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"update_en_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"update_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"branch_taken_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"predicted_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"update_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"pc_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);

    VCore_tb___024root__trace_init_dtype____1(vlSelf, tracep, "BHT", 0, c+137, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+145,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "IF_Instr_Mem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"MEM_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+160,0,"mem_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"instr_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"instr_req_addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"instr_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"instr_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "IF_PC_Fetch", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"stall_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"redirect_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"redirect_dest_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"branch_predicted_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"branch_dest_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"current_pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"current_pc4_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+146,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_IF_ID_Reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"ifid_flush_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"stall_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+161,0,"if_id_instr_valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"if_id_instr_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"instr_pc_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"instr_pc4_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"if_id_instr_valid_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"if_id_instr_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"instr_pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"instr_pc4_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_MEM", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"DATA_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+36,0,"exmem_signals_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 76,0);
    VL_TRACE_DECL_WIDE(tracep,c+39,0,"mem_signals_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 72,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"mem_fw_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"mem_int_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"mem_int_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+148,0,"mem_int_rw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"mem_int_store_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"mem_int_load_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"mem_int_memory_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"mem_int_data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "mem_int_control", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"lsu_op_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"mem_en_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+148,0,"mem_rw_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"mem_store_size_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"mem_load_size_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "mem_int_memory", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"DATA_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"addr_req_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"store_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"mem_en_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+148,0,"mem_rw_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"mem_load_size_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"mem_store_size_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"mem_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+152,0,"mem_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_MEM_WB_Reg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+158,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+159,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+39,0,"mem_wb_signals_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 72,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"mem_fw_data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+43,0,"wb_signals_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 72,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"mem_fw_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_Stall_Control", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"ex_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"ex_is_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"id_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"id_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"id_use_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+88,0,"id_use_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"ifid_stall_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"idex_stall_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+157,0,"addr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "Core_WB", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_WIDE(tracep,c+43,0,"wb_ctrl_signals_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 72,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"rd_addr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"rd_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"rd_write_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "cpu_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VCore_tb___024root__trace_init_sub__TOP__cpu_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VCore_tb___024root__trace_init_dtype_sub____0(VCore_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VCore_tb___024root__trace_init_dtype____0(VCore_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_init_dtype____0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCore_tb___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VCore_tb___024root__trace_init_dtype_sub____0(VCore_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_init_dtype_sub____0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VCore_tb___024root__trace_init_dtype_sub____1(VCore_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VCore_tb___024root__trace_init_dtype____1(VCore_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_init_dtype____1\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCore_tb___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VCore_tb___024root__trace_init_dtype_sub____1(VCore_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_init_dtype_sub____1\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 7, 0);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (7 - i), 1,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VCore_tb___024root__trace_init_sub__TOP__cpu_pkg__0(VCore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_init_sub__TOP__cpu_pkg__0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+180,0,"OPCODE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"OPCODE_I_ALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"OPCODE_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"OPCODE_SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"OPCODE_BRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"OPCODE_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"OPCODE_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"OPCODE_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 6,0);
}

VL_ATTR_COLD void VCore_tb___024root__trace_init_top(VCore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_init_top\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCore_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCore_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VCore_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCore_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCore_tb___024root__trace_register(VCore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_register\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VCore_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VCore_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VCore_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VCore_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCore_tb___024root__trace_const_0_sub_0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCore_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_const_0\n"); );
    // Body
    VCore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore_tb___024root*>(voidSelf);
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VCore_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCore_tb___024root__trace_const_0_sub_0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_const_0_sub_0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+164,(vlSelfRef.Core_tb__DOT__detected_tb));
    bufp->fullIData(oldp+165,(vlSelfRef.Core_tb__DOT__cycle_count),32);
    bufp->fullBit(oldp+166,(0U));
    bufp->fullIData(oldp+167,(vlSelfRef.Core_tb__DOT__dut__DOT__if_branch_dest),32);
    bufp->fullBit(oldp+168,(vlSelfRef.Core_tb__DOT__dut__DOT__if_update_en));
    bufp->fullIData(oldp+169,(vlSelfRef.Core_tb__DOT__dut__DOT__if_BTB_update_pc),32);
    bufp->fullBit(oldp+170,(vlSelfRef.Core_tb__DOT__dut__DOT__if_branch_taken));
    bufp->fullIData(oldp+171,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_instr_pc4),32);
    bufp->fullBit(oldp+172,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_stall));
    bufp->fullIData(oldp+173,(5U),32);
    bufp->fullIData(oldp+174,(0x00000020U),32);
    bufp->fullIData(oldp+175,(0x00000400U),32);
    bufp->fullCData(oldp+176,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__if_BTB_update_pc 
                                     >> 2U))),3);
    bufp->fullIData(oldp+177,(0x00001000U),32);
    bufp->fullIData(oldp+178,(0U),32);
    bufp->fullIData(oldp+179,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_addr),32);
    bufp->fullCData(oldp+180,(0x33U),7);
    bufp->fullCData(oldp+181,(0x13U),7);
    bufp->fullCData(oldp+182,(3U),7);
    bufp->fullCData(oldp+183,(0x23U),7);
    bufp->fullCData(oldp+184,(0x63U),7);
    bufp->fullCData(oldp+185,(0x6fU),7);
    bufp->fullCData(oldp+186,(0x67U),7);
    bufp->fullCData(oldp+187,(0x37U),7);
}

VL_ATTR_COLD void VCore_tb___024root__trace_full_0_sub_0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCore_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_full_0\n"); );
    // Body
    VCore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore_tb___024root*>(voidSelf);
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VCore_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCore_tb___024root__trace_full_dtype____0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);
VL_ATTR_COLD void VCore_tb___024root__trace_full_dtype____1(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 8>& __VdtypeVar);

VL_ATTR_COLD void VCore_tb___024root__trace_full_0_sub_0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_full_0_sub_0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid));
    bufp->fullIData(oldp+1,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_dest),32);
    bufp->fullIData(oldp+2,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc),32);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc)),32);
    bufp->fullBit(oldp+4,(vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall));
    bufp->fullBit(oldp+5,(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_valid));
    bufp->fullIData(oldp+6,(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data),32);
    bufp->fullIData(oldp+7,(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc),32);
    bufp->fullIData(oldp+8,(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc4),32);
    bufp->fullIData(oldp+9,(((0U == (3U & (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                           >> 1U)))
                              ? ((vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                  << 0x0000001fU) | 
                                 (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] 
                                  >> 1U)) : (((vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] 
                                               << 0x0000001fU) 
                                              | (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] 
                                                 >> 1U)) 
                                             & (- (IData)(
                                                          (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] 
                                                           & (2U 
                                                              == 
                                                              (6U 
                                                               & vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U])))))))),32);
    bufp->fullCData(oldp+10,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                             >> 4U))),5);
    bufp->fullBit(oldp+11,((1U & (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                  >> 3U))));
    bufp->fullWData(oldp+12,(vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals),207);
    bufp->fullWData(oldp+19,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals),207);
    bufp->fullCData(oldp+26,(((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                 >> 6U) & ((0U != (0x0000001fU 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                      >> 8U))) 
                                           & ((0x0000001fU 
                                               & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                  >> 8U)) 
                                              == (0x0000001fU 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                     >> 0x0000000fU)))))
                                ? 1U : 2U) & (- (IData)(
                                                        (1U 
                                                         & (~ 
                                                            ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                              >> 4U) 
                                                             & ((~ vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U]) 
                                                                & ((0U 
                                                                    != 
                                                                    (0x0000001fU 
                                                                     & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                                        >> 6U))) 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))))))))),2);
    bufp->fullCData(oldp+27,(((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                 >> 6U) & ((0U != (0x0000001fU 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                      >> 8U))) 
                                           & ((0x0000001fU 
                                               & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                  >> 8U)) 
                                              == (0x0000001fU 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                     >> 0x00000014U)))))
                                ? 1U : 2U) & (- (IData)(
                                                        (1U 
                                                         & (~ 
                                                            ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                              >> 4U) 
                                                             & ((~ vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U]) 
                                                                & ((0U 
                                                                    != 
                                                                    (0x0000001fU 
                                                                     & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                                        >> 6U))) 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))))))))),2);
    bufp->fullCData(oldp+28,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs1_sel),2);
    bufp->fullCData(oldp+29,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs2_sel),2);
    bufp->fullIData(oldp+30,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data),32);
    bufp->fullIData(oldp+31,(vlSelfRef.Core_tb__DOT__dut__DOT__mem_fw_data),32);
    __Vtemp_2[0U] = (((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                                >> 1U)))))))))) 
                      << 1U) | (1U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U]));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                                >> 1U)))))))))) 
                      >> 0x0000001fU) | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (3U 
                                                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                                >> 1U))))))))) 
                                                  >> 0x00000020U)) 
                                         << 1U));
    __Vtemp_2[2U] = ((((0x00000fe0U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                       << 1U)) | ((0x00000018U 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                      >> 0x0000001aU)) 
                                                  | ((4U 
                                                      & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                         >> 1U)) 
                                                     | (3U 
                                                        & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                           >> 1U))))) 
                      << 1U) | ((IData)(((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(
                                                            (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                               >> 1U))))))))) 
                                         >> 0x00000020U)) 
                                >> 0x0000001fU));
    bufp->fullWData(oldp+32,(__Vtemp_2),77);
    bufp->fullIData(oldp+35,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg),32);
    bufp->fullWData(oldp+36,(vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals),77);
    __Vtemp_4[0U] = (((IData)((((QData)((IData)(((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                    >> 1U)))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data)))) 
                      << 1U) | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid));
    __Vtemp_4[1U] = (((IData)((((QData)((IData)(((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                    >> 1U)))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data)))) 
                      >> 0x0000001fU) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                                      << 0x0000001fU) 
                                                                     | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data))) 
                                                  >> 0x00000020U)) 
                                         << 1U));
    __Vtemp_4[2U] = ((((0x000000f8U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                       >> 5U)) | (7U 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                     >> 4U))) 
                      << 1U) | ((IData)(((((QData)((IData)(
                                                           ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                             << 0x0000001fU) 
                                                            | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                               >> 1U)))) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data))) 
                                         >> 0x00000020U)) 
                                >> 0x0000001fU));
    bufp->fullWData(oldp+39,(__Vtemp_4),73);
    bufp->fullIData(oldp+42,((((~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw)) 
                               & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en))
                               ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data
                               : ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                   << 0x0000001fU) 
                                  | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                     >> 1U)))),32);
    bufp->fullWData(oldp+43,(vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals),73);
    bufp->fullIData(oldp+46,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs1_data_in),32);
    bufp->fullIData(oldp+47,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in),32);
    bufp->fullIData(oldp+48,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in),32);
    bufp->fullIData(oldp+49,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in),32);
    bufp->fullIData(oldp+50,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_a_in),32);
    bufp->fullIData(oldp+51,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_b_in),32);
    bufp->fullIData(oldp+52,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__ALU_result_out),32);
    bufp->fullBit(oldp+53,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_result_out));
    bufp->fullIData(oldp+54,((vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in 
                              & (- (IData)((1U == (3U 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                      >> 1U))))))),32);
    bufp->fullCData(oldp+55,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                    >> 0x0000000bU))),3);
    bufp->fullCData(oldp+56,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                    >> 3U))),3);
    bufp->fullIData(oldp+57,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
                               << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                                                  >> 1U))),32);
    bufp->fullIData(oldp+58,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                               << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
                                                  >> 1U))),32);
    bufp->fullCData(oldp+59,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                    >> 9U))),2);
    bufp->fullCData(oldp+60,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                    >> 7U))),2);
    bufp->fullCData(oldp+61,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                    >> 1U))),2);
    bufp->fullCData(oldp+62,((3U & ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                     << 1U) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                               >> 0x0000001fU)))),2);
    bufp->fullIData(oldp+63,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                               << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
                                                  >> 1U))),32);
    bufp->fullIData(oldp+64,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                               << 0x0000001dU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
                                                  >> 3U))),32);
    bufp->fullCData(oldp+65,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                    >> 1U))),2);
    bufp->fullCData(oldp+66,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                    >> 0x0000001aU))),3);
    bufp->fullCData(oldp+67,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                    >> 0x00000017U))),3);
    bufp->fullIData(oldp+68,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
                               << 0x0000001dU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                  >> 3U))),32);
    bufp->fullCData(oldp+69,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+70,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+71,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                             >> 6U))),5);
    bufp->fullBit(oldp+72,((1U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                  >> 4U))));
    bufp->fullCData(oldp+73,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                             >> 8U))),5);
    bufp->fullBit(oldp+74,((1U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                  >> 6U))));
    bufp->fullBit(oldp+75,((1U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U])));
    bufp->fullBit(oldp+76,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en));
    bufp->fullCData(oldp+77,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op),3);
    bufp->fullCData(oldp+78,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src),2);
    bufp->fullCData(oldp+79,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src),2);
    bufp->fullBit(oldp+80,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en));
    bufp->fullCData(oldp+81,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op),3);
    bufp->fullCData(oldp+82,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src),2);
    bufp->fullCData(oldp+83,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src),2);
    bufp->fullCData(oldp+84,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src),2);
    bufp->fullCData(oldp+85,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op),3);
    bufp->fullCData(oldp+86,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op),3);
    bufp->fullBit(oldp+87,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1));
    bufp->fullBit(oldp+88,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2));
    bufp->fullCData(oldp+89,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                             >> 7U))),5);
    bufp->fullBit(oldp+90,(((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write) 
                            & (0U != (0x0000001fU & 
                                      (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                       >> 7U))))));
    bufp->fullBit(oldp+91,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write));
    bufp->fullIData(oldp+92,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array
                             [(0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                              >> 0x0000000fU))]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array
                             [(0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                              >> 0x00000014U))]),32);
    bufp->fullBit(oldp+94,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_en));
    bufp->fullCData(oldp+95,((0x0000007fU & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)),7);
    bufp->fullCData(oldp+96,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op),2);
    bufp->fullBit(oldp+97,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_is_load));
    bufp->fullCData(oldp+98,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type),3);
    bufp->fullIData(oldp+99,(((4U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                               ? ((- (IData)((1U & 
                                              (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))))) 
                                  & ((((- (IData)((vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x0000001fU))) 
                                       << 0x00000014U) 
                                      | ((((0x000001feU 
                                            & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                               >> 0x0000000bU)) 
                                           | (1U & 
                                              (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                               >> 0x00000014U))) 
                                          << 0x0000000bU) 
                                         | (0x000007feU 
                                            & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                               >> 0x00000014U)))) 
                                     & (- (IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type) 
                                                       >> 1U)))))))
                               : ((2U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                                   ? ((1U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                                       ? (0xfffff000U 
                                          & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)
                                       : (((- (IData)(
                                                      (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                       >> 0x0000001fU))) 
                                           << 0x0000000cU) 
                                          | ((0x00000800U 
                                              & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                 << 4U)) 
                                             | ((0x000007e0U 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                      >> 7U))))))
                                   : (((- (IData)((vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x0000001fU))) 
                                       << 0x0000000bU) 
                                      | (0x000007ffU 
                                         & ((1U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                                             ? (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                >> 0x00000014U)
                                             : ((0x000007e0U 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                    >> 0x00000014U)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                      >> 7U))))))))),32);
    bufp->fullCData(oldp+100,((vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                               >> 0x00000019U)),7);
    bufp->fullCData(oldp+101,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                     >> 0x0000000cU))),3);
    VCore_tb___024root__trace_full_dtype____0(vlSelf, bufp, 102, vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array);
    bufp->fullIData(oldp+134,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__i),32);
    bufp->fullBit(oldp+135,((1U & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT
                                   [(7U & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc 
                                           >> 2U))] 
                                   >> 1U))));
    bufp->fullCData(oldp+136,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc 
                                     >> 2U))),3);
    VCore_tb___024root__trace_full_dtype____1(vlSelf, bufp, 137, vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT);
    bufp->fullIData(oldp+145,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__i),32);
    bufp->fullIData(oldp+146,(((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall)
                                ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc
                                : ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid)
                                    ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_dest
                                    : ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT
                                        [(7U & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc 
                                                >> 2U))])
                                        ? vlSelfRef.Core_tb__DOT__dut__DOT__if_branch_dest
                                        : ((IData)(4U) 
                                           + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc))))),32);
    bufp->fullBit(oldp+147,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en));
    bufp->fullBit(oldp+148,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw));
    bufp->fullCData(oldp+149,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size),3);
    bufp->fullCData(oldp+150,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size),3);
    bufp->fullIData(oldp+151,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data),32);
    bufp->fullBit(oldp+152,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid));
    bufp->fullCData(oldp+153,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                     >> 1U))),2);
    bufp->fullIData(oldp+154,(((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                   >> 1U))),32);
    bufp->fullIData(oldp+155,(((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
                                                   >> 1U))),32);
    bufp->fullIData(oldp+156,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i),32);
    bufp->fullBit(oldp+157,((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                             | ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))));
    bufp->fullBit(oldp+158,(vlSelfRef.Core_tb__DOT__clk));
    bufp->fullBit(oldp+159,(vlSelfRef.Core_tb__DOT__reset));
    bufp->fullBit(oldp+160,(vlSelfRef.Core_tb__DOT__mem_en));
    bufp->fullBit(oldp+161,(vlSelfRef.Core_tb__DOT__dut__DOT__if_instr_valid));
    bufp->fullIData(oldp+162,(vlSelfRef.Core_tb__DOT__dut__DOT__if_instr_data),32);
    bufp->fullBit(oldp+163,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__if_instr_req_valid));
}

VL_ATTR_COLD void VCore_tb___024root__trace_full_dtype____0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_full_dtype____0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->fullIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->fullIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->fullIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->fullIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->fullIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->fullIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->fullIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->fullIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->fullIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->fullIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->fullIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->fullIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->fullIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->fullIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->fullIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->fullIData(oldp+31,(__VdtypeVar[31]),32);
}

VL_ATTR_COLD void VCore_tb___024root__trace_full_dtype____1(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_full_dtype____1\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[7]),2);
    bufp->fullCData(oldp+1,(__VdtypeVar[6]),2);
    bufp->fullCData(oldp+2,(__VdtypeVar[5]),2);
    bufp->fullCData(oldp+3,(__VdtypeVar[4]),2);
    bufp->fullCData(oldp+4,(__VdtypeVar[3]),2);
    bufp->fullCData(oldp+5,(__VdtypeVar[2]),2);
    bufp->fullCData(oldp+6,(__VdtypeVar[1]),2);
    bufp->fullCData(oldp+7,(__VdtypeVar[0]),2);
}
