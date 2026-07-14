// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCore_tb.h for the primary calling header

#include "VCore_tb__pch.h"

VlCoroutine VCore_tb___024root___eval_initial__TOP__Vtiming__0(VCore_tb___024root* vlSelf);
VlCoroutine VCore_tb___024root___eval_initial__TOP__Vtiming__1(VCore_tb___024root* vlSelf);

void VCore_tb___024root___eval_initial(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_initial\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VCore_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VCore_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void VCore_tb___024root____VbeforeTrig_he2f289c5__0(VCore_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VCore_tb___024root___eval_initial__TOP__Vtiming__0(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlUnpacked<CData/*7:0*/, 1024> Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[__Vi0] = 0;
    }
    // Body
    vlSelfRef.Core_tb__DOT__clk = 0U;
    Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[0U] = 1U;
    Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[1U] = 0x40U;
    Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[2U] = 1U;
    Core_tb__DOT__dut__DOT__Core_IF__DOT__IF_Instr_Mem__DOT__instr_memory[3U] = 0x13U;
    vlSelfRef.Core_tb__DOT__reset = 1U;
    Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        VCore_tb___024root____VbeforeTrig_he2f289c5__0(vlSelf, 
                                                       "@(posedge Core_tb.clk)");
        co_await vlSelfRef.__VtrigSched_he2f289c5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge Core_tb.clk)", 
                                                             "testbenches\\Core_tb.sv", 
                                                             37);
        Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (Core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.Core_tb__DOT__reset = 0U;
    Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, Core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        VCore_tb___024root____VbeforeTrig_he2f289c5__0(vlSelf, 
                                                       "@(posedge Core_tb.clk)");
        co_await vlSelfRef.__VtrigSched_he2f289c5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge Core_tb.clk)", 
                                                             "testbenches\\Core_tb.sv", 
                                                             40);
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
    VL_FINISH_MT("testbenches\\Core_tb.sv", 44, "");
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
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.Core_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0))))));
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

extern const VlUnpacked<CData/*0:0*/, 4> VCore_tb__ConstPool__TABLE_h9c6b0f56_0;
extern const VlUnpacked<CData/*0:0*/, 4> VCore_tb__ConstPool__TABLE_h53b81a12_0;
extern const VlUnpacked<CData/*2:0*/, 4> VCore_tb__ConstPool__TABLE_h62c063e9_0;
extern const VlUnpacked<CData/*2:0*/, 4> VCore_tb__ConstPool__TABLE_hdd5b1fa7_0;

void VCore_tb___024root___nba_sequent__TOP__0(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___nba_sequent__TOP__0\n"); );
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
    // Body
    __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v0 = 0U;
    __VdlySet__Core_tb__DOT__dut__DOT__Core_ID__DOT__ID_Register_File__DOT__Register_array__v32 = 0U;
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
                 & (0x00001000U > ((vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
                                    + (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size)) 
                                   - (IData)(1U)))) 
                & (0U != (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size)))) {
        if ((4U == (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size))) {
            __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1 
                = (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
                   >> 0x00000018U);
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1 
                = (0x00000fffU & ((IData)(3U) + vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U]));
            vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1, (IData)(__VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v1));
            __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
                                  >> 0x00000010U));
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2 
                = (0x00000fffU & ((IData)(2U) + vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U]));
            vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2, (IData)(__VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v2));
            __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3 
                = (0x000000ffU & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
                                  >> 8U));
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3 
                = (0x00000fffU & ((IData)(1U) + vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U]));
            vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3, (IData)(__VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v3));
            __VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4 
                = (0x000000ffU & vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U]);
            __VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4 
                = (0x00000fffU & vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U]);
            vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4, (IData)(__VdlyDim0__Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem__v4));
        }
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
    vlSelfRef.__VdlyCommitQueueCore_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem.commit(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory__DOT__mem);
    if (vlSelfRef.Core_tb__DOT__reset) {
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] = 0x0000000cU;
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] = 0x00000012U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] = 2U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] = 0xa0000000U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] = 0x00003f91U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] = 0U;
    } else {
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U])) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data)))) 
                << 1U) | (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_data_valid));
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U])) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data)))) 
                >> 0x0000001fU) | ((IData)(((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data))) 
                                            >> 0x00000020U)) 
                                   << 1U));
        vlSelfRef.Core_tb__DOT__dut__DOT__wb_ctrl_signals[2U] 
            = ((((0x000000f8U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                 >> 4U)) | (7U & (vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
                                                  >> 3U))) 
                << 1U) | ((IData)(((((QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_memory_data))) 
                                   >> 0x00000020U)) 
                          >> 0x0000001fU));
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[0U] 
            = (IData)((((QData)((IData)(((3U == (7U 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                                    >> 2U)))
                                          ? (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_result)
                                          : (((1U == 
                                               (7U 
                                                & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                   >> 0x00000016U))) 
                                              | (2U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                     >> 0x00000016U))))
                                              ? ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                    >> 2U))
                                              : vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_result)))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U])))))))));
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[1U] 
            = (IData)(((((QData)((IData)(((3U == (7U 
                                                  & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] 
                                                     >> 2U)))
                                           ? (IData)(vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_comp_result)
                                           : (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                    >> 0x00000016U))) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                                      >> 0x00000016U))))
                                               ? ((vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] 
                                                   << 0x0000001eU) 
                                                  | (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] 
                                                     >> 2U))
                                               : vlSelfRef.Core_tb__DOT__dut__DOT__Core_EX__DOT__ex_alu_result)))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          == 
                                                                          (3U 
                                                                           & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U])))))))) 
                       >> 0x00000020U));
        vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U] 
            = ((0x00000fe0U & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                               << 2U)) | ((0x00000018U 
                                           & (vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] 
                                              >> 0x00000019U)) 
                                          | ((4U & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U]) 
                                             | (3U 
                                                & vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U]))));
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[0U] 
            = vlSelfRef.Core_tb__DOT__dut__DOT__id_ctrl_signals;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[1U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[2U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[3U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[4U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[5U] = 0U;
        vlSelfRef.Core_tb__DOT__dut__DOT__ex_ctrl_signals[6U] = 0U;
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
    __Vtableidx1 = (3U & vlSelfRef.Core_tb__DOT__dut__DOT__mem_ctrl_signals[2U]);
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_en 
        = VCore_tb__ConstPool__TABLE_h9c6b0f56_0[__Vtableidx1];
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_rw 
        = VCore_tb__ConstPool__TABLE_h53b81a12_0[__Vtableidx1];
    vlSelfRef.Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_store_size 
        = VCore_tb__ConstPool__TABLE_h62c063e9_0[__Vtableidx1];
    Core_tb__DOT__dut__DOT__Core_MEM__DOT__mem_int_load_size 
        = VCore_tb__ConstPool__TABLE_hdd5b1fa7_0[__Vtableidx1];
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

void VCore_tb___024root___eval_nba(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___eval_nba\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VCore_tb___024root___nba_sequent__TOP__0(vlSelf);
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
}

void VCore_tb___024root___timing_resume(VCore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCore_tb___024root___timing_resume\n"); );
    VCore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_he2f289c5__0.moveToResumeQueue(
                                                          "@(posedge Core_tb.clk)");
    vlSelfRef.__VtrigSched_he2f289c5__0.resume("@(posedge Core_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
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
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.Core_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__Core_tb__DOT__clk__0 
        = vlSelfRef.Core_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he2f289c5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he2f289c5__0.ready(__VeventDescription);
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
