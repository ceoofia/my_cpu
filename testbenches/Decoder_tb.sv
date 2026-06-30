import cpu_pkg::*;
`timescale 1ns/1ps

module Decoder_tb;
    logic [31:0] instr_data_in;
    logic instr_valid_in;
    logic [31:0] instr_pc_in;
    logic insert_NOP_bubble_in;
    
    //ALU related
    logic alu_en_out;
    cpu_pkg::alu_op alu_op_out;
    cpu_pkg::alu_a_src alu_a_src_out;
    cpu_pkg::alu_b_src alu_b_src_out;

    //Comparator related
    logic comp_en_out;
    cpu_pkg::comp_op comp_op_out;

    //branch and jump
    cpu_pkg::branch_op branch_op_out;
    cpu_pkg::jump_op jump_op_out;

    //Source and destinations
    logic [4:0] rs1_addr_out; 
    logic use_rs1_out;
    logic [4:0] rs2_addr_out;
    logic use_rs2_out;
    logic [4:0] rd_addr_out;
    logic use_rd_out;
    logic reg_write_out;

    //memory
    logic lsu_en_out;
    logic [6:0] opcode_out;

    //misc
    logic [31:0] instr_pc_out;

    //For Immediate Parser
    cpu_pkg::imm_sel imm_type_out;

    Decoder dut(
        .instr_data_in(instr_data_in),
        .instr_valid_in(instr_valid_in),
        .instr_pc_in(instr_pc_in),
        .insert_NOP_bubble_in(insert_NOP_bubble_in),
        
        //ALU related
        .alu_en_out(alu_en_out),
        .alu_op_out(alu_op_out),
        .alu_a_src_out(alu_a_src_out),
        .alu_b_src_out(alu_b_src_out),

        //Comparator related
        .comp_en_out(comp_en_out),
        .comp_op_out(comp_op_out),

        //branch and jump
        .branch_op_out(branch_op_out),
        .jump_op_out(jump_op_out),

        //Source and destinations
        .rs1_addr_out(rs1_addr_out), 
        .use_rs1_out(use_rs1_out),
        .rs2_addr_out(rs2_addr_out),
        .use_rs2_out(use_rs2_out),
        .rd_addr_out(rd_addr_out),
        .use_rd_out(use_rd_out),
        .reg_write_out(reg_write_out),

        //memory
        .lsu_en_out(lsu_en_out),
        .opcode_out(opcode_out),

        //misc
        .instr_pc_out(instr_pc_out),

        //For Immediate Parser
        .imm_type_out(imm_type_out)
    );



    task automatic instr_parser_basic(
        input int instrnum,
        input [31:0] instr_tb,
        input instr_valid_tb,
        input NOP_bubble_tb
    );  
        instr_data_in = instr_tb;
        instr_valid_in = instr_valid_tb;
        insert_NOP_bubble_in = NOP_bubble_tb;

        #1;
        $display("Instr %0d: 0x%0h", instrnum, instr_tb);
        $display(imm_type_to_string(imm_type_out));
    endtask

    function string imm_type_to_string(cpu_pkg::imm_sel t);
        case (t)
            IMM_I_TYPE: return "IMM_I_TYPE";
            IMM_S_TYPE: return "IMM_S_TYPE";
            IMM_B_TYPE: return "IMM_B_TYPE";
            IMM_U_TYPE: return "IMM_U_TYPE";
            IMM_J_TYPE: return "IMM_J_TYPE";
            default: return "UNKNOWN";
        endcase
    endfunction

    initial begin
        instr_pc_in = 32'h0;

        instr_parser_basic(1, 32'h07b10093, 1'b1, 1'b0);
    end

endmodule