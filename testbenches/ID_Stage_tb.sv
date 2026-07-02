import cpu_pkg::*;

module ID_Stage_tb;
    logic clk;
    logic reset;

    logic [31:0] id_instr_data_in;
    logic id_instr_valid_in;
    logic [31:0] id_instr_pc_in;

    logic [31:0] wb_rd_data_in;
    logic [4:0] wb_rd_addr_in;
    logic wb_reg_write_in;

    cpu_pkg::idex_ctrl_signals_t dut_id_ctrl_signals;

    ID_Stage dut(
        .clk(clk),
        .reset(reset),

        .id_instr_data_in(id_instr_data_in),
        .id_instr_valid_in(id_instr_valid_in),
        .id_instr_pc_in(id_instr_pc_in),

        .wb_rd_data_in(wb_rd_data_in),
        .wb_rd_addr_in(wb_rd_addr_in),
        .wb_reg_write_in(wb_reg_write_in),

        .id_ctrl_signals(dut_id_ctrl_signals)
    );

    task automatic check_id (
        input string instr,
        input cpu_pkg::idex_ctrl_signals_t expected
    ); 
        assert (dut_id_ctrl_signals == expected)
            $display("Test on %0s passed", instr);
        else
            $fatal("Test on %0s failed. Expected: %p, DUT: %p", expected, dut_id_ctrl_signals);
        
            $display("---------------------------------------");
    endtask

    function automatic cpu_pkg::idex_ctrl_signals_t default_nop();
        cpu_pkg::idex_ctrl_signals_t exp;
        exp = 'x;
        return exp;
    endfunction

    task automatic drive_signal(
        input logic [31:0] instr_tb
    );
        id_instr_data_in = instr_tb;
        #1;
    endtask

    always #5 clk = ~clk;

    initial begin
        cpu_pkg::idex_ctrl_signals_t exp;
        clk = 0;

        @(posedge clk) reset = 1'b1;
        @(posedge clk) reset = 1'b0;
        
        drive_signal(32'h03788293); // addi x5, x17, 0x37

        exp = default_nop();
        exp.alu_op = ALU_ADD;

        check_id("addi x5, x17, 0x37", exp);
    end
endmodule