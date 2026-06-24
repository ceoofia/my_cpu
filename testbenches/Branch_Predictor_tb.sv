`timescale 1ns/1ps

module Branch_Predictor_tb;
    logic clk;
    logic reset;

    logic [31:0] current_pc_in;

    logic update_en_in;
    logic [31:0] update_pc_in; //coming from EX
    logic branch_taken_in;

    logic predicted_taken; // predicts whether the branch should be taken or not

    Branch_Predictor dut (
        .clk(clk),
        .reset(reset),

        .current_pc_in(current_pc_in),

        .update_en_in(update_en_in),
        .update_pc_in(update_pc_in),
        .branch_taken_in(branch_taken_in),

        .predicted_taken(predicted_taken)
    );

    always #5 clk = ~clk;

    int testnum = 1;

    task automatic check_predict (
        input int testnum,
        input logic [31:0] current_pc_tb_in,
        input logic expected_tb
    );

        current_pc_in = current_pc_tb_in;

        #1;
        assert(predicted_taken == expected_tb)
            $display("Test %0d Passed", testnum);
        else
            $fatal(1, "Test %0d Failed, Expected: %0h, DUT: %0h", testnum, expected_tb, predicted_taken);

    endtask

    task automatic branch_update (
        input logic [31:0] pc_tb_in,
        input logic taken_tb_in,
        input logic update_en_tb_in
    );

        update_pc_in = pc_tb_in;
        branch_taken_in = taken_tb_in;
        update_en_in = update_en_tb_in;
        
        //active for only one cycle
        @(posedge clk) #1;

        update_pc_in = 32'h0;
        branch_taken_in = 1'b0;
        update_en_in = 1'b0;

    endtask

    integer i; 

    initial begin
        clk = 0;
        current_pc_in = 32'h0;
        update_en_in = 0;
        update_pc_in = 32'h0;
        branch_taken_in = 0;

        reset = 1;
        #10 reset = 0;
        
        for(i = 0; i < 8; i++) begin
            check_predict(1, 0, 1'b0); // check reset behavior
        end
        
        branch_update (32'h4, 1'b1, 1'b0);
        check_predict(2, 32'h4, 1'b0);

        branch_update (32'h4, 1'b1, 1'b1);
        check_predict (3, 32'h4, 1'b1);

        branch_update (32'h4, 1'b1, 1'b1);
        check_predict (4, 32'h4, 1'b1); // predicted second time
        

        /*
            TODO: Check BHT table each entry using for loop
        */
        $display("BHT table index %0h is %0h", 1, dut.BHT[1]);

        branch_update (32'h4, 1'b0, 1'b1);
        check_predict (5, 32'h4, 1'b1); // falsely predicted taken, -> weakly taken
        $display("BHT table index %0h is %0h", 1, dut.BHT[1]);

        branch_update (32'h4, 1'b0, 1'b1);
        check_predict (6, 32'h4, 1'b0); //weakly not taken
        $display("BHT table index %0h is %0h", 1, dut.BHT[1]);

        branch_update (32'h4, 1'b0, 1'b1);
        check_predict (7, 32'h4, 1'b0); //strongly not taken
        $display("BHT table index %0h is %0h", 1, dut.BHT[1]);

        #10 reset = 1;
        #10 reset = 0;

        for(i = 0; i < 8; i++) begin
            check_predict(1, 0, 1'b0); // check reset behavior
        end

        //check aliasing
        branch_update (32'h4, 1'b1, 1'b1);
        for(i = 0; i < 8; i++) begin
            $display("BHT table index %0h is %0h", i, dut.BHT[i]);
        end
        check_predict (8, 32'h4, 1'b1);
        check_predict (9, 32'h24, 1'b1);

        reset = 1;
        #10 reset = 0;

        branch_update (32'h44, 1'b1, 1'b1);

        for(i = 0; i < 8; i++) begin
            $display("BHT table index %0h is %0h", i, dut.BHT[i]);
        end

        check_predict (10, 32'h4, 1'b1);
        check_predict (11, 32'h24, 1'b1);

        reset = 1;
        #10 reset = 0;

        for(i = 0; i < 8; i++) begin
            branch_update(i*4, 1'b1, 1'b1);
        end

        for(i = 0; i < 8; i++) begin
            check_predict(11 + i, i*4, 1'b1);
            $display("BHT table index %0h is %0h", i, dut.BHT[i]);
        end


        $finish;
    end


endmodule