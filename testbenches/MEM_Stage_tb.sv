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
            input logic [31:0] mem_expected
    );
        #1;
        
        assert (mem_expected == mem_signals_tb.mem_result)
        else
            $fatal(testnum, "Mem Result does not match. Expected: %0h, DUT: %0h",
                    mem_expected, mem_signals_tb.mem_result);
        $display("Test %0d passed.", testnum);
    endtask
    
    task automatic reset_signals();
        exmem_signals_tb.lsu_en = 1'b0;
        exmem_signals_tb.lsu_op_type = NO_LSU;
        exmem_signals_tb.ex_result = 32'd5;
    endtask
    
    /*
        TODO: finish task and check
    */
    
    initial begin
        clk = 0;
        @(posedge clk) reset = 1'b1;
        reset_signals();
        
        @(posedge clk) reset = 1'b0;
        
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
        
        //lsu_en = 0, mem_result should be 0
        exmem_signals_tb.lsu_en = 1'b0;
        check_mem_result(1, 32'd0);
        
        reset_signals();
        exmem_signals_tb.lsu_en = 1'b1;
        exmem_signals_tb.ex_result = 32'd0;
        exmem_signals_tb.lsu_op_type = LW;
        
        check_mem_result(2, 32'h12345678);
        
        reset_signals();
        exmem_signals_tb.lsu_en = 1'b1;
        exmem_signals_tb.ex_result = 32'd4;
        exmem_signals_tb.lsu_op_type = LW;
        
        check_mem_result(3, 32'hAABBCCDD);
        
        reset_signals();
        
        @(posedge clk);
        exmem_signals_tb.lsu_en = 1'b1;
        exmem_signals_tb.ex_result = 32'd12;
        exmem_signals_tb.lsu_op_type = SW;
        exmem_signals_tb.store_data = 32'h11FF22EE;
        
        @(posedge clk);
        
        exmem_signals_tb.ex_result = 32'd12;
        exmem_signals_tb.lsu_op_type = LW;
        
        check_mem_result(4, 32'h11FF22EE);
        
        $finish;
    end
    
    
    
    
endmodule