`timescale 1ns/1ps
import cpu_pkg::*;

module ID_EX_Reg (
    input clk,
    input reset,
    
    input stall_in,
    input flush_in,

    input cpu_pkg::idex_ctrl_signals_t id_ctrl_signals,
    output cpu_pkg::idex_ctrl_signals_t id_ex_ctrl_signals
);
    always_ff @(posedge clk) begin
        if(reset || stall_in || flush_in) begin
            id_ex_ctrl_signals.alu_en <= 1'b1;
            id_ex_ctrl_signals.alu_op_type <= ALU_NOP;
            id_ex_ctrl_signals.alu_a_src_sel <= ALU_A_NOP;
            id_ex_ctrl_signals.alu_b_src_sel <= ALU_B_NOP;

            id_ex_ctrl_signals.comp_en <= 1'b0;
            id_ex_ctrl_signals.comp_op_type <= NO_COMP;
            id_ex_ctrl_signals.comp_a_src_sel <= COMP_A_NOP;
            id_ex_ctrl_signals.comp_b_src_sel <= COMP_B_NOP;

            id_ex_ctrl_signals.branch_op_type <= NO_BRANCH;
            id_ex_ctrl_signals.jump_op_type <= NO_JUMP;

            id_ex_ctrl_signals.rs1_addr <= 5'h0;
            id_ex_ctrl_signals.use_rs1 <= 1'b0;
            id_ex_ctrl_signals.rs2_addr <= 5'h0;
            id_ex_ctrl_signals.use_rs2 <= 1'b0;
            id_ex_ctrl_signals.rd_addr <= 5'h0;
            id_ex_ctrl_signals.use_rd <= 1'b0;
            id_ex_ctrl_signals.reg_write <= 1'b0;

            id_ex_ctrl_signals.lsu_en <= 1'b0;
            id_ex_ctrl_signals.instr_pc <= 32'h0;
            id_ex_ctrl_signals.lsu_op_type <= NO_LSU;

            id_ex_ctrl_signals.rs1_data <= 32'h0;
            id_ex_ctrl_signals.rs2_data <= 32'h0;

        end else begin
            id_ex_ctrl_signals <= id_ctrl_signals;
        end
    end
endmodule
