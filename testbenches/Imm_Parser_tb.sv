module Imm_Parser_tb;

    logic [31:0] instr_data_in;
    imm_sel imm_type_in;
    logic [31:0] Imm_out;

    Imm_Parser dut (
        .instr_data_in(instr_data_in),
        .imm_type_in(imm_type_in),
        .Imm_out(Imm_out)
    );

    task automatic check (
        input int testnum,
        input logic [31:0] test_instr, 
        input imm_sel imm_type_in_tb,
        input logic [31:0] expected_tb
    );
        instr_data_in = test_instr;
        imm_type_in = imm_type_in_tb;

        #1;
        assert(Imm_out == expected_tb) 
            $display("Test %0d passed", testnum);
        else
            $fatal(1, "Test %0d failed, Expected: %0h, DUT: %0h", testnum, expected_tb, Imm_out);
    endtask

    initial begin

        check(1, 32'h78710093, IMM_I_TYPE, 32'd1927);       //addi x1, x2, 1927, I type
        check(2, 32'h124000ef, IMM_J_TYPE, 32'd292);        //jal x1, 292, J type
        check(3, 32'h05f4a0b7, IMM_U_TYPE, 32'h5f4a000);    //lui x1, 24394, U type
        check(4, 32'h00208e63, IMM_B_TYPE, 32'd28);         //beq x1, x2, 28, B type
        check(5, 32'h001124a3, IMM_S_TYPE, 32'd9);          //sw x1, 9(x2), S type
        
        $finish;
    end



endmodule