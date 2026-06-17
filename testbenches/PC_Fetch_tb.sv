`timescale 1ns/1ps

module PC_Fetch_tb;
    logic stall_in;

    //current pc
    logic [31:0] current_pc_in;

    //redirecting
    logic redirect_valid_in;
    logic [31:0] redirect_dest_in;

    //branch prediction logic
    logic branch_predicted_in;
    logic [31:0] branch_dest_in;

    logic [31:0] next_pc_addr_out;

    PC_Fetch dut (
        .stall_in(stall_in),

        .current_pc_in(current_pc_in),
        
        .redirect_valid_in(redirect_valid_in),
        .redirect_dest_in(redirect_dest_in),

        .branch_predicted_in(branch_predicted_in),
        .branch_dest_in(branch_dest_in),

        .next_pc_addr_out(next_pc_addr_out)
    );

    task automatic check (input logic [31:0] expected);
        #1;
        if(next_pc_addr_out == expected)
            $display("Passed");
        else begin
            $display("Fail: expected: %h, got: %h", expected, next_pc_addr_out);
            $fatal;
        end
    endtask

    initial begin
        stall_in = 1'b0;
        current_pc_in = 32'h00000010;
        redirect_valid_in = 1'b0;
        redirect_dest_in = 32'h00001000;
        branch_predicted_in = 1'b0;
        branch_dest_in = 32'h00010000;

        #1; 
        //default: PC + 4
        check(32'h00000014);

        #1;
        redirect_valid_in = 1'b1;
        #1;
        check(32'h00001000);
        redirect_valid_in = 1'b0;
        
        #1;
        branch_predicted_in = 1'b1;
        #1;
        check(32'h00010000);
        branch_predicted_in = 1'b0;

        #1;
        stall_in = 1'b1;
        #1;
        check(32'h00000010);
        stall_in = 1'b0;

        //priority check
        #1;
        check(32'h00000014);
        branch_predicted_in = 1'b1;
        #1;
        check(32'h00010000);
        redirect_valid_in = 1'b1;
        #1;
        check(32'h00001000);
        stall_in = 1'b1;
        check(32'h00000010);

        $finish;
    end

endmodule