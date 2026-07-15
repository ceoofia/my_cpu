`timescale 1ns/1ps
import cpu_pkg::*;

module MEM_WB_Reg (
    input logic clk,
    input logic reset,
    input cpu_pkg::memwb_ctrl_signals_t mem_wb_signals_in,
    input logic [31:0] mem_fw_data_in,

    output cpu_pkg::memwb_ctrl_signals_t wb_signals_out,
    output logic [31:0] mem_fw_data_out
);

    always_ff @(posedge clk) begin
        if(reset) begin
            wb_signals_out.rd_addr <= 5'h0;
            wb_signals_out.reg_write <= 1'b1;
            wb_signals_out.wb_src_sel <= NO_WB;
            wb_signals_out.ex_result <= 32'h0;
            wb_signals_out.mem_result <= 32'h0;
            wb_signals_out.mem_result_valid <= 1'b0;
        end else
            wb_signals_out <= mem_wb_signals_in;
    end

endmodule
