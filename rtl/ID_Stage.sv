`timescale 1ns/1ps
import cpu_pkg::*;

module ID_Stage (
    input logic clk,
    input logic reset,

    input logic [31:0] id_instr_data_in,
    input logic id_instr_valid_in,
    input logic [31:0] id_instr_pc_in,

    input logic [31:0] wb_rd_data_in,
    input logic [4:0] wb_rd_addr_in,
    input logic wb_reg_write_in,

    output cpu_pkg::idex_ctrl_signals_t id_ctrl_signals
);

    logic id_alu_en;
    cpu_pkg::alu_op id_alu_op; 
    cpu_pkg::alu_a_src id_alu_a_src;
    cpu_pkg::alu_b_src id_alu_b_src;

    //Comparator related
    logic id_comp_en;
    cpu_pkg::comp_op id_comp_op;
    cpu_pkg::comp_a_src id_comp_a_src;
    cpu_pkg::comp_b_src id_comp_b_src;

    //branch and jump
    cpu_pkg::branch_op id_branch_op;
    cpu_pkg::jump_op id_jump_op;

    //Source and destinations
    logic [4:0] id_rs1_addr; 
    logic id_use_rs1;
    logic [4:0] id_rs2_addr;
    logic id_use_rs2;
    logic [4:0] id_rd_addr;
    logic id_use_rd;
    logic id_reg_write;

    logic [31:0] id_rs1_data;
    logic [31:0] id_rs2_data;

    //memory
    logic id_lsu_en;
    logic [6:0] id_opcode;
    cpu_pkg::lsu_op  id_lsu_op;

    //misc
    logic [31:0] id_instr_pc;

    logic id_stall;

    //For Immediate Parser
    cpu_pkg::imm_sel id_imm_type;
    logic [31:0] id_imm;

    always_comb begin
        id_ctrl_signals.alu_en      = id_alu_en;
        id_ctrl_signals.alu_op_type      = id_alu_op;
        id_ctrl_signals.alu_a_src_sel   = id_alu_a_src;
        id_ctrl_signals.alu_b_src_sel   = id_alu_b_src;

        id_ctrl_signals.comp_en     = id_comp_en;
        id_ctrl_signals.comp_op_type     = id_comp_op;
        id_ctrl_signals.comp_a_src_sel     = id_comp_a_src;
        id_ctrl_signals.comp_b_src_sel     = id_comp_b_src;

        id_ctrl_signals.branch_op_type   = id_branch_op;
        id_ctrl_signals.jump_op_type     = id_jump_op;

        id_ctrl_signals.rs1_addr    = id_rs1_addr;
        id_ctrl_signals.use_rs1     = id_use_rs1;
        id_ctrl_signals.rs2_addr    = id_rs2_addr;
        id_ctrl_signals.use_rs2     = id_use_rs2;
        id_ctrl_signals.rd_addr     = id_rd_addr;
        id_ctrl_signals.use_rd      = id_use_rd;
        id_ctrl_signals.reg_write   = id_reg_write;

        id_ctrl_signals.lsu_en      = id_lsu_en;

        id_ctrl_signals.instr_pc    = id_instr_pc;

        id_ctrl_signals.lsu_op_type = id_lsu_op;
        id_ctrl_signals.imm_value   = id_imm;

        id_ctrl_signals.rs1_data    = id_rs1_data;
        id_ctrl_signals.rs2_data    = id_rs2_data;
    end
    //assigning outputs
    
    Decoder ID_Decoder (
    .instr_data_in(id_instr_data_in),
    .instr_valid_in(id_instr_valid_in),
    .instr_pc_in(id_instr_pc_in),
    .insert_NOP_bubble_in(id_stall),

    .alu_en_out(id_alu_en),
    .alu_op_out(id_alu_op),
    .alu_a_src_out(id_alu_a_src),
    .alu_b_src_out(id_alu_b_src),

    .comp_en_out(id_comp_en),
    .comp_op_out(id_comp_op),
    .comp_a_src_out(id_comp_a_src),
    .comp_b_src_out(id_comp_b_src),

    .branch_op_out(id_branch_op),
    .jump_op_out(id_jump_op),

    .rs1_addr_out(id_rs1_addr),
    .use_rs1_out(id_use_rs1),
    .rs2_addr_out(id_rs2_addr),
    .use_rs2_out(id_use_rs2),
    .rd_addr_out(id_rd_addr),
    .use_rd_out(id_use_rd),
    .reg_write_out(id_reg_write),

    .lsu_en_out(id_lsu_en),
    .opcode_out(id_opcode),

    .instr_pc_out(id_instr_pc),

    .imm_type_out(id_imm_type),
    .lsu_op_out(id_lsu_op)
);

Stall_Controller ID_Stall_Controller (
    .dummy_inputs(1'b0), //TODO: ADD the inputs later

    .stall_out(id_stall)
);

Imm_Parser ID_Imm_Parser (
    .instr_data_in(id_instr_data_in),
    .imm_type_in(id_imm_type),
    .Imm_out(id_imm)
);

Register_File #(
    .ADDR_WIDTH(5),
    .DATA_WIDTH(32)
) ID_Register_File (
    .clk(clk),
    .reset(reset),

    .rs1_addr_in(id_rs1_addr),
    .rs1_data_out(id_rs1_data),

    .rs2_addr_in(id_rs2_addr),
    .rs2_data_out(id_rs2_data),

    .rd_addr_in(wb_rd_addr_in),
    .rd_data_in(wb_rd_data_in),
    .write_en_in(wb_reg_write_in)
);
    

endmodule
