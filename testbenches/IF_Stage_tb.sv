module IF_Stage_tb;
    logic clk;
    logic reset;
    logic mem_en;

    //Signals from PC_Fetch
    logic if_stall_in;
    logic if_redirect_valid;
    logic [31:0] if_redirect_dest;
    logic [31:0] if_branch_dest;

    //Signals from Instr Mem
    logic if_instr_valid;
    logic [31:0] if_instr_data;

    //Signals from Branch Predictor
    logic if_update_en;
    logic [31:0] if_update_pc;
    logic if_branch_taken;

    //PC
    logic [31:0] if_curr_pc;

    IF_Stage #(
        .MEM_WIDTH(1024)
    ) dut (
        .clk(clk),
        .reset(reset),
        .mem_en(mem_en),

        .if_stall_in(if_stall_in),
        .if_redirect_valid(if_redirect_valid),
        .if_redirect_dest(if_redirect_dest),
        .if_branch_dest(if_branch_dest), 

        //output
        .if_instr_valid(if_instr_valid),
        .if_instr_data(if_instr_data),

        .if_update_en(if_update_en),
        .if_update_pc(if_update_pc),
        .if_branch_taken(if_branch_taken),

        //output
        .if_curr_pc(if_curr_pc)
    );

    task automatic check_curr_pc (
        input int testnum,
        input logic [31:0] expected_tb
    );
        #1;
        assert(if_curr_pc == expected_tb)
            $display("Test %0d passed", testnum);
        else
            $fatal(1, "Test %0d failed: Expected: %0h, DUT: %0h", testnum, expected_tb, if_curr_pc);
    endtask

    task automatic check_instr (
        input int testnum,
        input logic instr_valid_tb,
        input logic [31:0] instr_data_tb
    );
        #1;
        assert(if_instr_data === instr_data_tb && if_instr_valid == instr_valid_tb)
            $display("Test %0d passed", testnum);
        else
            $fatal(1, "Test %0d Failed, Expected Valid: %0b, DUT Valid: %0b, Expected Instr Data: %0h. DUT Instr Data: %0h",
                testnum, instr_valid_tb, if_instr_valid, instr_data_tb, if_instr_data);
    endtask

    task automatic reset_signals();
        #1;
        mem_en = 1'b1;

        if_stall_in = 1'b0;
        if_redirect_valid = 1'b0;
        if_redirect_dest = 32'h0;
        if_branch_dest = 32'h0;
        
        if_update_en = 1'b0;
        if_update_pc = 32'h0;
        if_branch_taken = 1'b1;

        @(posedge clk) reset = 1'b1;
        @(posedge clk) reset = 1'b0;

    endtask

    always #5 clk = ~clk;

    initial begin
        clk = 0;
        reset_signals();
        
        //initializing memories
        dut.IF_Instr_Mem.instr_memory[0] = 8'h11;
        dut.IF_Instr_Mem.instr_memory[1] = 8'h11;
        dut.IF_Instr_Mem.instr_memory[2] = 8'h11;
        dut.IF_Instr_Mem.instr_memory[3] = 8'h11;

        dut.IF_Instr_Mem.instr_memory[4] = 8'h22;
        dut.IF_Instr_Mem.instr_memory[5] = 8'h22;
        dut.IF_Instr_Mem.instr_memory[6] = 8'h22;
        dut.IF_Instr_Mem.instr_memory[7] = 8'h22;

        dut.IF_Instr_Mem.instr_memory[8] = 8'h33;
        dut.IF_Instr_Mem.instr_memory[9] = 8'h33;
        dut.IF_Instr_Mem.instr_memory[10] = 8'h33;
        dut.IF_Instr_Mem.instr_memory[11] = 8'h33;

        dut.IF_Instr_Mem.instr_memory[12] = 8'h44;
        dut.IF_Instr_Mem.instr_memory[13] = 8'h44;
        dut.IF_Instr_Mem.instr_memory[14] = 8'h44;
        dut.IF_Instr_Mem.instr_memory[15] = 8'h44;

        dut.IF_Instr_Mem.instr_memory[100] = 8'h55;
        dut.IF_Instr_Mem.instr_memory[101] = 8'h55;
        dut.IF_Instr_Mem.instr_memory[102] = 8'h55;
        dut.IF_Instr_Mem.instr_memory[103] = 8'h55;

        dut.IF_Instr_Mem.instr_memory[104] = 8'h66;
        dut.IF_Instr_Mem.instr_memory[105] = 8'h66;
        dut.IF_Instr_Mem.instr_memory[106] = 8'h66;
        dut.IF_Instr_Mem.instr_memory[107] = 8'h66;

        dut.IF_Instr_Mem.instr_memory[108] = 8'h77;
        dut.IF_Instr_Mem.instr_memory[109] = 8'h77;
        dut.IF_Instr_Mem.instr_memory[110] = 8'h77;
        dut.IF_Instr_Mem.instr_memory[111] = 8'h77;

        dut.IF_Instr_Mem.instr_memory[200] = 8'h88;
        dut.IF_Instr_Mem.instr_memory[201] = 8'h88;
        dut.IF_Instr_Mem.instr_memory[202] = 8'h88;
        dut.IF_Instr_Mem.instr_memory[203] = 8'h88;

        dut.IF_Instr_Mem.instr_memory[204] = 8'h99;
        dut.IF_Instr_Mem.instr_memory[205] = 8'h99;
        dut.IF_Instr_Mem.instr_memory[206] = 8'h99;
        dut.IF_Instr_Mem.instr_memory[207] = 8'h99;

        @(posedge clk) 
        check_curr_pc(1, 32'h4);
        check_instr(2, 1'b1, 32'h22222222);

        @(posedge clk)
        check_curr_pc(3, 32'h8);
        check_instr(4, 1'b1, 32'h33333333);
        if_stall_in = 1'b1;

        @(posedge clk)
        check_curr_pc(5, 32'h8);
        check_instr(6, 1'b0, 32'hx);
        if_stall_in = 1'b0;

        @(posedge clk)
        check_curr_pc(7, 32'd12);
        check_instr(8, 1'b1, 32'h44444444);
        if_redirect_valid = 1'b1;
        if_redirect_dest = 32'd100;

        @(posedge clk)
        check_curr_pc(9, 32'd100);
        check_instr(10, 1'b1, 32'h55555555);
        if_redirect_valid = 1'b0;

        $finish;
    end


endmodule