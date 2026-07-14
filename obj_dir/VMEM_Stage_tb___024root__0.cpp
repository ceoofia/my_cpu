// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMEM_Stage_tb.h for the primary calling header

#include "VMEM_Stage_tb__pch.h"

VlCoroutine VMEM_Stage_tb___024root___eval_initial__TOP__Vtiming__0(VMEM_Stage_tb___024root* vlSelf);
VlCoroutine VMEM_Stage_tb___024root___eval_initial__TOP__Vtiming__1(VMEM_Stage_tb___024root* vlSelf);

void VMEM_Stage_tb___024root___eval_initial(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_initial\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMEM_Stage_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VMEM_Stage_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void VMEM_Stage_tb___024root____VbeforeTrig_h6d275678__0(VMEM_Stage_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VMEM_Stage_tb___024root___eval_initial__TOP__Vtiming__0(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_MEM_Stage_tb__DOT__check_mem_result__1__testnum;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__1__testnum = 0;
    IData/*31:0*/ __Vtask_MEM_Stage_tb__DOT__check_mem_result__1__mem_expected;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__1__mem_expected = 0;
    IData/*31:0*/ __Vtask_MEM_Stage_tb__DOT__check_mem_result__3__testnum;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__3__testnum = 0;
    IData/*31:0*/ __Vtask_MEM_Stage_tb__DOT__check_mem_result__3__mem_expected;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__3__mem_expected = 0;
    IData/*31:0*/ __Vtask_MEM_Stage_tb__DOT__check_mem_result__5__testnum;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__5__testnum = 0;
    IData/*31:0*/ __Vtask_MEM_Stage_tb__DOT__check_mem_result__5__mem_expected;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__5__mem_expected = 0;
    IData/*31:0*/ __Vtask_MEM_Stage_tb__DOT__check_mem_result__7__testnum;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__7__testnum = 0;
    IData/*31:0*/ __Vtask_MEM_Stage_tb__DOT__check_mem_result__7__mem_expected;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__7__mem_expected = 0;
    // Body
    vlSelfRef.MEM_Stage_tb__DOT__clk = 0U;
    VMEM_Stage_tb___024root____VbeforeTrig_h6d275678__0(vlSelf, 
                                                        "@(posedge MEM_Stage_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h6d275678__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MEM_Stage_tb.clk)", 
                                                         "testbenches\\MEM_Stage_tb.sv", 
                                                         54);
    vlSelfRef.MEM_Stage_tb__DOT__reset = 1U;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] = 5U;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
        = (2U | (0x00000ff8U & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]));
    VMEM_Stage_tb___024root____VbeforeTrig_h6d275678__0(vlSelf, 
                                                        "@(posedge MEM_Stage_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h6d275678__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MEM_Stage_tb.clk)", 
                                                         "testbenches\\MEM_Stage_tb.sv", 
                                                         57);
    vlSelfRef.MEM_Stage_tb__DOT__reset = 0U;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[0U] = 0x78U;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[1U] = 0x56U;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[2U] = 0x34U;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[3U] = 0x12U;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[4U] = 0xddU;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[5U] = 0xccU;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[6U] = 0xbbU;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[7U] = 0xaaU;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[8U] = 0x4dU;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[9U] = 0x3cU;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[10U] = 0x2bU;
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem[11U] = 0x1aU;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
        = (0x00000ffbU & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]);
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__1__mem_expected = 0U;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__1__testnum = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\MEM_Stage_tb.sv", 
                                         33);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((__Vtask_MEM_Stage_tb__DOT__check_mem_result__1__mem_expected 
                          != ((vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[1U] 
                               << 0x0000001fU) | (vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[0U] 
                                                  >> 1U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MEM_Stage_tb.sv:37: Assertion failed in %m: Mem Result does not match. Expected: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"MEM_Stage_tb.check_mem_result", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,__Vtask_MEM_Stage_tb__DOT__check_mem_result__1__mem_expected
                         , '#',32,((vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[1U] 
                                    << 0x0000001fU) 
                                   | (vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[0U] 
                                      >> 1U)));
            VL_STOP_MT("testbenches\\MEM_Stage_tb.sv", 37, "", false);
        }
    }
    VL_WRITEF_NX("Test %0d passed.\n",1, '~',32,__Vtask_MEM_Stage_tb__DOT__check_mem_result__1__testnum);
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] = 5U;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
        = (2U | (0x00000ff8U & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]));
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] = 0U;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
        = (4U | (0x00000ff8U & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]));
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__3__mem_expected = 0x12345678U;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__3__testnum = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\MEM_Stage_tb.sv", 
                                         33);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((__Vtask_MEM_Stage_tb__DOT__check_mem_result__3__mem_expected 
                          != ((vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[1U] 
                               << 0x0000001fU) | (vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[0U] 
                                                  >> 1U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MEM_Stage_tb.sv:37: Assertion failed in %m: Mem Result does not match. Expected: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"MEM_Stage_tb.check_mem_result", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,__Vtask_MEM_Stage_tb__DOT__check_mem_result__3__mem_expected
                         , '#',32,((vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[1U] 
                                    << 0x0000001fU) 
                                   | (vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[0U] 
                                      >> 1U)));
            VL_STOP_MT("testbenches\\MEM_Stage_tb.sv", 37, "", false);
        }
    }
    VL_WRITEF_NX("Test %0d passed.\n",1, '~',32,__Vtask_MEM_Stage_tb__DOT__check_mem_result__3__testnum);
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] = 5U;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
        = (2U | (0x00000ff8U & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]));
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] = 4U;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
        = (4U | (0x00000ff8U & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]));
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__5__mem_expected = 0xaabbccddU;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__5__testnum = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\MEM_Stage_tb.sv", 
                                         33);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((__Vtask_MEM_Stage_tb__DOT__check_mem_result__5__mem_expected 
                          != ((vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[1U] 
                               << 0x0000001fU) | (vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[0U] 
                                                  >> 1U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MEM_Stage_tb.sv:37: Assertion failed in %m: Mem Result does not match. Expected: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"MEM_Stage_tb.check_mem_result", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,__Vtask_MEM_Stage_tb__DOT__check_mem_result__5__mem_expected
                         , '#',32,((vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[1U] 
                                    << 0x0000001fU) 
                                   | (vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[0U] 
                                      >> 1U)));
            VL_STOP_MT("testbenches\\MEM_Stage_tb.sv", 37, "", false);
        }
    }
    VL_WRITEF_NX("Test %0d passed.\n",1, '~',32,__Vtask_MEM_Stage_tb__DOT__check_mem_result__5__testnum);
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] = 5U;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
        = (2U | (0x00000ff8U & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]));
    VMEM_Stage_tb___024root____VbeforeTrig_h6d275678__0(vlSelf, 
                                                        "@(posedge MEM_Stage_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h6d275678__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MEM_Stage_tb.clk)", 
                                                         "testbenches\\MEM_Stage_tb.sv", 
                                                         97);
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[0U] = 0x11ff22eeU;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] = 0x0000000cU;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
        = (5U | (0x00000ff8U & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]));
    VMEM_Stage_tb___024root____VbeforeTrig_h6d275678__0(vlSelf, 
                                                        "@(posedge MEM_Stage_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h6d275678__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge MEM_Stage_tb.clk)", 
                                                         "testbenches\\MEM_Stage_tb.sv", 
                                                         103);
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] = 0x0000000cU;
    vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
        = (0x00000ffcU & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]);
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__7__mem_expected = 0x11ff22eeU;
    __Vtask_MEM_Stage_tb__DOT__check_mem_result__7__testnum = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\MEM_Stage_tb.sv", 
                                         33);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((__Vtask_MEM_Stage_tb__DOT__check_mem_result__7__mem_expected 
                          != ((vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[1U] 
                               << 0x0000001fU) | (vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[0U] 
                                                  >> 1U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MEM_Stage_tb.sv:37: Assertion failed in %m: Mem Result does not match. Expected: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"MEM_Stage_tb.check_mem_result", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,__Vtask_MEM_Stage_tb__DOT__check_mem_result__7__mem_expected
                         , '#',32,((vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[1U] 
                                    << 0x0000001fU) 
                                   | (vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[0U] 
                                      >> 1U)));
            VL_STOP_MT("testbenches\\MEM_Stage_tb.sv", 37, "", false);
        }
    }
    VL_WRITEF_NX("Test %0d passed.\n",1, '~',32,__Vtask_MEM_Stage_tb__DOT__check_mem_result__7__testnum);
    VL_FINISH_MT("testbenches\\MEM_Stage_tb.sv", 110, "");
    co_return;
}

VlCoroutine VMEM_Stage_tb___024root___eval_initial__TOP__Vtiming__1(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "testbenches\\MEM_Stage_tb.sv", 
                                             27);
        vlSelfRef.MEM_Stage_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.MEM_Stage_tb__DOT__clk)));
    }
    co_return;
}

void VMEM_Stage_tb___024root___eval_triggers_vec__act(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_triggers_vec__act\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.MEM_Stage_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MEM_Stage_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__MEM_Stage_tb__DOT__clk__0 
        = vlSelfRef.MEM_Stage_tb__DOT__clk;
}

bool VMEM_Stage_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 4> VMEM_Stage_tb__ConstPool__TABLE_h9c6b0f56_0;
extern const VlUnpacked<CData/*0:0*/, 4> VMEM_Stage_tb__ConstPool__TABLE_h53b81a12_0;
extern const VlUnpacked<CData/*2:0*/, 4> VMEM_Stage_tb__ConstPool__TABLE_h62c063e9_0;
extern const VlUnpacked<CData/*2:0*/, 4> VMEM_Stage_tb__ConstPool__TABLE_hdd5b1fa7_0;

void VMEM_Stage_tb___024root___act_comb__TOP__0(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___act_comb__TOP__0\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size;
    MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size = 0;
    IData/*31:0*/ MEM_Stage_tb__DOT__dut__DOT__mem_int_memory_data;
    MEM_Stage_tb__DOT__dut__DOT__mem_int_memory_data = 0;
    CData/*0:0*/ MEM_Stage_tb__DOT__dut__DOT__mem_int_data_valid;
    MEM_Stage_tb__DOT__dut__DOT__mem_int_data_valid = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (3U & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U]);
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_en 
        = VMEM_Stage_tb__ConstPool__TABLE_h9c6b0f56_0
        [__Vtableidx1];
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_rw 
        = VMEM_Stage_tb__ConstPool__TABLE_h53b81a12_0
        [__Vtableidx1];
    vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_store_size 
        = VMEM_Stage_tb__ConstPool__TABLE_h62c063e9_0
        [__Vtableidx1];
    MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size 
        = VMEM_Stage_tb__ConstPool__TABLE_hdd5b1fa7_0
        [__Vtableidx1];
    MEM_Stage_tb__DOT__dut__DOT__mem_int_data_valid = 0U;
    if (((((IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_en) 
           & (~ (IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_rw))) 
          & (0x00001000U > ((vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] 
                             + (IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size)) 
                            - (IData)(1U)))) & (0U 
                                                != (IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size)))) {
        if ((4U & (IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size))) {
            if ((1U & (~ ((IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size)))) {
                    MEM_Stage_tb__DOT__dut__DOT__mem_int_data_valid = 1U;
                }
            }
            MEM_Stage_tb__DOT__dut__DOT__mem_int_memory_data 
                = ((2U & (IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size))
                    ? 0U : ((1U & (IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_load_size))
                             ? 0U : (((((IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem
                                                [(0x00000fffU 
                                                  & ((IData)(3U) 
                                                     + vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]))]) 
                                        << 8U) | vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem
                                       [(0x00000fffU 
                                         & ((IData)(2U) 
                                            + vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]))]) 
                                      << 0x00000010U) 
                                     | (((IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem
                                                 [(0x00000fffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]))]) 
                                         << 8U) | vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem
                                        [(0x00000fffU 
                                          & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U])]))));
        } else {
            MEM_Stage_tb__DOT__dut__DOT__mem_int_memory_data = 0U;
        }
    } else {
        MEM_Stage_tb__DOT__dut__DOT__mem_int_memory_data = 0U;
    }
    vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[0U] 
        = (((IData)((((QData)((IData)(vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U])) 
                      << 0x00000020U) | (QData)((IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_memory_data)))) 
            << 1U) | (IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_data_valid));
    vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[1U] 
        = (((IData)((((QData)((IData)(vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U])) 
                      << 0x00000020U) | (QData)((IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_memory_data)))) 
            >> 0x0000001fU) | ((IData)(((((QData)((IData)(vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_memory_data))) 
                                        >> 0x00000020U)) 
                               << 1U));
    vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[2U] 
        = ((0x000001feU & vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[2U]) 
           | (0x000001ffU & ((IData)(((((QData)((IData)(vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(MEM_Stage_tb__DOT__dut__DOT__mem_int_memory_data))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001fU)));
    vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[2U] 
        = ((1U & vlSelfRef.MEM_Stage_tb__DOT__mem_signals_tb[2U]) 
           | (0x000001ffU & (((0x000000f8U & (vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
                                              >> 4U)) 
                              | (7U & (vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[2U] 
                                       >> 3U))) << 1U)));
}

void VMEM_Stage_tb___024root___eval_act(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_act\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        VMEM_Stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void VMEM_Stage_tb___024root___nba_sequent__TOP__0(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___nba_sequent__TOP__0\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*11:0*/ __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v0;
    __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1;
    __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1;
    __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2;
    __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2;
    __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3;
    __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3;
    __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4;
    __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4 = 0;
    SData/*11:0*/ __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4;
    __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4 = 0;
    // Body
    if (vlSelfRef.MEM_Stage_tb__DOT__reset) {
        vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00001000U, vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i)) {
            __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v0 
                = (0x00000fffU & vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i);
            vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(0U, (IData)(__VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v0));
            vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i 
                = ((IData)(1U) + vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i);
        }
    } else if (((((IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_en) 
                  & (IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_rw)) 
                 & (0x00001000U > ((vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] 
                                    + (IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_store_size)) 
                                   - (IData)(1U)))) 
                & (0U != (IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_store_size)))) {
        if ((4U == (IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_store_size))) {
            __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1 
                = (vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[0U] 
                   >> 0x00000018U);
            __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1 
                = (0x00000fffU & ((IData)(3U) + vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]));
            vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1, (IData)(__VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1));
            __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[0U] 
                                  >> 0x00000010U));
            __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2 
                = (0x00000fffU & ((IData)(2U) + vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]));
            vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2, (IData)(__VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2));
            __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3 
                = (0x000000ffU & (vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[0U] 
                                  >> 8U));
            __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3 
                = (0x00000fffU & ((IData)(1U) + vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]));
            vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3, (IData)(__VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3));
            __VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4 
                = (0x000000ffU & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[0U]);
            __VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4 
                = (0x00000fffU & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]);
            vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(__VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4, (IData)(__VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4));
        }
    }
    vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.commit(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem);
}

void VMEM_Stage_tb___024root___eval_nba(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_nba\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*11:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1 = 0;
    SData/*11:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2;
    __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2 = 0;
    SData/*11:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3;
    __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3 = 0;
    SData/*11:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4;
    __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4 = 0;
    SData/*11:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.MEM_Stage_tb__DOT__reset) {
            vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00001000U, vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i)) {
                __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v0 
                    = (0x00000fffU & vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i);
                vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(0U, __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v0);
                vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i 
                    = ((IData)(1U) + vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__i);
            }
        } else if (((((IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_en) 
                      & (IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_rw)) 
                     & (0x00001000U > ((vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U] 
                                        + (IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_store_size)) 
                                       - (IData)(1U)))) 
                    & (0U != (IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_store_size)))) {
            if ((4U == (IData)(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_store_size))) {
                __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1 
                    = (vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[0U] 
                       >> 0x00000018U);
                __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1 
                    = (0x00000fffU & ((IData)(3U) + vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]));
                vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(__Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1, __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v1);
                __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2 
                    = (0x000000ffU & (vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[0U] 
                                      >> 0x00000010U));
                __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2 
                    = (0x00000fffU & ((IData)(2U) + vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]));
                vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(__Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2, __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v2);
                __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3 
                    = (0x000000ffU & (vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[0U] 
                                      >> 8U));
                __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3 
                    = (0x00000fffU & ((IData)(1U) + vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]));
                vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(__Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3, __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v3);
                __Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4 
                    = (0x000000ffU & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[0U]);
                __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4 
                    = (0x00000fffU & vlSelfRef.MEM_Stage_tb__DOT__exmem_signals_tb[1U]);
                vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.enqueue(__Vinline__nba_sequent__TOP__0___VdlyVal__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4, __Vinline__nba_sequent__TOP__0___VdlyDim0__MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem__v4);
            }
        }
        vlSelfRef.__VdlyCommitQueueMEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem.commit(vlSelfRef.MEM_Stage_tb__DOT__dut__DOT__mem_int_memory__DOT__mem);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VMEM_Stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void VMEM_Stage_tb___024root___timing_ready(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___timing_ready\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h6d275678__0.ready("@(posedge MEM_Stage_tb.clk)");
    }
}

void VMEM_Stage_tb___024root___timing_resume(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___timing_resume\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h6d275678__0.moveToResumeQueue(
                                                          "@(posedge MEM_Stage_tb.clk)");
    vlSelfRef.__VtrigSched_h6d275678__0.resume("@(posedge MEM_Stage_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VMEM_Stage_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VMEM_Stage_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VMEM_Stage_tb___024root___eval_phase__act(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_phase__act\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VMEM_Stage_tb___024root___eval_triggers_vec__act(vlSelf);
    VMEM_Stage_tb___024root___timing_ready(vlSelf);
    VMEM_Stage_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMEM_Stage_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VMEM_Stage_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VMEM_Stage_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VMEM_Stage_tb___024root___timing_resume(vlSelf);
        VMEM_Stage_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMEM_Stage_tb___024root___eval_phase__inact(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_phase__inact\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("testbenches\\MEM_Stage_tb.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VMEM_Stage_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VMEM_Stage_tb___024root___eval_phase__nba(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_phase__nba\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VMEM_Stage_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VMEM_Stage_tb___024root___eval_nba(vlSelf);
        VMEM_Stage_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VMEM_Stage_tb___024root___eval(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VMEM_Stage_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbenches\\MEM_Stage_tb.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbenches\\MEM_Stage_tb.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VMEM_Stage_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbenches\\MEM_Stage_tb.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VMEM_Stage_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VMEM_Stage_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VMEM_Stage_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void VMEM_Stage_tb___024root____VbeforeTrig_h6d275678__0(VMEM_Stage_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root____VbeforeTrig_h6d275678__0\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.MEM_Stage_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__MEM_Stage_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__MEM_Stage_tb__DOT__clk__0 
        = vlSelfRef.MEM_Stage_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h6d275678__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6d275678__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6d275678__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h6d275678__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VMEM_Stage_tb___024root___eval_debug_assertions(VMEM_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMEM_Stage_tb___024root___eval_debug_assertions\n"); );
    VMEM_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
