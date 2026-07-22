/*
    a two-bit branch predictor, 8 entry BHT
    2'b00: Strongly Not Taken
    2'b01: Weakly Not Taken
    2'b10: Weakly Taken
    2'b11: Strongly Taken
*/
`timescale 1ns/1ps
import cpu_pkg::*;

module BHT #(
    parameter BHT_ENTRIES = 32
) (
    input logic clk,
    input logic reset,
    
    input logic [31:0] current_pc_in,
    
    input logic update_en_in,
    input logic [31:0] update_pc_in, //coming from EX
    input logic btb_hit_in,
    input logic actual_taken_in,
    
    output logic predicted_taken // predicts whether the branch should be taken or not
);
    logic [4:0] update_index;
    logic [4:0] pc_index;
    logic [1:0] BHT[0:BHT_ENTRIES - 1]; // BHT with 32 entries
    
    assign update_index = update_pc_in[6:2]; // takes pc as index
    assign pc_index = current_pc_in[6:2];
    
    integer i;
    
    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1) begin
                BHT[i] <= 2'b01; //initialized as weakly not taken
            end
        end
        else if (update_en_in) begin
            if(actual_taken_in) begin
                if (BHT[update_index] != 2'b11) begin
                    BHT[update_index] <= BHT[update_index] + 1;
                end
            end else begin
                if (BHT[update_index] != 2'b00) BHT[update_index] <= BHT[update_index] - 1;
            end
        end
    end
    
    assign predicted_taken = btb_hit_in && BHT[pc_index][1];
    
endmodule