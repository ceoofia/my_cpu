// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VID_Stage_tb.h for the primary calling header

#include "VID_Stage_tb__pch.h"

VlCoroutine VID_Stage_tb___024root___eval_initial__TOP__Vtiming__0(VID_Stage_tb___024root* vlSelf);
VlCoroutine VID_Stage_tb___024root___eval_initial__TOP__Vtiming__1(VID_Stage_tb___024root* vlSelf);

void VID_Stage_tb___024root___eval_initial(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_initial\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VID_Stage_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VID_Stage_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void VID_Stage_tb___024root____VbeforeTrig_he403f4e5__0(VID_Stage_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VID_Stage_tb___024root___eval_initial__TOP__Vtiming__0(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vtask_ID_Stage_tb__DOT__set_reg__0__addr_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__0__addr_tb = 0;
    IData/*31:0*/ __Vtask_ID_Stage_tb__DOT__set_reg__0__data_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__0__data_tb = 0;
    CData/*4:0*/ __Vtask_ID_Stage_tb__DOT__set_reg__1__addr_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__1__addr_tb = 0;
    IData/*31:0*/ __Vtask_ID_Stage_tb__DOT__set_reg__1__data_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__1__data_tb = 0;
    IData/*31:0*/ __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instrnum;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instrnum = 0;
    IData/*31:0*/ __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instr_tb;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instr_tb = 0;
    CData/*0:0*/ __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instr_valid_tb;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instr_valid_tb = 0;
    CData/*1:0*/ __Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__3__a;
    __Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__3__a = 0;
    CData/*1:0*/ __Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__4__b;
    __Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__4__b = 0;
    CData/*2:0*/ __Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t;
    __Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t = 0;
    CData/*1:0*/ __Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__6__t;
    __Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__6__t = 0;
    CData/*4:0*/ __Vtask_ID_Stage_tb__DOT__set_reg__7__addr_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__7__addr_tb = 0;
    IData/*31:0*/ __Vtask_ID_Stage_tb__DOT__set_reg__7__data_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__7__data_tb = 0;
    CData/*4:0*/ __Vtask_ID_Stage_tb__DOT__set_reg__8__addr_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__8__addr_tb = 0;
    IData/*31:0*/ __Vtask_ID_Stage_tb__DOT__set_reg__8__data_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__8__data_tb = 0;
    IData/*31:0*/ __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instrnum;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instrnum = 0;
    IData/*31:0*/ __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instr_tb;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instr_tb = 0;
    CData/*0:0*/ __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instr_valid_tb;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instr_valid_tb = 0;
    CData/*1:0*/ __Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__10__a;
    __Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__10__a = 0;
    CData/*1:0*/ __Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__11__b;
    __Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__11__b = 0;
    CData/*2:0*/ __Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t;
    __Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t = 0;
    CData/*1:0*/ __Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__13__t;
    __Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__13__t = 0;
    // Body
    vlSelfRef.ID_Stage_tb__DOT__clk = 0U;
    VID_Stage_tb___024root____VbeforeTrig_he403f4e5__0(vlSelf, 
                                                       "@(posedge ID_Stage_tb.clk)");
    co_await vlSelfRef.__VtrigSched_he403f4e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ID_Stage_tb.clk)", 
                                                         "testbenches\\ID_Stage_tb.sv", 
                                                         145);
    vlSelfRef.ID_Stage_tb__DOT__reset = 1U;
    VID_Stage_tb___024root____VbeforeTrig_he403f4e5__0(vlSelf, 
                                                       "@(posedge ID_Stage_tb.clk)");
    co_await vlSelfRef.__VtrigSched_he403f4e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ID_Stage_tb.clk)", 
                                                         "testbenches\\ID_Stage_tb.sv", 
                                                         146);
    vlSelfRef.ID_Stage_tb__DOT__reset = 0U;
    __Vtask_ID_Stage_tb__DOT__set_reg__0__data_tb = 0x00000123U;
    __Vtask_ID_Stage_tb__DOT__set_reg__0__addr_tb = 7U;
    vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[__Vtask_ID_Stage_tb__DOT__set_reg__0__addr_tb] 
        = __Vtask_ID_Stage_tb__DOT__set_reg__0__data_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__1__data_tb = 0x00000234U;
    __Vtask_ID_Stage_tb__DOT__set_reg__1__addr_tb = 0x11U;
    vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[__Vtask_ID_Stage_tb__DOT__set_reg__1__addr_tb] 
        = __Vtask_ID_Stage_tb__DOT__set_reg__1__data_tb;
    VID_Stage_tb___024root____VbeforeTrig_he403f4e5__0(vlSelf, 
                                                       "@(posedge ID_Stage_tb.clk)");
    co_await vlSelfRef.__VtrigSched_he403f4e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ID_Stage_tb.clk)", 
                                                         "testbenches\\ID_Stage_tb.sv", 
                                                         151);
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instr_valid_tb = 1U;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instr_tb = 0x007882b3U;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instrnum = 1U;
    vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in = __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instr_tb;
    vlSelfRef.ID_Stage_tb__DOT__id_instr_valid_in = __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instr_valid_tb;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ID_Stage_tb.sv", 
                                         66);
    VL_WRITEF_NX("------------------------------------\nInstr %0d: 0x%0h\nImm value: %0d\n",3
                 , '~',32,__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instrnum
                 , '#',32,__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2__instr_tb
                 , '#',32,vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[2U]);
    __Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__3__a 
        = (3U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[5U] 
                 >> 6U));
    vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__3__Vfuncout 
        = ((2U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__3__a))
            ? ((1U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__3__a))
                ? "NOP"s : "Zero"s) : ((1U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__3__a))
                                        ? "PC"s : "RS1"s));
    vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_0__alu_a_src_to_str 
        = vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__3__Vfuncout;
    __Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__4__b 
        = (3U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[5U] 
                 >> 4U));
    vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__4__Vfuncout 
        = ((0U == (IData)(__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__4__b))
            ? "RS2"s : ((1U == (IData)(__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__4__b))
                         ? "Imm"s : ((2U == (IData)(__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__4__b))
                                      ? "NOP"s : "UNKNOWN"s)));
    vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_1__alu_b_src_to_str 
        = vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__4__Vfuncout;
    VL_WRITEF_NX("ALU src1: %0s, src2: %0s\nALU src1 addr: %0d, src2 addr: %0d, rd addr: %0d, rd write: %0b\nRS1 data: %0h, RS2 data: %0h\nComparator: %0b\n",9
                 , 'S',&(vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_0__alu_a_src_to_str)
                 , 'S',&(vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_1__alu_b_src_to_str)
                 , '#',5,(0x0000001fU & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                                         >> 0x00000011U))
                 , '#',5,(0x0000001fU & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                                         >> 0x0000000bU))
                 , '#',5,(0x0000001fU & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                                         >> 5U)), '#',1,
                 (1U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                        >> 3U)), '#',32,vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[1U]
                 , '#',32,vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[0U]
                 , '#',1,(1U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[5U] 
                                >> 3U)));
    __Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t = 
        (7U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[5U] 
               >> 8U));
    vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__Vfuncout 
        = ((4U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t))
            ? ((2U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t))
                ? ((1U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t))
                    ? "NO_ALU"s : "ALU NULL"s) : ((1U 
                                                   & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t))
                                                   ? "UNKNOWN"s
                                                   : "ALU XOR"s))
            : ((2U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t))
                ? ((1U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t))
                    ? "ALU OR"s : "ALU AND"s) : ((1U 
                                                  & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__t))
                                                  ? "ALU SUB"s
                                                  : "ALU ADD"s)));
    vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_2__alu_op_to_str 
        = vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__5__Vfuncout;
    VL_WRITEF_NX("ALU Operation: %0s\n",1, 'S',&(vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_2__alu_op_to_str));
    __Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__6__t = 
        (3U & vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[3U]);
    vlSelfRef.__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__6__Vfuncout 
        = ((0U == (IData)(__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__6__t))
            ? "LW"s : ((1U == (IData)(__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__6__t))
                        ? "SW"s : ((2U == (IData)(__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__6__t))
                                    ? "NO_LSU"s : "UNKNOWN"s)));
    vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_3__lsu_op_to_str 
        = vlSelfRef.__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__6__Vfuncout;
    VL_WRITEF_NX("LSU Operation: %0s, LSU unit: %0b\n",2
                 , 'S',&(vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__2____VlefCall_3__lsu_op_to_str)
                 , '#',1,(1U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                                >> 2U)));
    __Vtask_ID_Stage_tb__DOT__set_reg__7__data_tb = 0x00000123U;
    __Vtask_ID_Stage_tb__DOT__set_reg__7__addr_tb = 4U;
    vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[__Vtask_ID_Stage_tb__DOT__set_reg__7__addr_tb] 
        = __Vtask_ID_Stage_tb__DOT__set_reg__7__data_tb;
    __Vtask_ID_Stage_tb__DOT__set_reg__8__data_tb = 0x00000123U;
    __Vtask_ID_Stage_tb__DOT__set_reg__8__addr_tb = 3U;
    vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[__Vtask_ID_Stage_tb__DOT__set_reg__8__addr_tb] 
        = __Vtask_ID_Stage_tb__DOT__set_reg__8__data_tb;
    VID_Stage_tb___024root____VbeforeTrig_he403f4e5__0(vlSelf, 
                                                       "@(posedge ID_Stage_tb.clk)");
    co_await vlSelfRef.__VtrigSched_he403f4e5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ID_Stage_tb.clk)", 
                                                         "testbenches\\ID_Stage_tb.sv", 
                                                         157);
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instr_valid_tb = 1U;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instr_tb = 0x00320b63U;
    __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instrnum = 2U;
    vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in = __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instr_tb;
    vlSelfRef.ID_Stage_tb__DOT__id_instr_valid_in = __Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instr_valid_tb;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "testbenches\\ID_Stage_tb.sv", 
                                         66);
    VL_WRITEF_NX("------------------------------------\nInstr %0d: 0x%0h\nImm value: %0d\n",3
                 , '~',32,__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instrnum
                 , '#',32,__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9__instr_tb
                 , '#',32,vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[2U]);
    __Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__10__a 
        = (3U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[5U] 
                 >> 6U));
    vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__10__Vfuncout 
        = ((2U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__10__a))
            ? ((1U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__10__a))
                ? "NOP"s : "Zero"s) : ((1U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__10__a))
                                        ? "PC"s : "RS1"s));
    vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_0__alu_a_src_to_str 
        = vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_a_src_to_str__10__Vfuncout;
    __Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__11__b 
        = (3U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[5U] 
                 >> 4U));
    vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__11__Vfuncout 
        = ((0U == (IData)(__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__11__b))
            ? "RS2"s : ((1U == (IData)(__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__11__b))
                         ? "Imm"s : ((2U == (IData)(__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__11__b))
                                      ? "NOP"s : "UNKNOWN"s)));
    vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_1__alu_b_src_to_str 
        = vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_b_src_to_str__11__Vfuncout;
    VL_WRITEF_NX("ALU src1: %0s, src2: %0s\nALU src1 addr: %0d, src2 addr: %0d, rd addr: %0d, rd write: %0b\nRS1 data: %0h, RS2 data: %0h\nComparator: %0b\n",9
                 , 'S',&(vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_0__alu_a_src_to_str)
                 , 'S',&(vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_1__alu_b_src_to_str)
                 , '#',5,(0x0000001fU & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                                         >> 0x00000011U))
                 , '#',5,(0x0000001fU & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                                         >> 0x0000000bU))
                 , '#',5,(0x0000001fU & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                                         >> 5U)), '#',1,
                 (1U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                        >> 3U)), '#',32,vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[1U]
                 , '#',32,vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[0U]
                 , '#',1,(1U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[5U] 
                                >> 3U)));
    __Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t 
        = (7U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[5U] 
                 >> 8U));
    vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__Vfuncout 
        = ((4U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t))
            ? ((2U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t))
                ? ((1U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t))
                    ? "NO_ALU"s : "ALU NULL"s) : ((1U 
                                                   & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t))
                                                   ? "UNKNOWN"s
                                                   : "ALU XOR"s))
            : ((2U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t))
                ? ((1U & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t))
                    ? "ALU OR"s : "ALU AND"s) : ((1U 
                                                  & (IData)(__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__t))
                                                  ? "ALU SUB"s
                                                  : "ALU ADD"s)));
    vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_2__alu_op_to_str 
        = vlSelfRef.__Vfunc_ID_Stage_tb__DOT__alu_op_to_str__12__Vfuncout;
    VL_WRITEF_NX("ALU Operation: %0s\n",1, 'S',&(vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_2__alu_op_to_str));
    __Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__13__t 
        = (3U & vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[3U]);
    vlSelfRef.__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__13__Vfuncout 
        = ((0U == (IData)(__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__13__t))
            ? "LW"s : ((1U == (IData)(__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__13__t))
                        ? "SW"s : ((2U == (IData)(__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__13__t))
                                    ? "NO_LSU"s : "UNKNOWN"s)));
    vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_3__lsu_op_to_str 
        = vlSelfRef.__Vfunc_ID_Stage_tb__DOT__lsu_op_to_str__13__Vfuncout;
    VL_WRITEF_NX("LSU Operation: %0s, LSU unit: %0b\n------------------------------------\n",2
                 , 'S',&(vlSelfRef.__Vtask_ID_Stage_tb__DOT__drive_and_view_instr__9____VlefCall_3__lsu_op_to_str)
                 , '#',1,(1U & (vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
                                >> 2U)));
    VL_FINISH_MT("testbenches\\ID_Stage_tb.sv", 161, "");
    co_return;
}

VlCoroutine VID_Stage_tb___024root___eval_initial__TOP__Vtiming__1(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "testbenches\\ID_Stage_tb.sv", 
                                             139);
        vlSelfRef.ID_Stage_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.ID_Stage_tb__DOT__clk)));
    }
    co_return;
}

void VID_Stage_tb___024root___eval_triggers_vec__act(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_triggers_vec__act\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.ID_Stage_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ID_Stage_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__ID_Stage_tb__DOT__clk__0 
        = vlSelfRef.ID_Stage_tb__DOT__clk;
}

bool VID_Stage_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___trigger_anySet__act\n"); );
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

void VID_Stage_tb___024root___act_comb__TOP__0(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___act_comb__TOP__0\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ ID_Stage_tb__DOT__dut__DOT__id_alu_en;
    ID_Stage_tb__DOT__dut__DOT__id_alu_en = 0;
    CData/*2:0*/ ID_Stage_tb__DOT__dut__DOT__id_alu_op;
    ID_Stage_tb__DOT__dut__DOT__id_alu_op = 0;
    CData/*1:0*/ ID_Stage_tb__DOT__dut__DOT__id_alu_a_src;
    ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0;
    CData/*1:0*/ ID_Stage_tb__DOT__dut__DOT__id_alu_b_src;
    ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 0;
    CData/*0:0*/ ID_Stage_tb__DOT__dut__DOT__id_comp_en;
    ID_Stage_tb__DOT__dut__DOT__id_comp_en = 0;
    CData/*2:0*/ ID_Stage_tb__DOT__dut__DOT__id_comp_op;
    ID_Stage_tb__DOT__dut__DOT__id_comp_op = 0;
    CData/*1:0*/ ID_Stage_tb__DOT__dut__DOT__id_comp_a_src;
    ID_Stage_tb__DOT__dut__DOT__id_comp_a_src = 0;
    CData/*1:0*/ ID_Stage_tb__DOT__dut__DOT__id_comp_b_src;
    ID_Stage_tb__DOT__dut__DOT__id_comp_b_src = 0;
    CData/*2:0*/ ID_Stage_tb__DOT__dut__DOT__id_branch_op;
    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0;
    CData/*2:0*/ ID_Stage_tb__DOT__dut__DOT__id_jump_op;
    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0;
    CData/*0:0*/ ID_Stage_tb__DOT__dut__DOT__id_lsu_en;
    ID_Stage_tb__DOT__dut__DOT__id_lsu_en = 0;
    CData/*1:0*/ ID_Stage_tb__DOT__dut__DOT__id_lsu_op;
    ID_Stage_tb__DOT__dut__DOT__id_lsu_op = 0;
    CData/*2:0*/ ID_Stage_tb__DOT__dut__DOT__id_imm_type;
    ID_Stage_tb__DOT__dut__DOT__id_imm_type = 0;
    CData/*0:0*/ ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write;
    ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 0;
    // Body
    ID_Stage_tb__DOT__dut__DOT__id_lsu_en = 0U;
    ID_Stage_tb__DOT__dut__DOT__id_comp_op = 4U;
    ID_Stage_tb__DOT__dut__DOT__id_alu_en = 0U;
    ID_Stage_tb__DOT__dut__DOT__id_comp_a_src = 1U;
    ID_Stage_tb__DOT__dut__DOT__id_lsu_op = 2U;
    if ((1U & (~ ((~ (IData)(vlSelfRef.ID_Stage_tb__DOT__id_instr_valid_in)) 
                  | (IData)(vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_stall))))) {
        if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                      >> 6U)))) {
            if ((0x00000020U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                      >> 2U)))) {
                            if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                    ID_Stage_tb__DOT__dut__DOT__id_lsu_op = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                if ((2U == (7U & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                  >> 0x0000000cU)))) {
                                    ID_Stage_tb__DOT__dut__DOT__id_lsu_op = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000040U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
            if ((0x00000020U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 4U)))) {
                    if ((8U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                    vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs1 = 0U;
                                    vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs2 = 0U;
                                }
                            }
                        }
                    } else if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs1 = 1U;
                                vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs2 = 0U;
                            }
                        }
                    } else if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs1 = 1U;
                            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs2 = 1U;
                        }
                    }
                }
            }
        } else if ((0x00000020U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
            if ((0x00000010U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs1 = 1U;
                                vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs2 = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs1 = 1U;
                            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs2 = 1U;
                        }
                    }
                }
            }
        } else if ((0x00000010U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
            if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs1 = 1U;
                            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs2 = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                          >> 2U)))) {
                if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs1 = 1U;
                        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs2 = 0U;
                    }
                }
            }
        }
    }
    ID_Stage_tb__DOT__dut__DOT__id_alu_op = 7U;
    ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 2U;
    ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 3U;
    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
    ID_Stage_tb__DOT__dut__DOT__id_imm_type = 5U;
    ID_Stage_tb__DOT__dut__DOT__id_comp_en = 0U;
    ID_Stage_tb__DOT__dut__DOT__id_comp_b_src = 2U;
    ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 0U;
    if ((1U & ((~ (IData)(vlSelfRef.ID_Stage_tb__DOT__id_instr_valid_in)) 
               | (IData)(vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_stall)))) {
        ID_Stage_tb__DOT__dut__DOT__id_lsu_en = 0U;
        ID_Stage_tb__DOT__dut__DOT__id_comp_op = 4U;
        ID_Stage_tb__DOT__dut__DOT__id_alu_en = 0U;
        ID_Stage_tb__DOT__dut__DOT__id_comp_a_src = 1U;
        ID_Stage_tb__DOT__dut__DOT__id_alu_op = 7U;
        ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 2U;
        ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 3U;
        ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
        ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
        ID_Stage_tb__DOT__dut__DOT__id_imm_type = 5U;
        ID_Stage_tb__DOT__dut__DOT__id_comp_en = 0U;
        ID_Stage_tb__DOT__dut__DOT__id_comp_b_src = 2U;
        ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 0U;
    } else {
        if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                      >> 6U)))) {
            if ((0x00000020U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                      >> 2U)))) {
                            if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                    ID_Stage_tb__DOT__dut__DOT__id_lsu_en = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                ID_Stage_tb__DOT__dut__DOT__id_lsu_en = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((0x00000040U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
            if ((0x00000020U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                      >> 2U)))) {
                            if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                    if ((0U == (7U 
                                                & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                   >> 0x0000000cU)))) {
                                        ID_Stage_tb__DOT__dut__DOT__id_comp_op = 0U;
                                    } else if ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                    >> 0x0000000cU)))) {
                                        ID_Stage_tb__DOT__dut__DOT__id_comp_op = 1U;
                                    }
                                    ID_Stage_tb__DOT__dut__DOT__id_comp_a_src = 0U;
                                    ID_Stage_tb__DOT__dut__DOT__id_comp_en = 1U;
                                    ID_Stage_tb__DOT__dut__DOT__id_comp_b_src = 0U;
                                }
                            }
                        }
                    }
                    if ((8U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_op = 0U;
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 1U;
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 1U;
                                    ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_op = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                                ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 1U;
                            }
                        }
                    } else if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                            ID_Stage_tb__DOT__dut__DOT__id_alu_op = 0U;
                            ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 1U;
                            ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 1U;
                            ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 0U;
                        }
                    }
                }
                if ((0x00000010U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                } else if ((8U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                ID_Stage_tb__DOT__dut__DOT__id_jump_op = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_imm_type = 4U;
                            } else {
                                ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                            }
                            if ((1U & (~ vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in))) {
                                ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                            }
                        } else {
                            ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                            ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                            ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                        }
                    } else {
                        ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                    }
                } else if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            ID_Stage_tb__DOT__dut__DOT__id_jump_op = 2U;
                            ID_Stage_tb__DOT__dut__DOT__id_imm_type = 1U;
                        } else {
                            ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                            ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                        }
                        if ((1U & (~ vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in))) {
                            ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                        }
                    } else {
                        ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                    }
                } else if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    if ((1U & (~ vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in))) {
                        ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    }
                    if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        ID_Stage_tb__DOT__dut__DOT__id_branch_op 
                            = ((0U == (7U & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                             >> 0x0000000cU)))
                                ? 1U : ((1U == (7U 
                                                & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                   >> 0x0000000cU)))
                                         ? 2U : 0U));
                        ID_Stage_tb__DOT__dut__DOT__id_imm_type = 2U;
                    } else {
                        ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                    }
                } else {
                    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                }
            } else {
                ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
            }
        } else if ((0x00000020U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
            if ((0x00000010U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                if ((0U != ((0x000003f8U 
                                             & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                >> 0x00000016U)) 
                                            | (7U & 
                                               (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                >> 0x0000000cU))))) {
                                    if ((0x0100U != 
                                         ((0x000003f8U 
                                           & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                              >> 0x00000016U)) 
                                          | (7U & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                   >> 0x0000000cU))))) {
                                        if ((7U != 
                                             ((0x000003f8U 
                                               & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                  >> 0x00000016U)) 
                                              | (7U 
                                                 & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                    >> 0x0000000cU))))) {
                                            if ((6U 
                                                 != 
                                                 ((0x000003f8U 
                                                   & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                      >> 0x00000016U)) 
                                                  | (7U 
                                                     & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                        >> 0x0000000cU))))) {
                                                if (
                                                    (4U 
                                                     != 
                                                     ((0x000003f8U 
                                                       & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                          >> 0x00000016U)) 
                                                      | (7U 
                                                         & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                            >> 0x0000000cU))))) {
                                                    if (
                                                        (2U 
                                                         == 
                                                         ((0x000003f8U 
                                                           & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                              >> 0x00000016U)) 
                                                          | (7U 
                                                             & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                                >> 0x0000000cU))))) {
                                                        ID_Stage_tb__DOT__dut__DOT__id_comp_op = 2U;
                                                        ID_Stage_tb__DOT__dut__DOT__id_comp_a_src = 0U;
                                                        ID_Stage_tb__DOT__dut__DOT__id_comp_en = 1U;
                                                        ID_Stage_tb__DOT__dut__DOT__id_comp_b_src = 0U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_op = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 2U;
                                ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 1U;
                            }
                        }
                    } else if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((0U == ((0x000003f8U 
                                         & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                            >> 0x00000016U)) 
                                        | (7U & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                 >> 0x0000000cU))))) {
                                ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_op = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                            } else if ((0x0100U == 
                                        ((0x000003f8U 
                                          & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                             >> 0x00000016U)) 
                                         | (7U & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                  >> 0x0000000cU))))) {
                                ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_op = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                            } else if ((7U == ((0x000003f8U 
                                                & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                   >> 0x00000016U)) 
                                               | (7U 
                                                  & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                     >> 0x0000000cU))))) {
                                ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_op = 2U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                            } else if ((6U == ((0x000003f8U 
                                                & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                   >> 0x00000016U)) 
                                               | (7U 
                                                  & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                     >> 0x0000000cU))))) {
                                ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_op = 3U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                            } else if ((4U == ((0x000003f8U 
                                                & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                   >> 0x00000016U)) 
                                               | (7U 
                                                  & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                     >> 0x0000000cU))))) {
                                ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_op = 4U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                            } else if ((2U != ((0x000003f8U 
                                                & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                   >> 0x00000016U)) 
                                               | (7U 
                                                  & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                     >> 0x0000000cU))))) {
                                ID_Stage_tb__DOT__dut__DOT__id_alu_op = 6U;
                            }
                            ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 1U;
                        }
                    }
                }
                if ((8U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                } else if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((1U & (~ vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in))) {
                            ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                            ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                        }
                        ID_Stage_tb__DOT__dut__DOT__id_imm_type 
                            = ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)
                                ? 3U : 6U);
                    } else {
                        ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                    }
                } else if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    if ((1U & (~ vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in))) {
                        ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                    }
                } else {
                    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                }
            } else {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_op = 0U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 1U;
                                ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                } else if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                } else if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                    if ((1U & (~ vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in))) {
                        ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                        ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                    }
                    ID_Stage_tb__DOT__dut__DOT__id_imm_type 
                        = ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)
                            ? 0U : 6U);
                } else {
                    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
                }
            }
        } else if ((0x00000010U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
            if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                          >> 0x0000000eU)))) {
                                if ((0x00002000U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                  >> 0x0000000cU)))) {
                                        ID_Stage_tb__DOT__dut__DOT__id_comp_op = 2U;
                                        ID_Stage_tb__DOT__dut__DOT__id_comp_a_src = 0U;
                                        ID_Stage_tb__DOT__dut__DOT__id_comp_en = 1U;
                                        ID_Stage_tb__DOT__dut__DOT__id_comp_b_src = 1U;
                                    }
                                }
                            }
                            if ((0x00004000U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                if ((0x00002000U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_op 
                                        = ((0x00001000U 
                                            & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)
                                            ? 2U : 3U);
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 1U;
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                                } else {
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_op = 6U;
                                }
                            } else {
                                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                              >> 0x0000000dU)))) {
                                    if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                  >> 0x0000000cU)))) {
                                        ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                                        ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 1U;
                                        ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                                    }
                                }
                                if ((0x00002000U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                                        ID_Stage_tb__DOT__dut__DOT__id_alu_op = 6U;
                                    }
                                } else {
                                    ID_Stage_tb__DOT__dut__DOT__id_alu_op 
                                        = ((0x00001000U 
                                            & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)
                                            ? 6U : 0U);
                                }
                            }
                            ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 1U;
                        }
                    }
                }
            }
            if ((8U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
            } else if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
            } else if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                if ((1U & (~ vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in))) {
                    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                }
                ID_Stage_tb__DOT__dut__DOT__id_imm_type 
                    = ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)
                        ? 1U : 6U);
            } else {
                ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
            }
        } else {
            if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                        if ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                            ID_Stage_tb__DOT__dut__DOT__id_alu_en = 1U;
                            ID_Stage_tb__DOT__dut__DOT__id_alu_op 
                                = ((2U == (7U & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                 >> 0x0000000cU)))
                                    ? 0U : 6U);
                            ID_Stage_tb__DOT__dut__DOT__id_alu_b_src = 1U;
                            ID_Stage_tb__DOT__dut__DOT__id_alu_a_src = 0U;
                            ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write = 1U;
                        }
                    }
                }
            }
            if ((8U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
            } else if ((4U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
            } else if ((2U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)) {
                if ((1U & (~ vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in))) {
                    ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                    ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                }
                ID_Stage_tb__DOT__dut__DOT__id_imm_type 
                    = ((1U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)
                        ? 1U : 6U);
            } else {
                ID_Stage_tb__DOT__dut__DOT__id_jump_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_branch_op = 0U;
                ID_Stage_tb__DOT__dut__DOT__id_imm_type = 6U;
            }
        }
    }
    vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array
                                    [(0x0000001fU & 
                                      (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                       >> 0x0000000fU))])) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array
                                                      [
                                                      (0x0000001fU 
                                                       & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                          >> 0x00000014U))]))));
    vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array
                                     [(0x0000001fU 
                                       & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                          >> 0x0000000fU))])) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array
                                                       [
                                                       (0x0000001fU 
                                                        & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                           >> 0x00000014U))]))) 
                   >> 0x00000020U));
    vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[2U] 
        = ((4U & (IData)(ID_Stage_tb__DOT__dut__DOT__id_imm_type))
            ? ((- (IData)((1U & (~ (IData)(ID_Stage_tb__DOT__dut__DOT__id_imm_type))))) 
               & ((((- (IData)((vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                >> 0x0000001fU))) << 0x00000014U) 
                   | ((((0x000001feU & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                        >> 0x0000000bU)) 
                        | (1U & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                 >> 0x00000014U))) 
                       << 0x0000000bU) | (0x000007feU 
                                          & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                             >> 0x00000014U)))) 
                  & (- (IData)((1U & (~ ((IData)(ID_Stage_tb__DOT__dut__DOT__id_imm_type) 
                                         >> 1U)))))))
            : ((2U & (IData)(ID_Stage_tb__DOT__dut__DOT__id_imm_type))
                ? ((1U & (IData)(ID_Stage_tb__DOT__dut__DOT__id_imm_type))
                    ? (0xfffff000U & vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in)
                    : (((- (IData)((vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | ((0x00000800U 
                                            & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                               << 4U)) 
                                           | ((0x000007e0U 
                                               & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                  >> 0x00000014U)) 
                                              | (0x0000001eU 
                                                 & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                    >> 7U))))))
                : (((- (IData)((vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                >> 0x0000001fU))) << 0x0000000bU) 
                   | (0x000007ffU & ((1U & (IData)(ID_Stage_tb__DOT__dut__DOT__id_imm_type))
                                      ? (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                         >> 0x00000014U)
                                      : ((0x000007e0U 
                                          & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                             >> 0x00000014U)) 
                                         | (0x0000001fU 
                                            & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                               >> 7U))))))));
    vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[3U] 
        = (IData)((((QData)((IData)(vlSelfRef.ID_Stage_tb__DOT__id_instr_pc_in)) 
                    << 2U) | (QData)((IData)(ID_Stage_tb__DOT__dut__DOT__id_lsu_op))));
    vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
        = ((0xfffffffcU & vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.ID_Stage_tb__DOT__id_instr_pc_in)) 
                        << 2U) | (QData)((IData)(ID_Stage_tb__DOT__dut__DOT__id_lsu_op))) 
                      >> 0x00000020U)));
    vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U] 
        = ((3U & vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[4U]) 
           | (0xfffffffcU & ((((((IData)(ID_Stage_tb__DOT__dut__DOT__id_comp_a_src) 
                                 << 0x0000000dU) | 
                                (((IData)(ID_Stage_tb__DOT__dut__DOT__id_comp_b_src) 
                                  << 0x0000000bU) | 
                                 ((IData)(ID_Stage_tb__DOT__dut__DOT__id_branch_op) 
                                  << 8U))) | (((IData)(ID_Stage_tb__DOT__dut__DOT__id_jump_op) 
                                               << 5U) 
                                              | (0x0000001fU 
                                                 & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                    >> 0x0000000fU)))) 
                              << 0x00000011U) | (((
                                                   ((IData)(vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs1) 
                                                    << 0x0000000eU) 
                                                   | (((0x0000003eU 
                                                        & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                           >> 0x00000013U)) 
                                                       | (IData)(vlSelfRef.ID_Stage_tb__DOT__dut__DOT__id_use_rs2)) 
                                                      << 8U)) 
                                                  | ((0x000000f8U 
                                                      & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                         >> 4U)) 
                                                     | ((((IData)(ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write) 
                                                          & (0U 
                                                             != 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.ID_Stage_tb__DOT__id_instr_data_in 
                                                                 >> 7U)))) 
                                                         << 2U) 
                                                        | (((IData)(ID_Stage_tb__DOT__dut__DOT__ID_Decoder__DOT__reg_write) 
                                                            << 1U) 
                                                           | (IData)(ID_Stage_tb__DOT__dut__DOT__id_lsu_en))))) 
                                                 << 2U))));
    vlSelfRef.ID_Stage_tb__DOT__dut_id_ctrl_signals[5U] 
        = (0x00000fffU & ((((IData)(ID_Stage_tb__DOT__dut__DOT__id_alu_en) 
                            << 0x0000000bU) | (((IData)(ID_Stage_tb__DOT__dut__DOT__id_alu_op) 
                                                << 8U) 
                                               | ((IData)(ID_Stage_tb__DOT__dut__DOT__id_alu_a_src) 
                                                  << 6U))) 
                          | (((IData)(ID_Stage_tb__DOT__dut__DOT__id_alu_b_src) 
                              << 4U) | (((IData)(ID_Stage_tb__DOT__dut__DOT__id_comp_en) 
                                         << 3U) | (IData)(ID_Stage_tb__DOT__dut__DOT__id_comp_op)))));
}

void VID_Stage_tb___024root___eval_act(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_act\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        VID_Stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void VID_Stage_tb___024root___nba_sequent__TOP__0(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___nba_sequent__TOP__0\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0;
    __VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0 = 0;
    IData/*31:0*/ __VdlyVal__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32;
    __VdlyVal__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 0;
    CData/*4:0*/ __VdlyDim0__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32;
    __VdlyDim0__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 0;
    CData/*0:0*/ __VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32;
    __VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 0;
    // Body
    __VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0 = 0U;
    __VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 0U;
    if (vlSelfRef.ID_Stage_tb__DOT__reset) {
        __VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0 = 1U;
    } else if (((IData)(vlSelfRef.ID_Stage_tb__DOT__wb_reg_write_in) 
                & (0U != (IData)(vlSelfRef.ID_Stage_tb__DOT__wb_rd_addr_in)))) {
        __VdlyVal__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 
            = vlSelfRef.ID_Stage_tb__DOT__wb_rd_data_in;
        __VdlyDim0__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 
            = vlSelfRef.ID_Stage_tb__DOT__wb_rd_addr_in;
        __VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 1U;
    }
    if (__VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0) {
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[0U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[1U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[2U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[3U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[4U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[5U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[6U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[7U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[8U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[9U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[10U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[11U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[12U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[13U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[14U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[15U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[16U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[17U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[18U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[19U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[20U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[21U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[22U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[23U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[24U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[25U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[26U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[27U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[28U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[29U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[30U] = 0U;
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[31U] = 0U;
    }
    if (__VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32) {
        vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[__VdlyDim0__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32] 
            = __VdlyVal__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32;
    }
}

void VID_Stage_tb___024root___eval_nba(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_nba\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0;
    __Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0 = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyVal__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32;
    __Vinline__nba_sequent__TOP__0___VdlyVal__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 0;
    CData/*4:0*/ __Vinline__nba_sequent__TOP__0___VdlyDim0__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32;
    __Vinline__nba_sequent__TOP__0___VdlyDim0__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32;
    __Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0 = 0U;
        __Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 0U;
        if (vlSelfRef.ID_Stage_tb__DOT__reset) {
            __Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0 = 1U;
        } else if (((IData)(vlSelfRef.ID_Stage_tb__DOT__wb_reg_write_in) 
                    & (0U != (IData)(vlSelfRef.ID_Stage_tb__DOT__wb_rd_addr_in)))) {
            __Vinline__nba_sequent__TOP__0___VdlyVal__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 
                = vlSelfRef.ID_Stage_tb__DOT__wb_rd_data_in;
            __Vinline__nba_sequent__TOP__0___VdlyDim0__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 
                = vlSelfRef.ID_Stage_tb__DOT__wb_rd_addr_in;
            __Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32 = 1U;
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v0) {
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[0U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[1U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[2U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[3U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[4U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[5U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[6U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[7U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[8U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[9U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[10U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[11U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[12U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[13U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[14U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[15U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[16U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[17U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[18U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[19U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[20U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[21U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[22U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[23U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[24U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[25U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[26U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[27U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[28U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[29U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[30U] = 0U;
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[31U] = 0U;
        }
        if (__Vinline__nba_sequent__TOP__0___VdlySet__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32) {
            vlSelfRef.ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array[__Vinline__nba_sequent__TOP__0___VdlyDim0__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32] 
                = __Vinline__nba_sequent__TOP__0___VdlyVal__ID_Stage_tb__DOT__dut__DOT__ID_Register_File__DOT__Register_array__v32;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VID_Stage_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void VID_Stage_tb___024root___timing_ready(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___timing_ready\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he403f4e5__0.ready("@(posedge ID_Stage_tb.clk)");
    }
}

void VID_Stage_tb___024root___timing_resume(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___timing_resume\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_he403f4e5__0.moveToResumeQueue(
                                                          "@(posedge ID_Stage_tb.clk)");
    vlSelfRef.__VtrigSched_he403f4e5__0.resume("@(posedge ID_Stage_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VID_Stage_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VID_Stage_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VID_Stage_tb___024root___eval_phase__act(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_phase__act\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    VID_Stage_tb___024root___eval_triggers_vec__act(vlSelf);
    VID_Stage_tb___024root___timing_ready(vlSelf);
    VID_Stage_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VID_Stage_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VID_Stage_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VID_Stage_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VID_Stage_tb___024root___timing_resume(vlSelf);
        VID_Stage_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VID_Stage_tb___024root___eval_phase__inact(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_phase__inact\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("testbenches\\ID_Stage_tb.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VID_Stage_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VID_Stage_tb___024root___eval_phase__nba(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_phase__nba\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VID_Stage_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VID_Stage_tb___024root___eval_nba(vlSelf);
        VID_Stage_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VID_Stage_tb___024root___eval(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VID_Stage_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("testbenches\\ID_Stage_tb.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("testbenches\\ID_Stage_tb.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VID_Stage_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("testbenches\\ID_Stage_tb.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VID_Stage_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VID_Stage_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VID_Stage_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void VID_Stage_tb___024root____VbeforeTrig_he403f4e5__0(VID_Stage_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root____VbeforeTrig_he403f4e5__0\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.ID_Stage_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ID_Stage_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__ID_Stage_tb__DOT__clk__0 
        = vlSelfRef.ID_Stage_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he403f4e5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he403f4e5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he403f4e5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he403f4e5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VID_Stage_tb___024root___eval_debug_assertions(VID_Stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VID_Stage_tb___024root___eval_debug_assertions\n"); );
    VID_Stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
