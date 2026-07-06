/*
    An immediate parser in the decode stage
*/

import cpu_pkg::*;

module Imm_Parser(
    input logic [31:0] instr_data_in,
    input cpu_pkg::imm_sel imm_type_in,
    output logic [31:0] Imm_out
);

    always @(*) begin
        case(imm_type_in)
            IMM_I_TYPE: Imm_out = $signed({{21{instr_data_in[31]}},instr_data_in[30:25],instr_data_in[24:21],instr_data_in[20]});
            IMM_S_TYPE: Imm_out = $signed({{21{instr_data_in[31]}},instr_data_in[30:25],instr_data_in[11:8],instr_data_in[7]});
            IMM_B_TYPE: Imm_out = $signed({{20{instr_data_in[31]}},instr_data_in[7],instr_data_in[30:25],instr_data_in[11:8],1'b0});
            IMM_U_TYPE: Imm_out = $signed({instr_data_in[31],instr_data_in[30:20],instr_data_in[19:12],12'b0});
            IMM_J_TYPE: Imm_out = $signed({{12{instr_data_in[31]}},instr_data_in[19:12],instr_data_in[20],instr_data_in[30:25],instr_data_in[24:21],1'b0});
            default: Imm_out = 32'h0;
        endcase
    end

endmodule