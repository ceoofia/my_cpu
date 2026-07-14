`timescale 1ns/1ps
import cpu_pkg::*;


module MEM_Stage_tb;
    logic clk;
    logic reset;
    
    cpu_pkg::exmem_ctrl_signals_t exmem_signals_tb;
    cpu_pkg::memwb_ctrl_signals_t mem_signals_tb;
    
    logic [31:0] mem_fw_data;
    
    MEM_Stage#(
        .MEM_DEPTH(4096),
        .DATA_ADDR(0)
    ) dut(
        .clk(clk),
        .reset(reset),
        
        .exmem_signals_in(exmem_signals_tb),
        .mem_signals_out(mem_signals_tb),
        
        .mem_fw_data(mem_fw_data)
    );
    
    always #5 clk = ~clk;
    
    task automatic check_mem_result(
            input int testnum,
            input logic [31:0] ex_expected,
            input logic [31:0] mem_expected
    );
        $display("Test %0d.", testnum);
        assert (ex_expected == mem_signals_tb.ex_result)
        else
            $fatal(testnum, "EX Result does not match. Expected: %0h, DUT: %0h",
                    ex_expected, mem_signals_tb.ex_result);
        
        assert (mem_expected == mem_signals_tb.mem_result)
        else
            $fatal(testnum, "Mem Result does not match. Expected: %0h, DUT: %0h")
            
            $display("----------------------------------------------")
    endtask
    
    /*
        TODO: finish task and check
    */
    
    initial begin
        @(posedge clk)
            reset = 1'b1;
        
        @(posedge clk)
            reset = 1'b0;
        
        // Word at address 0 = 0x12345678
        dut.mem_int_memory.mem[0] = 8'h78;
        dut.mem_int_memory.mem[1] = 8'h56;
        dut.mem_int_memory.mem[2] = 8'h34;
        dut.mem_int_memory.mem[3] = 8'h12;
        
        // Word at address 4 = 0xAABBCCDD
        dut.mem_int_memory.mem[4] = 8'hDD;
        dut.mem_int_memory.mem[5] = 8'hCC;
        dut.mem_int_memory.mem[6] = 8'hBB;
        dut.mem_int_memory.mem[7] = 8'hAA;
        
        // Word at address 8 = 0x1A2B3C4D
        dut.mem_int_memory.mem[8] = 8'h4D;
        dut.mem_int_memory.mem[9] = 8'h3C;
        dut.mem_int_memory.mem[10] = 8'h2B;
        dut.mem_int_memory.mem[11] = 8'h1A;
        
        
        
    end
    
    
    
    
endmodule