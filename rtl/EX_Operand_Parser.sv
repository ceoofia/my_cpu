`timescale 1ns/1ps
import cpu_pkg::*;

module EX_Operand_Parser(
    input cpu_pkg::alu_a_src alu_a_src_in,
    input cpu_pkg::alu_b_src alu_b_src_in,

    input cpu_pkg::comp_a_src comp_a_src_in,
    input cpu_pkg::comp_b_src comp_b_src_in,

    input logic [31:0] rs1_data_in,
    input logic [31:0] rs2_data_in,

    input logic [31:0] imm_value_in,
    input logic [31:0] instr_pc_in,

    //To ALU
    output logic [31:0] alu_operand_a_out,
    output logic [31:0] alu_operand_b_out,

    output logic [31:0] comp_operand_a_out,
    output logic [31:0] comp_operand_b_out
);

    always_comb begin
        case(alu_a_src_in)
            ALU_A_RS1: alu_operand_a_out = rs1_data_in;
            ALU_A_PC:  alu_operand_a_out = instr_pc_in;
            ALU_A_ZERO: alu_operand_a_out = 32'h0;
            ALU_A_NOP: alu_operand_a_out = 32'h0;
            default: alu_operand_a_out = 32'h0;
        endcase
    end

    always_comb begin
        case(alu_b_src_in)
            ALU_B_RS2: alu_operand_b_out = rs2_data_in;
            ALU_B_IMM: alu_operand_b_out = imm_value_in;
            ALU_B_NOP: alu_operand_b_out = 32'h0;
            default: alu_operand_b_out = 32'h0; 
        endcase
    end

    always_comb begin
        case(comp_a_src_in)
            COMP_A_RS1: comp_operand_a_out = rs1_data_in;
            COMP_A_NOP: comp_operand_a_out = 32'h0;
            default: comp_operand_a_out = 32'h0;
        endcase
    end

    always_comb begin
        case(comp_b_src_in)
            COMP_B_RS2: comp_operand_b_out = rs2_data_in;
            COMP_B_IMM: comp_operand_b_out = imm_value_in;
            COMP_B_NOP: comp_operand_b_out = 32'h0;
            default: comp_operand_b_out = 32'h0;
        endcase
    end
endmodule
