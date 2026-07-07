// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_tb.h for the primary calling header

#include "VALU_tb__pch.h"

VlCoroutine VALU_tb___024root___eval_initial__TOP__Vtiming__0(VALU_tb___024root* vlSelf);

void VALU_tb___024root___eval_initial(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_initial\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VALU_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine VALU_tb___024root___eval_initial__TOP__Vtiming__0(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__0__testnum;
    __Vtask_ALU_tb__DOT__check_op__0__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__0__expected;
    __Vtask_ALU_tb__DOT__check_op__0__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__1__testnum;
    __Vtask_ALU_tb__DOT__check_op__1__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__1__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__1__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__1__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__1__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__1__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__1__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__1__expected;
    __Vtask_ALU_tb__DOT__check_op__1__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__2__testnum;
    __Vtask_ALU_tb__DOT__check_op__2__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__2__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__2__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__2__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__2__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__2__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__2__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__2__expected;
    __Vtask_ALU_tb__DOT__check_op__2__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__3__testnum;
    __Vtask_ALU_tb__DOT__check_op__3__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__3__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__3__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__3__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__3__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__3__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__3__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__3__expected;
    __Vtask_ALU_tb__DOT__check_op__3__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__4__testnum;
    __Vtask_ALU_tb__DOT__check_op__4__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__4__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__4__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__4__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__4__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__4__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__4__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__4__expected;
    __Vtask_ALU_tb__DOT__check_op__4__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__5__testnum;
    __Vtask_ALU_tb__DOT__check_op__5__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__5__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__5__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__5__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__5__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__5__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__5__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__5__expected;
    __Vtask_ALU_tb__DOT__check_op__5__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__6__testnum;
    __Vtask_ALU_tb__DOT__check_op__6__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__6__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__6__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__6__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__6__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__6__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__6__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__6__expected;
    __Vtask_ALU_tb__DOT__check_op__6__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__7__testnum;
    __Vtask_ALU_tb__DOT__check_op__7__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__7__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__7__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__7__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__7__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__7__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__7__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__7__expected;
    __Vtask_ALU_tb__DOT__check_op__7__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__8__testnum;
    __Vtask_ALU_tb__DOT__check_op__8__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__8__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__8__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__8__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__8__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__8__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__8__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__8__expected;
    __Vtask_ALU_tb__DOT__check_op__8__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__9__testnum;
    __Vtask_ALU_tb__DOT__check_op__9__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__9__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__9__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__9__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__9__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__9__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__9__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__9__expected;
    __Vtask_ALU_tb__DOT__check_op__9__expected = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__10__testnum;
    __Vtask_ALU_tb__DOT__check_op__10__testnum = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__10__op_a_tb;
    __Vtask_ALU_tb__DOT__check_op__10__op_a_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__10__op_b_tb;
    __Vtask_ALU_tb__DOT__check_op__10__op_b_tb = 0;
    CData/*2:0*/ __Vtask_ALU_tb__DOT__check_op__10__alu_op_tb;
    __Vtask_ALU_tb__DOT__check_op__10__alu_op_tb = 0;
    IData/*31:0*/ __Vtask_ALU_tb__DOT__check_op__10__expected;
    __Vtask_ALU_tb__DOT__check_op__10__expected = 0;
    // Body
    __Vtask_ALU_tb__DOT__check_op__0__expected = 0U;
    __Vtask_ALU_tb__DOT__check_op__0__testnum = 1U;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = 0x12345678U;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = 0x87654321U;
    vlSelfRef.ALU_tb__DOT__alu_op_in = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__1__expected = 0U;
    __Vtask_ALU_tb__DOT__check_op__1__alu_op_tb = 6U;
    __Vtask_ALU_tb__DOT__check_op__1__op_b_tb = 0x87654321U;
    __Vtask_ALU_tb__DOT__check_op__1__op_a_tb = 0x12345678U;
    __Vtask_ALU_tb__DOT__check_op__1__testnum = 2U;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__1__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__1__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__1__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__0__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__0__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__0__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__0__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__2__expected = 0x0000000cU;
    __Vtask_ALU_tb__DOT__check_op__2__alu_op_tb = 0U;
    __Vtask_ALU_tb__DOT__check_op__2__op_b_tb = 7U;
    __Vtask_ALU_tb__DOT__check_op__2__op_a_tb = 5U;
    __Vtask_ALU_tb__DOT__check_op__2__testnum = 3U;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__2__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__2__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__2__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__1__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__1__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__1__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__1__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__3__expected = 0U;
    __Vtask_ALU_tb__DOT__check_op__3__alu_op_tb = 0U;
    __Vtask_ALU_tb__DOT__check_op__3__op_b_tb = 1U;
    __Vtask_ALU_tb__DOT__check_op__3__op_a_tb = 0xffffffffU;
    __Vtask_ALU_tb__DOT__check_op__3__testnum = 4U;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__3__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__3__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__3__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__2__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__2__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__2__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__2__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__4__expected = 0U;
    __Vtask_ALU_tb__DOT__check_op__4__alu_op_tb = 0U;
    __Vtask_ALU_tb__DOT__check_op__4__op_b_tb = 0x80000000U;
    __Vtask_ALU_tb__DOT__check_op__4__op_a_tb = 0x80000000U;
    __Vtask_ALU_tb__DOT__check_op__4__testnum = 5U;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__4__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__4__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__4__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__3__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__3__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__3__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__3__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__5__expected = 7U;
    __Vtask_ALU_tb__DOT__check_op__5__alu_op_tb = 1U;
    __Vtask_ALU_tb__DOT__check_op__5__op_b_tb = 3U;
    __Vtask_ALU_tb__DOT__check_op__5__op_a_tb = 0x0000000aU;
    __Vtask_ALU_tb__DOT__check_op__5__testnum = 6U;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__5__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__5__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__5__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__4__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__4__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__4__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__4__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__6__expected = 0xfffffff9U;
    __Vtask_ALU_tb__DOT__check_op__6__alu_op_tb = 1U;
    __Vtask_ALU_tb__DOT__check_op__6__op_b_tb = 0x0000000aU;
    __Vtask_ALU_tb__DOT__check_op__6__op_a_tb = 3U;
    __Vtask_ALU_tb__DOT__check_op__6__testnum = 7U;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__6__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__6__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__6__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__5__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__5__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__5__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__5__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__7__expected = 0x00ff0000U;
    __Vtask_ALU_tb__DOT__check_op__7__alu_op_tb = 2U;
    __Vtask_ALU_tb__DOT__check_op__7__op_b_tb = 0x00ff00ffU;
    __Vtask_ALU_tb__DOT__check_op__7__op_a_tb = 0xffff0000U;
    __Vtask_ALU_tb__DOT__check_op__7__testnum = 8U;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__7__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__7__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__7__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__6__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__6__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__6__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__6__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__8__expected = 0xf000000fU;
    __Vtask_ALU_tb__DOT__check_op__8__alu_op_tb = 3U;
    __Vtask_ALU_tb__DOT__check_op__8__op_b_tb = 0x0000000fU;
    __Vtask_ALU_tb__DOT__check_op__8__op_a_tb = 0xf0000000U;
    __Vtask_ALU_tb__DOT__check_op__8__testnum = 9U;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__8__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__8__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__8__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__7__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__7__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__7__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__7__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__9__expected = 0xffffffffU;
    __Vtask_ALU_tb__DOT__check_op__9__alu_op_tb = 4U;
    __Vtask_ALU_tb__DOT__check_op__9__op_b_tb = 0x55555555U;
    __Vtask_ALU_tb__DOT__check_op__9__op_a_tb = 0xaaaaaaaaU;
    __Vtask_ALU_tb__DOT__check_op__9__testnum = 0x0000000aU;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__9__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__9__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__9__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__8__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__8__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__8__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__8__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    __Vtask_ALU_tb__DOT__check_op__10__expected = 0U;
    __Vtask_ALU_tb__DOT__check_op__10__alu_op_tb = 4U;
    __Vtask_ALU_tb__DOT__check_op__10__op_b_tb = 0x12345678U;
    __Vtask_ALU_tb__DOT__check_op__10__op_a_tb = 0x12345678U;
    __Vtask_ALU_tb__DOT__check_op__10__testnum = 0x0000000bU;
    vlSelfRef.ALU_tb__DOT__alu_operand_a_in = __Vtask_ALU_tb__DOT__check_op__10__op_a_tb;
    vlSelfRef.ALU_tb__DOT__alu_operand_b_in = __Vtask_ALU_tb__DOT__check_op__10__op_b_tb;
    vlSelfRef.ALU_tb__DOT__alu_op_in = __Vtask_ALU_tb__DOT__check_op__10__alu_op_tb;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__9__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__9__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__9__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__9__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ALU_tb.sv", 
                                         30);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((vlSelfRef.ALU_tb__DOT__ALU_result_out 
                        == __Vtask_ALU_tb__DOT__check_op__10__expected)))) {
            VL_WRITEF_NX("Test %0d passed\n",1, '~',32,__Vtask_ALU_tb__DOT__check_op__10__testnum);
        } else {
            VL_WRITEF_NX("[%0t] %%Fatal: ALU_tb.sv:35: Assertion failed in %m: Test %0d failed. Expected: %0h, DUT: %0h\n",6, 'M',vlSymsp->name(),"ALU_tb.check_op", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_ALU_tb__DOT__check_op__10__testnum
                         , '#',32,__Vtask_ALU_tb__DOT__check_op__10__expected
                         , '#',32,vlSelfRef.ALU_tb__DOT__ALU_result_out);
            VL_STOP_MT("testbenches\\ALU_tb.sv", 35, "", false);
        }
    }
    VL_FINISH_MT("testbenches\\ALU_tb.sv", 62, "");
    co_return;
}

void VALU_tb___024root___eval_triggers_vec__act(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_triggers_vec__act\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool VALU_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___trigger_anySet__act\n"); );
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

void VALU_tb___024root___act_sequent__TOP__0(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___act_sequent__TOP__0\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ALU_tb__DOT__ALU_result_out = ((4U & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                              ? ((- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))))) 
                                                 & ((vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                     ^ vlSelfRef.ALU_tb__DOT__alu_operand_b_in) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelfRef.ALU_tb__DOT__alu_op_in) 
                                                                      >> 1U)))))))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                   ? 
                                                  (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                   | vlSelfRef.ALU_tb__DOT__alu_operand_b_in)
                                                   : 
                                                  (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                   & vlSelfRef.ALU_tb__DOT__alu_operand_b_in))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                   ? 
                                                  (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                   - vlSelfRef.ALU_tb__DOT__alu_operand_b_in)
                                                   : 
                                                  (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                   + vlSelfRef.ALU_tb__DOT__alu_operand_b_in))));
}

void VALU_tb___024root___eval_act(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_act\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.ALU_tb__DOT__ALU_result_out = ((4U 
                                                  & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                  ? 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))))) 
                                                  & ((vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                      ^ vlSelfRef.ALU_tb__DOT__alu_operand_b_in) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.ALU_tb__DOT__alu_op_in) 
                                                                       >> 1U)))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                    ? 
                                                   (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                    | vlSelfRef.ALU_tb__DOT__alu_operand_b_in)
                                                    : 
                                                   (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                    & vlSelfRef.ALU_tb__DOT__alu_operand_b_in))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                    ? 
                                                   (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                    - vlSelfRef.ALU_tb__DOT__alu_operand_b_in)
                                                    : 
                                                   (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                    + vlSelfRef.ALU_tb__DOT__alu_operand_b_in))));
    }
}

void VALU_tb___024root___eval_nba(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_nba\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.ALU_tb__DOT__ALU_result_out = ((4U 
                                                  & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                  ? 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))))) 
                                                  & ((vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                      ^ vlSelfRef.ALU_tb__DOT__alu_operand_b_in) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.ALU_tb__DOT__alu_op_in) 
                                                                       >> 1U)))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                    ? 
                                                   (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                    | vlSelfRef.ALU_tb__DOT__alu_operand_b_in)
                                                    : 
                                                   (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                    & vlSelfRef.ALU_tb__DOT__alu_operand_b_in))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.ALU_tb__DOT__alu_op_in))
                                                    ? 
                                                   (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                    - vlSelfRef.ALU_tb__DOT__alu_operand_b_in)
                                                    : 
                                                   (vlSelfRef.ALU_tb__DOT__alu_operand_a_in 
                                                    + vlSelfRef.ALU_tb__DOT__alu_operand_b_in))));
    }
}

void VALU_tb___024root___timing_resume(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___timing_resume\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VALU_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VALU_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VALU_tb___024root___eval_phase__act(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_phase__act\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VALU_tb___024root___eval_triggers_vec__act(vlSelf);
    VALU_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VALU_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VALU_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VALU_tb___024root___timing_resume(vlSelf);
        VALU_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VALU_tb___024root___eval_phase__inact(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_phase__inact\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("testbenches\\ALU_tb.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VALU_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VALU_tb___024root___eval_phase__nba(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_phase__nba\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VALU_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VALU_tb___024root___eval_nba(vlSelf);
        VALU_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VALU_tb___024root___eval(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VALU_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbenches\\ALU_tb.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbenches\\ALU_tb.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VALU_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbenches\\ALU_tb.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VALU_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VALU_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VALU_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VALU_tb___024root___eval_debug_assertions(VALU_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_debug_assertions\n"); );
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
