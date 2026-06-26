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

        //
        .if_instr_valid(if_instr_valid),
        .if_instr_data(if_instr_data),

        .if_update_en(if_update_en),
        .if_update_pc(if_update_pc),
        .if_branch_taken(if_branch_taken),

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
            $fatal("Test %0d failed: Expected: %0h, DUT: %0h", testnum, expected_tb, if_curr_pc);
    endtask

    task automatic check_instr (
        input int testnum,
        input logic instr_valid_tb,
        input logic [31:0] instr_data_tb
    );
        #1;
        assert(if_instr_data == instr_data_tb)
            $display("Test %0d passed", testnum);

        /*
            TODO: Finish this task. also check instr_valid
        */
    endtask

    always #5 clk = ~clk;
endmodule