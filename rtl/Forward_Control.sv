`timescale 1ns/1ps
import cpu_pkg::*;

module Forward_Control (
    input logic [4:0] rs1_src_addr,
    input logic [4:0] rs2_src_addr,
    
    input logic [4:0] post_ex_rd_addr,
    input logic post_ex_reg_write,
    
    input logic [4:0] post_mem_rd_addr,
    input logic post_mem_reg_write,
    
    input logic [4:0] post_wb_rd_addr,
    input logic post_wb_reg_write,
    
    input logic post_ex_is_load,
    
    output cpu_pkg::fw_rs1_sel fw_rs1_src_sel,
    output cpu_pkg::fw_rs2_sel fw_rs2_src_sel
);
    
    always_comb begin
        if (rs1_src_addr == post_ex_rd_addr && post_ex_reg_write && !post_ex_is_load
                && post_ex_rd_addr != 5'h0)
            fw_rs1_src_sel = RS1_FW_EX;
        else if (rs1_src_addr == post_mem_rd_addr && post_mem_reg_write && post_mem_rd_addr != 5'h0)
            fw_rs1_src_sel = RS1_FW_MEM;
        else if (rs1_src_addr == post_wb_rd_addr && post_wb_reg_write && post_wb_rd_addr != 5'h0)
            fw_rs1_src_sel = RS1_FW_WB;
        else
            fw_rs1_src_sel = RS1_NO_FW;
    end
    
    always_comb begin
        if (rs2_src_addr == post_ex_rd_addr && post_ex_reg_write && !post_ex_is_load
                && post_ex_rd_addr != 5'h0)
            fw_rs2_src_sel = RS2_FW_EX;
        else if (rs2_src_addr == post_mem_rd_addr && post_mem_reg_write && post_mem_rd_addr != 5'h0)
            fw_rs2_src_sel = RS2_FW_MEM;
        else if (rs2_src_addr == post_wb_rd_addr && post_wb_reg_write && post_wb_rd_addr != 5'h0)
            fw_rs2_src_sel = RS2_FW_WB;
        else
            fw_rs2_src_sel = RS2_NO_FW;
    end
    
endmodule