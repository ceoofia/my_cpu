`timescale 1ns/1ps

module PC_Fetch_tb;
    logic clk;
    logic reset;

    logic stall_in;

    //redirecting
    logic redirect_valid_in;
    logic [31:0] redirect_dest_in;

    //branch prediction logic
    logic branch_predicted_in;
    logic [31:0] branch_dest_in;

    logic [31:0] next_pc_addr_out;

    logic [31:0] current_pc_out;

    /*
        TODO: Fix the port and do a sequential TB Check
    */

    PC_Fetch dut (
        .clk(clk),
        .reset(reset),

        .stall_in(stall_in),

        
        .redirect_valid_in(redirect_valid_in),
        .redirect_dest_in(redirect_dest_in),

        .branch_predicted_in(branch_predicted_in),
        .branch_dest_in(branch_dest_in),

        .current_pc_out(current_pc_out)
    );

    task automatic check_curr_pc (
        input int testnum,
        input logic [31:0] expected
    );
        #1;
        assert(current_pc_out == expected) 
            $display("Test %0d passed", testnum);
        else
            $fatal(1, "Test %0d failed. Expected: %0h, DUT: %0h", testnum, expected, current_pc_out);
    endtask
        

    task automatic check_next_pc (
        input int testnum,
        input logic [31:0] expected);
        #1;
        //$display("Current pc is %0h", current_pc_out);
        assert(dut.next_pc == expected) 
            $display("Test %0d passed", testnum);
        else
            $fatal(1, "Test %0d failed. Expected: %0h, DUT: %0h", testnum, expected, dut.next_pc);
    endtask

    task automatic print_curr_pc();
        #1 $display("Current pc is %0h", current_pc_out);
    endtask

    task automatic reset_signals();
        stall_in = 1'b0;
        redirect_valid_in = 1'b0;
        redirect_dest_in = 32'h00001000;
        branch_predicted_in = 1'b0;
        branch_dest_in = 32'h00010000;

        @(posedge clk) reset = 1'b1;
        @(posedge clk) reset = 1'b0;
    endtask


    always #5 clk = ~clk;

    initial begin
        clk = 0;
        
        reset_signals();

        check_curr_pc(1, 32'h0);
        @(posedge clk) check_curr_pc (2, 32'h4);

        print_curr_pc();

        stall_in = 1;
        @(posedge clk) 
        check_curr_pc (3, 32'h4);
        check_next_pc (4, 32'h4);

        stall_in = 0;
        @(posedge clk) 
        check_curr_pc (5, 32'h8);
        check_next_pc (6, 32'hc);

        reset_signals();
        check_curr_pc(7, 32'h0);
        check_next_pc(8, 32'h4);

        redirect_dest_in = 32'hAB00;
        redirect_valid_in = 1'b0;

        @(posedge clk)
        check_curr_pc(9, 32'h4);
        check_next_pc(10, 32'h8);
        
        @(posedge clk)
        redirect_valid_in = 1'b1;
        check_curr_pc(11, 32'h8);
        check_next_pc(12, 32'hAB00);

        @(posedge clk)
        check_curr_pc(13, 32'hAB00);

        reset_signals();

        @(posedge clk)
        branch_dest_in = 32'hBC0;
        branch_predicted_in = 1'b0;

        //print_curr_pc();
        check_curr_pc(14, 32'h4);
        check_next_pc(15, 32'h8);

        @(posedge clk)
        branch_predicted_in = 1'b1;
        check_curr_pc(16, 32'h8);
        check_next_pc(17, 32'hBC0);

        @(posedge clk)
        check_curr_pc(18, 32'hBC0);

        reset_signals();

        check_curr_pc(19, 32'h0);
        
        @(posedge clk)

        print_curr_pc();
        //priority checks
        stall_in = 1'b1;
        redirect_valid_in = 1'b1;
        redirect_dest_in = 32'hAB0;
        branch_predicted_in = 1'b1;
        branch_dest_in = 32'hCD0;

        @(posedge clk)
        check_curr_pc(20, 32'h4);
        check_next_pc(21, 32'h4);

        @(posedge clk)
        stall_in = 1'b0;
        check_curr_pc(22, 32'h4);
        check_next_pc(23, 32'hAB0);

        @(posedge clk)
        redirect_valid_in = 1'b0;
        check_curr_pc(24, 32'hAB0);
        check_next_pc(25, 32'hCD0);
        
        @(posedge clk)
        branch_predicted_in = 1'b0;
        check_curr_pc(26, 32'hCD0);
        check_next_pc(27, 32'hCD4);

        $finish;
    end

endmodule