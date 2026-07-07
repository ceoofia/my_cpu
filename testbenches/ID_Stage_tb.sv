`timescale 1ns/1ps

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

    /*
        task automatic check_id (
        input string instr,
        input cpu_pkg::idex_ctrl_signals_t expected
        ); 
        assert (dut_id_ctrl_signals == expected)
            $display("Test on %0s passed", instr);
        else
            $fatal(1, "Test on %0s failed. Expected: %0h, DUT: %0h", instr, expected, dut_id_ctrl_signals);
        
            $display("---------------------------------------");
        endtask

        function automatic cpu_pkg::idex_ctrl_signals_t default_nop();
        cpu_pkg::idex_ctrl_signals_t exp;
        exp = 'x;
        return exp;
        endfunction
    */
    
    /*
        TODO: Fix task
    */
    task automatic drive_and_view_instr(
        input int instrnum,
        input [31:0] instr_tb,
        input instr_valid_tb,
        input NOP_bubble_tb
    );  
        id_instr_data_in = instr_tb;
        id_instr_valid_in = instr_valid_tb;

        #1;
        $display("------------------------------------");
        $display("Instr %0d: 0x%0h", instrnum, instr_tb);
        $display("Imm value: %0d", dut_id_ctrl_signals.imm_value);
        $display("ALU src1: %0s, src2: %0s", 
            alu_a_src_to_str(dut_id_ctrl_signals.alu_a_src_sel), alu_b_src_to_str(dut_id_ctrl_signals.alu_b_src_sel));
        $display("ALU src1 addr: %0d, src2 addr: %0d, rd addr: %0d, rd write: %0b", 
            dut_id_ctrl_signals.rs1_addr, dut_id_ctrl_signals.rs2_addr, dut_id_ctrl_signals.rd_addr, dut_id_ctrl_signals.reg_write);
        $display("RS1 data: %0h, RS2 data: %0h", dut_id_ctrl_signals.rs1_data, dut_id_ctrl_signals.rs2_data);
        $display("Comparator: %0b", dut_id_ctrl_signals.comp_en);
        $display("ALU Operation: %0s", alu_op_to_str(dut_id_ctrl_signals.alu_op_type));
        $display("LSU Operation: %0s, LSU unit: %0b", lsu_op_to_str(dut_id_ctrl_signals.lsu_op_type), dut_id_ctrl_signals.lsu_en);
    endtask

    task automatic set_reg (
        input [4:0] addr_tb,
        input [31:0] data_tb
    );
        dut.ID_Register_File.Register_array[addr_tb] = data_tb;
    endtask

    function string imm_type_to_string(cpu_pkg::imm_sel t);
        case (t)
            IMM_I_TYPE: return "IMM_I_TYPE";
            IMM_S_TYPE: return "IMM_S_TYPE";
            IMM_B_TYPE: return "IMM_B_TYPE";
            IMM_U_TYPE: return "IMM_U_TYPE";
            IMM_J_TYPE: return "IMM_J_TYPE";
            default: return "UNKNOWN";
        endcase
    endfunction

    function string alu_a_src_to_str(cpu_pkg::alu_a_src a);
        case(a)
            ALU_A_RS1:  return "RS1";
            ALU_A_PC:   return "PC";
            ALU_A_NOP:  return "NOP";
            ALU_A_ZERO: return "Zero";
            default:    return "UNKNOWN";
        endcase
    endfunction

    function string alu_b_src_to_str(cpu_pkg::alu_b_src b);
        case(b)
            ALU_B_RS2:  return "RS2";
            ALU_B_IMM:  return "Imm";
            ALU_B_NOP:  return "NOP";
            default:    return "UNKNOWN";
        endcase
    endfunction

    function string alu_op_to_str(cpu_pkg::alu_op t);
        case(t)
            ALU_ADD:    return "ALU ADD";
            ALU_SUB:    return "ALU SUB";
            ALU_AND:    return "ALU AND";
            ALU_OR:     return "ALU OR";
            ALU_XOR:    return "ALU XOR";
            ALU_NULL:   return "ALU NULL";
            ALU_NOP:     return "NO_ALU";
            default:    return "UNKNOWN";
        endcase
    endfunction

    function string lsu_op_to_str(cpu_pkg::lsu_op t);
        case(t)
            LW: return "LW";
            SW: return "SW";
            NO_LSU: return "NO_LSU";
            default:    return "UNKNOWN";
        endcase
    endfunction

    always #5 clk = ~clk;

    initial begin
        cpu_pkg::idex_ctrl_signals_t exp;
        clk = 0;

        @(posedge clk) reset = 1'b1;
        @(posedge clk) reset = 1'b0;
        
        set_reg(7, 32'h123);
        set_reg(17, 32'h234);

        @(posedge clk);
        drive_and_view_instr(1, 32'h007882b3, 1'b1, 1'b0); // add x5, x17, x7


        set_reg(4, 32'h123);
        set_reg(3, 32'h123);
        @(posedge clk);
        drive_and_view_instr(2, 32'h00320b63, 1'b1, 1'b0); //beq x4, x3, 22

        $display("------------------------------------");
        $finish;
    end
endmodule