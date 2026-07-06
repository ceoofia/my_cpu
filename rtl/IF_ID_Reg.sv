module IF_ID_Reg (
    input logic clk,
    input logic reset,

    input logic if_id_instr_valid_in,
    input logic [31:0] if_id_instr_data_in,
    input logic [31:0] instr_pc_in,

    output logic if_id_instr_valid_out,
    output logic [31:0] if_id_instr_data_out,
    output logic [31:0] instr_pc_out
);
    always_ff @(posedge clk) begin
        if(reset) begin
            if_id_instr_valid_out <= 0;
            if_id_instr_data_out <= 32'h0;
            instr_pc_out <= 32'h0;
        end else begin
            if_id_instr_valid_out <= if_id_instr_valid_in;
            if_id_instr_data_out <= if_id_instr_data_in;
            instr_pc_out <= instr_pc_in;
        end
    end
endmodule