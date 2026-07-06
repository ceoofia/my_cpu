/*
    A unit that deals with forwarded data to assist the operand parser.
*/
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
    input cpu_pkg::idex_ctrl_signals_t fw_mux_ctrl_signals_in,

    output cpu_pkg::idex_ctrl_signals_t fw_mux_ctrl_signals_out
);

    logic [31:0] rs1;
    logic [31:0] rs2;

    always_comb begin
        fw_mux_ctrl_signals_out = fw_mux_ctrl_signals_in;
        fw_mux_ctrl_signals_out.rs1_data = rs1;
        fw_mux_ctrl_signals_out.rs2_data = rs2;
    end

    always_comb begin
        case(fw_rs1_sel_in)
            RS1_FW_EX: rs1 = rs1_fw_ex_data;
            RS1_FW_MEM: rs1 = rs1_fw_mem_data;
            RS1_NO_FW: rs1 = fw_mux_ctrl_signals_in.rs1_data;
            default: rs1 = fw_mux_ctrl_signals_in.rs1_data;
        endcase
    end

    always_comb begin
        case(fw_rs2_sel_in)
            RS2_FW_EX: rs2 = rs2_fw_ex_data;
            RS2_FW_MEM: rs2 = rs2_fw_mem_data;
            RS2_NO_FW: rs2 = fw_mux_ctrl_signals_in.rs2_data;
            default: rs2 = fw_mux_ctrl_signals_in.rs2_data;
        endcase
    end
    
endmodule