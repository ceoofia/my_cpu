/*
    a two-bit branch predictor, 8 entry BHT
    2'b00: Strongly Not Taken
    2'b01: Weakly Not Taken
    2'b10: Weakly Taken
    2'b11: Strongly Taken
*/
module Branch_Predictor (
    input logic clk,
    input logic reset,

    input [31:0] current_pc_in,

    input update_en_in, 
    input update_pc_in, //coming from EX
    input branch_taken_in,

    output predicted_taken // predicts whether the branch should be taken or not
);
    logic [2:0] index;
    logic [1:0] BHT [0:2]; // BHT with 8 entries

    assign index = current_pc_in [4:2] // takes pc as index

    always @(posedge clk) begin
        
    end

    
endmodule