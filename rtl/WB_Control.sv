`timescale 1ns/1ps
import cpu_pkg::*;

module WB_Control (
    input clk,
    input reset,
    input cpu_pkg::memwb_ctrl_signals_t wb_ctrl_signals_in,
    
    output logic [4:0] rd_addr_out,
    output logic [31:0] rd_data_out,
    output logic rd_write_out,
    output logic [31:0] fw_wb_data_out
);
    
    always_comb begin
        case (wb_ctrl_signals_in.wb_src_sel)
            WB_RESULT_EX: rd_data_out = wb_ctrl_signals_in.ex_result;
            WB_RESULT_MEM: rd_data_out = (wb_ctrl_signals_in.mem_result_valid) ? wb_ctrl_signals_in.mem_result : 32'h0;
            NO_WB: rd_data_out = 32'h0;
            default: rd_data_out = 32'h0;
        endcase
    end
    
    assign rd_addr_out = wb_ctrl_signals_in.rd_addr;
    assign rd_write_out = wb_ctrl_signals_in.reg_write;
    
    always_ff @(posedge clk) begin
        if (reset)
            fw_wb_data_out <= 32'h0;
        else
            fw_wb_data_out <= rd_data_out;
    end
endmodule