`timescale 1ns/1ps
import cpu_pkg::*;

module EX_Operand_Parser(
    input cpu_pkg::idex_ctrl_signals_t ctrl_signals_in,

    //To ALU
    output logic [31:0] alu_operand_a_out,
    output logic [31:0] alu_operand_b_out,
    output cpu_pkg::alu_op alu_op_out,

    output logic [31:0] comp_operand_a_out,
    output logic [31:0] comp_operand_b_out,
    output cpu_pkg::comp_op comp_op_out
);

    always_comb begin
        case(ctrl_signals_in.alu_a_src_sel)
            ALU_A_RS1: alu_operand_a_out = ctrl_signals_in.rs1_data;
            ALU_A_PC:  alu_operand_a_out = ctrl_signals_in.instr_pc;
            ALU_A_ZERO: alu_operand_a_out = 32'h0;
            ALU_A_NOP: alu_operand_a_out = 32'h0;
            default: alu_operand_a_out = 32'h0;
        endcase
    end

    always_comb begin
        case(ctrl_signals_in.alu_b_src_sel)
            ALU_B_RS2: alu_operand_b_out = ctrl_signals_in.rs2_data;
            ALU_B_IMM: alu_operand_b_out = ctrl_signals_in.imm_value;
            ALU_B_NOP: alu_operand_b_out = 32'h0;
            default: alu_operand_b_out = 32'h0; 
        endcase
    end

    always_comb begin
        case(ctrl_signals_in.comp_a_src_sel)
            COMP_A_RS1: comp_operand_a_out = ctrl_signals_in.rs1_data;
            COMP_A_NOP: comp_operand_a_out = 32'h0;
            default: comp_operand_a_out = 32'h0;
        endcase
    end
    
    always_comb begin
        case(ctrl_signals_in.comp_b_src_sel)
            COMP_B_RS2: comp_operand_b_out = ctrl_signals_in.rs2_data;
            COMP_B_IMM: comp_operand_b_out = ctrl_signals_in.imm_value;
            COMP_B_NOP: comp_operand_b_out = 32'h0;
            default: comp_operand_b_out = 32'h0;
        endcase
    end

    assign alu_op_out = ctrl_signals_in.alu_op_type;
    assign comp_op_out = ctrl_signals_in.comp_op_type;


endmodule