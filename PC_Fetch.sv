import cpu_pkg::*;

module PC_Fetch (
    //stall logic 
    input logic stall_in,

    //current pc
    input logic [31:0] current_pc_in,

    //redirecting
    input logic redirect_valid_in,
    input logic [31:0] redirect_dest_in,

    //branch prediction logic
    input logic branch_predicted_in, // 1 when predicted taken
    input logic [31:0] branch_dest_in,

    output logic [31:0] next_pc_addr_out
);

    always_comb begin
        if (stall_in)
            next_pc_addr_out = current_pc_in;
        else if (redirect_valid_in)
            next_pc_addr_out = redirect_dest_in;
        else if (branch_predicted_in)
            next_pc_addr_out = branch_dest_in;
        else    
            next_pc_addr_out = current_pc_in + 4;
    end
    
endmodule