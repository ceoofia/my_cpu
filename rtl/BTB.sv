`timescale 1ns/1ps

module BTB #(
    parameter BTB_ENTRIES = 32
) (
    input clk,
    input reset,
    input [31:0] instr_pc_in,
    
    input [31:0] update_pc_in,
    input update_valid_in,
    input [31:0] update_dest_in,
    
    output [31:0] btb_dest_out,
    output btb_hit_out
);
    logic [31:0] BTB_dest[0:BTB_ENTRIES - 1]; // a BTB lookup with 32 entries
    logic BTB_valid[0:BTB_ENTRIES - 1];
    logic [24:0] BTB_tag[0:BTB_ENTRIES - 1];
    
    logic [4:0] pc_lookup_index;
    logic [24:0] pc_tag;
    
    logic [4:0] update_pc_index;
    logic [24:0] update_pc_tag;
    
    assign pc_lookup_index = instr_pc_in[6:2];
    assign pc_tag = instr_pc_in[31:7];
    
    assign update_pc_index = update_pc_in[6:2];
    assign update_pc_tag = update_pc_in[31:7];
    
    assign btb_dest_out = BTB_dest[pc_lookup_index];
    assign btb_hit_out = (BTB_tag[pc_lookup_index] == pc_tag) && BTB_valid[pc_lookup_index];
    
    integer i;
    
    always_ff @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 32; i++) begin
                BTB_dest[i] <= '0;
                BTB_valid[i] <= '0;
                BTB_tag[i] <= '0;
            end
        end
        else begin
            if (update_valid_in) begin
                BTB_dest[update_pc_index] <= update_dest_in;
                BTB_tag[update_pc_index] <= update_pc_tag;
                BTB_valid[update_pc_index] <= 1'b1;
            end
        end
    end
    
endmodule