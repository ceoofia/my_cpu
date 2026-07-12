`timescale 1ns/1ps
import cpu_pkg::*;

module MEM_Control (
    input logic [31:0] mem_addr_in,
    input logic [31:0] store_data_in,

    output logic [31:0] mem_addr_out,
    output logic [31:0] store_data_out,

    output logic mem_en_out,
    output logic mem_rw_out, //Read = 0, Write = 1
    output cpu_pkg::store_size_e mem_store_size_out,
    output cpu_pkg::load_size_e mem_load_size_out
);
    always_comb begin
        mem_en_out = mem_ctrl_signals.lsu_op_type != NO_LSU;

        case(mem_ctrl_signals.lsu_op_type)
            LW: begin
                mem_rw_out = 1'b0;
                mem_en_out = 1'b1;
                mem_store_size_out = NO_STORE_SIZE;
                mem_load_size_out = LOAD_SIZE_WORD;
            end 

            SW: begin
                mem_rw_out = 1'b1;
                mem_en_out = 1'b1;
                mem_store_size_out = STORE_SIZE_WORD;
                mem_load_size_out = NO_LOAD_SIZE;
            end 

            NO_LSU: begin
                mem_rw_out = 1'b0;
                mem_en_out = 1'b0;
                mem_store_size_out = NO_STORE_SIZE;
                mem_load_size_out = NO_LOAD_SIZE;
            end

            default: begin
                mem_rw_out = 1'b0;
                mem_en_out = 1'b0;
                mem_store_size_out = NO_STORE_SIZE;
                mem_load_size_out = NO_LOAD_SIZE;
            end

        endcase
    end

    assign mem_addr_out = mem_addr_in;
    assign stroe_data_out = store_data_out;

endmodule
