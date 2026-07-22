`timescale 1ns/1ps
import cpu_pkg::*;

module Core (
    input logic clk,
    input logic reset,
    input logic mem_en,
    
    output logic dummy_out
);
    logic if_redirect_valid;
    logic [31:0] if_redirect_dest;
    
    logic if_instr_valid;
    logic [31:0] if_instr_data;
    
    logic if_update_valid;
    logic [31:0] if_BTB_update_pc;
    logic [31:0] if_update_dest_in;
    
    logic [31:0] if_curr_pc;
    logic [31:0] if_curr_pc4;
    
    logic ifid_stall;
    logic if_branch_taken_in;
    
    IF_Stage#(
        .MEM_WIDTH(1024)
    ) Core_IF(
        //General Inputs
        .clk(clk),
        .reset(reset),
        .mem_en(mem_en),
        
        //Signals from PC_Fetch
        .if_stall_in(ifid_stall),
        .if_redirect_valid(if_redirect_valid),
        .if_redirect_dest(if_redirect_dest),
        
        //Signals from Instr Mem
        .if_instr_valid(if_instr_valid),
        .if_instr_data(if_instr_data),
        
        //Signals from Branch Predictor
        .if_update_valid(if_update_valid),
        .if_update_pc(if_BTB_update_pc),
        .if_update_dest_in(if_update_dest_in),
        .if_branch_taken_in(if_branch_taken_in),
        
        //PC
        .if_curr_pc(if_curr_pc),
        .if_curr_pc4(if_curr_pc4)
    );
    
    logic ifid_flush;
    logic ex_pc_redirect_valid;
    
    assign ifid_flush = ex_pc_redirect_valid;
    
    logic id_instr_valid;
    logic [31:0] id_instr_data;
    logic [31:0] id_instr_pc;
    logic [31:0] id_instr_pc4;
    
    IF_ID_Reg Core_IF_ID_Reg(
        .clk(clk),
        .reset(reset),
        .ifid_flush_in(ifid_flush),
        .stall_in(ifid_stall),
        
        .if_id_instr_valid_in(if_instr_valid),
        .if_id_instr_data_in(if_instr_data),
        
        .instr_pc_in(if_curr_pc),
        .instr_pc4_in(if_curr_pc4),
        
        .if_id_instr_valid_out(id_instr_valid),
        .if_id_instr_data_out(id_instr_data),
        .instr_pc_out(id_instr_pc),
        .instr_pc4_out(id_instr_pc4)
    );
    
    logic [31:0] wb_rd_data;
    logic [4:0] wb_rd_addr;
    logic wb_reg_write;
    
    cpu_pkg::idex_ctrl_signals_t idex_ctrl_signals;
    
    ID_Stage Core_ID(
        .clk(clk),
        .reset(reset),
        
        .id_instr_data_in(id_instr_data),
        .id_instr_valid_in(id_instr_valid),
        .id_instr_pc_in(id_instr_pc),
        .id_instr_pc4_in(id_instr_pc4),
        
        .wb_rd_data_in(wb_rd_data),
        .wb_rd_addr_in(wb_rd_addr),
        .wb_reg_write_in(wb_reg_write),
        
        .id_ctrl_signals(idex_ctrl_signals)
    );
    
    logic idex_flush;
    assign idex_flush = ex_pc_redirect_valid;
    
    logic idex_stall;
    
    cpu_pkg::idex_ctrl_signals_t ex_ctrl_signals;
    
    cpu_pkg::fw_rs1_sel idex_fw_rs1_src;
    cpu_pkg::fw_rs2_sel idex_fw_rs2_src;
    
    cpu_pkg::fw_rs1_sel ex_fw_rs1_sel;
    cpu_pkg::fw_rs2_sel ex_fw_rs2_sel;
    
    ID_EX_Reg Core_ID_EX_Reg(
        .clk(clk),
        .reset(reset),
        .fw_rs1_sel_in(idex_fw_rs1_src),
        .fw_rs2_sel_in(idex_fw_rs2_src),
        
        .stall_in(idex_stall),
        .idex_flush_in(idex_flush),
        
        .id_ctrl_signals(idex_ctrl_signals),
        .id_ex_ctrl_signals(ex_ctrl_signals),
        
        .fw_rs1_sel_out(ex_fw_rs1_sel),
        .fw_rs2_sel_out(ex_fw_rs2_sel)
    );
    
    logic [31:0] ex_fw_rs1_data;
    logic [31:0] ex_fw_rs2_data;
    
    logic [31:0] mem_fw_rs1_data;
    logic [31:0] mem_fw_rs2_data;
    
    logic [31:0] wb_fw_rs1_data;
    logic [31:0] wb_fw_rs2_data;
    
    cpu_pkg::exmem_ctrl_signals_t exmem_ctrl_signals;
    
    logic [31:0] ex_pc_redirect_dest;
    
    
    logic [31:0] ex_fw_data_to_reg;
    logic ex_bp_update_valid;
    
    EX_Stage Core_EX(
        .idex_ctrl_signals(ex_ctrl_signals),
        
        .ex_fw_rs1_data(ex_fw_rs1_data),
        .ex_fw_rs2_data(ex_fw_rs2_data),
        .mem_fw_rs1_data(mem_fw_rs1_data),
        .mem_fw_rs2_data(mem_fw_rs2_data),
        .wb_fw_rs1_data(wb_fw_rs1_data),
        .wb_fw_rs2_data(wb_fw_rs2_data),
        
        .fw_rs1_sel_in(ex_fw_rs1_sel),
        .fw_rs2_sel_in(ex_fw_rs2_sel),
        
        .exmem_ctrl_signals(exmem_ctrl_signals),
        .pc_redirect_dest_out(ex_pc_redirect_dest),
        .pc_redirect_valid(ex_pc_redirect_valid),
        
        .ex_fw_data(ex_fw_data_to_reg),
        .ex_bp_update_valid(ex_bp_update_valid)
    );
    
    cpu_pkg::exmem_ctrl_signals_t mem_ctrl_signals;

    assign if_redirect_dest = ex_pc_redirect_dest;
    assign if_redirect_valid = ex_pc_redirect_valid;
    assign if_branch_taken_in = ex_pc_redirect_valid;
    assign if_update_valid = ex_bp_update_valid;
    
    logic [31:0] ex_fw_data;
    
    EX_MEM_Reg Core_EX_MEM_Reg(
        .clk(clk),
        .reset(reset),
        .ex_fw_data_in(ex_fw_data_to_reg),
        
        .ex_ctrl_signals(exmem_ctrl_signals),
        .mem_ctrl_signals(mem_ctrl_signals),
        .ex_fw_data_out(ex_fw_data)
    );
    
    assign ex_fw_rs1_data = ex_fw_data;
    assign ex_fw_rs2_data = ex_fw_data;
    
    cpu_pkg::memwb_ctrl_signals_t memwb_ctrl_signals;
    
    logic [31:0] mem_fw_data;
    logic [31:0] mem_fw_data_to_reg;
    
    MEM_Stage#(
        .MEM_DEPTH(4096),
        .DATA_ADDR(0)
    ) Core_MEM(
        .clk(clk),
        .reset(reset),
        
        .exmem_signals_in(mem_ctrl_signals),
        .mem_signals_out(memwb_ctrl_signals),
        
        .mem_fw_data_out(mem_fw_data_to_reg)
    );
    
    cpu_pkg::memwb_ctrl_signals_t wb_ctrl_signals;
    
    MEM_WB_Reg Core_MEM_WB_Reg(
        .clk(clk),
        .reset(reset),
        .mem_fw_data_in(mem_fw_data_to_reg),
        
        .mem_wb_signals_in(memwb_ctrl_signals),
        .wb_signals_out(wb_ctrl_signals),
        .mem_fw_data_out(mem_fw_data)
    );
    
    assign mem_fw_rs1_data = mem_fw_data;
    assign mem_fw_rs2_data = mem_fw_data;
    
    logic [31:0] wb_fw_data;
    
    WB_Control Core_WB(
        .clk(clk),
        .reset(reset),
        .wb_ctrl_signals_in(wb_ctrl_signals),
        
        .rd_addr_out(wb_rd_addr),
        .rd_data_out(wb_rd_data),
        .rd_write_out(wb_reg_write),
        
        .fw_wb_data_out(wb_fw_data)
    );
    
    assign wb_fw_rs1_data = wb_fw_data;
    assign wb_fw_rs2_data = wb_fw_data;
    
    Forward_Control Core_Fw_Control(
        .rs1_src_addr(idex_ctrl_signals.rs1_addr),
        .rs2_src_addr(idex_ctrl_signals.rs2_addr),
        
        .post_ex_rd_addr(ex_ctrl_signals.rd_addr),
        .post_ex_reg_write(ex_ctrl_signals.reg_write),
        
        .post_mem_rd_addr(mem_ctrl_signals.rd_addr),
        .post_mem_reg_write(mem_ctrl_signals.reg_write),
        
        .post_wb_rd_addr(wb_ctrl_signals.rd_addr),
        .post_wb_reg_write(wb_ctrl_signals.reg_write),
        
        .post_ex_is_load(ex_ctrl_signals.ex_is_load),
        
        .fw_rs1_src_sel(idex_fw_rs1_src),
        .fw_rs2_src_sel(idex_fw_rs2_src)
    );
    
    Stall_Control Core_Stall_Control(
        .ex_rd_addr(exmem_ctrl_signals.rd_addr),
        .ex_is_load(exmem_ctrl_signals.is_load),
        
        .id_rs1_addr(idex_ctrl_signals.rs1_addr),
        .id_rs2_addr(idex_ctrl_signals.rs2_addr),
        
        .id_use_rs1(idex_ctrl_signals.use_rs1),
        .id_use_rs2(idex_ctrl_signals.use_rs2),
        
        .ifid_stall_out(ifid_stall),
        .idex_stall_out(idex_stall)
    );
    
    assign dummy_out = 1'b0;
    
endmodule