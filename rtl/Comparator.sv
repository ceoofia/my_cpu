`timescale 1ns/1ps

import cpu_pkg::*;

module Comparator(
    input logic [31:0] comp_operand_a_in,
    input logic [31:0] comp_operand_b_in,  
    input cpu_pkg::comp_op comp_op_in,

    output logic comp_result_out 
);
    always_comb begin
        case(comp_op_in)
            COMP_EQ: comp_result_out = comp_operand_a_in == comp_operand_b_in;
            COMP_NE: comp_result_out = comp_operand_a_in != comp_operand_b_in;
            COMP_LT: comp_result_out = comp_operand_a_in < comp_operand_b_in;
            COMP_SLT: comp_result_out = comp_operand_a_in < comp_operand_b_in;
            default: comp_result_out = 1'b0;
        endcase
    end

endmodule