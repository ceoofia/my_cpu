`timescale 1ns / 1ps

import cpu_pkg::*;

module EX_Stage (
    input cpu_pkg::idex_ctrl_signals_t idex_ctrl_signals,

    output cpu_pkg::exmem_ctrl_signals_t exmem_ctrl_signals
);

    logic [31:0] ex_alu_operand_a;
    logic [31:0] ex_alu_operand_b;
    cpu_pkg::alu_op ex_alu_op;

    logic [31:0] ex_comp_operand_a;
    logic [31:0] ex_comp_operand_b;
    cpu_pkg::comp_op ex_comp_op;

    logic [31:0] ex_alu_result;
    logic ex_comp_result;

    EX_Operand_Parser ex_int_operand_parser (
        .ctrl_signals_in(idex_ctrl_signals),

        .alu_operand_a_out(ex_alu_operand_a),
        .alu_operand_b_out(ex_alu_operand_b),
        .alu_op_out(ex_alu_op),

        .comp_operand_a_out(ex_comp_operand_a),
        .comp_operand_b_out(ex_comp_operand_b),
        .comp_op_out(ex_comp_op)
    );

    ALU ex_ALU (
        .alu_operand_a_in(ex_alu_operand_a),
        .alu_operand_b_in(ex_alu_operand_b),
        .alu_op_in(ex_alu_op),

        .ALU_result_out(ex_alu_result)
    );

    Comparator ex_comp (
        .comp_operand_a_in(ex_comp_operand_a),
        .comp_operand_b_in(ex_comp_operand_b),  
        .comp_op_in(ex_comp_op),

        .comp_result_out(ex_comp_result)
    );
    
    /*
        TODO: fix the pass bundles, do not pass the whole thing 
    */
    EX_Result_Parser ex_int_result_parser (
        input logic [31:0] alu_result_in,
        input logic comp_result_in,

        input cpu_pkg::idex_ctrl_signals_t ctrl_signals_in,

        output logic [31:0] EX_Result_out,

        output logic [31:0] pc_redirect_dest_out,
        output logic pc_redirect_valid_out
    )

endmodule