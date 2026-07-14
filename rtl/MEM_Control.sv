`timescale 1ns/1ps
import cpu_pkg::*;

module MEM_Control (
    input cpu_pkg::lsu_op lsu_op_in,
    
    output logic mem_en_out,
    output logic mem_rw_out, //Read = 0, Write = 1
    output cpu_pkg::store_size_e mem_store_size_out,
    output cpu_pkg::load_size_e mem_load_size_out
);
    always_comb begin
        mem_en_out = lsu_op_in != NO_LSU;
        
        case (lsu_op_in)
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
    
endmodule