/*
    A unit that deals with forwarded data to assist the operand parser.
*/
`timescale 1ns/1ps
import cpu_pkg::*;

module Forward_Mux (
    //data from ex stage
    input logic [31:0] rs1_fw_ex_data,
    input logic [31:0] rs2_fw_ex_data,

    //data from mem stage
    input logic [31:0] rs1_fw_mem_data,
    input logic [31:0] rs2_fw_mem_data,

    input cpu_pkg::fw_rs1_sel fw_rs1_sel_in,
    input cpu_pkg::fw_rs2_sel fw_rs2_sel_in,

    //from idex reg
    input logic [31:0] rs1_data_in,
    input logic [31:0] rs2_data_in,

    output logic [31:0] fw_mux_rs1_data_out,
    output logic [31:0] fw_mux_rs2_data_out
);


    always_comb begin
        case(fw_rs1_sel_in)
            RS1_FW_EX: fw_mux_rs1_data_out = rs1_fw_ex_data;
            RS1_FW_MEM: fw_mux_rs1_data_out = rs1_fw_mem_data;
            RS1_NO_FW: fw_mux_rs1_data_out = rs1_data_in;
            default: fw_mux_rs1_data_out = rs1_data_in;
        endcase
    end

    always_comb begin
        case(fw_rs2_sel_in)
            RS2_FW_EX: fw_mux_rs2_data_out = rs2_fw_ex_data;
            RS2_FW_MEM: fw_mux_rs2_data_out = rs2_fw_mem_data;
            RS2_NO_FW: fw_mux_rs2_data_out = rs2_data_in;
            default: fw_mux_rs2_data_out = rs2_data_in;
        endcase
    end

endmodule
