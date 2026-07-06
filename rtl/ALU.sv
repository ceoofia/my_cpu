import cpu_pkg::*;

module ALU(
    input logic [31:0] alu_operand_a_in,
    input logic [31:0] alu_operand_b_in,
    input cpu_pkg::alu_op alu_op_in,

    output logic [31:0] ALU_result_out
);
    always_comb begin
        case(alu_op_in)
            ALU_ADD:    ALU_result_out = alu_operand_a_in + alu_operand_b_in;
            ALU_SUB:    ALU_result_out = alu_operand_a_in - alu_operand_b_in;
            ALU_AND:    ALU_result_out = alu_operand_a_in & alu_operand_b_in;
            ALU_OR:     ALU_result_out = alu_operand_a_in | alu_operand_b_in;
            ALU_XOR:    ALU_result_out = alu_operand_a_in ^ alu_operand_b_in;
            ALU_NOP:    ALU_result_out = 32'h0;
            ALU_NULL:   ALU_result_out = 32'h0;
            default:    ALU_result_out = 32'h0;
        endcase
    end
endmodule