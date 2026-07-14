`timescale  1ns/1ps

import cpu_pkg::*;

module EX_Result_Parser (
    input logic [31:0] alu_result_in,
    input logic comp_result_in,
    input logic [31:0] rs2_data_in, //used for SWs
    
    input cpu_pkg::lsu_op lsu_op_in,
    input cpu_pkg::branch_op branch_op_in,
    input cpu_pkg::jump_op jump_op_in,
    input cpu_pkg::comp_op comp_op_in,
    input logic [31:0] instr_pc4_in,
    
    output logic [31:0] EX_Result_out,
    
    output logic [31:0] pc_redirect_dest_out,
    output logic pc_redirect_valid_out,
    output logic [31:0] store_data_out
);
    always_comb begin
        if (comp_op_in === COMP_SLT)
            EX_Result_out = {31'b0, comp_result_in};
        else if (jump_op_in === JUMP_JAL || jump_op_in === JUMP_JALR)
            EX_Result_out = instr_pc4_in;
        else
            EX_Result_out = alu_result_in;
    end
    
    always_comb begin
        if (branch_op_in != NO_BRANCH) begin
            pc_redirect_dest_out = alu_result_in;
            pc_redirect_valid_out = comp_result_in;
        end
        else if (jump_op_in == JUMP_JAL) begin
            pc_redirect_dest_out = alu_result_in;
            pc_redirect_valid_out = 1'b1;
        end
        else if (jump_op_in == JUMP_JALR) begin
            pc_redirect_dest_out = {alu_result_in[31:1], 1'b0};
            pc_redirect_valid_out = 1'b1;
        end
        else begin
            pc_redirect_dest_out = 32'h0;
            pc_redirect_valid_out = 1'b0;
        end
    end
    
    //passes on rs2 for store type instructions
    assign store_data_out = (lsu_op_in == SW) ? rs2_data_in : 32'h0;
    
endmodule