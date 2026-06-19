//instruction memory for the processor, a 8x1024 MEM

module Instr_Mem #(
    parameter MEM_WIDTH = 1024
    )(
    input logic clk,
    input logic mem_en, //enables memory

    input logic instr_req_valid,
    input logic [31:0] instr_req_addr_in, //requested instruction address

    output logic instr_valid_out,
    output logic [31:0] instr_data_out //output of requested instruction
);
    logic [7:0] instr_memory [MEM_WIDTH - 1 : 0];

    initial begin
        for (int i = 0; i < MEM_WIDTH; i = i + 1) begin
            instr_memory[i] = 0;
        end
    end

    always_ff @(posedge clk) begin 
        if (mem_en == 1'b1 && instr_req_valid == 1'b1) begin
            if(instr_req_addr_in + 3 < MEM_WIDTH) begin // guard against out of bound reading
                instr_valid_out <= 1'b1;
                instr_data_out <= {
                    instr_memory [instr_req_addr_in],
                    instr_memory [instr_req_addr_in + 1],
                    instr_memory [instr_req_addr_in + 2],
                    instr_memory [instr_req_addr_in + 3]
                };
            end 
            else begin
                instr_valid_out <= 1'b0;
                instr_data_out <= 32'hx;
            end 
        end else begin
            instr_valid_out <= 1'b0;
            instr_data_out <= 'x;
        end
    end
endmodule