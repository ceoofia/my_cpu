// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VID_Stage_tb.h for the primary calling header

#include "VID_Stage_tb__pch.h"

void VID_Stage_tb___024root___timing_ready(VID_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VID_Stage_tb___024root___eval_static(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_static\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__ID_Stage_tb__DOT__clk__0 
        = vlSelfRef.ID_Stage_tb__DOT__clk;
    VID_Stage_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VID_Stage_tb___024root___eval_final(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_final\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VID_Stage_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VID_Stage_tb___024root___eval_phase__stl(VID_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VID_Stage_tb___024root___eval_settle(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_settle\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VID_Stage_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbenches\\ID_Stage_tb.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VID_Stage_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VID_Stage_tb___024root___eval_triggers_vec__stl(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_triggers_vec__stl\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VID_Stage_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VID_Stage_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VID_Stage_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VID_Stage_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___trigger_anySet__stl\n"); );
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

void VID_Stage_tb___024root___act_comb__TOP__0(VID_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VID_Stage_tb___024root___eval_stl(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_stl\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VID_Stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VID_Stage_tb___024root___eval_phase__stl(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_phase__stl\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VID_Stage_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VID_Stage_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VID_Stage_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VID_Stage_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VID_Stage_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VID_Stage_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VID_Stage_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge ID_Stage_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VID_Stage_tb___024root___ctor_var_reset(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___ctor_var_reset\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->ID_Stage_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2259937001978701252ull);
    vlSelf->ID_Stage_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7911278629029837262ull);
    vlSelf->ID_Stage_tb__DOT__id_instr_data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 966538740041536274ull);
    vlSelf->ID_Stage_tb__DOT__id_instr_valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8378334331748816547ull);
    vlSelf->ID_Stage_tb__DOT__id_instr_pc_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18435626338256882031ull);
    vlSelf->ID_Stage_tb__DOT__wb_rd_data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2960309120361989980ull);
    vlSelf->ID_Stage_tb__DOT__wb_rd_addr_in = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 315112463999267223ull);
    vlSelf->ID_Stage_tb__DOT__wb_reg_write_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 823660088179913022ull);
    VL_SCOPED_RAND_RESET_W(172, vlSelf->ID_Stage_tb__DOT__dut_id_ctrl_signals, __VscopeHash, 5176270210443795815ull);
    vlSelf->ID_Stage_tb__DOT__dut__DOT__id_use_rs1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3847774468425912836ull);
    vlSelf->ID_Stage_tb__DOT__dut__DOT__id_use_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11891586552505685580ull);
    vlSelf->ID_Stage_tb__DOT__dut__DOT__id_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2568282697224632817ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7023806593483048313ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__ID_Stage_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
