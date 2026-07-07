`timescale 1ns/1ps
import cpu_pkg::*;

module PC_Fetch (
    //stall logic 
    input logic clk,
    input logic reset,
    input logic stall_in,

    //redirecting
    input logic redirect_valid_in,
    input logic [31:0] redirect_dest_in,

    //branch prediction logic
    input logic branch_predicted_in, // 1 when predicted taken
    input logic [31:0] branch_dest_in,

    output logic [31:0] current_pc_out
    //output logic [31:0] next_pc_addr_out
);
    logic [31:0] next_pc;
    logic [31:0] current_pc;

    always_comb begin
        if (stall_in)
            next_pc = current_pc;
        else if (redirect_valid_in)
            next_pc = redirect_dest_in;
        else if (branch_predicted_in)
            next_pc = branch_dest_in;
        else    
            next_pc = current_pc + 4;
    end

    always @(posedge clk) begin
        if(reset) begin
            current_pc <= 0;
        end else begin
            current_pc <= next_pc;
        end
    end

    assign current_pc_out = current_pc;
    //assign next_pc_addr_out = next_pc;

endmodule