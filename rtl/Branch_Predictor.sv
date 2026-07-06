/*
    a two-bit branch predictor, 8 entry BHT
    2'b00: Strongly Not Taken
    2'b01: Weakly Not Taken
    2'b10: Weakly Taken
    2'b11: Strongly Taken
*/

import cpu_pkg::*;

module Branch_Predictor (
    input logic clk,
    input logic reset,

    input logic [31:0] current_pc_in,

    input logic update_en_in, 
    input logic [31:0] update_pc_in, //coming from EX
    input logic branch_taken_in,

    output logic predicted_taken // predicts whether the branch should be taken or not
);
    logic [2:0] update_index;
    logic [2:0] pc_index;
    logic [1:0] BHT [7:0]; // BHT with 8 entries

    assign update_index = update_pc_in [4:2]; // takes pc as index
    assign pc_index = current_pc_in [4:2];

    integer i;

    always @(posedge clk) begin
        if(reset) begin
            for(i = 0; i < 8; i = i + 1) begin
                BHT[i] <= 2'b01; //initialized as weakly not taken
            end
        end else if (update_en_in) begin
            if(branch_taken_in) begin
                if(BHT[update_index] != 2'b11) BHT[update_index] <= BHT[update_index] + 1;
            end else begin
                if(BHT[update_index] != 2'b00) BHT[update_index] <= BHT[update_index] - 1;
            end
        end
    end
    
    assign predicted_taken = BHT[pc_index] [1];
    
endmodule
