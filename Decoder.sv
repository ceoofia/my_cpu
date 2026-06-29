import cpu_pkg::*;

module Decoder(
    input logic [31:0] instr_data_in,
    input logic instr_valid_in,
    input logic instr_pc_in,
    input logic insert_NOP_bubble_in, // pulls high when
    
    //ALU related
    output cpu_pkg::alu_op alu_op_out, 
    output cpu_pkg::alu_a_src alu_a_src_out,
    output cpu_pkg::alu_b_src alu_b_src_out,

    //branch and jump
    output cpu_pkg::branch_op branch_op_out,
    output cpu_pkg::jump_op jump_op_out,

    //Source and destinations
    output logic [4:0] rs1_addr_out, 
    output logic [4:0] rs2_addr_out,
    output logic [4:0] rd_addr_out,


    output logic [6:0] opcode_out,

    //For Immediate Parser
    output cpu_pkg::imm_sel imm_type_out
    /*
        TODO: Add relevant outputs
    */
);  
    logic [6:0] funct7;
    logic [2:0] funct3;

    assign funct3 = instr_data_in [14:12];
    assign funct7 = instr_data_in [31:25];

    //decides imm_type
    always @(*) begin
        case(instr_data_in[6:0])
            OPCODE_R: begin
                imm_type_out = NO_IMM;
                branch_op_out = NO_BRANCH;
                jump_op_out = NO_JUMP;
            end

            OPCODE_I_ALU: begin
                imm_type_out = IMM_I_TYPE;
                branch_op_out = NO_BRANCH;
                jump_op_out = NO_JUMP;
            end

            OPCODE_LOAD: begin
                imm_type_out = IMM_I_TYPE;
                branch_op_out = NO_BRANCH;
                jump_op_out = NO_JUMP;
            end

            OPCODE_SW: begin
                imm_type_out = IMM_S_TYPE;
                branch_op_out = NO_BRANCH;
                jump_op_out = NO_JUMP;
            end

            OPCODE_BRANCH: begin
                imm_type_out = IMM_B_TYPE;
                case(funct3)
                    BEQ_FUNCT3: branch_op_out = BRANCH_BEQ;
                    BNE_FUNCT3: branch_op_out = BRANCH_BNE;
                    default: branch_op_out = NO_BRANCH;
                endcase
                jump_op_out = NO_JUMP;
            end

            OPCODE_JAL: begin
                imm_type_out = IMM_J_TYPE;
                branch_op_out = NO_BRANCH;
                jump_op_out = JUMP_JAL;
            end

            OPCODE_JALR: begin
                imm_type_out = IMM_I_TYPE;
                branch_op_out = NO_BRANCH;
                jump_op_out = JUMP_JALR;
            end

            OPCODE_LUI: begin
                imm_type_out = IMM_U_TYPE;
                branch_op_out = NO_BRANCH;
                jump_op_out = NO_JUMP;
            end

            default: begin
                imm_type_out = NULL_IMM;
                branch_op_out = NO_BRANCH;
                jump_op_out = NO_JUMP;
            end
        endcase
    end

    assign opcode_out = instr_data_in[6:0];



endmodule