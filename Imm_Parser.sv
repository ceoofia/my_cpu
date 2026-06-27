/*
    An immediate parser in the decode stage
*/

import cpu_pkg::*;

module Imm_Parser(
    input logic [31:0] instr_data_in,
    input imm_sel imm_type_in,
    output logic [31:0] Imm_out
);

endmodule