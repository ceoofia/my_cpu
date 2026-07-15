// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore_tb.h for the primary calling header

#include "VCore_tb__pch.h"

VL_ATTR_COLD void VCore_tb___024root___eval_initial__TOP(VCore_tb___024root* vlSelf);
VlCoroutine VCore_tb___024root___eval_initial__TOP__Vtiming__0(VCore_tb___024root* vlSelf);
VlCoroutine VCore_tb___024root___eval_initial__TOP__Vtiming__1(VCore_tb___024root* vlSelf);

void VCore_tb___024root___eval_initial(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_initial\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCore_tb___024root___eval_initial__TOP(vlSelf);
    VCore_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VCore_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void VCore_tb___024root____VbeforeTrig_he2f289c5__0(VCore_tb___024root* vlSelf, const char* __VeventDescription);
void VCore_tb___024root____VbeforeTrig_he2f29695__0(VCore_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VCore_tb___024root___eval_initial__TOP__Vtiming__0(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSelfRef.Core_tb__DOT__clk = 0U;
    vlSelfRef.Core_tb__DOT__mem_en = 1U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[0U] = 1U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[1U] = 0x40U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[2U] = 1U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[3U] = 0x13U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[4U] = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[5U] = 0xf1U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[6U] = 1U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[7U] = 0x93U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[8U] = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[9U] = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[10U] = 0U;
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[11U] = 0x13U;
    vlSelfRef.Core_tb__DOT__reset = 1U;
    Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        VCore_tb___024root____VbeforeTrig_he2f289c5__0(vlSelf, 
                                                       "@(posedge Core_tb.clk)");
        co_await vlSelfRef.__VtrigSched_he2f289c5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge Core_tb.clk)", 
                                                             "testbenches\\Core_tb.sv", 
                                                             132);
        Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VCore_tb___024root____VbeforeTrig_he2f29695__0(vlSelf, 
                                                   "@(negedge Core_tb.clk)");
    co_await vlSelfRef.__VtrigSched_he2f29695__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge Core_tb.clk)", 
                                                         "testbenches\\Core_tb.sv", 
                                                         133);
    vlSelfRef.Core_tb__DOT__reset = 0U;
    Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000064U;
    while (VL_LTS_III(32, 0U, Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        VCore_tb___024root____VbeforeTrig_he2f289c5__0(vlSelf, 
                                                       "@(posedge Core_tb.clk)");
        co_await vlSelfRef.__VtrigSched_he2f289c5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge Core_tb.clk)", 
                                                             "testbenches\\Core_tb.sv", 
                                                             152);
        Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Register 0: %0d\nRegister 1: %0d\nRegister 2: %0d\nRegister 3: %0d\nRegister 4: %0d\nRegister 5: %0d\nRegister 6: %0d\nRegister 7: %0d\nRegister 8: %0d\nRegister 9: %0d\nRegister 10: %0d\nRegister 11: %0d\nRegister 12: %0d\nRegister 13: %0d\nRegister 14: %0d\nRegister 15: %0d\nRegister 16: %0d\nRegister 17: %0d\nRegister 18: %0d\nRegister 19: %0d\nRegister 20: %0d\nRegister 21: %0d\nRegister 22: %0d\nRegister 23: %0d\nRegister 24: %0d\nRegister 25: %0d\nRegister 26: %0d\nRegister 27: %0d\nRegister 28: %0d\nRegister 29: %0d\n",30
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[0U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[1U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[2U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[3U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[4U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[5U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[6U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[7U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[8U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[9U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[10U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[11U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[12U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[13U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[14U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[15U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[16U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[17U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[18U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[19U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[20U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[21U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[22U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[23U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[24U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[25U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[26U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[27U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[28U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[29U]);
    VL_WRITEF_NX("Register 30: %0d\nRegister 31: %0d\n",2
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[30U]
                 , '#',32,vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[31U]);
    VL_FINISH_MT("testbenches\\Core_tb.sv", 157, "");
    co_return;
}

VlCoroutine VCore_tb___024root___eval_initial__TOP__Vtiming__1(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "testbenches\\Core_tb.sv", 
                                             9);
        vlSelfRef.Core_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.Core_tb__DOT__clk)));
    }
    co_return;
}

void VCore_tb___024root___eval_triggers_vec__act(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_triggers_vec__act\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.Core_tb__DOT__clk)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.Core_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0 
        = vlSelfRef.Core_tb__DOT__clk;
}

bool VCore_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___trigger_anySet__act\n"); );
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

void VCore_tb___024root___act_comb__TOP__0(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___act_comb__TOP__0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__if_instr_req_valid 
        = (1U & (~ ((IData)(vlSelfRef.Core_tb__DOT__reset) 
                    | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall))));
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
}

void VCore_tb___024root___eval_act(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_act\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        VCore_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 4> VCore_tb__ConstPool__TABLE_h9c6b0f56_0;
extern const VlUnpacked<CData/*0:0*/, 4> VCore_tb__ConstPool__TABLE_h53b81a12_0;
extern const VlUnpacked<CData/*2:0*/, 4> VCore_tb__ConstPool__TABLE_h62c063e9_0;
extern const VlUnpacked<CData/*2:0*/, 4> VCore_tb__ConstPool__TABLE_hdd5b1fa7_0;

void VCore_tb___024root___nba_sequent__TOP__0(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___nba_sequent__TOP__0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v0;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v0 = 0;
    CData/*1:0*/ __VdlyVal__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8;
    __VdlyVal__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8 = 0;
    CData/*2:0*/ __VdlyDim0__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8;
    __VdlyDim0__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8 = 0;
    CData/*0:0*/ __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8 = 0;
    CData/*1:0*/ __VdlyVal__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9;
    __VdlyVal__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9 = 0;
    CData/*2:0*/ __VdlyDim0__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9;
    __VdlyDim0__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9 = 0;
    CData/*0:0*/ __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9 = 0;
    CData/*0:0*/ __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v0;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v0 = 0;
    IData/*31:0*/ __VdlyVal__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32;
    __VdlyVal__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32;
    __VdlyDim0__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32 = 0;
    CData/*0:0*/ __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32 = 0;
    SData/*11:0*/ __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v0;
    __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1;
    __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1;
    __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2;
    __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2;
    __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3;
    __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3;
    __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4;
    __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4 = 0;
    SData/*11:0*/ __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4;
    __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v0 = 0U;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8 = 0U;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9 = 0U;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v0 = 0U;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32 = 0U;
    if (vlSelfRef.Core_tb__DOT__reset) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__i = 8U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__i = 0x00000020U;
    }
    if (vlSelfRef.Core_tb__DOT__reset) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00001000U, vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i)) {
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v0 
                = (0x00000fffU & vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i);
            vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.enqueue(0U, (IData)(__VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v0));
            vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i 
                = ((IData)(1U) + vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__i);
        }
    } else if (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en) 
                  & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw)) 
                 & (0x00001000U > ((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                      << 0x0000001fU) 
                                     | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                        >> 1U)) + (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size)) 
                                   - (IData)(1U)))) 
                & (0U != (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size)))) {
        if ((4U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size))) {
            __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1 
                = (0x000000ffU & ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                   << 7U) | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
                                             >> 0x00000019U)));
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1 
                = (0x00000fffU & ((IData)(3U) + ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                    >> 1U))));
            vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1, (IData)(__VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1));
            __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
                                  >> 0x00000011U));
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2 
                = (0x00000fffU & ((IData)(2U) + ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                    >> 1U))));
            vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2, (IData)(__VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2));
            __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3 
                = (0x000000ffU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
                                  >> 9U));
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3 
                = (0x00000fffU & ((IData)(1U) + ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                    >> 1U))));
            vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3, (IData)(__VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3));
            __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4 
                = (0x000000ffU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
                                  >> 1U));
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4 
                = (0x00000fffU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                  >> 1U));
            vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4, (IData)(__VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4));
        }
    }
    if (((IData)(vlSelfRef.Core_tb__DOT__reset) | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid))) {
        vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc4 = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data = 0U;
    } else if (vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall) {
        vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc4 
            = vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc4;
        vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc 
            = vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc;
        vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
            = vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data;
    } else {
        vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc4 
            = vlSelfRef.Core_tb__DOT__dut__DOT__if_curr_pc4;
        vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_pc 
            = vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc;
        vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_data 
            = vlSelfRef.Core_tb__DOT__dut__DOT__if_instr_data;
    }
    vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_valid 
        = ((1U & (~ ((IData)(vlSelfRef.Core_tb__DOT__reset) 
                     | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid)))) 
           && ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall)
                ? (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__id_instr_valid)
                : (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__if_instr_valid)));
    if (vlSelfRef.Core_tb__DOT__reset) {
        __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v0 = 1U;
    } else if (vlSelfRef.Core_tb__DOT__dut__DOT__if_update_en) {
        if (vlSelfRef.Core_tb__DOT__dut__DOT__if_branch_taken) {
            if ((3U != vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT
                 [(7U & (vlSelfRef.Core_tb__DOT__dut__DOT__if_BTB_update_pc 
                         >> 2U))])) {
                __VdlyVal__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT
                                                   [
                                                   (7U 
                                                    & (vlSelfRef.Core_tb__DOT__dut__DOT__if_BTB_update_pc 
                                                       >> 2U))])));
                __VdlyDim0__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8 
                    = (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__if_BTB_update_pc 
                             >> 2U));
                __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8 = 1U;
            }
        } else if ((0U != vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT
                    [(7U & (vlSelfRef.Core_tb__DOT__dut__DOT__if_BTB_update_pc 
                            >> 2U))])) {
            __VdlyVal__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9 
                = (3U & ((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT
                                 [(7U & (vlSelfRef.Core_tb__DOT__dut__DOT__if_BTB_update_pc 
                                         >> 2U))]) 
                         - (IData)(1U)));
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9 
                = (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__if_BTB_update_pc 
                         >> 2U));
            __VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9 = 1U;
        }
    }
    if (__VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v0) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[0U] = 1U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[1U] = 1U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[2U] = 1U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[3U] = 1U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[4U] = 1U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[5U] = 1U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[6U] = 1U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[7U] = 1U;
    }
    if (__VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[__VdlyDim0__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8] 
            = __VdlyVal__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v8;
    }
    if (__VdlySet__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT[__VdlyDim0__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9] 
            = __VdlyVal__Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Branch_predictor__DOT__BHT__v9;
    }
    if (vlSelfRef.Core_tb__DOT__reset) {
        __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v0 = 1U;
    } else if (((vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                 >> 3U) & (0U != (0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                                 >> 4U))))) {
        __VdlyVal__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32 
            = ((0U == (3U & (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                             >> 1U))) ? ((vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] 
                                            >> 1U))
                : (((vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] 
                     << 0x0000001fU) | (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] 
                                        >> 1U)) & (- (IData)(
                                                             (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] 
                                                              & (2U 
                                                                 == 
                                                                 (6U 
                                                                  & vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U])))))));
        __VdlyDim0__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32 
            = (0x0000001fU & (vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
                              >> 4U));
        __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32 = 1U;
    }
    if (__VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v0) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[0U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[1U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[2U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[3U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[4U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[5U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[6U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[7U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[8U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[9U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[10U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[11U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[12U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[13U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[14U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[15U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[16U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[17U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[18U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[19U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[20U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[21U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[22U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[23U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[24U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[25U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[26U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[27U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[28U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[29U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[30U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[31U] = 0U;
    }
    if (__VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32) {
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array[__VdlyDim0__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32] 
            = __VdlyVal__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32;
    }
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
    __Vtemp_2[0U] = (((IData)((((QData)((IData)(((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                    >> 1U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en) 
                                                                      & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw))) 
                                                                     & (0x00001000U 
                                                                        > 
                                                                        ((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                                            << 0x0000001fU) 
                                                                           | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                              >> 1U)) 
                                                                          + (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)) 
                                                                         - (IData)(1U)))) 
                                                                    & (0U 
                                                                       != (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)))
                                                                    ? 
                                                                   ((4U 
                                                                     & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                     ? 
                                                                    ((2U 
                                                                      & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                      ? 0U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                       ? 0U
                                                                       : 
                                                                      (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                                [
                                                                                (0x00000fffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                << 0x0000001fU) 
                                                                                | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                          << 8U) 
                                                                         | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                         [
                                                                         (0x00000fffU 
                                                                          & ((IData)(2U) 
                                                                             + 
                                                                             ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                               << 0x0000001fU) 
                                                                              | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                        << 0x00000010U) 
                                                                       | (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                                [
                                                                                (0x00000fffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                << 0x0000001fU) 
                                                                                | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                           << 8U) 
                                                                          | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                          [
                                                                          (0x00000fffU 
                                                                           & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                              >> 1U))]))))
                                                                     : 0U)
                                                                    : 0U))))) 
                      << 1U) | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                    >> 1U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en) 
                                                                      & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw))) 
                                                                     & (0x00001000U 
                                                                        > 
                                                                        ((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                                            << 0x0000001fU) 
                                                                           | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                              >> 1U)) 
                                                                          + (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)) 
                                                                         - (IData)(1U)))) 
                                                                    & (0U 
                                                                       != (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)))
                                                                    ? 
                                                                   ((4U 
                                                                     & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                     ? 
                                                                    ((2U 
                                                                      & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                      ? 0U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                       ? 0U
                                                                       : 
                                                                      (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                                [
                                                                                (0x00000fffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                << 0x0000001fU) 
                                                                                | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                          << 8U) 
                                                                         | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                         [
                                                                         (0x00000fffU 
                                                                          & ((IData)(2U) 
                                                                             + 
                                                                             ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                               << 0x0000001fU) 
                                                                              | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                        << 0x00000010U) 
                                                                       | (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                                [
                                                                                (0x00000fffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                << 0x0000001fU) 
                                                                                | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                           << 8U) 
                                                                          | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                          [
                                                                          (0x00000fffU 
                                                                           & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                              >> 1U))]))))
                                                                     : 0U)
                                                                    : 0U))))) 
                      >> 0x0000001fU) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                                      << 0x0000001fU) 
                                                                     | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                        >> 1U)))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en) 
                                                                         & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw))) 
                                                                        & (0x00001000U 
                                                                           > 
                                                                           ((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                                               << 0x0000001fU) 
                                                                              | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U)) 
                                                                             + (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)) 
                                                                            - (IData)(1U)))) 
                                                                       & (0U 
                                                                          != (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)))
                                                                       ? 
                                                                      ((4U 
                                                                        & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                        ? 
                                                                       ((2U 
                                                                         & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                         ? 0U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                          ? 0U
                                                                          : 
                                                                         (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                                [
                                                                                (0x00000fffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                << 0x0000001fU) 
                                                                                | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                             << 8U) 
                                                                            | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                            [
                                                                            (0x00000fffU 
                                                                             & ((IData)(2U) 
                                                                                + 
                                                                                ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                << 0x0000001fU) 
                                                                                | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                           << 0x00000010U) 
                                                                          | (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                                [
                                                                                (0x00000fffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                << 0x0000001fU) 
                                                                                | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                              << 8U) 
                                                                             | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                             [
                                                                             (0x00000fffU 
                                                                              & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))]))))
                                                                        : 0U)
                                                                       : 0U)))) 
                                                  >> 0x00000020U)) 
                                         << 1U));
    __Vtemp_2[2U] = ((IData)(((((QData)((IData)(((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                    >> 1U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en) 
                                                                      & (~ (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw))) 
                                                                     & (0x00001000U 
                                                                        > 
                                                                        ((((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                                            << 0x0000001fU) 
                                                                           | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                              >> 1U)) 
                                                                          + (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)) 
                                                                         - (IData)(1U)))) 
                                                                    & (0U 
                                                                       != (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size)))
                                                                    ? 
                                                                   ((4U 
                                                                     & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                     ? 
                                                                    ((2U 
                                                                      & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                      ? 0U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size))
                                                                       ? 0U
                                                                       : 
                                                                      (((((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                                [
                                                                                (0x00000fffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                << 0x0000001fU) 
                                                                                | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                          << 8U) 
                                                                         | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                         [
                                                                         (0x00000fffU 
                                                                          & ((IData)(2U) 
                                                                             + 
                                                                             ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                               << 0x0000001fU) 
                                                                              | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                        << 0x00000010U) 
                                                                       | (((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                                [
                                                                                (0x00000fffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                << 0x0000001fU) 
                                                                                | (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                                >> 1U))))]) 
                                                                           << 8U) 
                                                                          | vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem
                                                                          [
                                                                          (0x00000fffU 
                                                                           & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                                                              >> 1U))]))))
                                                                     : 0U)
                                                                    : 0U)))) 
                              >> 0x00000020U)) >> 0x0000001fU);
    if (vlSelfRef.Core_tb__DOT__reset) {
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] = 0x0000000cU;
    } else {
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data 
            = vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg;
        vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__current_pc 
            = vlSelfRef.Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_PC_Fetch__DOT__next_pc;
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] 
            = __Vtemp_2[0U];
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] 
            = __Vtemp_2[1U];
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
            = ((((0x000000f8U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                 >> 5U)) | (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                  >> 4U))) 
                << 1U) | __Vtemp_2[2U]);
    }
    vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.commit(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem);
    if (vlSelfRef.Core_tb__DOT__reset) {
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] = 0x00000024U;
    } else {
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
                          << 0x00000020U) | (QData)((IData)(
                                                            (((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                                                               << 0x0000001fU) 
                                                              | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
                                                                 >> 1U)) 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                               >> 1U)))))))))) 
                << 1U) | (1U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U]));
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
                          << 0x00000020U) | (QData)((IData)(
                                                            (((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                                                               << 0x0000001fU) 
                                                              | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
                                                                 >> 1U)) 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                               >> 1U)))))))))) 
                >> 0x0000001fU) | ((IData)(((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ex_fw_data_to_reg)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               (((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                                                                  << 0x0000001fU) 
                                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
                                                                    >> 1U)) 
                                                                & (- (IData)(
                                                                             (1U 
                                                                              == 
                                                                              (3U 
                                                                               & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                                >> 1U))))))))) 
                                            >> 0x00000020U)) 
                                   << 1U));
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
            = ((((0x00000fe0U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
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
                                                      (((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
                                                         << 0x0000001fU) 
                                                        | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
                                                           >> 1U)) 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                                         >> 1U))))))))) 
                                   >> 0x00000020U)) 
                          >> 0x0000001fU));
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
    if ((((IData)(vlSelfRef.Core_tb__DOT__reset) | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__ifid_stall)) 
         | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_int_redir_valid))) {
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
            = (4U | (1U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U]));
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] = 0x40000000U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] = 0x00007f23U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
            = (0xfffffffeU & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U]);
    } else {
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
            = vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[0U];
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] 
            = vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[1U];
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] 
            = vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[2U];
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
            = vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[3U];
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
            = vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[4U];
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
            = vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[5U];
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
            = vlSelfRef.Core_tb__DOT__dut__DOT__idex_ctrl_signals[6U];
    }
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

void VCore_tb___024root___eval_nba(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_nba\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VCore_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VCore_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void VCore_tb___024root___timing_ready(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___timing_ready\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he2f289c5__0.ready("@(posedge Core_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he2f29695__0.ready("@(negedge Core_tb.clk)");
    }
}

void VCore_tb___024root___timing_resume(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___timing_resume\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_he2f289c5__0.moveToResumeQueue(
                                                          "@(posedge Core_tb.clk)");
    vlSelfRef.__VtrigSched_he2f29695__0.moveToResumeQueue(
                                                          "@(negedge Core_tb.clk)");
    vlSelfRef.__VtrigSched_he2f289c5__0.resume("@(posedge Core_tb.clk)");
    vlSelfRef.__VtrigSched_he2f29695__0.resume("@(negedge Core_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VCore_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCore_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VCore_tb___024root___eval_phase__act(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_phase__act\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VCore_tb___024root___eval_triggers_vec__act(vlSelf);
    VCore_tb___024root___timing_ready(vlSelf);
    VCore_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCore_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VCore_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VCore_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VCore_tb___024root___timing_resume(vlSelf);
        VCore_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCore_tb___024root___eval_phase__inact(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_phase__inact\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("testbenches\\Core_tb.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VCore_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VCore_tb___024root___eval_phase__nba(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_phase__nba\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VCore_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VCore_tb___024root___eval_nba(vlSelf);
        VCore_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VCore_tb___024root___eval(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VCore_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbenches\\Core_tb.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbenches\\Core_tb.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VCore_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbenches\\Core_tb.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VCore_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VCore_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VCore_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void VCore_tb___024root____VbeforeTrig_he2f289c5__0(VCore_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root____VbeforeTrig_he2f289c5__0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.Core_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.Core_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0 
        = vlSelfRef.Core_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he2f289c5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he2f289c5__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he2f29695__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void VCore_tb___024root____VbeforeTrig_he2f29695__0(VCore_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root____VbeforeTrig_he2f29695__0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.Core_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0)) 
                                   << 1U) | ((IData)(vlSelfRef.Core_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0 
        = vlSelfRef.Core_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he2f289c5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he2f289c5__0.ready(__VeventDescription);
    }
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he2f29695__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VCore_tb___024root___eval_debug_assertions(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_debug_assertions\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
