// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEX_Stage_tb.h for the primary calling header

#include "VEX_Stage_tb__pch.h"

VlCoroutine VEX_Stage_tb___024root___eval_initial__TOP__Vtiming__0(VEX_Stage_tb___024root* vlSelf);

void VEX_Stage_tb___024root___eval_initial(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_initial\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VEX_Stage_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine VEX_Stage_tb___024root___eval_initial__TOP__Vtiming__0(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ EX_Stage_tb__DOT__check_result;
    EX_Stage_tb__DOT__check_result = 0;
    CData/*0:0*/ EX_Stage_tb__DOT__check_dest;
    EX_Stage_tb__DOT__check_dest = 0;
    CData/*0:0*/ EX_Stage_tb__DOT__check_dest_valid;
    EX_Stage_tb__DOT__check_dest_valid = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__1__set_result;
    __Vtask_EX_Stage_tb__DOT__set_check__1__set_result = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__1__set_dest;
    __Vtask_EX_Stage_tb__DOT__set_check__1__set_dest = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__1__set_valid;
    __Vtask_EX_Stage_tb__DOT__set_check__1__set_valid = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__2__testnum;
    __Vtask_EX_Stage_tb__DOT__check_output__2__testnum = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__2__exp_result_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__2__exp_result_tb = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_dest_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_dest_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_valid_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_valid_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__4__set_result;
    __Vtask_EX_Stage_tb__DOT__set_check__4__set_result = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__4__set_dest;
    __Vtask_EX_Stage_tb__DOT__set_check__4__set_dest = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__4__set_valid;
    __Vtask_EX_Stage_tb__DOT__set_check__4__set_valid = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__5__testnum;
    __Vtask_EX_Stage_tb__DOT__check_output__5__testnum = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__5__exp_result_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__5__exp_result_tb = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_dest_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_dest_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_valid_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_valid_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__7__set_result;
    __Vtask_EX_Stage_tb__DOT__set_check__7__set_result = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__7__set_dest;
    __Vtask_EX_Stage_tb__DOT__set_check__7__set_dest = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__7__set_valid;
    __Vtask_EX_Stage_tb__DOT__set_check__7__set_valid = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__8__testnum;
    __Vtask_EX_Stage_tb__DOT__check_output__8__testnum = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__8__exp_result_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__8__exp_result_tb = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_dest_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_dest_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_valid_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_valid_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__10__set_result;
    __Vtask_EX_Stage_tb__DOT__set_check__10__set_result = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__10__set_dest;
    __Vtask_EX_Stage_tb__DOT__set_check__10__set_dest = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__10__set_valid;
    __Vtask_EX_Stage_tb__DOT__set_check__10__set_valid = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__11__testnum;
    __Vtask_EX_Stage_tb__DOT__check_output__11__testnum = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__11__exp_result_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__11__exp_result_tb = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_dest_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_dest_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_valid_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_valid_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__13__set_result;
    __Vtask_EX_Stage_tb__DOT__set_check__13__set_result = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__13__set_dest;
    __Vtask_EX_Stage_tb__DOT__set_check__13__set_dest = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__13__set_valid;
    __Vtask_EX_Stage_tb__DOT__set_check__13__set_valid = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__14__testnum;
    __Vtask_EX_Stage_tb__DOT__check_output__14__testnum = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__14__exp_result_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__14__exp_result_tb = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_dest_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_dest_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_valid_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_valid_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__16__set_result;
    __Vtask_EX_Stage_tb__DOT__set_check__16__set_result = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__16__set_dest;
    __Vtask_EX_Stage_tb__DOT__set_check__16__set_dest = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__16__set_valid;
    __Vtask_EX_Stage_tb__DOT__set_check__16__set_valid = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__17__testnum;
    __Vtask_EX_Stage_tb__DOT__check_output__17__testnum = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__17__exp_result_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__17__exp_result_tb = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_dest_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_dest_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_valid_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_valid_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__19__set_result;
    __Vtask_EX_Stage_tb__DOT__set_check__19__set_result = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__19__set_dest;
    __Vtask_EX_Stage_tb__DOT__set_check__19__set_dest = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__set_check__19__set_valid;
    __Vtask_EX_Stage_tb__DOT__set_check__19__set_valid = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__20__testnum;
    __Vtask_EX_Stage_tb__DOT__check_output__20__testnum = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__20__exp_result_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__20__exp_result_tb = 0;
    IData/*31:0*/ __Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_dest_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_dest_tb = 0;
    CData/*0:0*/ __Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_valid_tb;
    __Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_valid_tb = 0;
    // Body
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x000007e0U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x60000000U | (0x003fffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
        = (3U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0xfffffffcU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[0U] = 5U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[1U] = 4U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] = 6U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs1_data = 7U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs2_data = 8U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs1_data = 9U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs2_data = 0x0000000aU;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in = 2U;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in = 2U;
    EX_Stage_tb__DOT__check_result = 0U;
    EX_Stage_tb__DOT__check_dest = 0U;
    EX_Stage_tb__DOT__check_dest_valid = 0U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\EX_Stage_tb.sv", 
                                         124);
    __Vtask_EX_Stage_tb__DOT__set_check__1__set_valid = 1U;
    __Vtask_EX_Stage_tb__DOT__set_check__1__set_dest = 0U;
    __Vtask_EX_Stage_tb__DOT__set_check__1__set_result = 1U;
    EX_Stage_tb__DOT__check_result = __Vtask_EX_Stage_tb__DOT__set_check__1__set_result;
    EX_Stage_tb__DOT__check_dest = __Vtask_EX_Stage_tb__DOT__set_check__1__set_dest;
    EX_Stage_tb__DOT__check_dest_valid = __Vtask_EX_Stage_tb__DOT__set_check__1__set_valid;
    __Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_valid_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_dest_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__2__exp_result_tb = 9U;
    __Vtask_EX_Stage_tb__DOT__check_output__2__testnum = 1U;
    VL_WRITEF_NX("-----------------------------------------\nTest %0d\n",1
                 , '~',32,__Vtask_EX_Stage_tb__DOT__check_output__2__testnum);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x000007e0U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x60000000U | (0x003fffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
        = (3U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0xfffffffcU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[0U] = 5U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[1U] = 4U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] = 6U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs1_data = 7U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs2_data = 8U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs1_data = 9U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs2_data = 0x0000000aU;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in = 2U;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in = 2U;
    if (EX_Stage_tb__DOT__check_result) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals) 
                            == __Vtask_EX_Stage_tb__DOT__check_output__2__exp_result_tb)))) {
                VL_WRITEF_NX("Result Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:87: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__2__exp_result_tb
                             , '#',32,(IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals));
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 87, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_result = 0U;
    if (EX_Stage_tb__DOT__check_dest) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest 
                            == __Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_dest_tb)))) {
                VL_WRITEF_NX("Redirect Dest Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:94: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_dest_tb
                             , '#',32,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 94, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest = 0U;
    if (EX_Stage_tb__DOT__check_dest_valid) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid) 
                            == (IData)(__Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_valid_tb))))) {
                VL_WRITEF_NX("Redirect Valid Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:102: Assertion failed in %m: Redirect Valid Doesn't Match. Exp: %0b, DUT: %0b\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_EX_Stage_tb__DOT__check_output__2__exp_red_valid_tb)
                             , '#',1,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 102, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest_valid = 0U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x00000100U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\EX_Stage_tb.sv", 
                                         134);
    __Vtask_EX_Stage_tb__DOT__set_check__4__set_valid = 1U;
    __Vtask_EX_Stage_tb__DOT__set_check__4__set_dest = 0U;
    __Vtask_EX_Stage_tb__DOT__set_check__4__set_result = 1U;
    EX_Stage_tb__DOT__check_result = __Vtask_EX_Stage_tb__DOT__set_check__4__set_result;
    EX_Stage_tb__DOT__check_dest = __Vtask_EX_Stage_tb__DOT__set_check__4__set_dest;
    EX_Stage_tb__DOT__check_dest_valid = __Vtask_EX_Stage_tb__DOT__set_check__4__set_valid;
    __Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_valid_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_dest_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__5__exp_result_tb = 0xffffffffU;
    __Vtask_EX_Stage_tb__DOT__check_output__5__testnum = 2U;
    VL_WRITEF_NX("-----------------------------------------\nTest %0d\n",1
                 , '~',32,__Vtask_EX_Stage_tb__DOT__check_output__5__testnum);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x000007e0U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x60000000U | (0x003fffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
        = (3U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0xfffffffcU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[0U] = 5U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[1U] = 4U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] = 6U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs1_data = 7U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs2_data = 8U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs1_data = 9U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs2_data = 0x0000000aU;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in = 2U;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in = 2U;
    if (EX_Stage_tb__DOT__check_result) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals) 
                            == __Vtask_EX_Stage_tb__DOT__check_output__5__exp_result_tb)))) {
                VL_WRITEF_NX("Result Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:87: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__5__exp_result_tb
                             , '#',32,(IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals));
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 87, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_result = 0U;
    if (EX_Stage_tb__DOT__check_dest) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest 
                            == __Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_dest_tb)))) {
                VL_WRITEF_NX("Redirect Dest Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:94: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_dest_tb
                             , '#',32,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 94, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest = 0U;
    if (EX_Stage_tb__DOT__check_dest_valid) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid) 
                            == (IData)(__Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_valid_tb))))) {
                VL_WRITEF_NX("Redirect Valid Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:102: Assertion failed in %m: Redirect Valid Doesn't Match. Exp: %0b, DUT: %0b\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_EX_Stage_tb__DOT__check_output__5__exp_red_valid_tb)
                             , '#',1,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 102, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest_valid = 0U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x0fffffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (3U | (0x00000ff8U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\EX_Stage_tb.sv", 
                                         144);
    __Vtask_EX_Stage_tb__DOT__set_check__7__set_valid = 1U;
    __Vtask_EX_Stage_tb__DOT__set_check__7__set_dest = 0U;
    __Vtask_EX_Stage_tb__DOT__set_check__7__set_result = 1U;
    EX_Stage_tb__DOT__check_result = __Vtask_EX_Stage_tb__DOT__set_check__7__set_result;
    EX_Stage_tb__DOT__check_dest = __Vtask_EX_Stage_tb__DOT__set_check__7__set_dest;
    EX_Stage_tb__DOT__check_dest_valid = __Vtask_EX_Stage_tb__DOT__set_check__7__set_valid;
    __Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_valid_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_dest_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__8__exp_result_tb = 1U;
    __Vtask_EX_Stage_tb__DOT__check_output__8__testnum = 3U;
    VL_WRITEF_NX("-----------------------------------------\nTest %0d\n",1
                 , '~',32,__Vtask_EX_Stage_tb__DOT__check_output__8__testnum);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x000007e0U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x60000000U | (0x003fffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
        = (3U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0xfffffffcU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[0U] = 5U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[1U] = 4U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] = 6U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs1_data = 7U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs2_data = 8U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs1_data = 9U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs2_data = 0x0000000aU;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in = 2U;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in = 2U;
    if (EX_Stage_tb__DOT__check_result) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals) 
                            == __Vtask_EX_Stage_tb__DOT__check_output__8__exp_result_tb)))) {
                VL_WRITEF_NX("Result Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:87: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__8__exp_result_tb
                             , '#',32,(IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals));
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 87, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_result = 0U;
    if (EX_Stage_tb__DOT__check_dest) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest 
                            == __Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_dest_tb)))) {
                VL_WRITEF_NX("Redirect Dest Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:94: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_dest_tb
                             , '#',32,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 94, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest = 0U;
    if (EX_Stage_tb__DOT__check_dest_valid) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid) 
                            == (IData)(__Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_valid_tb))))) {
                VL_WRITEF_NX("Redirect Valid Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:102: Assertion failed in %m: Redirect Valid Doesn't Match. Exp: %0b, DUT: %0b\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_EX_Stage_tb__DOT__check_output__8__exp_red_valid_tb)
                             , '#',1,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 102, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest_valid = 0U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[0U] = 4U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x0fffffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x00000ff8U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x00000050U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x02000000U | (0xf1ffffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
        = (0x00000028U | (3U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0xfffffffcU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\EX_Stage_tb.sv", 
                                         160);
    __Vtask_EX_Stage_tb__DOT__set_check__10__set_valid = 1U;
    __Vtask_EX_Stage_tb__DOT__set_check__10__set_dest = 1U;
    __Vtask_EX_Stage_tb__DOT__set_check__10__set_result = 0U;
    EX_Stage_tb__DOT__check_result = __Vtask_EX_Stage_tb__DOT__set_check__10__set_result;
    EX_Stage_tb__DOT__check_dest = __Vtask_EX_Stage_tb__DOT__set_check__10__set_dest;
    EX_Stage_tb__DOT__check_dest_valid = __Vtask_EX_Stage_tb__DOT__set_check__10__set_valid;
    __Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_valid_tb = 1U;
    __Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_dest_tb = 0x00000010U;
    __Vtask_EX_Stage_tb__DOT__check_output__11__exp_result_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__11__testnum = 4U;
    VL_WRITEF_NX("-----------------------------------------\nTest %0d\n",1
                 , '~',32,__Vtask_EX_Stage_tb__DOT__check_output__11__testnum);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x000007e0U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x60000000U | (0x003fffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
        = (3U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0xfffffffcU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[0U] = 5U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[1U] = 4U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] = 6U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs1_data = 7U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs2_data = 8U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs1_data = 9U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs2_data = 0x0000000aU;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in = 2U;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in = 2U;
    if (EX_Stage_tb__DOT__check_result) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals) 
                            == __Vtask_EX_Stage_tb__DOT__check_output__11__exp_result_tb)))) {
                VL_WRITEF_NX("Result Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:87: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__11__exp_result_tb
                             , '#',32,(IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals));
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 87, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_result = 0U;
    if (EX_Stage_tb__DOT__check_dest) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest 
                            == __Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_dest_tb)))) {
                VL_WRITEF_NX("Redirect Dest Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:94: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_dest_tb
                             , '#',32,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 94, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest = 0U;
    if (EX_Stage_tb__DOT__check_dest_valid) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid) 
                            == (IData)(__Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_valid_tb))))) {
                VL_WRITEF_NX("Redirect Valid Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:102: Assertion failed in %m: Redirect Valid Doesn't Match. Exp: %0b, DUT: %0b\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_EX_Stage_tb__DOT__check_output__11__exp_red_valid_tb)
                             , '#',1,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 102, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest_valid = 0U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x00000050U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x00400000U | (0xfe3fffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
        = (0x00000030U | (3U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0xfffffffcU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] = 0x00000018U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\EX_Stage_tb.sv", 
                                         173);
    __Vtask_EX_Stage_tb__DOT__set_check__13__set_valid = 1U;
    __Vtask_EX_Stage_tb__DOT__set_check__13__set_dest = 1U;
    __Vtask_EX_Stage_tb__DOT__set_check__13__set_result = 0U;
    EX_Stage_tb__DOT__check_result = __Vtask_EX_Stage_tb__DOT__set_check__13__set_result;
    EX_Stage_tb__DOT__check_dest = __Vtask_EX_Stage_tb__DOT__set_check__13__set_dest;
    EX_Stage_tb__DOT__check_dest_valid = __Vtask_EX_Stage_tb__DOT__set_check__13__set_valid;
    __Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_valid_tb = 1U;
    __Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_dest_tb = 0x00000024U;
    __Vtask_EX_Stage_tb__DOT__check_output__14__exp_result_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__14__testnum = 5U;
    VL_WRITEF_NX("-----------------------------------------\nTest %0d\n",1
                 , '~',32,__Vtask_EX_Stage_tb__DOT__check_output__14__testnum);
    if (EX_Stage_tb__DOT__check_result) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals) 
                            == __Vtask_EX_Stage_tb__DOT__check_output__14__exp_result_tb)))) {
                VL_WRITEF_NX("Result Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:87: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__14__exp_result_tb
                             , '#',32,(IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals));
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 87, "", false);
            }
        }
    }
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x000007e0U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x60000000U | (0x003fffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
        = (3U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0xfffffffcU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[0U] = 5U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[1U] = 4U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] = 6U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs1_data = 7U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs2_data = 8U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs1_data = 9U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs2_data = 0x0000000aU;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in = 2U;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in = 2U;
    EX_Stage_tb__DOT__check_result = 0U;
    if (EX_Stage_tb__DOT__check_dest) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest 
                            == __Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_dest_tb)))) {
                VL_WRITEF_NX("Redirect Dest Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:94: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_dest_tb
                             , '#',32,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 94, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest = 0U;
    if (EX_Stage_tb__DOT__check_dest_valid) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid) 
                            == (IData)(__Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_valid_tb))))) {
                VL_WRITEF_NX("Redirect Valid Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:102: Assertion failed in %m: Redirect Valid Doesn't Match. Exp: %0b, DUT: %0b\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_EX_Stage_tb__DOT__check_output__14__exp_red_valid_tb)
                             , '#',1,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 102, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest_valid = 0U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]);
    vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in = 0U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs1_data = 0x0000000fU;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\EX_Stage_tb.sv", 
                                         185);
    __Vtask_EX_Stage_tb__DOT__set_check__16__set_valid = 1U;
    __Vtask_EX_Stage_tb__DOT__set_check__16__set_dest = 0U;
    __Vtask_EX_Stage_tb__DOT__set_check__16__set_result = 1U;
    EX_Stage_tb__DOT__check_result = __Vtask_EX_Stage_tb__DOT__set_check__16__set_result;
    EX_Stage_tb__DOT__check_dest = __Vtask_EX_Stage_tb__DOT__set_check__16__set_dest;
    EX_Stage_tb__DOT__check_dest_valid = __Vtask_EX_Stage_tb__DOT__set_check__16__set_valid;
    __Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_valid_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_dest_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__17__exp_result_tb = 0x00000014U;
    __Vtask_EX_Stage_tb__DOT__check_output__17__testnum = 6U;
    VL_WRITEF_NX("-----------------------------------------\nTest %0d\n",1
                 , '~',32,__Vtask_EX_Stage_tb__DOT__check_output__17__testnum);
    if (EX_Stage_tb__DOT__check_result) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals) 
                            == __Vtask_EX_Stage_tb__DOT__check_output__17__exp_result_tb)))) {
                VL_WRITEF_NX("Result Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:87: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__17__exp_result_tb
                             , '#',32,(IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals));
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 87, "", false);
            }
        }
    }
    if (EX_Stage_tb__DOT__check_dest) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest 
                            == __Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_dest_tb)))) {
                VL_WRITEF_NX("Redirect Dest Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:94: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_dest_tb
                             , '#',32,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 94, "", false);
            }
        }
    }
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x000007e0U | (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0x60000000U | (0x003fffffU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]));
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
        = (3U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
        = (0xfffffffcU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U]);
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[0U] = 5U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[1U] = 4U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] = 6U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs1_data = 7U;
    vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs2_data = 8U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs1_data = 9U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs2_data = 0x0000000aU;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in = 2U;
    vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in = 2U;
    EX_Stage_tb__DOT__check_result = 0U;
    EX_Stage_tb__DOT__check_dest = 0U;
    if (EX_Stage_tb__DOT__check_dest_valid) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid) 
                            == (IData)(__Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_valid_tb))))) {
                VL_WRITEF_NX("Redirect Valid Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:102: Assertion failed in %m: Redirect Valid Doesn't Match. Exp: %0b, DUT: %0b\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_EX_Stage_tb__DOT__check_output__17__exp_red_valid_tb)
                             , '#',1,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 102, "", false);
            }
        }
    }
    EX_Stage_tb__DOT__check_dest_valid = 0U;
    vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
        = (0x0000080fU & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]);
    vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in = 1U;
    vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs2_data = 0x00000017U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\EX_Stage_tb.sv", 
                                         197);
    __Vtask_EX_Stage_tb__DOT__set_check__19__set_valid = 1U;
    __Vtask_EX_Stage_tb__DOT__set_check__19__set_dest = 0U;
    __Vtask_EX_Stage_tb__DOT__set_check__19__set_result = 1U;
    EX_Stage_tb__DOT__check_result = __Vtask_EX_Stage_tb__DOT__set_check__19__set_result;
    EX_Stage_tb__DOT__check_dest = __Vtask_EX_Stage_tb__DOT__set_check__19__set_dest;
    EX_Stage_tb__DOT__check_dest_valid = __Vtask_EX_Stage_tb__DOT__set_check__19__set_valid;
    __Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_valid_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_dest_tb = 0U;
    __Vtask_EX_Stage_tb__DOT__check_output__20__exp_result_tb = 0x0000001bU;
    __Vtask_EX_Stage_tb__DOT__check_output__20__testnum = 7U;
    VL_WRITEF_NX("-----------------------------------------\nTest %0d\n",1
                 , '~',32,__Vtask_EX_Stage_tb__DOT__check_output__20__testnum);
    if (EX_Stage_tb__DOT__check_result) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals) 
                            == __Vtask_EX_Stage_tb__DOT__check_output__20__exp_result_tb)))) {
                VL_WRITEF_NX("Result Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:87: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__20__exp_result_tb
                             , '#',32,(IData)(vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals));
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 87, "", false);
            }
        }
    }
    if (EX_Stage_tb__DOT__check_dest) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY(((vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest 
                            == __Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_dest_tb)))) {
                VL_WRITEF_NX("Redirect Dest Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:94: Assertion failed in %m: Result Doesn't Match. Exp: %0h, DUT: %0h\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_dest_tb
                             , '#',32,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 94, "", false);
            }
        }
    }
    if (EX_Stage_tb__DOT__check_dest_valid) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((((IData)(vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid) 
                            == (IData)(__Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_valid_tb))))) {
                VL_WRITEF_NX("Redirect Valid Match\n",0);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: EX_Stage_tb.sv:102: Assertion failed in %m: Redirect Valid Doesn't Match. Exp: %0b, DUT: %0b\n",5, 'M',vlSymsp->name(),"EX_Stage_tb.check_output", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(__Vtask_EX_Stage_tb__DOT__check_output__20__exp_red_valid_tb)
                             , '#',1,vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid);
                VL_STOP_MT("testbenches\\EX_Stage_tb.sv", 102, "", false);
            }
        }
    }
    VL_WRITEF_NX("-----------------------------------------\n",0);
    VL_FINISH_MT("testbenches\\EX_Stage_tb.sv", 202, "");
    co_return;
}

void VEX_Stage_tb___024root___eval_triggers_vec__act(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_triggers_vec__act\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool VEX_Stage_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___trigger_anySet__act\n"); );
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

void VEX_Stage_tb___024root___act_sequent__TOP__0(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___act_sequent__TOP__0\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ EX_Stage_tb__DOT__dut__DOT__ex_rs1_data;
    EX_Stage_tb__DOT__dut__DOT__ex_rs1_data = 0;
    IData/*31:0*/ EX_Stage_tb__DOT__dut__DOT__ex_rs2_data;
    EX_Stage_tb__DOT__dut__DOT__ex_rs2_data = 0;
    IData/*31:0*/ EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_a;
    EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_a = 0;
    IData/*31:0*/ EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_b;
    EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_b = 0;
    IData/*31:0*/ EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_a;
    EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_a = 0;
    IData/*31:0*/ EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_b;
    EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_b = 0;
    IData/*31:0*/ EX_Stage_tb__DOT__dut__DOT__ex_alu_result;
    EX_Stage_tb__DOT__dut__DOT__ex_alu_result = 0;
    CData/*0:0*/ EX_Stage_tb__DOT__dut__DOT__ex_comp_result;
    EX_Stage_tb__DOT__dut__DOT__ex_comp_result = 0;
    // Body
    EX_Stage_tb__DOT__dut__DOT__ex_rs1_data = ((0U 
                                                == (IData)(vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in))
                                                ? vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs1_data
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.EX_Stage_tb__DOT__fw_rs1_sel_in))
                                                    ? vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs1_data
                                                    : vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[1U]));
    EX_Stage_tb__DOT__dut__DOT__ex_rs2_data = ((0U 
                                                == (IData)(vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in))
                                                ? vlSelfRef.EX_Stage_tb__DOT__ex_fw_rs2_data
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelfRef.EX_Stage_tb__DOT__fw_rs2_sel_in))
                                                    ? vlSelfRef.EX_Stage_tb__DOT__mem_fw_rs2_data
                                                    : vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[0U]));
    EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_a = 
        (((0x00000040U & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U])
           ? ((vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
               << 0x0000001eU) | (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U] 
                                  >> 2U)) : EX_Stage_tb__DOT__dut__DOT__ex_rs1_data) 
         & (- (IData)((1U & (~ (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
                                >> 7U))))));
    EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_a = 
        (EX_Stage_tb__DOT__dut__DOT__ex_rs1_data & 
         (- (IData)((0U == (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
                            >> 0x0000001eU)))));
    EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_b = 
        ((0U == (3U & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
                       >> 4U))) ? EX_Stage_tb__DOT__dut__DOT__ex_rs2_data
          : (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] 
             & (- (IData)((1U == (3U & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
                                        >> 4U)))))));
    EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_b = 
        ((0U == (3U & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
                       >> 0x0000001cU))) ? EX_Stage_tb__DOT__dut__DOT__ex_rs2_data
          : (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[2U] 
             & (- (IData)((1U == (3U & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
                                        >> 0x0000001cU)))))));
    EX_Stage_tb__DOT__dut__DOT__ex_alu_result = ((0x00000400U 
                                                  & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U])
                                                  ? 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
                                                                  >> 8U))))) 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
                                                                     >> 9U))))) 
                                                     & (EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_b 
                                                        ^ EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_a)))
                                                  : 
                                                 ((0x00000200U 
                                                   & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U])
                                                   ? 
                                                  ((0x00000100U 
                                                    & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U])
                                                    ? 
                                                   (EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_b 
                                                    | EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_a)
                                                    : 
                                                   (EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_b 
                                                    & EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_a))
                                                   : 
                                                  ((0x00000100U 
                                                    & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U])
                                                    ? 
                                                   (EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_a 
                                                    - EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_b)
                                                    : 
                                                   (EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_b 
                                                    + EX_Stage_tb__DOT__dut__DOT__ex_alu_operand_a))));
    EX_Stage_tb__DOT__dut__DOT__ex_comp_result = ((~ 
                                                   (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U] 
                                                    >> 2U)) 
                                                  & ((2U 
                                                      & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U])
                                                      ? 
                                                     (EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_a 
                                                      < EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_b)
                                                      : 
                                                     ((1U 
                                                       & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U])
                                                       ? 
                                                      (EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_b 
                                                       != EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_a)
                                                       : 
                                                      (EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_b 
                                                       == EX_Stage_tb__DOT__dut__DOT__ex_comp_operand_a))));
    if ((0U != (7U & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
                      >> 0x00000019U)))) {
        vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest 
            = EX_Stage_tb__DOT__dut__DOT__ex_alu_result;
        vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid 
            = EX_Stage_tb__DOT__dut__DOT__ex_comp_result;
    } else {
        vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_dest 
            = ((1U == (7U & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
                             >> 0x00000016U))) ? EX_Stage_tb__DOT__dut__DOT__ex_alu_result
                : ((2U == (7U & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
                                 >> 0x00000016U))) ? 
                   (0xfffffffeU & EX_Stage_tb__DOT__dut__DOT__ex_alu_result)
                    : 0U));
        vlSelfRef.EX_Stage_tb__DOT__dut__DOT__ex_int_redir_valid 
            = ((1U == (7U & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
                             >> 0x00000016U))) || (2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
                                                       >> 0x00000016U))));
    }
    vlSelfRef.EX_Stage_tb__DOT__exmem_ctrl_signals 
        = (((QData)((IData)((0x000000ffU & (vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[4U] 
                                            >> 2U)))) 
            << 0x00000022U) | (((QData)((IData)((3U 
                                                 & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[3U]))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((3U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelfRef.EX_Stage_tb__DOT__idex_ctrl_signals[5U]))
                                                                    ? (IData)(EX_Stage_tb__DOT__dut__DOT__ex_comp_result)
                                                                    : EX_Stage_tb__DOT__dut__DOT__ex_alu_result)))));
}

void VEX_Stage_tb___024root___eval_act(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_act\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        VEX_Stage_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VEX_Stage_tb___024root___eval_nba(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_nba\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VEX_Stage_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VEX_Stage_tb___024root___timing_resume(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___timing_resume\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VEX_Stage_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VEX_Stage_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VEX_Stage_tb___024root___eval_phase__act(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_phase__act\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VEX_Stage_tb___024root___eval_triggers_vec__act(vlSelf);
    VEX_Stage_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VEX_Stage_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VEX_Stage_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VEX_Stage_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VEX_Stage_tb___024root___timing_resume(vlSelf);
        VEX_Stage_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VEX_Stage_tb___024root___eval_phase__inact(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_phase__inact\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("testbenches\\EX_Stage_tb.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VEX_Stage_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VEX_Stage_tb___024root___eval_phase__nba(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_phase__nba\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VEX_Stage_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VEX_Stage_tb___024root___eval_nba(vlSelf);
        VEX_Stage_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VEX_Stage_tb___024root___eval(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VEX_Stage_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbenches\\EX_Stage_tb.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbenches\\EX_Stage_tb.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VEX_Stage_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbenches\\EX_Stage_tb.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VEX_Stage_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VEX_Stage_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VEX_Stage_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VEX_Stage_tb___024root___eval_debug_assertions(VEX_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEX_Stage_tb___024root___eval_debug_assertions\n"); );
    VEX_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
