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
            //basics
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
                
                //lui x6, 0x12345 0x12345337
                dut.Core_IF.IF_Instr_Mem.instr_memory[36] = 8'h12;
                dut.Core_IF.IF_Instr_Mem.instr_memory[37] = 8'h34;
                dut.Core_IF.IF_Instr_Mem.instr_memory[38] = 8'h53;
                dut.Core_IF.IF_Instr_Mem.instr_memory[39] = 8'h37;
            end
            //stall and forwarding test
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
                
                //addi x9, x7, 3 0x00338493 expect x9 = 88
                dut.Core_IF.IF_Instr_Mem.instr_memory[24] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[25] = 8'h33;
                dut.Core_IF.IF_Instr_Mem.instr_memory[26] = 8'h84;
                dut.Core_IF.IF_Instr_Mem.instr_memory[27] = 8'h93;
            end
            
            //branch and flush test
            3: begin
                //addi x2, x0, 20 0x01400113
                dut.Core_IF.IF_Instr_Mem.instr_memory[0] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[1] = 8'h40;
                dut.Core_IF.IF_Instr_Mem.instr_memory[2] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[3] = 8'h13;
                
                //addi x3, x0, 19 0x01300193
                dut.Core_IF.IF_Instr_Mem.instr_memory[4] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[5] = 8'h30;
                dut.Core_IF.IF_Instr_Mem.instr_memory[6] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[7] = 8'h93;
                
                //beq x2, x3, 16 0x00310863, should not branch
                dut.Core_IF.IF_Instr_Mem.instr_memory[8] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[9] = 8'h31;
                dut.Core_IF.IF_Instr_Mem.instr_memory[10] = 8'h08;
                dut.Core_IF.IF_Instr_Mem.instr_memory[11] = 8'h63;
                
                //addi x3, x3, 1 0x00118193
                dut.Core_IF.IF_Instr_Mem.instr_memory[12] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[13] = 8'h11;
                dut.Core_IF.IF_Instr_Mem.instr_memory[14] = 8'h81;
                dut.Core_IF.IF_Instr_Mem.instr_memory[15] = 8'h93;
                
                //beq x2, x3, 16 0x00310863, should branch
                dut.Core_IF.IF_Instr_Mem.instr_memory[16] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[17] = 8'h31;
                dut.Core_IF.IF_Instr_Mem.instr_memory[18] = 8'h08;
                dut.Core_IF.IF_Instr_Mem.instr_memory[19] = 8'h63;
                
                //addi x4, x0, 30 0x01e00213, should not be executed
                dut.Core_IF.IF_Instr_Mem.instr_memory[20] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[21] = 8'he0;
                dut.Core_IF.IF_Instr_Mem.instr_memory[22] = 8'h02;
                dut.Core_IF.IF_Instr_Mem.instr_memory[23] = 8'h13;
                
                //addi x5, x0, 32 0x02000293, x5 = 32
                dut.Core_IF.IF_Instr_Mem.instr_memory[32] = 8'h02;
                dut.Core_IF.IF_Instr_Mem.instr_memory[33] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[34] = 8'h02;
                dut.Core_IF.IF_Instr_Mem.instr_memory[35] = 8'h93;
                
                //add x6, x5, x2 0x00228333, x6 = 52
                dut.Core_IF.IF_Instr_Mem.instr_memory[36] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[37] = 8'h22;
                dut.Core_IF.IF_Instr_Mem.instr_memory[38] = 8'h83;
                dut.Core_IF.IF_Instr_Mem.instr_memory[39] = 8'h33;
                
            end
            
            //extensive test
            4: begin
                
                //addi x2, x0, 20 0x01400113 x2 = 20
                dut.Core_IF.IF_Instr_Mem.instr_memory[0] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[1] = 8'h40;
                dut.Core_IF.IF_Instr_Mem.instr_memory[2] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[3] = 8'h13;
                
                //addi x3, x0, 19 0x01300193
                dut.Core_IF.IF_Instr_Mem.instr_memory[4] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[5] = 8'h30;
                dut.Core_IF.IF_Instr_Mem.instr_memory[6] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[7] = 8'h93;
                
                //jal x3, 16 0x010001ef, x3 = 12
                dut.Core_IF.IF_Instr_Mem.instr_memory[8] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[9] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[10] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[11] = 8'hef;
                
                //addi x4, x0, 20 0x01400213, should not execute
                dut.Core_IF.IF_Instr_Mem.instr_memory[12] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[13] = 8'h40;
                dut.Core_IF.IF_Instr_Mem.instr_memory[14] = 8'h02;
                dut.Core_IF.IF_Instr_Mem.instr_memory[15] = 8'h13;
                
                //addi x5, x3, 16 0x01018293, x5 = 28
                dut.Core_IF.IF_Instr_Mem.instr_memory[24] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[25] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[26] = 8'h82;
                dut.Core_IF.IF_Instr_Mem.instr_memory[27] = 8'h93;
                
                
            end
            
            //all test
            5: begin
                // 0x00000000: addi x1, x0, 5
                dut.Core_IF.IF_Instr_Mem.instr_memory[0] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[1] = 8'h50;
                dut.Core_IF.IF_Instr_Mem.instr_memory[2] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[3] = 8'h93;
                
                // 0x00000004: addi x2, x1, 7
                dut.Core_IF.IF_Instr_Mem.instr_memory[4] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[5] = 8'h70;
                dut.Core_IF.IF_Instr_Mem.instr_memory[6] = 8'h81;
                dut.Core_IF.IF_Instr_Mem.instr_memory[7] = 8'h13;
                
                // 0x00000008: sub x3, x2, x1
                dut.Core_IF.IF_Instr_Mem.instr_memory[8] = 8'h40;
                dut.Core_IF.IF_Instr_Mem.instr_memory[9] = 8'h11;
                dut.Core_IF.IF_Instr_Mem.instr_memory[10] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[11] = 8'hB3;
                
                // 0x0000000C: xor x4, x3, x2
                dut.Core_IF.IF_Instr_Mem.instr_memory[12] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[13] = 8'h21;
                dut.Core_IF.IF_Instr_Mem.instr_memory[14] = 8'hC2;
                dut.Core_IF.IF_Instr_Mem.instr_memory[15] = 8'h33;
                
                // 0x00000010: andi x5, x4, 6
                dut.Core_IF.IF_Instr_Mem.instr_memory[16] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[17] = 8'h62;
                dut.Core_IF.IF_Instr_Mem.instr_memory[18] = 8'h72;
                dut.Core_IF.IF_Instr_Mem.instr_memory[19] = 8'h93;
                
                // 0x00000014: sw x5, 0(x0)
                dut.Core_IF.IF_Instr_Mem.instr_memory[20] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[21] = 8'h50;
                dut.Core_IF.IF_Instr_Mem.instr_memory[22] = 8'h20;
                dut.Core_IF.IF_Instr_Mem.instr_memory[23] = 8'h23;
                
                // 0x00000018: lw x6, 0(x0)
                dut.Core_IF.IF_Instr_Mem.instr_memory[24] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[25] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[26] = 8'h23;
                dut.Core_IF.IF_Instr_Mem.instr_memory[27] = 8'h03;
                
                // 0x0000001C: add x7, x6, x2
                dut.Core_IF.IF_Instr_Mem.instr_memory[28] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[29] = 8'h23;
                dut.Core_IF.IF_Instr_Mem.instr_memory[30] = 8'h03;
                dut.Core_IF.IF_Instr_Mem.instr_memory[31] = 8'hB3;
                
                // 0x00000020: sw x7, 4(x0)
                dut.Core_IF.IF_Instr_Mem.instr_memory[32] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[33] = 8'h70;
                dut.Core_IF.IF_Instr_Mem.instr_memory[34] = 8'h22;
                dut.Core_IF.IF_Instr_Mem.instr_memory[35] = 8'h23;
                
                // 0x00000024: beq x7, x7, 12
                dut.Core_IF.IF_Instr_Mem.instr_memory[36] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[37] = 8'h73;
                dut.Core_IF.IF_Instr_Mem.instr_memory[38] = 8'h86;
                dut.Core_IF.IF_Instr_Mem.instr_memory[39] = 8'h63;
                
                // 0x00000028: addi x8, x0, 99
                dut.Core_IF.IF_Instr_Mem.instr_memory[40] = 8'h06;
                dut.Core_IF.IF_Instr_Mem.instr_memory[41] = 8'h30;
                dut.Core_IF.IF_Instr_Mem.instr_memory[42] = 8'h04;
                dut.Core_IF.IF_Instr_Mem.instr_memory[43] = 8'h13;
                
                // 0x0000002C: sw x8, 8(x0)
                dut.Core_IF.IF_Instr_Mem.instr_memory[44] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[45] = 8'h80;
                dut.Core_IF.IF_Instr_Mem.instr_memory[46] = 8'h24;
                dut.Core_IF.IF_Instr_Mem.instr_memory[47] = 8'h23;
                
                // 0x00000030: bne x6, x5, 12
                dut.Core_IF.IF_Instr_Mem.instr_memory[48] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[49] = 8'h53;
                dut.Core_IF.IF_Instr_Mem.instr_memory[50] = 8'h16;
                dut.Core_IF.IF_Instr_Mem.instr_memory[51] = 8'h63;
                
                // 0x00000034: addi x8, x0, 21
                dut.Core_IF.IF_Instr_Mem.instr_memory[52] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[53] = 8'h50;
                dut.Core_IF.IF_Instr_Mem.instr_memory[54] = 8'h04;
                dut.Core_IF.IF_Instr_Mem.instr_memory[55] = 8'h13;
                
                // 0x00000038: add x9, x8, x7
                dut.Core_IF.IF_Instr_Mem.instr_memory[56] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[57] = 8'h74;
                dut.Core_IF.IF_Instr_Mem.instr_memory[58] = 8'h04;
                dut.Core_IF.IF_Instr_Mem.instr_memory[59] = 8'hB3;
                
                // 0x0000003C: jal x10, 12
                dut.Core_IF.IF_Instr_Mem.instr_memory[60] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[61] = 8'hC0;
                dut.Core_IF.IF_Instr_Mem.instr_memory[62] = 8'h05;
                dut.Core_IF.IF_Instr_Mem.instr_memory[63] = 8'h6F;
                
                // 0x00000040: addi x11, x0, 111
                dut.Core_IF.IF_Instr_Mem.instr_memory[64] = 8'h06;
                dut.Core_IF.IF_Instr_Mem.instr_memory[65] = 8'hF0;
                dut.Core_IF.IF_Instr_Mem.instr_memory[66] = 8'h05;
                dut.Core_IF.IF_Instr_Mem.instr_memory[67] = 8'h93;
                
                // 0x00000044: sw x11, 12(x0)
                dut.Core_IF.IF_Instr_Mem.instr_memory[68] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[69] = 8'hB0;
                dut.Core_IF.IF_Instr_Mem.instr_memory[70] = 8'h26;
                dut.Core_IF.IF_Instr_Mem.instr_memory[71] = 8'h23;
                
                // 0x00000048: addi x12, x0, 88
                dut.Core_IF.IF_Instr_Mem.instr_memory[72] = 8'h05;
                dut.Core_IF.IF_Instr_Mem.instr_memory[73] = 8'h80;
                dut.Core_IF.IF_Instr_Mem.instr_memory[74] = 8'h06;
                dut.Core_IF.IF_Instr_Mem.instr_memory[75] = 8'h13;
                
                // 0x0000004C: jalr x13, 0(x12)
                dut.Core_IF.IF_Instr_Mem.instr_memory[76] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[77] = 8'h06;
                dut.Core_IF.IF_Instr_Mem.instr_memory[78] = 8'h06;
                dut.Core_IF.IF_Instr_Mem.instr_memory[79] = 8'hE7;
                
                // 0x00000050: addi x14, x0, 114
                dut.Core_IF.IF_Instr_Mem.instr_memory[80] = 8'h07;
                dut.Core_IF.IF_Instr_Mem.instr_memory[81] = 8'h20;
                dut.Core_IF.IF_Instr_Mem.instr_memory[82] = 8'h07;
                dut.Core_IF.IF_Instr_Mem.instr_memory[83] = 8'h13;
                
                // 0x00000054: sw x14, 16(x0)
                dut.Core_IF.IF_Instr_Mem.instr_memory[84] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[85] = 8'hE0;
                dut.Core_IF.IF_Instr_Mem.instr_memory[86] = 8'h28;
                dut.Core_IF.IF_Instr_Mem.instr_memory[87] = 8'h23;
                
                // 0x00000058: add x15, x10, x13
                dut.Core_IF.IF_Instr_Mem.instr_memory[88] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[89] = 8'hD5;
                dut.Core_IF.IF_Instr_Mem.instr_memory[90] = 8'h07;
                dut.Core_IF.IF_Instr_Mem.instr_memory[91] = 8'hB3;
                
                // 0x0000005C: addi x0, x15, 99
                dut.Core_IF.IF_Instr_Mem.instr_memory[92] = 8'h06;
                dut.Core_IF.IF_Instr_Mem.instr_memory[93] = 8'h37;
                dut.Core_IF.IF_Instr_Mem.instr_memory[94] = 8'h80;
                dut.Core_IF.IF_Instr_Mem.instr_memory[95] = 8'h13;
                
                // 0x00000060: sw x15, 20(x0)
                dut.Core_IF.IF_Instr_Mem.instr_memory[96] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[97] = 8'hF0;
                dut.Core_IF.IF_Instr_Mem.instr_memory[98] = 8'h2A;
                dut.Core_IF.IF_Instr_Mem.instr_memory[99] = 8'h23;
                
            end
            
            //fw priority test
            6: begin
                //addi x1, x0, 1 0x00100093
                dut.Core_IF.IF_Instr_Mem.instr_memory[0] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[1] = 8'h10;
                dut.Core_IF.IF_Instr_Mem.instr_memory[2] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[3] = 8'h93;
                
                //addi x1, x1, 2 0x00208093
                dut.Core_IF.IF_Instr_Mem.instr_memory[4] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[5] = 8'h20;
                dut.Core_IF.IF_Instr_Mem.instr_memory[6] = 8'h80;
                dut.Core_IF.IF_Instr_Mem.instr_memory[7] = 8'h93;
                
                //add x2, x1, x0 0x00008133
                dut.Core_IF.IF_Instr_Mem.instr_memory[8] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[9] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[10] = 8'h81;
                dut.Core_IF.IF_Instr_Mem.instr_memory[11] = 8'h33;
            end

            7: begin //TODO: Fix this later
                // Branch predictor stress test
                //
                // x3 branch pattern: T, T, N, T, T, N, ...
                // x1 loop branch:    T, T, T, ..., N
                //
                // Expected final values:
                // x1 = 12
                // x2 = 12
                // x3 = 0
                // x4 = 3

                // PC 0: addi x1, x0, 0
                // 0x00000093
                dut.Core_IF.IF_Instr_Mem.instr_memory[0] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[1] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[2] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[3] = 8'h93;

                // PC 4: addi x2, x0, 12
                // 0x00c00113
                dut.Core_IF.IF_Instr_Mem.instr_memory[4] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[5] = 8'hc0;
                dut.Core_IF.IF_Instr_Mem.instr_memory[6] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[7] = 8'h13;

                // PC 8: addi x3, x0, 0
                // 0x00000193
                dut.Core_IF.IF_Instr_Mem.instr_memory[8]  = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[9]  = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[10] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[11] = 8'h93;

                // PC 12: addi x3, x3, 1
                // 0x00118193
                dut.Core_IF.IF_Instr_Mem.instr_memory[12] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[13] = 8'h11;
                dut.Core_IF.IF_Instr_Mem.instr_memory[14] = 8'h81;
                dut.Core_IF.IF_Instr_Mem.instr_memory[15] = 8'h93;

                // PC 16: addi x4, x0, 3
                // 0x00300213
                dut.Core_IF.IF_Instr_Mem.instr_memory[16] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[17] = 8'h30;
                dut.Core_IF.IF_Instr_Mem.instr_memory[18] = 8'h02;
                dut.Core_IF.IF_Instr_Mem.instr_memory[19] = 8'h13;

                // PC 20: blt x3, x4, 8
                // Target = PC 28
                // Pattern: taken when x3=1, taken when x3=2,
                // not taken when x3=3
                // 0x0041c463
                dut.Core_IF.IF_Instr_Mem.instr_memory[20] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[21] = 8'h41;
                dut.Core_IF.IF_Instr_Mem.instr_memory[22] = 8'hc4;
                dut.Core_IF.IF_Instr_Mem.instr_memory[23] = 8'h63;

                // PC 24: addi x3, x0, 0
                // Executed only when the branch above is not taken
                // 0x00000193
                dut.Core_IF.IF_Instr_Mem.instr_memory[24] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[25] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[26] = 8'h01;
                dut.Core_IF.IF_Instr_Mem.instr_memory[27] = 8'h93;

                // PC 28: addi x1, x1, 1
                // 0x00108093
                dut.Core_IF.IF_Instr_Mem.instr_memory[28] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[29] = 8'h10;
                dut.Core_IF.IF_Instr_Mem.instr_memory[30] = 8'h80;
                dut.Core_IF.IF_Instr_Mem.instr_memory[31] = 8'h93;

                // PC 32: blt x1, x2, -20
                // Target = PC 12
                // Taken for x1=1 through x1=11, then not taken at x1=12
                // 0xfe20c6e3
                dut.Core_IF.IF_Instr_Mem.instr_memory[32] = 8'hfe;
                dut.Core_IF.IF_Instr_Mem.instr_memory[33] = 8'h20;
                dut.Core_IF.IF_Instr_Mem.instr_memory[34] = 8'hc6;
                dut.Core_IF.IF_Instr_Mem.instr_memory[35] = 8'he3;

                // PC 36: nop
                // 0x00000013
                dut.Core_IF.IF_Instr_Mem.instr_memory[36] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[37] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[38] = 8'h00;
                dut.Core_IF.IF_Instr_Mem.instr_memory[39] = 8'h13;
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
    
    task automatic display_mem(
            input int lower_bound,
            input int higher_bound
    );
        integer j;
        
        logic [31:0] mem_data;
        for (j = lower_bound; j <= higher_bound; j = j + 4) begin
            mem_data = {dut.Core_MEM.mem_int_memory.mem[j + 3],
                dut.Core_MEM.mem_int_memory.mem[j + 2],
                dut.Core_MEM.mem_int_memory.mem[j + 1],
                dut.Core_MEM.mem_int_memory.mem[j]};
            
            $display("Mem data at address %0d is: %0d", j, mem_data);
        end
    endtask
    
    logic detected_tb;
    int cycle_count;
    
    //set signals wish to inspect
    logic [4:0] ex_rd_tb;
    assign ex_rd_tb = dut.ex_ctrl_signals.rd_addr;
    
    initial begin
        $dumpfile("Core_tb.vcd");
        $dumpvars(0, Core_tb);
    end
    
    initial begin
        clk = 0;
        mem_en = 1'b1;
        
        //set test sequence
        set_test_sequence(7);
        
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
        
        $finish;
    end
endmodule