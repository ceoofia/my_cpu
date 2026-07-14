`timescale 1ns/1ps
import cpu_pkg::*;

module MEM_Stage (
    input logic clk,
    input logic reset,
    input cpu_pkg::exmem_ctrl_signals_t exmem_signals_in,
    
    output cpu_pkg::memwb_ctrl_signals_t mem_signals_out,
    
    output logic [31:0] mem_fw_data
);
    
    logic [31:0] mem_int_addr;
    
    logic mem_int_en;
    logic mem_int_rw;
    cpu_pkg::store_size_e mem_int_store_size;
    cpu_pkg::load_size_e mem_int_load_size;
    
    logic [31:0] mem_int_memory_data;
    logic mem_int_data_valid;
    
    MEM_Control mem_int_control(
        .lsu_op_in(exmem_signals_in.lsu_op_type),
        
        .mem_en_out(mem_int_en),
        .mem_rw_out(mem_int_rw),
        .mem_store_size_out(mem_int_load_size),
        .mem_load_size_out(mem_int_store_size)
    );
    
    Memory#(
        .MEM_DEPTH(4096),
        .DATA_ADDR(0)
    ) mem_int_memory(
        .clk(clk),
        .reset(reset),
        
        .addr_req_in(exmem_signals_in.ex_result),
        .store_data_in(exmem_signals_in.store_data),
        
        .mem_en_in(mem_int_en),
        .mem_rw_in(mem_int_rw),
        .mem_load_size_in(mem_int_load_size),
        .mem_store_size_in(mem_int_store_size),
        
        .mem_data_out(mem_int_memory_data),
        .mem_data_valid(mem_int_data_valid)
    );
    
    assign mem_signals_out.rd_addr = exmem_signals_in.rd_addr;
    assign mem_signals_out.reg_write = exmem_signals_in.reg_write;
    assign mem_signals_out.ex_result = exmem_signals_in.ex_result;
    assign mem_signals_out.mem_result = mem_int_memory_data;
    assign mem_signals_out.mem_result_valid = mem_int_data_valid;
    assign mem_signals_out.wb_src_sel = exmem_signals_in.wb_src_sel;
    
    assign mem_fw_data = mem_int_memory_data;
    
    
endmodule