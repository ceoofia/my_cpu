`timescale 1ns/1ps
import cpu_pkg::*;

module EX_Stage_tb;
    cpu_pkg::idex_ctrl_signals_t idex_ctrl_signals;

    logic [31:0] ex_fw_rs1_data;
    logic [31:0] ex_fw_rs2_data;

    logic [31:0] mem_fw_rs1_data;
    logic [31:0] mem_fw_rs2_data;

    cpu_pkg::fw_rs1_sel fw_rs1_sel_in;
    cpu_pkg::fw_rs2_sel fw_rs2_sel_in;

    exmem_ctrl_signals_t exmem_ctrl_signals;

    logic [31:0] pc_redirect_dest_tb;
    logic pc_redirect_valid_tb;

    logic [31:0] fw_data_tb; //same as the EX output

    //internal logics
    logic check_result;
    logic check_dest;
    logic check_dest_valid;

    EX_Stage dut(
        .idex_ctrl_signals(idex_ctrl_signals),

        .ex_fw_rs1_data(ex_fw_rs1_data),
        .ex_fw_rs2_data(ex_fw_rs2_data),

        .mem_fw_rs1_data(mem_fw_rs1_data),
        .mem_fw_rs2_data(mem_fw_rs2_data),

        .fw_rs1_sel_in(fw_rs1_sel_in),
        .fw_rs2_sel_in(fw_rs2_sel_in),

        .exmem_ctrl_signals (exmem_ctrl_signals),

        .pc_redirect_dest_out(pc_redirect_dest_tb),
        .pc_redirect_valid(pc_redirect_valid_tb),

        .ex_fw_data(fw_data_tb)
    );

    task automatic reset_signals();
        idex_ctrl_signals.alu_op_type = ALU_NOP;
        idex_ctrl_signals.alu_a_src_sel = ALU_A_NOP;
        idex_ctrl_signals.alu_b_src_sel = ALU_B_NOP;

        idex_ctrl_signals.comp_a_src_sel = COMP_A_NOP;
        idex_ctrl_signals.comp_b_src_sel = COMP_B_NOP;

        idex_ctrl_signals.branch_op_type = NO_BRANCH;
        idex_ctrl_signals.jump_op_type = NO_JUMP;

        idex_ctrl_signals.instr_pc = 32'h0;

        idex_ctrl_signals.rs1_data = 32'd4;
        idex_ctrl_signals.rs2_data = 32'd5;
        idex_ctrl_signals.imm_value = 32'd6;

        ex_fw_rs1_data = 32'd7;
        ex_fw_rs2_data = 32'd8;
        mem_fw_rs1_data = 32'd9;
        mem_fw_rs2_data = 32'd10;

        fw_rs1_sel_in = RS1_NO_FW;
        fw_rs2_sel_in = RS2_NO_FW;

        check_result = 1'b0;
        check_dest = 1'b0;
        check_dest_valid = 1'b0;
    endtask

    task automatic check_output(
        input int testnum,
        input logic [31:0] exp_result_tb,
        input logic [31:0] exp_red_dest_tb,
        input logic exp_red_valid_tb
    );
        $display("-----------------------------------------");
        $display("Test %0d", testnum);

        if (check_result) begin
            assert(exmem_ctrl_signals.ex_result == exp_result_tb)
                $display("Result Match");
            else 
            $fatal(1, "Result Doesn't Match. Exp: %0h, DUT: %0h", exp_result_tb, exmem_ctrl_signals.ex_result);
        end

        if (check_dest) begin
            assert(pc_redirect_dest_tb == exp_red_dest_tb)
                $display("Redirect Dest Match");
            else
                $fatal(1, "Result Doesn't Match. Exp: %0h, DUT: %0h", exp_red_dest_tb, 
                    pc_redirect_dest_tb);
        end

        if (check_dest_valid) begin
            assert(pc_redirect_valid_tb == exp_red_valid_tb)
                $display("Redirect Valid Match");
            else
                $fatal(1, "Redirect Valid Doesn't Match. Exp: %0b, DUT: %0b", exp_red_valid_tb, 
                    pc_redirect_valid_tb);
        end
    endtask

    task automatic set_check(
        input logic set_result,
        input logic set_dest,
        input logic set_valid
    );
        check_result = set_result;
        check_dest = set_dest;
        check_dest_valid = set_valid;
    endtask

    initial begin
        reset_signals();
        //add rs1 and rs2
        idex_ctrl_signals.alu_op_type = ALU_ADD;
        idex_ctrl_signals.alu_a_src_sel = ALU_A_RS1;
        idex_ctrl_signals.alu_b_src_sel = ALU_B_RS2;

        #1;
        set_check(1'b1, 1'b0, 1'b1);
        check_output(1,32'd9,'x,1'b0);

        reset_signals();

        idex_ctrl_signals.alu_op_type = ALU_SUB;
        idex_ctrl_signals.alu_a_src_sel = ALU_A_RS1;
        idex_ctrl_signals.alu_b_src_sel = ALU_B_RS2;

        #1;
        set_check(1'b1, 1'b0, 1'b1);
        check_output(2, 32'hFFFFFFFF /* logic[31:0] */, 'x /* logic[31:0] */, 1'b0 /* logic */);

        reset_signals();

        idex_ctrl_signals.comp_op_type = COMP_SLT;
        idex_ctrl_signals.comp_a_src_sel = COMP_A_RS1;
        idex_ctrl_signals.comp_b_src_sel = COMP_B_RS2;

        #1;
        set_check(1'b1, 1'b0, 1'b1);
        check_output(3, 32'h1 /* logic[31:0] */, 'x /* logic[31:0] */, 1'b0 /* logic */);
        reset_signals();

        //beq test
        idex_ctrl_signals.rs2_data = 32'h4;
        idex_ctrl_signals.comp_a_src_sel = COMP_A_RS1;
        idex_ctrl_signals.comp_b_src_sel = COMP_B_RS2;
        idex_ctrl_signals.comp_op_type = COMP_EQ;
        idex_ctrl_signals.alu_op_type = ALU_ADD;
        idex_ctrl_signals.alu_a_src_sel = ALU_A_PC;
        idex_ctrl_signals.alu_b_src_sel = ALU_B_IMM;
        idex_ctrl_signals.branch_op_type = BRANCH_BEQ;
        idex_ctrl_signals.instr_pc = 32'd10;

        #1;
        set_check(1'b0, 1'b1, 1'b1);
        check_output(4, 'x, 32'd16, 1'b1);
        reset_signals();

        //jal test
        idex_ctrl_signals.alu_op_type = ALU_ADD;
        idex_ctrl_signals.alu_a_src_sel = ALU_A_PC;
        idex_ctrl_signals.alu_b_src_sel = ALU_B_IMM;
        idex_ctrl_signals.jump_op_type = JUMP_JAL;
        idex_ctrl_signals.instr_pc = 32'd12;
        idex_ctrl_signals.imm_value = 32'd24;

        #1;
        set_check(1'b0, 1'b1, 1'b1);
        check_output(5, 'x, 32'd36, 1'b1);
        reset_signals();

        //fw ex data test
        idex_ctrl_signals.alu_op_type = ALU_ADD;
        idex_ctrl_signals.alu_a_src_sel = ALU_A_RS1;
        idex_ctrl_signals.alu_b_src_sel = ALU_B_RS2;
        fw_rs1_sel_in = RS1_FW_EX;
        ex_fw_rs1_data = 32'd15;

        #1;
        set_check(1'b1, 1'b0, 1'b1);
        check_output(6, 32'd20, 'x, 1'b0);
        reset_signals();

        ////fw ex data test
        idex_ctrl_signals.alu_op_type = ALU_ADD;
        idex_ctrl_signals.alu_a_src_sel = ALU_A_RS1;
        idex_ctrl_signals.alu_b_src_sel = ALU_B_RS2;
        fw_rs2_sel_in = RS2_FW_MEM;
        mem_fw_rs2_data = 32'd23;

        #1;
        set_check(1'b1, 1'b0, 1'b1);
        check_output(7, 32'd27, 'x, 1'b0);

        $display("-----------------------------------------");
        $finish;
    end

endmodule
