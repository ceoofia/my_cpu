// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMEM_Stage_tb.h for the primary calling header

#include "VMEM_Stage_tb__pch.h"

void VMEM_Stage_tb___024root___timing_ready(VMEM_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VMEM_Stage_tb___024root___eval_static(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_static\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__MEM_Stage_tb__DOT__clk__0 
        = vlSelfRef.MEM_Stage_tb__DOT__clk;
    VMEM_Stage_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void VMEM_Stage_tb___024root___eval_final(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_final\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMEM_Stage_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMEM_Stage_tb___024root___eval_phase__stl(VMEM_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VMEM_Stage_tb___024root___eval_settle(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_settle\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VMEM_Stage_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("testbenches\\MEM_Stage_tb.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = VMEM_Stage_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void VMEM_Stage_tb___024root___eval_triggers_vec__stl(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_triggers_vec__stl\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool VMEM_Stage_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VMEM_Stage_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VMEM_Stage_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VMEM_Stage_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___trigger_anySet__stl\n"); );
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

void VMEM_Stage_tb___024root___act_comb__TOP__0(VMEM_Stage_tb___024root* vlSelf);

VL_ATTR_COLD void VMEM_Stage_tb___024root___eval_stl(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_stl\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VMEM_Stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool VMEM_Stage_tb___024root___eval_phase__stl(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_phase__stl\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VMEM_Stage_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMEM_Stage_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VMEM_Stage_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VMEM_Stage_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VMEM_Stage_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VMEM_Stage_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VMEM_Stage_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge MEM_Stage_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMEM_Stage_tb___024root___ctor_var_reset(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___ctor_var_reset\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->MEM_Stage_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1662125987773352661ull);
    vlSelf->MEM_Stage_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3200981705395571641ull);
    VL_SCOPED_RAND_RESET_W(76, vlSelf->MEM_Stage_tb__DOT__exmem_signals_tb, __VscopeHash, 188378839702132091ull);
    VL_SCOPED_RAND_RESET_W(73, vlSelf->MEM_Stage_tb__DOT__mem_signals_tb, __VscopeHash, 12662118239423672726ull);
    vlSelf->MEM_Stage_tb__DOT__dut__DOT__mem_int_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12097699996031435556ull);
    vlSelf->MEM_Stage_tb__DOT__dut__DOT__mem_int_rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14070668862711432140ull);
    vlSelf->MEM_Stage_tb__DOT__dut__DOT__mem_int_store_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17578642260198599953ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16676128987719605812ull);
    }
    vlSelf->MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16322723605879670957ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__MEM_Stage_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
