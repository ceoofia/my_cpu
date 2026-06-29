import cpu_pkg::*;

module Decoder(
    input logic [31:0] instr_data_in,
    input logic instr_valid_in,
    input logic [31:0] instr_pc_in,
    input logic insert_NOP_bubble_in, // pulls high when
    
    //ALU related
    output logic alu_en_out,
    output cpu_pkg::alu_op alu_op_out, 
    output cpu_pkg::alu_a_src alu_a_src_out,
    output cpu_pkg::alu_b_src alu_b_src_out,

    /*
        TODO: Review
    */
    //Comparator related
    output logic comp_en_out,
    output cpu_pkg::comp_op comp_op_out,

    //branch and jump
    output cpu_pkg::branch_op branch_op_out,
    output cpu_pkg::jump_op jump_op_out,

    //Source and destinations
    output logic [4:0] rs1_addr_out, 
    output logic use_rs1_out,
    output logic [4:0] rs2_addr_out,
    output logic use_rs2_out,
    output logic [4:0] rd_addr_out,
    output logic use_rd_out,


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

    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rd;

    assign rs1 = instr_data_in [19:15];
    assign rs2 = instr_data_in [24:20];
    assign rd  = instr_data_in [11:7];

    assign rs1_addr_out = rs1;
    assign rs2_addr_out = rs2;
    assign rd_addr_out = rd;

    always @(*) begin
        if(!instr_valid_in || insert_NOP_bubble_in) begin
            imm_type_out = NO_IMM;
            branch_op_out = NO_BRANCH;
            jump_op_out = NO_JUMP;
        end else begin
            case(instr_data_in[6:0])
                OPCODE_R: begin
                    imm_type_out = NO_IMM;
                    branch_op_out = NO_BRANCH;
                    jump_op_out = NO_JUMP;
                    case({funct7,funct3})
                        10'b0000000_000: alu_op_out = ALU_ADD;  //ADD
                        10'b0100000_000: alu_op_out = ALU_SUB;  //SUB
                        10'b0000000_111: alu_op_out = ALU_AND;  //AND
                        10'b0000000_110: alu_op_out = ALU_OR;   //OR
                        10'b0000000_100: alu_op_out = ALU_XOR;  //XOR
                        10'b0000000_010: alu_op_out = ALU_SLT;  //SLT
                        default: alu_op_out = ALU_NULL;
                    endcase

                    alu_en_out = 1'b1;
                    comp_en_out = 1'b0;
                    alu_a_src_out = ALU_A_RS1;
                    alu_b_src_out = ALU_B_RS2;

                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b1;
                    use_rd_out = 1'b1;
                end

                OPCODE_I_ALU: begin
                    imm_type_out = IMM_I_TYPE;
                    branch_op_out = NO_BRANCH;
                    jump_op_out = NO_JUMP;
                    case(funct3)
                        3'b000: alu_op_out = ALU_ADD;   //addi
                        3'b010: alu_op_out = ALU_SLT;   //slti
                        3'b111: alu_op_out = ALU_AND;   //andi
                        3'b110: alu_op_out = ALU_OR;    //ori
                        default: alu_op_out = ALU_NULL;
                    endcase
                    
                    alu_en_out = 1'b1;
                    comp_en_out = 1'b0;
                    alu_a_src_out = ALU_A_RS1;
                    alu_b_src_out = ALU_B_IMM;

                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b0;
                    use_rd_out = 1'b1;
                end

                OPCODE_LOAD: begin
                    imm_type_out = IMM_I_TYPE;
                    branch_op_out = NO_BRANCH;
                    jump_op_out = NO_JUMP;
                    case(funct3)
                        3'b010: alu_op_out = ALU_ADD; //LW
                        default: alu_op_out = ALU_NULL;
                    endcase

                    alu_en_out = 1'b1;
                    comp_en_out = 1'b0;
                    alu_a_src_out = ALU_A_RS1;
                    alu_b_src_out = ALU_B_IMM;

                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b0;
                    use_rd_out = 1'b1;
                end

                OPCODE_SW: begin
                    imm_type_out = IMM_S_TYPE;
                    branch_op_out = NO_BRANCH;
                    jump_op_out = NO_JUMP;

                    alu_a_src_out = ALU_A_RS1;
                    alu_b_src_out = ALU_B_RS2;

                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b1;
                    use_rd_out = 1'b0;
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
    end

    assign opcode_out = instr_data_in[6:0];



endmodule