`timescale 1ns / 1ps

import cpu_pkg::*;

module EX_Stage (
    input cpu_pkg::idex_ctrl_signals_t idex_ctrl_signals,
    
    input logic [31:0] ex_fw_rs1_data,
    input logic [31:0] ex_fw_rs2_data,
    
    input logic [31:0] mem_fw_rs1_data,
    input logic [31:0] mem_fw_rs2_data,
    
    input logic [31:0] wb_fw_rs1_data,
    input logic [31:0] wb_fw_rs2_data,
    
    input cpu_pkg::fw_rs1_sel fw_rs1_sel_in,
    input cpu_pkg::fw_rs2_sel fw_rs2_sel_in,
    
    output cpu_pkg::exmem_ctrl_signals_t exmem_ctrl_signals,
    
    //goes back to fetch stage
    output logic [31:0] pc_redirect_dest_out,
    output logic pc_redirect_valid,
    
    output logic [31:0] ex_fw_data,
    output logic ex_bp_update_valid
);
    logic [31:0] ex_rs1_data;
    logic [31:0] ex_rs2_data;
    
    logic [31:0] ex_alu_operand_a;
    logic [31:0] ex_alu_operand_b;
    
    logic [31:0] ex_comp_operand_a;
    logic [31:0] ex_comp_operand_b;
    
    logic [31:0] ex_alu_result;
    logic ex_comp_result;
    
    logic [31:0] ex_int_result;
    
    logic [31:0] ex_int_redir_dest;
    logic ex_int_redir_valid;
    
    logic [31:0] ex_store_data;
    
    assign exmem_ctrl_signals.rd_addr = idex_ctrl_signals.rd_addr;
    assign exmem_ctrl_signals.use_rd = idex_ctrl_signals.use_rd;
    assign exmem_ctrl_signals.reg_write = idex_ctrl_signals.reg_write;
    
    assign exmem_ctrl_signals.lsu_en = idex_ctrl_signals.lsu_en;
    assign exmem_ctrl_signals.lsu_op_type = idex_ctrl_signals.lsu_op_type;
    
    assign exmem_ctrl_signals.ex_result = ex_int_result;
    assign exmem_ctrl_signals.store_data = ex_store_data;
    
    assign exmem_ctrl_signals.wb_src_sel = idex_ctrl_signals.wb_src_sel;
    assign exmem_ctrl_signals.is_load = idex_ctrl_signals.ex_is_load;
    
    assign pc_redirect_dest_out = ex_int_redir_dest;
    assign pc_redirect_valid = ex_int_redir_valid;
    
    assign ex_fw_data = ex_int_result;
    
    Forward_Mux ex_fwd_mux(
        .rs1_fw_ex_data(ex_fw_rs1_data),
        .rs2_fw_ex_data(ex_fw_rs2_data),
        
        .rs1_fw_mem_data(mem_fw_rs1_data),
        .rs2_fw_mem_data(mem_fw_rs2_data),
        
        .rs1_fw_wb_data(wb_fw_rs1_data),
        .rs2_fw_wb_data(wb_fw_rs2_data),
        
        .fw_rs1_sel_in(fw_rs1_sel_in),
        .fw_rs2_sel_in(fw_rs2_sel_in),
        
        .rs1_data_in(idex_ctrl_signals.rs1_data),
        .rs2_data_in(idex_ctrl_signals.rs2_data),
        
        .fw_mux_rs1_data_out(ex_rs1_data),
        .fw_mux_rs2_data_out(ex_rs2_data)
    );
    
    EX_Operand_Parser ex_int_operand_parser(
        .alu_a_src_in(idex_ctrl_signals.alu_a_src_sel),
        .alu_b_src_in(idex_ctrl_signals.alu_b_src_sel),
        
        .comp_a_src_in(idex_ctrl_signals.comp_a_src_sel),
        .comp_b_src_in(idex_ctrl_signals.comp_b_src_sel),
        
        .rs1_data_in(ex_rs1_data),
        .rs2_data_in(ex_rs2_data),
        
        .imm_value_in(idex_ctrl_signals.imm_value),
        .instr_pc_in(idex_ctrl_signals.instr_pc),
        
        //To ALU
        .alu_operand_a_out(ex_alu_operand_a),
        .alu_operand_b_out(ex_alu_operand_b),
        
        .comp_operand_a_out(ex_comp_operand_a),
        .comp_operand_b_out(ex_comp_operand_b)
    );
    
    ALU ex_ALU(
        .alu_operand_a_in(ex_alu_operand_a),
        .alu_operand_b_in(ex_alu_operand_b),
        .alu_op_in(idex_ctrl_signals.alu_op_type),
        
        .ALU_result_out(ex_alu_result)
    );
    
    Comparator ex_comp(
        .comp_operand_a_in(ex_comp_operand_a),
        .comp_operand_b_in(ex_comp_operand_b),
        .comp_op_in(idex_ctrl_signals.comp_op_type),
        
        .comp_result_out(ex_comp_result)
    );
    
    EX_Result_Parser ex_int_result_parser(
        .alu_result_in(ex_alu_result),
        .comp_result_in(ex_comp_result),
        .rs2_data_in(ex_rs2_data),
        
        .lsu_op_in(idex_ctrl_signals.lsu_op_type),
        .branch_op_in(idex_ctrl_signals.branch_op_type),
        .jump_op_in(idex_ctrl_signals.jump_op_type),
        .comp_op_in(idex_ctrl_signals.comp_op_type),
        .instr_pc4_in(idex_ctrl_signals.instr_pc4),
        
        .EX_Result_out(ex_int_result),
        
        .pc_redirect_dest_out(ex_int_redir_dest),
        .pc_redirect_valid_out(ex_int_redir_valid),
        .store_data_out(ex_store_data),
        .bp_update_valid_out(ex_bp_update_valid)
    );
    
endmodule