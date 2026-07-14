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
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs1_data;
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs1_data = 0;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs2_data;
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs2_data = 0;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_a;
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_a = 0;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_b;
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_b = 0;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_a;
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_a = 0;
    IData/*31:0*/ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_b;
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_b = 0;
    CData/*2:0*/ Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size;
    Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs1_data 
        = ((0U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs1_sel))
            ? vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs1_data
            : ((1U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs1_sel))
                ? vlSelfRef.Core_tb__DOT__dut__DOT__mem_fw_rs1_data
                : vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U]));
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs2_data 
        = ((0U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs2_sel))
            ? vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs2_data
            : ((1U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_rs2_sel))
                ? vlSelfRef.Core_tb__DOT__dut__DOT__mem_fw_rs2_data
                : vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U]));
    __Vtableidx1 = (3U & vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U]);
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en 
        = VCore_tb__ConstPool__TABLE_h9c6b0f56_0[__Vtableidx1];
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw 
        = VCore_tb__ConstPool__TABLE_h53b81a12_0[__Vtableidx1];
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size 
        = VCore_tb__ConstPool__TABLE_h62c063e9_0[__Vtableidx1];
    Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size 
        = VCore_tb__ConstPool__TABLE_hdd5b1fa7_0[__Vtableidx1];
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_a 
        = (((0x00000100U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
             ? ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                 << 0x0000001eU) | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
                                    >> 2U)) : Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs1_data) 
           & (- (IData)((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                  >> 9U))))));
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_a 
        = (Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs1_data 
           & (- (IData)((0U == (3U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])))));
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_b 
        = ((0U == (3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                         >> 6U))) ? Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs2_data
            : (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
               & (- (IData)((1U == (3U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                          >> 6U)))))));
    Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_b 
        = ((0U == (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                   >> 0x0000001eU)) ? Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_rs2_data
            : (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
               & (- (IData)((1U == (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                    >> 0x0000001eU))))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid = 0U;
    if (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en) 
           & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw))) 
          & (0x00001000U > ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                             + (IData)(Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)) 
                            - (IData)(1U)))) & (0U 
                                                != (IData)(Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)))) {
        if ((4U & (IData)(Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))) {
            if ((1U & (~ ((IData)(Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)))) {
                    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid = 1U;
                }
            }
            vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data 
                = ((2U & (IData)(Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                    ? 0U : ((1U & (IData)(Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                             ? 0U : (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                [(0x00000fffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U]))]) 
                                        << 8U) | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                       [(0x00000fffU 
                                         & ((IData)(2U) 
                                            + vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U]))]) 
                                      << 0x00000010U) 
                                     | (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                 [(0x00000fffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U]))]) 
                                         << 8U) | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                        [(0x00000fffU 
                                          & vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U])]))));
        } else {
            vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data = 0U;
        }
    } else {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data = 0U;
    }
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_result 
        = ((0x00001000U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
            ? ((- (IData)((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                    >> 0x0000000aU))))) 
               & ((- (IData)((1U & (~ (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                       >> 0x0000000bU))))) 
                  & (Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_b 
                     ^ Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_a)))
            : ((0x00000800U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                ? ((0x00000400U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                    ? (Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_b 
                       | Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_a)
                    : (Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_b 
                       & Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_a))
                : ((0x00000400U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                    ? (Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_a 
                       - Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_b)
                    : (Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_b 
                       + Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_operand_a))));
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_result 
        = ((~ (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
               >> 4U)) & ((8U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                           ? (Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_a 
                              < Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_b)
                           : ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U])
                               ? (Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_b 
                                  != Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_a)
                               : (Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_b 
                                  == Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_operand_a))));
}

VL_ATTR_COLD void VCore_tb___024root___eval_stl(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_stl\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VCore_tb___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCore_tb___024root___ctor_var_reset(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___ctor_var_reset\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->Core_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10458099454467649468ull);
    vlSelf->Core_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7833695554091425493ull);
    VL_SCOPED_RAND_RESET_W(206, vlSelf->Core_tb__DOT__dut__DOT__ex_ctrl_signals, __VscopeHash, 16950061319768344413ull);
    vlSelf->Core_tb__DOT__dut__DOT__ex_fw_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4323573897274198327ull);
    vlSelf->Core_tb__DOT__dut__DOT__ex_fw_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8124841935549365620ull);
    vlSelf->Core_tb__DOT__dut__DOT__mem_fw_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2989183302776184044ull);
    vlSelf->Core_tb__DOT__dut__DOT__mem_fw_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15521242055497788690ull);
    vlSelf->Core_tb__DOT__dut__DOT__ex_fw_rs1_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14414718165340905379ull);
    vlSelf->Core_tb__DOT__dut__DOT__ex_fw_rs2_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14647286657643557972ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->Core_tb__DOT__dut__DOT__mem_ctrl_signals, __VscopeHash, 6475124781608635844ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->Core_tb__DOT__dut__DOT__wb_ctrl_signals, __VscopeHash, 9270631236459554477ull);
    vlSelf->Core_tb__DOT__dut__DOT__id_ctrl_signals = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16681811566140055709ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17801962444594873238ull);
    }
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18334722673129178905ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15610464676855536161ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10131115793612877628ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4668799605444845543ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15410536358249283384ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12486138599410151514ull);
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 261848043043909674ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2091785252826249218ull);
    }
    vlSelf->Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12840865194118209703ull);
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
}
