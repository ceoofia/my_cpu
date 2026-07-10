`timescale 1ns/1ps
import cpu_pkg::*;

module EX_MEM_Reg (
    input clk,
    input reset,

    input exmem_ctrl_signals_t ex_ctrl_signals,

    output exmem_ctrl_signals_t mem_ctrl_signals
);
    
    always_ff @(posedge clk) begin
        if(reset) begin
            mem_ctrl_signals.rd_addr <= 32'h0;
            mem_ctrl_signals.use_rd <= 1'b0;
            mem_ctrl_signals.reg_write <= 1'b0;

            mem_ctrl_signals.lsu_en <= 1'b0;
            mem_ctrl_signals.lsu_op_type <= NO_LSU;

            mem_ctrl_signals.ex_result <= 32'h0;
        end else begin
            mem_ctrl_signals <= ex_ctrl_signals;
        end
    end
endmodule
