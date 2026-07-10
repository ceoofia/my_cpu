`timescale  1ns/1ps

import cpu_pkg::*;

module EX_Result_Parser (
    input logic [31:0] alu_result_in,
    input logic comp_result_in,

    input cpu_pkg::branch_op branch_op_in,
    input cpu_pkg::jump_op jump_op_in,
    input cpu_pkg::comp_op comp_op_in,

    output logic [31:0] EX_Result_out,

    output logic [31:0] pc_redirect_dest_out,
    output logic pc_redirect_valid_out
);
    always_comb begin
        if(comp_op_in === COMP_SLT)
            EX_Result_out = {31'b0,comp_result_in};
        else
            EX_Result_out = alu_result_in;
    end

    always_comb begin
        if(branch_op_in != NO_BRANCH) begin
            pc_redirect_dest_out = alu_result_in;
            pc_redirect_valid_out = comp_result_in;
        end else if (jump_op_in == JUMP_JAL) begin
            pc_redirect_dest_out = alu_result_in;
            pc_redirect_valid_out = 1'b1;
        end else if(jump_op_in == JUMP_JALR) begin
            pc_redirect_dest_out = {alu_result_in[31:1],1'b0};
            pc_redirect_valid_out = 1'b1;
        end else begin
            pc_redirect_dest_out = 32'h0;
            pc_redirect_valid_out = 1'b0;
        end
    end
endmodule