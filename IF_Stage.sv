import cpu_pkg::*;

module IF_Stage (
    //General Inputs
    input logic clk,
    input logic reset,
    input logic mem_en,

    //Signals from PC_Fetch
    input logic if_stall_in,
    input logic if_redirect_valid,
    input logic [31:0] if_redirect_dest,
    input logic if_branch_predicted,
    input logic [31:0] if_branch_dest,

    //Signals from Instr Mem
    input logic if_instr_req_valid,
    input logic [31:0] if_instr_req_addr,
    output logic if_instr_valid,
    output logic [31:0] if_instr_data,

    //Signals from Branch Predictor
    input logic if_update_en,
    input logic [31:0] if_update_pc,
    input logic [31:0] if_int_curr_pc_BP,
    input logic if_branch_taken,

    //PC
    output logic [31:0] if_curr_pc
);

    logic [31:0] if_int_current_pc_fetch;
    logic if_int_predicted_taken;

    //Signals from PC_Fetch
    /*
    logic if_stall_in;
    logic [31:0] if_int_current_pc_fetch;
    logic if_redirect_valid;
    logic [31:0] if_redirect_dest;
    logic if_branch_predicted;
    logic [31:0] if_branch_dest;
    logic [31:0] if_next_pc_addr;
    
    

    //Signals from Instr_Mem
    logic if_instr_req_valid;
    logic [31:0] if_instr_req_addr;
    logic if_instr_valid;
    logic [31:0] if_instr_data;

    //Signals from Branch_Predictor
    logic if_update_en;
    logic [31:0] if_update_pc;
    logic [31:0] if_int_curr_pc_BP;
    logic if_branch_taken;
    logic if_predicted_taken;
    */

    PC_Fetch IF_PC_Fetch (
        .clk(clk),
        .reset(reset),

        .stall_in(if_stall_in),
        
        .redirect_valid_in(if_redirect_valid),
        .redirect_dest_in(if_redirect_dest),

        .branch_predicted_in(if_int_predicted_taken),
        .branch_dest_in(if_branch_dest),

        //output
        .current_pc_out(if_int_current_pc_fetch)
    );

    Instr_Mem #(
        .MEM_WIDTH(1024)
    ) IF_Instr_Mem (
        .clk(clk),
        .mem_en(mem_en),

        .instr_req_valid(if_instr_req_valid),
        .instr_req_addr_in(if_instr_req_addr),

        //output
        .instr_valid_out(if_instr_valid),
        .instr_data_out(if_instr_data)
    );

    Branch_Predictor IF_Branch_predictor(
        .clk(clk),
        .reset(reset),

        .current_pc_in(if_int_current_pc_fetch),

        .update_en_in(if_update_en),
        .update_pc_in(if_update_pc),
        .branch_taken_in(if_branch_taken),
        
        //output
        .predicted_taken(if_int_predicted_taken)
    );

endmodule