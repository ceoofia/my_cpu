`timescale 1ns/1ps
 
module Register_File_tb;
    logic clk;
    logic reset;
    logic [4:0] rs1_addr_in;
    logic [31:0] rs1_data_out;

    logic [4:0] rs2_addr_in;
    logic [31:0] rs2_data_out;

    logic [4:0] rd_addr_in;
    logic [31:0] rd_data_in;
    logic write_en_in;

    Register_File #(
        .ADDR_WIDTH(5),
        .DATA_WIDTH(32)
    ) dut (
        .clk(clk),
        .reset(reset),
        .rs1_addr_in(rs1_addr_in),
        .rs1_data_out(rs1_data_out),

        .rs2_addr_in(rs2_addr_in),
        .rs2_data_out(rs2_data_out),

        .rd_addr_in(rd_addr_in),
        .rd_data_in(rd_data_in),
        .write_en_in(write_en_in)
    );
    
    task automatic check_element_direct (
        input int testnum,
        input logic [4:0] addr_tb,
        input logic [31:0] expected_tb
    );
        #1;
        assert(dut.Register_array[addr_tb] == expected_tb);
        else
            $fatal(1, "Test %0d failed. Expected : %0h, DUT: %0h", testnum, expected_tb, dut.Register_array[addr_tb]);
    endtask

    task automatic check_element_1 (
        input int testnum,
        input logic [4:0] addr_tb,
        input logic [31:0] expected_tb
    ); 
        rs1_addr_in = addr_tb;
        #1;
        assert(rs1_data_out == expected_tb)
            $display("Test %0d passed", testnum);
        else
            $fatal(1, "Test %0d failed, Expected: %0h, DUT: %0h", testnum, expected_tb, rs1_data_out);
    endtask

    task automatic check_element_2 (
        input int testnum,
        input logic [4:0] addr_tb,
        input logic [31:0] expected_tb
    ); 
        rs2_addr_in = addr_tb;
        #1;
        assert(rs2_data_out == expected_tb)
            $display("Test %0d passed", testnum);
        else
            $fatal(1, "Test %0d failed, Expected: %0h, DUT: %0h", testnum, expected_tb, rs2_data_out);
    endtask

    task automatic drive_reg (
        input logic [4:0] addr_tb,
        input logic [31:0] data_tb
    );
        @(posedge clk)
        rd_addr_in = addr_tb;
        rd_data_in = data_tb;
        write_en_in = 1'b1;

        @(posedge clk)
        write_en_in = 1'b0;
    endtask


    always #5 clk = ~clk;

    integer i;
    initial begin
        clk = 0;
        @(posedge clk) reset = 1;
        @(posedge clk) reset = 0;

        #1;
        for(i = 0; i < 32; i = i + 1) begin
            check_element_direct(0, i, 32'h0); //check reset behavior
        end

        drive_reg(5'h0, 32'h12345);
        check_element_1(1, 5'h0, 32'h0); 

        drive_reg(5'h3, 32'h33);
        drive_reg(5'h4, 32'h44);

        @(posedge clk)
        check_element_1(2, 5'h3, 32'h33);
        check_element_2(3, 5'h4, 32'h44);

        drive_reg(5'h5, 32'h55);

        check_element_1(4, 5'h5, 32'h55);
        check_element_2(5, 5'h5, 32'h55); //simultaneous reads
        
        $finish;    
    end
endmodule