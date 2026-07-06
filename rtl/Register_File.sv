module Register_File #(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
) (
    input logic clk,
    input logic reset,

    input logic [ADDR_WIDTH-1:0] rs1_addr_in,
    output logic [DATA_WIDTH-1:0] rs1_data_out,

    input logic [ADDR_WIDTH-1:0] rs2_addr_in,
    output logic [DATA_WIDTH-1:0] rs2_data_out,

    input logic [ADDR_WIDTH-1:0] rd_addr_in,
    input logic [DATA_WIDTH-1:0] rd_data_in,
    input logic write_en_in
);

localparam NUM_WORDS = 2 ** ADDR_WIDTH;

logic [DATA_WIDTH-1:0] Register_array [NUM_WORDS-1:0];

assign rs1_data_out = Register_array[rs1_addr_in];
assign rs2_data_out = Register_array[rs2_addr_in];

integer i;

always @(posedge clk) begin
    if(reset) begin
        for(i = 0; i < NUM_WORDS; i = i + 1) begin
            Register_array[i] <= 32'h0;
        end
    end else if (write_en_in && rd_addr_in != 5'h0) begin
        Register_array[rd_addr_in] <= rd_data_in;
    end
end

endmodule