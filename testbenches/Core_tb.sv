`timescale 1ns/1ps
import cpu_pkg::*;

module Core_tb;
    logic clk;
    logic reset;
    logic mem_en;
    
    always #5 clk = ~clk;
    
    Core dut(
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
    
    task automatic set_test_sequence(
            input int testnum
    );
        case (testnum)
            1: begin
                //addi x2, x0, 20 0x01400113
                dut.Core_IF.IF_Instr_Mem.instr_memory[0] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[1] = 8'h40;
                dut.Core_IF.IF_Instr_Mem.instr_memory[2] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[3] = 8'h13;
                
                //addi x3, x0, 15 0x00f00193
                dut.Core_IF.IF_Instr_Mem.instr_memory[4] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[5] = 8'hf0;
                dut.Core_IF.IF_Instr_Mem.instr_memory[6] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[7] = 8'h93;
                
                //NOP
                dut.Core_IF.IF_Instr_Mem.instr_memory[8] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[9] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[10] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[11] = 8'h13;
                
                //NOP
                dut.Core_IF.IF_Instr_Mem.instr_memory[12] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[13] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[14] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[15] = 8'h13;
                
                //NOP
                dut.Core_IF.IF_Instr_Mem.instr_memory[16] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[17] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[18] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[19] = 8'h13;
                
                //NOP
                dut.Core_IF.IF_Instr_Mem.instr_memory[20] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[21] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[22] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[23] = 8'h13;
                
                //NOP
                dut.Core_IF.IF_Instr_Mem.instr_memory[24] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[25] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[26] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[27] = 8'h13;
                
                //NOP
                dut.Core_IF.IF_Instr_Mem.instr_memory[28] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[29] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[30] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[31] = 8'h13;
                
                //add x5, x2, x3 0x003102b3
                dut.Core_IF.IF_Instr_Mem.instr_memory[32] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[33] = 8'h31;
                dut.Core_IF.IF_Instr_Mem.instr_memory[34] = 8'h02;
                dut.Core_IF.IF_Instr_Mem.instr_memory[35] = 8'hb3;
            end
            
            2: begin
                //addi x2, x0, 20 0x01400113
                dut.Core_IF.IF_Instr_Mem.instr_memory[0] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[1] = 8'h40;
                dut.Core_IF.IF_Instr_Mem.instr_memory[2] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[3] = 8'h13;
                
                //addi x3, x2, 15 0x00f10193
                dut.Core_IF.IF_Instr_Mem.instr_memory[4] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[5] = 8'hf1;
                dut.Core_IF.IF_Instr_Mem.instr_memory[6] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[7] = 8'h93;
                
                //addi x5, x3, 15 0x00f18293
                dut.Core_IF.IF_Instr_Mem.instr_memory[8] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[9] = 8'hf1;
                dut.Core_IF.IF_Instr_Mem.instr_memory[10] = 8'h82;
                dut.Core_IF.IF_Instr_Mem.instr_memory[11] = 8'h93;
                
                //add x6, x5, x3 0x00328333
                dut.Core_IF.IF_Instr_Mem.instr_memory[12] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[13] = 8'h32;
                dut.Core_IF.IF_Instr_Mem.instr_memory[14] = 8'h83;
                dut.Core_IF.IF_Instr_Mem.instr_memory[15] = 8'h33;
                
                //sw x6, 4(x0) 0x00602223
                dut.Core_IF.IF_Instr_Mem.instr_memory[16] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[17] = 8'h60;
                dut.Core_IF.IF_Instr_Mem.instr_memory[18] = 8'h22;
                dut.Core_IF.IF_Instr_Mem.instr_memory[19] = 8'h23;
                
                //lw x7, 4(x0) 0x00402383
                dut.Core_IF.IF_Instr_Mem.instr_memory[20] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[21] = 8'h40;
                dut.Core_IF.IF_Instr_Mem.instr_memory[22] = 8'h23;
                dut.Core_IF.IF_Instr_Mem.instr_memory[23] = 8'h83;
                
            end
            
            default: begin
                //NOP
                dut.Core_IF.IF_Instr_Mem.instr_memory[0] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[1] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[2] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[3] = 8'h13;
            end
        endcase
    endtask
    
    logic detected_tb;
    int cycle_count;
    
    initial begin
        $dumpfile("Core_tb.vcd");
        $dumpvars(0, Core_tb);
    end
    
    initial begin
        clk = 0;
        mem_en = 1'b1;
        
        //set test sequence
        set_test_sequence(2);
        
        reset = 1'b1;
        repeat (2) @(posedge clk);
        @(negedge clk) reset = 1'b0;
        
        /*
        detected_tb = 1'b0;

        repeat (10) begin
            @(posedge clk);

            if(dut.wb_rd_data == 32'd35) begin
                detected_tb = 1'b1;
                break;
            end
        end

        
        if(!detected_tb)
            $fatal("data not detected");
        */
        
        repeat (100) @(posedge clk);
        
        print_reg();
        
        //TODO: Fix forward control timing
        
        $finish;
    end
endmodule