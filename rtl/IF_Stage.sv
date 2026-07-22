`timescale 1ns/1ps
import cpu_pkg::*;

module IF_Stage #(
  parameter MEM_WIDTH = 1024) (
  //General Inputs
  input logic clk,
  input logic reset,
  input logic mem_en,
  
  //Signals from PC_Fetch
  input logic if_stall_in,
  input logic if_redirect_valid,
  input logic[31:0] if_redirect_dest,
  
  //Signals from Instr Mem
  output logic if_instr_valid,
  output logic[31:0] if_instr_data,
  
  //Signals for Branch Predictor
  input logic if_update_valid,
  input logic[31:0] if_update_pc,
  input logic[31:0] if_update_dest_in,
  input logic if_branch_taken_in,
  
  //PC
  output logic[31:0] if_curr_pc,
  output logic[31:0] if_curr_pc4
);
  logic[31:0] if_int_current_pc_fetch;
  logic[31:0] if_int_current_pc4_fetch;
  logic if_int_predicted_taken;
  logic if_instr_req_valid;
  
  logic[31:0] if_int_predicted_dest;
  
  assign if_curr_pc = if_int_current_pc_fetch;
  assign if_curr_pc4 = if_int_current_pc4_fetch;
  
  always_comb begin
    if (reset == 1'b1 || if_stall_in == 1'b1)
      if_instr_req_valid = 1'b0;
    else
      if_instr_req_valid = 1'b1;
  end
  
  PC_Fetch IF_PC_Fetch(
    .clk(clk),
    .reset(reset),
    
    .stall_in(if_stall_in),
    
    .redirect_valid_in(if_redirect_valid),
    .redirect_dest_in(if_redirect_dest),
    
    .branch_predicted_in(if_int_predicted_taken),
    .branch_dest_in(if_int_predicted_dest),
    
    //output
    .current_pc_out(if_int_current_pc_fetch),
    .current_pc4_out(if_int_current_pc4_fetch)
  );
  
  Instr_Mem#(
    .MEM_WIDTH(MEM_WIDTH)
  ) IF_Instr_Mem(
    .mem_en(mem_en),
    
    .instr_req_valid(if_instr_req_valid),
    .instr_req_addr_in(if_int_current_pc_fetch),
    
    //output
    .instr_valid_out(if_instr_valid),
    .instr_data_out(if_instr_data)
  );
  
  logic if_btb_hit;
  
  BHT#(
    .BHT_ENTRIES(32)
  ) IF_BHT(
    .clk(clk),
    .reset(reset),
    
    .current_pc_in(if_int_current_pc_fetch),
    
    .update_en_in(if_update_valid),
    .update_pc_in(if_update_pc),
    .btb_hit_in(if_btb_hit),
    .actual_taken_in(if_branch_taken_in),
    
    //output
    .predicted_taken(if_int_predicted_taken)
  );
  
  BTB#(
    .BTB_ENTRIES(32)
  ) IF_BTB(
    .clk(clk),
    .reset(reset),
    
    .instr_pc_in(if_int_current_pc_fetch),
    
    .update_pc_in(if_update_pc),
    .update_valid_in(if_update_valid),
    .update_dest_in(if_update_dest_in),
    
    .btb_dest_out(if_int_predicted_dest),
    .btb_hit_out(if_btb_hit)
  );
  
  
endmodule