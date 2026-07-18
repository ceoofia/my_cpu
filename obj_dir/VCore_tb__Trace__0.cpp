// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VCore_tb__Syms.h"


void VCore_tb___024root__trace_chg_0_sub_0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCore_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_chg_0\n"); );
    // Body
    VCore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore_tb___024root*>(voidSelf);
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VCore_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VCore_tb___024root__trace_chg_dtype____0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);
void VCore_tb___024root__trace_chg_dtype____1(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 8>& __VdtypeVar);

void VCore_tb___024root__trace_chg_0_sub_0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_chg_0_sub_0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid));
        bufp->chgIData(oldp+1,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_dest),32);
        bufp->chgIData(oldp+2,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc),32);
        bufp->chgIData(oldp+3,(((IData)(4U) + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc)),32);
        bufp->chgBit(oldp+4,(vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall));
        bufp->chgBit(oldp+5,(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_valid));
        bufp->chgIData(oldp+6,(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data),32);
        bufp->chgIData(oldp+7,(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc),32);
        bufp->chgIData(oldp+8,(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc4),32);
        bufp->chgIData(oldp+9,(((0U == (3U & (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                              >> 1U)))
                                 ? ((vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                     << 0x0000001fU) 
                                    | (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] 
                                       >> 1U)) : ((
                                                   (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] 
                                                    << 0x0000001fU) 
                                                   | (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] 
                                                      >> 1U)) 
                                                  & (- (IData)(
                                                               (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] 
                                                                & (2U 
                                                                   == 
                                                                   (6U 
                                                                    & vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U])))))))),32);
        bufp->chgCData(oldp+10,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                                >> 4U))),5);
        bufp->chgBit(oldp+11,((1U & (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                     >> 3U))));
        bufp->chgWData(oldp+12,(vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals),207);
        bufp->chgWData(oldp+19,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals),207);
        bufp->chgCData(oldp+26,(((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                    >> 6U) & ((0U != 
                                               (0x0000001fU 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                   >> 8U))) 
                                              & ((0x0000001fU 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                     >> 8U)) 
                                                 == 
                                                 (0x0000001fU 
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
        bufp->chgCData(oldp+27,(((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                    >> 6U) & ((0U != 
                                               (0x0000001fU 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                   >> 8U))) 
                                              & ((0x0000001fU 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                     >> 8U)) 
                                                 == 
                                                 (0x0000001fU 
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
        bufp->chgCData(oldp+28,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs1_sel),2);
        bufp->chgCData(oldp+29,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs2_sel),2);
        bufp->chgIData(oldp+30,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data),32);
        bufp->chgIData(oldp+31,(vlSelfRef.Core_tb__DOT__dut__DOT__mem_fw_data),32);
        __Vtemp_2[0U] = (((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (3U 
                                                                     & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                        >> 1U)))))))))) 
                          << 1U) | (1U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U]));
        __Vtemp_2[1U] = (((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (3U 
                                                                     & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                        >> 1U)))))))))) 
                          >> 0x0000001fU) | ((IData)(
                                                     ((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
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
                                           << 1U)) 
                           | ((0x00000018U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                              >> 0x0000001aU)) 
                              | ((4U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                        >> 1U)) | (3U 
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
        bufp->chgWData(oldp+32,(__Vtemp_2),77);
        bufp->chgIData(oldp+35,(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg),32);
        bufp->chgWData(oldp+36,(vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals),77);
        __Vtemp_4[0U] = (((IData)((((QData)((IData)(
                                                    ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                      << 0x0000001fU) 
                                                     | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                        >> 1U)))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data)))) 
                          << 1U) | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid));
        __Vtemp_4[1U] = (((IData)((((QData)((IData)(
                                                    ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                      << 0x0000001fU) 
                                                     | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                        >> 1U)))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data)))) 
                          >> 0x0000001fU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                                          << 0x0000001fU) 
                                                                         | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                            >> 1U)))) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data))) 
                                                      >> 0x00000020U)) 
                                             << 1U));
        __Vtemp_4[2U] = ((((0x000000f8U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                           >> 5U)) 
                           | (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                    >> 4U))) << 1U) 
                         | ((IData)(((((QData)((IData)(
                                                       ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                         << 0x0000001fU) 
                                                        | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                           >> 1U)))) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data))) 
                                     >> 0x00000020U)) 
                            >> 0x0000001fU));
        bufp->chgWData(oldp+39,(__Vtemp_4),73);
        bufp->chgIData(oldp+42,((((~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw)) 
                                  & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en))
                                  ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data
                                  : ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                      << 0x0000001fU) 
                                     | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                        >> 1U)))),32);
        bufp->chgWData(oldp+43,(vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals),73);
        bufp->chgIData(oldp+46,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs1_data_in),32);
        bufp->chgIData(oldp+47,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in),32);
        bufp->chgIData(oldp+48,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in),32);
        bufp->chgIData(oldp+49,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in),32);
        bufp->chgIData(oldp+50,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_a_in),32);
        bufp->chgIData(oldp+51,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_b_in),32);
        bufp->chgIData(oldp+52,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__ALU_result_out),32);
        bufp->chgBit(oldp+53,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_result_out));
        bufp->chgIData(oldp+54,((vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in 
                                 & (- (IData)((1U == 
                                               (3U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                   >> 1U))))))),32);
        bufp->chgCData(oldp+55,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                       >> 0x0000000bU))),3);
        bufp->chgCData(oldp+56,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                       >> 3U))),3);
        bufp->chgIData(oldp+57,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
                                  << 0x0000001fU) | 
                                 (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                                  >> 1U))),32);
        bufp->chgIData(oldp+58,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                                  << 0x0000001fU) | 
                                 (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
                                  >> 1U))),32);
        bufp->chgCData(oldp+59,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                       >> 9U))),2);
        bufp->chgCData(oldp+60,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                       >> 7U))),2);
        bufp->chgCData(oldp+61,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                       >> 1U))),2);
        bufp->chgCData(oldp+62,((3U & ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                        << 1U) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                  >> 0x0000001fU)))),2);
        bufp->chgIData(oldp+63,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                  << 0x0000001fU) | 
                                 (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
                                  >> 1U))),32);
        bufp->chgIData(oldp+64,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
                                  >> 3U))),32);
        bufp->chgCData(oldp+65,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                       >> 1U))),2);
        bufp->chgCData(oldp+66,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                       >> 0x0000001aU))),3);
        bufp->chgCData(oldp+67,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                       >> 0x00000017U))),3);
        bufp->chgIData(oldp+68,(((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
                                  << 0x0000001dU) | 
                                 (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                  >> 3U))),32);
        bufp->chgCData(oldp+69,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+70,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+71,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                >> 6U))),5);
        bufp->chgBit(oldp+72,((1U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                     >> 4U))));
        bufp->chgCData(oldp+73,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                >> 8U))),5);
        bufp->chgBit(oldp+74,((1U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                     >> 6U))));
        bufp->chgBit(oldp+75,((1U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U])));
        bufp->chgBit(oldp+76,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en));
        bufp->chgCData(oldp+77,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op),3);
        bufp->chgCData(oldp+78,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src),2);
        bufp->chgCData(oldp+79,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src),2);
        bufp->chgBit(oldp+80,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en));
        bufp->chgCData(oldp+81,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op),3);
        bufp->chgCData(oldp+82,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src),2);
        bufp->chgCData(oldp+83,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src),2);
        bufp->chgCData(oldp+84,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src),2);
        bufp->chgCData(oldp+85,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op),3);
        bufp->chgCData(oldp+86,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op),3);
        bufp->chgBit(oldp+87,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1));
        bufp->chgBit(oldp+88,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2));
        bufp->chgCData(oldp+89,((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                >> 7U))),5);
        bufp->chgBit(oldp+90,(((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write) 
                               & (0U != (0x0000001fU 
                                         & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                            >> 7U))))));
        bufp->chgBit(oldp+91,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write));
        bufp->chgIData(oldp+92,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array
                                [(0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                 >> 0x0000000fU))]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array
                                [(0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                 >> 0x00000014U))]),32);
        bufp->chgBit(oldp+94,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_en));
        bufp->chgCData(oldp+95,((0x0000007fU & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)),7);
        bufp->chgCData(oldp+96,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op),2);
        bufp->chgBit(oldp+97,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_is_load));
        bufp->chgCData(oldp+98,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type),3);
        bufp->chgIData(oldp+99,(((4U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                                  ? ((- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))))) 
                                     & ((((- (IData)(
                                                     (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                      >> 0x0000001fU))) 
                                          << 0x00000014U) 
                                         | ((((0x000001feU 
                                               & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                  >> 0x0000000bU)) 
                                              | (1U 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                    >> 0x00000014U))) 
                                             << 0x0000000bU) 
                                            | (0x000007feU 
                                               & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                  >> 0x00000014U)))) 
                                        & (- (IData)(
                                                     (1U 
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
                                      : (((- (IData)(
                                                     (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                      >> 0x0000001fU))) 
                                          << 0x0000000bU) 
                                         | (0x000007ffU 
                                            & ((1U 
                                                & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                                                ? (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x00000014U)
                                                : (
                                                   (0x000007e0U 
                                                    & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                         >> 7U))))))))),32);
        bufp->chgCData(oldp+100,((vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                  >> 0x00000019U)),7);
        bufp->chgCData(oldp+101,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                        >> 0x0000000cU))),3);
        VCore_tb___024root__trace_chg_dtype____0(vlSelf, bufp, 102, vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array);
        bufp->chgIData(oldp+134,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__i),32);
        bufp->chgBit(oldp+135,((1U & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT
                                      [(7U & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc 
                                              >> 2U))] 
                                      >> 1U))));
        bufp->chgCData(oldp+136,((7U & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc 
                                        >> 2U))),3);
        VCore_tb___024root__trace_chg_dtype____1(vlSelf, bufp, 137, vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT);
        bufp->chgIData(oldp+145,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__i),32);
        bufp->chgIData(oldp+146,(((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall)
                                   ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc
                                   : ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid)
                                       ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_dest
                                       : ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT
                                           [(7U & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc 
                                                   >> 2U))])
                                           ? vlSelfRef.Core_tb__DOT__dut__DOT__if_branch_dest
                                           : ((IData)(4U) 
                                              + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc))))),32);
        bufp->chgBit(oldp+147,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en));
        bufp->chgBit(oldp+148,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw));
        bufp->chgCData(oldp+149,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size),3);
        bufp->chgCData(oldp+150,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size),3);
        bufp->chgIData(oldp+151,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data),32);
        bufp->chgBit(oldp+152,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid));
        bufp->chgCData(oldp+153,((3U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                        >> 1U))),2);
        bufp->chgIData(oldp+154,(((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                   << 0x0000001fU) 
                                  | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                     >> 1U))),32);
        bufp->chgIData(oldp+155,(((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                   << 0x0000001fU) 
                                  | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
                                     >> 1U))),32);
        bufp->chgIData(oldp+156,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i),32);
        bufp->chgBit(oldp+157,((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                | ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))));
    }
    bufp->chgBit(oldp+158,(vlSelfRef.Core_tb__DOT__clk));
    bufp->chgBit(oldp+159,(vlSelfRef.Core_tb__DOT__reset));
    bufp->chgBit(oldp+160,(vlSelfRef.Core_tb__DOT__mem_en));
    bufp->chgBit(oldp+161,(vlSelfRef.Core_tb__DOT__dut__DOT__if_instr_valid));
    bufp->chgIData(oldp+162,(vlSelfRef.Core_tb__DOT__dut__DOT__if_instr_data),32);
    bufp->chgBit(oldp+163,(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__if_instr_req_valid));
}

void VCore_tb___024root__trace_chg_dtype____0(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_chg_dtype____0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
}

void VCore_tb___024root__trace_chg_dtype____1(VCore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_chg_dtype____1\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[7]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[6]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[5]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[4]),2);
    bufp->chgCData(oldp+4,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+5,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+6,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+7,(__VdtypeVar[0]),2);
}

void VCore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root__trace_cleanup\n"); );
    // Body
    VCore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCore_tb___024root*>(voidSelf);
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
