`timescale 1ns/1ps

module Instr_Mem_tb;
    //internal logics
    logic clk;
    logic mem_en; //enables memory

    logic instr_req_valid;
    logic [31:0] instr_req_addr_in; //requested instruction address

    logic instr_valid_out;
    logic [31:0] instr_data_out; //output of requested instruction


    //DUT connection
    Instr_Mem #(
        .MEM_WIDTH(1024)
        ) dut (
        .clk(clk),
        .mem_en(mem_en),

        .instr_req_valid(instr_req_valid),
        .instr_req_addr_in(instr_req_addr_in),

        .instr_valid_out(instr_valid_out),
        .instr_data_out(instr_data_out)
    );

    always #5 clk = ~clk;

    task automatic check (
        input int test_num,
        input logic mem_en_in,
        input logic [31:0] pc, 
        input logic instr_valid,
        input logic [31:0] expected_out,
        input logic expected_valid_out);
        
        //assign input
        mem_en = mem_en_in;
        instr_req_addr_in = pc;
        instr_req_valid = instr_valid;

        @(posedge clk) #1;

        assert (expected_valid_out === instr_valid_out)
            $display("Test %0d, Valid: Passed", test_num);
        else
            $fatal(1, "Test %0d, Valid Out Failed, Expected Valid: %h, DUT Valid: %h",
            test_num, expected_valid_out, instr_valid_out);
        
        assert (expected_out === instr_data_out)
            $display("Test %0d, Data Out Passed", test_num);
        else   
            $fatal(1, "Test %0d, Data Out Failed, Expected Data: %h, DUT data: %h",
            test_num, expected_out, instr_data_out);

    endtask

    

    initial begin
        clk = 0;
        //initializing memory
        dut.instr_memory[0] = 8'h11;
        dut.instr_memory[1] = 8'h11;
        dut.instr_memory[2] = 8'h11;
        dut.instr_memory[3] = 8'h11;

        dut.instr_memory[4] = 8'h22;
        dut.instr_memory[5] = 8'h22;
        dut.instr_memory[6] = 8'h22;
        dut.instr_memory[7] = 8'h22;

        dut.instr_memory[8] = 8'h33;
        dut.instr_memory[9] = 8'h33;
        dut.instr_memory[10] = 8'h33;
        dut.instr_memory[11] = 8'h33;

        dut.instr_memory[12] = 8'h44;
        dut.instr_memory[13] = 8'h44;
        dut.instr_memory[14] = 8'h44;
        dut.instr_memory[15] = 8'h44;

        #20;

        check(1, 1'b1, 32'h0, 1'b1, 32'h11111111, 1'b1);
        check(2, 1'b0, 32'h0, 1'b1, 32'hx, 1'b0); //mem_en
        check(3, 1'b1, 32'h4, 1'b1, 32'h22222222, 1'b1);
        check(4, 1'b1, 32'h8, 1'b1, 32'h33333333, 1'b1);
        check(5, 1'b1, 32'd1095, 1'b1, 32'hx, 1'b0); //out of bound memory reading
        $finish;
    end

endmodule