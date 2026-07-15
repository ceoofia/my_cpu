`timescale 1ns/1ps
import cpu_pkg::*;

module Forward_Control (
    input logic [4:0] id_rs1_src_addr,
    input logic [4:0] id_rs2_src_addr,

    input logic [4:0] ex_rd_addr,
    input logic ex_reg_write,

    input logic [4:0] mem_rd_addr,
    input logic mem_reg_write,

    input logic ex_is_load,

    output cpu_pkg::fw_rs1_sel fw_rs1_src_sel,
    output cpu_pkg::fw_rs2_sel fw_rs2_src_sel
);

    always_comb begin
        if(id_rs1_src_addr == ex_rd_addr && ex_reg_write && !ex_is_load 
            && ex_rd_addr != 5'h0)
            fw_rs1_src_sel = RS1_FW_EX;
        else if(id_rs1_src_addr == mem_rd_addr && mem_reg_write && mem_rd_addr != 5'h0)
            fw_rs1_src_sel = RS1_FW_MEM;
        else
            fw_rs1_src_sel = RS1_NO_FW;
    end

    always_comb begin
        if(id_rs2_src_addr == ex_rd_addr && ex_reg_write && !ex_is_load 
            && ex_rd_addr != 5'h0)
            fw_rs2_src_sel = RS2_FW_EX;
        else if(id_rs2_src_addr == mem_rd_addr && mem_reg_write && mem_rd_addr != 5'h0)
            fw_rs2_src_sel = RS2_FW_MEM;
        else
            fw_rs2_src_sel = RS2_NO_FW;
    end

endmodule
