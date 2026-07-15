`timescale 1ns/1ps
import cpu_pkg::*;

module EX_MEM_Reg (
    input clk,
    input reset,
    input logic [31:0] ex_fw_data_in,
    
    input cpu_pkg::exmem_ctrl_signals_t ex_ctrl_signals,
    
    output cpu_pkg::exmem_ctrl_signals_t mem_ctrl_signals,
    output logic [31:0] ex_fw_data_out
);
    always_ff @(posedge clk) begin
        if (reset) begin
            mem_ctrl_signals.rd_addr <= 5'h0;
            mem_ctrl_signals.use_rd <= 1'b0;
            mem_ctrl_signals.reg_write <= 1'b0;
            
            mem_ctrl_signals.lsu_en <= 1'b0;
            mem_ctrl_signals.lsu_op_type <= NO_LSU;
            
            mem_ctrl_signals.wb_src_sel <= NO_WB;
            
            mem_ctrl_signals.ex_result <= 32'h0;
            mem_ctrl_signals.store_data <= 32'h0;

            mem_ctrl_signals.is_load <= 1'b0;

            ex_fw_data_out <= 32'h0;
        end
        else begin
            mem_ctrl_signals <= ex_ctrl_signals;
            ex_fw_data_out <= ex_fw_data_in;
        end
    end
endmodule