/*
    Note: This testbench tests Decoder and Imm_Parser together
*/


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
    cpu_pkg::imm_sel imm_type;
    logic [31:0] imm;
    cpu_pkg::lsu_op  lsu_op_out;

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
        .lsu_op_out(lsu_op_out),
        .opcode_out(opcode_out),

        //misc
        .instr_pc_out(instr_pc_out),

        //For Immediate Parser
        .imm_type_out(imm_type)
        
    );

    Imm_Parser dut2(
        .instr_data_in(instr_data_in),
        .imm_type_in(imm_type),
        .Imm_out(imm)
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
        $display("------------------------------------");
        $display("Instr %0d: 0x%0h", instrnum, instr_tb);
        $display("Instr Imm type: %0s", imm_type_to_string(imm_type));
        $display("Imm value: %0d", imm);
        $display("ALU src1: %0s, src2: %0s", alu_a_src_to_str(alu_a_src_out), alu_b_src_to_str(alu_b_src_out));
        $display("ALU src1 addr: %0d, src2 addr: %0d, rd addr: %0d, rd write: %0b", rs1_addr_out, rs2_addr_out, rd_addr_out, reg_write_out);
        $display("Comparator: %0b", comp_en_out);
        $display("ALU Operation: %0s", alu_op_to_str(alu_op_out));
        $display("LSU Operation: %0s, LSU unit: %0b", lsu_op_to_str(lsu_op_out), lsu_en_out);
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

    function string alu_a_src_to_str(cpu_pkg::alu_a_src a);
        case(a)
            ALU_A_RS1:  return "RS1";
            ALU_A_PC:   return "PC";
            ALU_A_NOP:  return "NOP";
            ALU_A_ZERO: return "Zero";
            default:    return "UNKNOWN";
        endcase
    endfunction

    function string alu_b_src_to_str(cpu_pkg::alu_b_src b);
        case(b)
            ALU_B_RS2:  return "RS2";
            ALU_B_IMM:  return "Imm";
            ALU_B_NOP:  return "NOP";
            default:    return "UNKNOWN";
        endcase
    endfunction

    function string alu_op_to_str(cpu_pkg::alu_op t);
        case(t)
            ALU_ADD:    return "ALU ADD";
            ALU_SUB:    return "ALU SUB";
            ALU_AND:    return "ALU AND";
            ALU_OR:     return "ALU OR";
            ALU_XOR:    return "ALU XOR";
            ALU_NULL:   return "ALU NULL";
            ALU_NOP:     return "NO_ALU";
            default:    return "UNKNOWN";
        endcase
    endfunction

    function string lsu_op_to_str(cpu_pkg::lsu_op t);
        case(t)
            LW: return "LW";
            SW: return "SW";
            NO_LSU: return "NO_LSU";
            default:    return "UNKNOWN";
        endcase
    endfunction

    initial begin
        instr_pc_in = 32'h0;

        instr_parser_basic(1, 32'h07b10093, 1'b1, 1'b0); // addi x1, x2, 123
        instr_parser_basic(2, 32'h02442ba3, 1'b1, 1'b0); // sw x4, 0x37(x8)
        instr_parser_basic(3, 32'h09748163, 1'b1, 1'b0); // beq x9, x23, 0x83
        instr_parser_basic(4, 32'h042000ef, 1'b1, 1'b0); // jal x1, 66
        instr_parser_basic(5, 32'h12345eb7, 1'b1, 1'b0); // lui x29, 0x12345
        instr_parser_basic(6, 32'h00c780b3, 1'b1, 1'b0); // add x1, x15, x12
        instr_parser_basic(7, 32'h02672403, 1'b1, 1'b0); // lw x8, 38(x14)
        instr_parser_basic(8, 32'h017422b3, 1'b1, 1'b0); // slt x5, x8, x23
        instr_parser_basic(9, 32'h018462b3, 1'b1, 1'b0); // or x5, x8, x24
        instr_parser_basic(10, 32'h018462b3, 1'b1, 1'b1); // NOP bubble test

        $display("------------------------------------");
        $finish;
    end

endmodule