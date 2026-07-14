`timescale 1ns/1ps
import cpu_pkg::*;

module Core_tb;
    logic clk;
    logic reset;
    logic mem_en;

    always #5 clk = ~clk;

    Core dut (
        .clk(clk),
        .reset(reset),
        .mem_en(mem_en)
    );

    task automatic print_reg();
        integer i;

        for (i = 0; i < 32; i = i + 1) begin
            $display("Register %0d: %0d",
                i, dut.Core_ID.ID_Register_File.Register_array[i]);
        end
    endtask

    initial begin
        clk = 0;
        mem_en = 1'b1;

        //addi x2, x0, 20 0x01400113
        dut.Core_IF.IF_Instr_Mem.instr_memory[0] = 8'h01;
        dut.Core_IF.IF_Instr_Mem.instr_memory[1] = 8'h40;
        dut.Core_IF.IF_Instr_Mem.instr_memory[2] = 8'h01;
        dut.Core_IF.IF_Instr_Mem.instr_memory[3] = 8'h13;

        reset = 1'b1;
        repeat (2) @(posedge clk);
        reset = 1'b0;

        repeat (10) @(posedge clk);

        print_reg();

        $finish;
    end
endmodule
