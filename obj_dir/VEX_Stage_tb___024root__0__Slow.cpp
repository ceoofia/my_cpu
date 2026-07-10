// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEX_Stage_tb.h for the primary calling header

#include "VEX_Stage_tb__pch.h"

VL_ATTR_COLD void VEX_Stage_tb___024root___eval_static(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_static\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VEX_Stage_tb___024root___eval_final(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_final\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VEX_Stage_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VEX_Stage_tb___024root___eval_phase__stl(VEX_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VEX_Stage_tb___024root___eval_settle(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_settle\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VEX_Stage_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbenches\\EX_Stage_tb.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VEX_Stage_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VEX_Stage_tb___024root___eval_triggers_vec__stl(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_triggers_vec__stl\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VEX_Stage_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VEX_Stage_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VEX_Stage_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VEX_Stage_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___trigger_anySet__stl\n"); );
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

void VEX_Stage_tb___024root___act_sequent__TOP__0(VEX_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VEX_Stage_tb___024root___eval_stl(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_stl\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VEX_Stage_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VEX_Stage_tb___024root___eval_phase__stl(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_phase__stl\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VEX_Stage_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VEX_Stage_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VEX_Stage_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VEX_Stage_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VEX_Stage_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VEX_Stage_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VEX_Stage_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VEX_Stage_tb___024root___ctor_var_reset(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___ctor_var_reset\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(172, vlSelf->EX_Stage_tb__DOT__idex_ctrl_signals, __VscopeHash, 13292722019168607344ull);
    vlSelf->EX_Stage_tb__DOT__ex_fw_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12270154684262660991ull);
    vlSelf->EX_Stage_tb__DOT__ex_fw_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8940414006423598175ull);
    vlSelf->EX_Stage_tb__DOT__mem_fw_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5566335418006977638ull);
    vlSelf->EX_Stage_tb__DOT__mem_fw_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17103418858647315106ull);
    vlSelf->EX_Stage_tb__DOT__fw_rs1_sel_in = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13845593226736375214ull);
    vlSelf->EX_Stage_tb__DOT__fw_rs2_sel_in = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14370421112665883628ull);
    vlSelf->EX_Stage_tb__DOT__exmem_ctrl_signals = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 6039332447284063218ull);
    vlSelf->EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18016630937351220604ull);
    vlSelf->EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 691178260610629225ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
