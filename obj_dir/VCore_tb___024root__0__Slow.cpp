// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore_tb.h for the primary calling header

#include "VCore_tb__pch.h"

void VCore_tb___024root___timing_ready(VCore_tb___024root* vlSelf);

VL_ATTR_COLD void VCore_tb___024root___eval_static(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_static\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0 
        = vlSelfRef.Core_tb__DOT__clk;
    VCore_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VCore_tb___024root___eval_initial__TOP(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_initial__TOP\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__unnamedblk1__DOT__i;
    Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[(0x000003ffU 
                                                                                & Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__unnamedblk1__DOT__i)] = 0U;
        Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void VCore_tb___024root___eval_final(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_final\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCore_tb___024root___eval_phase__stl(VCore_tb___024root* vlSelf);

VL_ATTR_COLD void VCore_tb___024root___eval_settle(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_settle\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VCore_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbenches\\Core_tb.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VCore_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VCore_tb___024root___eval_triggers_vec__stl(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_triggers_vec__stl\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VCore_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VCore_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VCore_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 4> VCore_tb__ConstPool__TABLE_h9c6b0f56_0;
extern const VlUnpacked<CData/*0:0*/, 4> VCore_tb__ConstPool__TABLE_h53b81a12_0;
extern const VlUnpacked<CData/*2:0*/, 4> VCore_tb__ConstPool__TABLE_h62c063e9_0;
extern const VlUnpacked<CData/*2:0*/, 4> VCore_tb__ConstPool__TABLE_hdd5b1fa7_0;

VL_ATTR_COLD void VCore_tb___024root___stl_sequent__TOP__0(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___stl_sequent__TOP__0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = 2U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 2U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 3U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 5U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op = 2U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 7U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_en = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op = 4U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_is_load = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src = 1U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src = 2U;
    if ((1U & ((~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_valid)) 
               | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_stall)))) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = 2U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 2U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 3U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 5U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op = 2U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 7U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_en = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op = 4U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_is_load = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src = 1U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src = 2U;
    } else {
        if ((0x00000040U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
            if ((0x00000020U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 4U)))) {
                    if ((8U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = 0U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 1U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 1U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 0U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = 0U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 1U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = 1U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                            }
                        }
                    } else if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = 2U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 1U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 1U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 0U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = 0U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                        }
                    }
                    if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                      >> 2U)))) {
                            if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                    if ((0U == (7U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x0000000cU)))) {
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op = 0U;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                    >> 0x0000000cU)))) {
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op = 1U;
                                    }
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en = 1U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src = 0U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src = 0U;
                                }
                            }
                        }
                    }
                }
                if ((0x00000010U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                } else if ((8U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((1U & (~ vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data))) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                            }
                            if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 4U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 1U;
                            } else {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                            }
                        } else {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                        }
                    } else {
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                    }
                } else if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((1U & (~ vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data))) {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                        }
                        if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 1U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 2U;
                        } else {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                        }
                    } else {
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                    }
                } else if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op 
                            = ((0U == (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                             >> 0x0000000cU)))
                                ? 1U : ((1U == (7U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x0000000cU)))
                                         ? 2U : 0U));
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 2U;
                    } else {
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                    }
                    if ((1U & (~ vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data))) {
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                    }
                } else {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                }
            } else {
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
            }
        } else if ((0x00000020U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
            if ((0x00000010U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = 0U;
                                if ((0U != ((0x000003f8U 
                                             & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                >> 0x00000016U)) 
                                            | (7U & 
                                               (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                >> 0x0000000cU))))) {
                                    if ((0x0100U != 
                                         ((0x000003f8U 
                                           & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                              >> 0x00000016U)) 
                                          | (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x0000000cU))))) {
                                        if ((7U != 
                                             ((0x000003f8U 
                                               & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                  >> 0x00000016U)) 
                                              | (7U 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                    >> 0x0000000cU))))) {
                                            if ((6U 
                                                 != 
                                                 ((0x000003f8U 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                      >> 0x00000016U)) 
                                                  | (7U 
                                                     & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                        >> 0x0000000cU))))) {
                                                if (
                                                    (4U 
                                                     != 
                                                     ((0x000003f8U 
                                                       & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                          >> 0x00000016U)) 
                                                      | (7U 
                                                         & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                            >> 0x0000000cU))))) {
                                                    if (
                                                        (2U 
                                                         == 
                                                         ((0x000003f8U 
                                                           & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                              >> 0x00000016U)) 
                                                          | (7U 
                                                             & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                                >> 0x0000000cU))))) {
                                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op = 2U;
                                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en = 1U;
                                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src = 0U;
                                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 1U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 2U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = 1U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                            }
                        }
                    } else if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((0U == ((0x000003f8U 
                                         & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                            >> 0x00000016U)) 
                                        | (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                 >> 0x0000000cU))))) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                            } else if ((0x0100U == 
                                        ((0x000003f8U 
                                          & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                             >> 0x00000016U)) 
                                         | (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                  >> 0x0000000cU))))) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 1U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                            } else if ((7U == ((0x000003f8U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x00000016U)) 
                                               | (7U 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                     >> 0x0000000cU))))) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 2U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                            } else if ((6U == ((0x000003f8U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x00000016U)) 
                                               | (7U 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                     >> 0x0000000cU))))) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 3U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                            } else if ((4U == ((0x000003f8U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x00000016U)) 
                                               | (7U 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                     >> 0x0000000cU))))) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 4U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                            } else if ((2U != ((0x000003f8U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x00000016U)) 
                                               | (7U 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                     >> 0x0000000cU))))) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 6U;
                            }
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = 1U;
                        }
                    }
                }
                if ((8U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                } else if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((1U & (~ vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data))) {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                        }
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type 
                            = ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)
                                ? 3U : 6U);
                    } else {
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                    }
                } else if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    if ((1U & (~ vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data))) {
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                    }
                } else {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                }
            } else {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = 2U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 1U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                } else if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                } else if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    if ((1U & (~ vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data))) {
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                    }
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type 
                        = ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)
                            ? 0U : 6U);
                } else {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                }
            }
        } else if ((0x00000010U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
            if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = 0U;
                            if ((0x00004000U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                if ((0x00002000U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 1U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op 
                                        = ((0x00001000U 
                                            & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)
                                            ? 2U : 3U);
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                                } else {
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 6U;
                                }
                            } else {
                                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                              >> 0x0000000dU)))) {
                                    if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                  >> 0x0000000cU)))) {
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 1U;
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                                    }
                                }
                                if ((0x00002000U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = 6U;
                                    }
                                } else {
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op 
                                        = ((0x00001000U 
                                            & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)
                                            ? 6U : 0U);
                                }
                            }
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = 1U;
                            if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                          >> 0x0000000eU)))) {
                                if ((0x00002000U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                    if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                  >> 0x0000000cU)))) {
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op = 2U;
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en = 1U;
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src = 0U;
                                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((8U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
            } else if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
            } else if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                if ((1U & (~ vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data))) {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                }
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type 
                    = ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)
                        ? 1U : 6U);
            } else {
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
            }
        } else {
            if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = 1U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = 1U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = 0U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op 
                                = ((2U == (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                 >> 0x0000000cU)))
                                    ? 0U : 6U);
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = 1U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = 1U;
                        }
                    }
                }
            }
            if ((8U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
            } else if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
            } else if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                if ((1U & (~ vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data))) {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
                }
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type 
                    = ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)
                        ? 1U : 6U);
            } else {
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = 0U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = 6U;
                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = 0U;
            }
        }
        if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                      >> 6U)))) {
            if ((0x00000020U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                      >> 2U)))) {
                            if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op = 1U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_en = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                if ((2U == (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                  >> 0x0000000cU)))) {
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op = 0U;
                                }
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_en = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                          >> 5U)))) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                      >> 2U)))) {
                            if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_is_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vtableidx1 = (3U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                          >> 1U));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en 
        = VCore_tb__ConstPool__TABLE_h9c6b0f56_0[__Vtableidx1];
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw 
        = VCore_tb__ConstPool__TABLE_h53b81a12_0[__Vtableidx1];
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size 
        = VCore_tb__ConstPool__TABLE_h62c063e9_0[__Vtableidx1];
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size 
        = VCore_tb__ConstPool__TABLE_hdd5b1fa7_0[__Vtableidx1];
    if ((1U & (~ ((~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_valid)) 
                  | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_stall))))) {
        if ((0x00000040U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
            if ((0x00000020U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 4U)))) {
                    if ((8U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2 = 0U;
                                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1 = 0U;
                                }
                            }
                        }
                    } else if ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2 = 0U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1 = 1U;
                            }
                        }
                    } else if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2 = 1U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1 = 1U;
                        }
                    }
                }
            }
        } else if ((0x00000020U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
            if ((0x00000010U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2 = 1U;
                                vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1 = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2 = 1U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1 = 1U;
                        }
                    }
                }
            }
        } else if ((0x00000010U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
            if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2 = 0U;
                            vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1 = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                          >> 2U)))) {
                if ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                    if ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)) {
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2 = 0U;
                        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1 = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((0x0000001fU 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                    >> 6U)) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                    >> 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((0x0000001fU 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                    >> 6U)) 
                                                == 
                                                (0x0000001fU 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                    >> 0x00000014U)));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid = 0U;
    if (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en) 
           & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw))) 
          & (0x00001000U > ((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                               << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                  >> 1U)) 
                             + (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)) 
                            - (IData)(1U)))) & (0U 
                                                != (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)))) {
        if ((4U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))) {
            if ((1U & (~ ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)))) {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid = 1U;
                }
            }
        }
    }
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array
                                    [(0x0000001fU & 
                                      (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                       >> 0x00000014U))])) 
                    << 1U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_is_load))));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[1U] 
        = ((0xfffffffeU & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array
                                        [(0x0000001fU 
                                          & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                             >> 0x00000014U))])) 
                        << 1U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_is_load))) 
                      >> 0x00000020U)));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[1U] 
        = ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[1U]) 
           | (vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array
              [(0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                               >> 0x0000000fU))] << 1U));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[2U] 
        = ((0xfffffffeU & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[2U]) 
           | (vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array
              [(0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                               >> 0x0000000fU))] >> 0x0000001fU));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[2U] 
        = ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[2U]) 
           | (((4U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                ? ((- (IData)((1U & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))))) 
                   & ((((- (IData)((vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                    >> 0x0000001fU))) 
                        << 0x00000014U) | ((((0x000001feU 
                                              & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                 >> 0x0000000bU)) 
                                             | (1U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x00000014U))) 
                                            << 0x0000000bU) 
                                           | (0x000007feU 
                                              & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                 >> 0x00000014U)))) 
                      & (- (IData)((1U & (~ ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type) 
                                             >> 1U)))))))
                : ((2U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                    ? ((1U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                        ? (0xfffff000U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)
                        : (((- (IData)((vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000800U 
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
                        << 0x0000000bU) | (0x000007ffU 
                                           & ((1U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                                               ? (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                  >> 0x00000014U)
                                               : ((0x000007e0U 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                        >> 7U)))))))) 
              << 1U));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[3U] 
        = ((0xfffffffeU & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[3U]) 
           | (((4U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                ? ((- (IData)((1U & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))))) 
                   & ((((- (IData)((vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                    >> 0x0000001fU))) 
                        << 0x00000014U) | ((((0x000001feU 
                                              & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                 >> 0x0000000bU)) 
                                             | (1U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 0x00000014U))) 
                                            << 0x0000000bU) 
                                           | (0x000007feU 
                                              & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                 >> 0x00000014U)))) 
                      & (- (IData)((1U & (~ ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type) 
                                             >> 1U)))))))
                : ((2U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                    ? ((1U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                        ? (0xfffff000U & vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data)
                        : (((- (IData)((vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                        >> 0x0000001fU))) 
                            << 0x0000000cU) | ((0x00000800U 
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
                        << 0x0000000bU) | (0x000007ffU 
                                           & ((1U & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type))
                                               ? (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                  >> 0x00000014U)
                                               : ((0x000007e0U 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                        >> 7U)))))))) 
              >> 0x0000001fU));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[3U] 
        = ((1U & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[3U]) 
           | (((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_instr_pc4)))) 
               << 3U) | ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op) 
                         << 1U)));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[4U] 
        = (((1U & ((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_instr_pc4)))) 
                   >> 0x0000001dU)) | ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op) 
                                       >> 0x0000001fU)) 
           | ((6U & ((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc)) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_instr_pc4)))) 
                     >> 0x0000001dU)) | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_instr_pc4))) 
                                                  >> 0x00000020U)) 
                                         << 3U)));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[5U] 
        = ((0xfffffff8U & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[5U]) 
           | ((1U & ((IData)(((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc)) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_instr_pc4))) 
                              >> 0x00000020U)) >> 0x0000001dU)) 
              | (6U & ((IData)(((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc)) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_instr_pc4))) 
                                >> 0x00000020U)) >> 0x0000001dU))));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[5U] 
        = ((0xfffff807U & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[5U]) 
           | (((0x000000f8U & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                               >> 4U)) | ((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write) 
                                            & (0U != 
                                               (0x0000001fU 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                                   >> 7U)))) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_en)))) 
              << 3U));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[5U] 
        = ((0xe00007ffU & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[5U]) 
           | (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op) 
                 << 0x0000000fU) | ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op) 
                                    << 0x0000000cU)) 
               | ((((0x0000003eU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                    >> 0x0000000eU)) 
                    | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1)) 
                   << 6U) | ((0x0000003eU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                             >> 0x00000013U)) 
                             | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2)))) 
              << 0x0000000bU));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[5U] 
        = ((0x1fffffffU & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[5U]) 
           | (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op) 
                 << 6U) | ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src) 
                           << 4U)) | (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src) 
                                       << 2U) | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src))) 
              << 0x0000001dU));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[6U] 
        = ((0x00007fc0U & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[6U]) 
           | (0x00007fffU & (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op) 
                                << 6U) | ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src) 
                                          << 4U)) | 
                              (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src) 
                                << 2U) | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src))) 
                             >> 3U)));
    vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[6U] 
        = ((0x0000003fU & vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[6U]) 
           | (0x00007fffU & (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en) 
                                << 8U) | ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op) 
                                          << 5U)) | 
                              (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src) 
                                << 3U) | (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src) 
                                           << 1U) | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en)))) 
                             << 6U)));
    vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs1_sel 
        = ((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
              >> 6U) & ((0U != (0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                               >> 8U))) 
                        & ((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                           >> 8U)) 
                           == (0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                              >> 0x0000000fU)))))
             ? 1U : 2U) & (- (IData)((1U & (~ ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                >> 4U) 
                                               & ((~ vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U]) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                          >> 6U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))))))));
    vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall = 
        (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
         & ((0U != (0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                   >> 6U))) & (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                               | ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
    vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs2_sel 
        = ((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
              >> 6U) & ((0U != (0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                               >> 8U))) 
                        & ((0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                           >> 8U)) 
                           == (0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
                                              >> 0x00000014U)))))
             ? 1U : 2U) & (- (IData)((1U & (~ ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                >> 4U) 
                                               & ((~ vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U]) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                          >> 6U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))))))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs1_data_in 
        = ((0U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs1_sel))
            ? vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data
            : ((1U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs1_sel))
                ? vlSelfRef.Core_tb__DOT__dut__DOT__mem_fw_data
                : ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
                    << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                                       >> 1U))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__if_instr_req_valid 
        = (1U & (~ ((IData)(vlSelfRef.Core_tb__DOT__reset) 
                    | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in 
        = ((0U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs2_sel))
            ? vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data
            : ((1U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs2_sel))
                ? vlSelfRef.Core_tb__DOT__dut__DOT__mem_fw_data
                : ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                    << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
                                       >> 1U))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in 
        = (((0x00000200U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
             ? ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                 << 0x0000001dU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
                                    >> 3U)) : vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs1_data_in) 
           & (- (IData)((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                  >> 0x0000000aU))))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_a_in 
        = (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs1_data_in 
           & (- (IData)((0U == (3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                      >> 1U))))));
    vlSelfRef.Core_tb__DOT__dut__DOT__if_instr_valid 
        = (((IData)(vlSelfRef.Core_tb__DOT__mem_en) 
            & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__if_instr_req_valid)) 
           && (0x00000400U > ((IData)(3U) + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc)));
    vlSelfRef.Core_tb__DOT__dut__DOT__if_instr_data 
        = (((IData)(vlSelfRef.Core_tb__DOT__mem_en) 
            & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__if_instr_req_valid))
            ? ((0x00000400U > ((IData)(3U) + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc))
                ? (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory
                              [(0x000003ffU & vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc)]) 
                      << 8U) | vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory
                     [(0x000003ffU & ((IData)(1U) + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc))]) 
                    << 0x00000010U) | (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory
                                                [(0x000003ffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc))]) 
                                        << 8U) | vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory
                                       [(0x000003ffU 
                                         & ((IData)(3U) 
                                            + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc))]))
                : 0U) : 0U);
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in 
        = ((0U == (3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                         >> 7U))) ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in
            : (((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                 << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
                                    >> 1U)) & (- (IData)(
                                                         (1U 
                                                          == 
                                                          (3U 
                                                           & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                                              >> 7U)))))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_b_in 
        = ((0U == (3U & ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                          << 1U) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                    >> 0x0000001fU))))
            ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in
            : (((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                 << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
                                    >> 1U)) & (- (IData)(
                                                         (1U 
                                                          == 
                                                          (3U 
                                                           & ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                                               << 1U) 
                                                              | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                                 >> 0x0000001fU))))))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__ALU_result_out 
        = ((0x00002000U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
            ? ((- (IData)((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                    >> 0x0000000bU))))) 
               & ((- (IData)((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                       >> 0x0000000cU))))) 
                  & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in 
                     ^ vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in)))
            : ((0x00001000U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                ? ((0x00000800U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                    ? (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in 
                       | vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in)
                    : (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in 
                       & vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in))
                : ((0x00000800U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                    ? (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in 
                       - vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in)
                    : (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in 
                       + vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_result_out 
        = ((~ (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
               >> 5U)) & ((0x00000010U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                           ? (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_a_in 
                              < vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_b_in)
                           : ((8U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                               ? (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_b_in 
                                  != vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_a_in)
                               : (vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_b_in 
                                  == vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_a_in))));
    if ((0U != (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                      >> 0x0000001aU)))) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_dest 
            = vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__ALU_result_out;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid 
            = vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_result_out;
    } else {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_dest 
            = ((1U == (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                             >> 0x00000017U))) ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__ALU_result_out
                : ((2U == (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                 >> 0x00000017U))) ? 
                   (0xfffffffeU & vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__ALU_result_out)
                    : 0U));
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid 
            = ((1U == (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                             >> 0x00000017U))) || (2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                       >> 0x00000017U))));
    }
    vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg 
        = ((3U == (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                         >> 3U))) ? (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_result_out)
            : (((1U == (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                              >> 0x00000017U))) | (2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                       >> 0x00000017U))))
                ? ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
                    << 0x0000001dU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                       >> 3U)) : vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__ALU_result_out));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__next_pc 
        = ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall)
            ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc
            : ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid)
                ? vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_dest
                : ((2U & vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT
                    [(7U & (vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc 
                            >> 2U))]) ? vlSelfRef.Core_tb__DOT__dut__DOT__if_branch_dest
                    : ((IData)(4U) + vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc))));
}

VL_ATTR_COLD void VCore_tb___024root____Vm_traceActivitySetAll(VCore_tb___024root* vlSelf);

VL_ATTR_COLD void VCore_tb___024root___eval_stl(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_stl\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VCore_tb___024root___stl_sequent__TOP__0(vlSelf);
        VCore_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool VCore_tb___024root___eval_phase__stl(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_phase__stl\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VCore_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCore_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VCore_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VCore_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VCore_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VCore_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge Core_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge Core_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore_tb___024root____Vm_traceActivitySetAll(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root____Vm_traceActivitySetAll\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VCore_tb___024root___ctor_var_reset(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___ctor_var_reset\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->Core_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10458099454467649468ull);
    vlSelf->Core_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7833695554091425493ull);
    vlSelf->Core_tb__DOT__mem_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10624196809337399161ull);
    vlSelf->Core_tb__DOT__detected_tb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4333527515383395581ull);
    vlSelf->Core_tb__DOT__cycle_count = 0;
    vlSelf->Core_tb__DOT__dut__DOT__if_branch_dest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2593458377413661754ull);
    vlSelf->Core_tb__DOT__dut__DOT__if_instr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1324103736607756372ull);
    vlSelf->Core_tb__DOT__dut__DOT__if_instr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12138267754109035452ull);
    vlSelf->Core_tb__DOT__dut__DOT__if_update_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14908683192199496407ull);
    vlSelf->Core_tb__DOT__dut__DOT__if_BTB_update_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10415304392367445794ull);
    vlSelf->Core_tb__DOT__dut__DOT__if_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10512594354436460545ull);
    vlSelf->Core_tb__DOT__dut__DOT__if_curr_pc4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8516481497584395111ull);
    vlSelf->Core_tb__DOT__dut__DOT__ifid_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9654982584149651840ull);
    vlSelf->Core_tb__DOT__dut__DOT__id_instr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9919301545971972311ull);
    vlSelf->Core_tb__DOT__dut__DOT__id_instr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7561836615503646846ull);
    vlSelf->Core_tb__DOT__dut__DOT__id_instr_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14370176900114706866ull);
    vlSelf->Core_tb__DOT__dut__DOT__id_instr_pc4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13281786701588554270ull);
    VL_SCOPED_RAND_RESET_W(207, vlSelf->Core_tb__DOT__dut__DOT__idex_ctrl_signals, __VscopeHash, 4070458066921482692ull);
    VL_SCOPED_RAND_RESET_W(207, vlSelf->Core_tb__DOT__dut__DOT__ex_ctrl_signals, __VscopeHash, 16950061319768344413ull);
    vlSelf->Core_tb__DOT__dut__DOT__ex_fw_rs1_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14414718165340905379ull);
    vlSelf->Core_tb__DOT__dut__DOT__ex_fw_rs2_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14647286657643557972ull);
    vlSelf->Core_tb__DOT__dut__DOT__ex_fw_data_to_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3564412388337722696ull);
    VL_SCOPED_RAND_RESET_W(77, vlSelf->Core_tb__DOT__dut__DOT__mem_ctrl_signals, __VscopeHash, 6475124781608635844ull);
    vlSelf->Core_tb__DOT__dut__DOT__ex_fw_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16325805123949859267ull);
    vlSelf->Core_tb__DOT__dut__DOT__mem_fw_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15508210230029227583ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->Core_tb__DOT__dut__DOT__wb_ctrl_signals, __VscopeHash, 9270631236459554477ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_IF__DOT__if_instr_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11418779870993977227ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 728936607307335549ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13942989376433265653ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12006147745152534334ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6265067589506226375ull);
    }
    vlSelf->Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9906698922264840315ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17047328752984343420ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5450130626531682688ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_a_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3492822409805042563ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_alu_b_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2801187259253598613ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8006509879924322553ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3340511000166099772ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_a_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2780342887635294122ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_comp_b_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18090502633017971437ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_wb_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3732293491280734805ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_branch_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14059570414336621666ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_jump_op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6342505568078516248ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6920464129936991710ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_use_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9935901224189190043ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12612929651329621226ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_lsu_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14554050102263368753ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_instr_pc4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6296308460648808881ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1829038952696214647ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_is_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12154920898364134768ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__id_imm_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1243465073448789416ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Decoder__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12382436920552815919ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17801962444594873238ull);
    }
    vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13353179230574231347ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_dest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9575330952218934419ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1669787265399604614ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs1_data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1993263519616135597ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_operand_parser__DOT__rs2_data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2799712943912029707ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_a_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5804521483089053659ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__alu_operand_b_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14399453050482677548ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_ALU__DOT__ALU_result_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6457215756091174232ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_a_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9358562148374875364ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_operand_b_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14931886637657221532ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp__DOT__comp_result_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4704665315201801801ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17117637108270920855ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10131115793612877628ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4668799605444845543ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15410536358249283384ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17982925109160089672ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 261848043043909674ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2091785252826249218ull);
    }
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12840865194118209703ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
