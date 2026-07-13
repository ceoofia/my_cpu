`timescale 1ns/1ps
import cpu_pkg::*;

module Memory #(
    parameter MEM_DEPTH = 4096,
    parameter DATA_ADDR = 0
) (
    input logic clk,
    input logic reset,

    input logic [31:0] addr_req_in,
    input logic [31:0] store_data_in,

    input logic mem_en_in,
    input logic mem_rw_in,
    input cpu_pkg::load_size_e mem_load_size_in,
    input cpu_pkg::store_size_e mem_store_size_in,

    output logic [31:0] mem_data_out,
    output logic mem_data_valid
);

    logic [7:0] mem [0:MEM_DEPTH-1];

    integer i;

    always_ff @(posedge clk) begin
        if(reset) begin
            for(i = 0; i < MEM_DEPTH; i = i + 1) begin
                mem[i] <= 8'h0;
            end
        end else if (mem_en_in && mem_rw_in && addr_req_in + mem_store_size_in - 1 < MEM_DEPTH 
            && mem_store_size_in != NO_STORE_SIZE) begin
                case(mem_store_size_in)
                    STORE_SIZE_WORD: begin
                        mem[DATA_ADDR + addr_req_in] <= store_data_in [31:24];
                        mem[DATA_ADDR + addr_req_in + 1] <= store_data_in [23:16];
                        mem[DATA_ADDR + addr_req_in + 2] <= store_data_in [15:8];
                        mem[DATA_ADDR + addr_req_in + 3] <= store_data_in [7:0];
                    end

                    default: ;

                endcase
        end
    end

    always_comb begin
        mem_data_valid = 1'b0;
        if(mem_en_in && !mem_rw_in && addr_req_in + mem_load_size_in -1 < MEM_DEPTH 
            && mem_load_size_in != NO_LOAD_SIZE) begin
            case(mem_load_size_in)
                LOAD_SIZE_WORD: begin
                mem_data_out = {
                    mem[DATA_ADDR + addr_req_in + 3],
                    mem[DATA_ADDR + addr_req_in + 2],
                    mem[DATA_ADDR + addr_req_in + 1],
                    mem[DATA_ADDR + addr_req_in]
                };
                mem_data_valid = 1'b1;
                end
                LOAD_SIZE_HALF: mem_data_out = 32'h0;
                LOAD_SIZE_BYTE: mem_data_out = 32'h0;
                NO_LOAD_SIZE: mem_data_out = 32'h0;
                default: mem_data_out = 32'h0;
            endcase
            end else 
                mem_data_out = 32'h0;
    end

endmodule
