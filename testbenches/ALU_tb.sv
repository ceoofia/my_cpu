module ALU_tb;
    logic [31:0] alu_operand_a_in;
    logic [31:0] alu_operand_b_in;
    cpu_pkg::alu_op alu_op_in;

    logic [31:0] ALU_result_out;

    ALU dut(
        .alu_operand_a_in(alu_operand_a_in),
        .alu_operand_b_in(alu_operand_b_in),
        .alu_op_in(alu_op_in),

        .ALU_result_out(ALU_result_out)
    );

    task automatic check_op(
        input int testnum,
        input logic [31:0] op_a_tb,
        input logic [31:0] op_b_tb,
        input cpu_pkg::alu_op alu_op_tb,
        input logic [31:0] expected
    );
        alu_operand_a_in = op_a_tb;
        alu_operand_b_in = op_b_tb;
        alu_op_in = alu_op_tb;

        #1;

        assert(ALU_result_out == expected)
            $display("Test %0d passed", testnum);
        else
            $fatal(1, "Test %0d failed. Expected: %0h, DUT: %0h", testnum, expected, ALU_result_out);
    endtask

    initial begin
        //NOP and NULL
        check_op(1, 32'h1234_5678, 32'h8765_4321, ALU_NOP, 32'h00000000);
        check_op(2, 32'h1234_5678, 32'h8765_4321, ALU_NULL, 32'h00000000);

        //ADD
        check_op(3, 32'd5, 32'd7, ALU_ADD, 32'd12);
        check_op(4, 32'hFFFF_FFFF, 32'd1, ALU_ADD, 32'h00000000);
        check_op(5, 32'h8000_0000, 32'h8000_0000, ALU_ADD, 32'h00000000);

        //SUB
        check_op(6, 32'd10, 32'd3, ALU_SUB, 32'd7);
        check_op(7, 32'd3, 32'd10, ALU_SUB, 32'hFFFFFFF9);

        //AND
        check_op(8, 32'hFFFF0000,32'h00FF_00FF, ALU_AND, 32'h00FF0000);

        //OR
        check_op(9, 32'hF0000000,32'h0000_000F, ALU_OR, 32'hF000000F);

        //XOR
        check_op(10, 32'hAAAAAAAA,32'h5555_5555, ALU_XOR, 32'hFFFFFFFF);
        check_op(11, 32'h12345678,32'h1234_5678, ALU_XOR, 32'h00000000);

        $finish;
    end
endmodule