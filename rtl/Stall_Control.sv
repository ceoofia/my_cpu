/*
    TODO: To be implemented after five stages are completed
*/
`timescale 1ns/1ps
module Stall_Control (
    input logic [4:0] ex_rd_addr,
    input logic ex_is_load,

    input logic [4:0] id_rs1_addr,
    input logic [4:0] id_rs2_addr,

    input logic id_use_rs1,
    input logic id_use_rs2,

    output logic ifid_stall_out,
    output logic idex_stall_out
);

    logic addr_match;

    assign addr_match = (ex_rd_addr == id_rs1_addr && id_use_rs1) ||
        (ex_rd_addr == id_rs2_addr && id_use_rs2);

    assign ifid_stall_out = (ex_is_load && addr_match && ex_rd_addr != 5'h0);
    assign idex_stall_out = (ex_is_load && addr_match && ex_rd_addr != 5'h0);

endmodule