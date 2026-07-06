import cpu_pkg::*;

module Decoder(
    input logic [31:0] instr_data_in,
    input logic instr_valid_in,
    input logic [31:0] instr_pc_in,
    input logic insert_NOP_bubble_in, // pulls high when we want to stall
    
    //ALU related
    output logic alu_en_out,
    output cpu_pkg::alu_op alu_op_out, 
    output cpu_pkg::alu_a_src alu_a_src_out,
    output cpu_pkg::alu_b_src alu_b_src_out,

    //Comparator related
    output logic comp_en_out,
    output cpu_pkg::comp_op comp_op_out,
    output cpu_pkg::comp_a_src comp_a_src_out,
    output cpu_pkg::comp_b_src comp_b_src_out,

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
    output logic reg_write_out,

    //memory
    output logic lsu_en_out,
    output logic [6:0] opcode_out,
    output cpu_pkg::lsu_op  lsu_op_out,

    //misc
    output logic [31:0] instr_pc_out,

    //For Immediate Parser
    output cpu_pkg::imm_sel imm_type_out
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

    logic reg_write;

    assign reg_write_out = reg_write;
    assign use_rd_out = reg_write && rd != 5'd0;

    assign instr_pc_out = instr_pc_in;
    assign opcode_out = instr_data_in[6:0];

    always @(*) begin
        //first initialize the signals
        comp_en_out = 1'b0;
        alu_en_out = 1'b0;
        comp_op_out = NO_COMP;
        imm_type_out = NO_IMM;
        branch_op_out = NO_BRANCH;
        jump_op_out = NO_JUMP;
        alu_a_src_out = ALU_A_NOP;
        alu_b_src_out = ALU_B_NOP;
        reg_write = 1'b0;
        lsu_en_out = 1'b0;
        alu_op_out = ALU_NOP;
        lsu_op_out = NO_LSU;
        comp_a_src_out = COMP_A_NOP;
        comp_b_src_out = COMP_B_NOP;

        if(!instr_valid_in || insert_NOP_bubble_in) begin
            comp_en_out = 1'b0;
            alu_en_out = 1'b0;
            comp_op_out = NO_COMP;
            imm_type_out = NO_IMM;
            branch_op_out = NO_BRANCH;
            jump_op_out = NO_JUMP;
            alu_a_src_out = ALU_A_NOP;
            alu_b_src_out = ALU_B_NOP;
            reg_write = 1'b0;
            lsu_en_out = 1'b0;
            alu_op_out = ALU_NOP;
            comp_a_src_out = COMP_A_NOP;
            comp_b_src_out = COMP_B_NOP;

        end else begin
            case(instr_data_in[6:0])
                OPCODE_R: begin
                    case({funct7,funct3})
                        10'b0000000_000: begin //ADD
                            alu_op_out = ALU_ADD;  
                            alu_en_out = 1'b1;
                            alu_a_src_out = ALU_A_RS1;
                            alu_b_src_out = ALU_B_RS2;
                        end 
                        10'b0100000_000: begin //SUB
                            alu_op_out = ALU_SUB;
                            alu_en_out = 1'b1;
                            alu_a_src_out = ALU_A_RS1;
                            alu_b_src_out = ALU_B_RS2;  
                        end  

                        10'b0000000_111: begin //AND
                            alu_op_out = ALU_AND; 
                            alu_en_out = 1'b1;
                            alu_a_src_out = ALU_A_RS1;
                            alu_b_src_out = ALU_B_RS2;  
                        end

                        10'b0000000_110: begin //OR
                            alu_op_out = ALU_OR;
                            alu_en_out = 1'b1;
                            alu_a_src_out = ALU_A_RS1;
                            alu_b_src_out = ALU_B_RS2;  
                        end   

                        10'b0000000_100: begin //XOR
                            alu_op_out = ALU_XOR;
                            alu_en_out = 1'b1;
                            alu_a_src_out = ALU_A_RS1;
                            alu_b_src_out = ALU_B_RS2;  
                        end
                        
                        10'b0000000_010: begin //SLT
                            comp_op_out = COMP_SLT;
                            comp_en_out = 1'b1;
                            comp_a_src_out = COMP_A_RS1;
                            comp_b_src_out = COMP_B_RS2;
                        end
                        default: alu_op_out = ALU_NULL;
                    endcase


                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b1;
                    reg_write = 1'b1;
                end

                OPCODE_I_ALU: begin
                    imm_type_out = IMM_I_TYPE;
                    case(funct3)
                        3'b000: begin //addi
                            alu_op_out = ALU_ADD;
                            alu_en_out = 1'b1;
                            alu_a_src_out = ALU_A_RS1;
                            alu_b_src_out = ALU_B_IMM;
                        end

                        3'b010: begin //slti
                            comp_op_out = COMP_SLT; 
                            comp_en_out = 1'b1;
                            comp_a_src_out = COMP_A_RS1;
                            comp_b_src_out = COMP_B_IMM;
                        end
                        
                        3'b111: begin //andi
                            alu_op_out = ALU_AND;
                            alu_en_out = 1'b1;
                            alu_a_src_out = ALU_A_RS1;
                            alu_b_src_out = ALU_B_IMM;
                        end

                        3'b110: begin //OR
                            alu_op_out = ALU_OR;  
                            alu_en_out = 1'b1;
                            alu_a_src_out = ALU_A_RS1;
                            alu_b_src_out = ALU_B_IMM;
                        end
                              
                        default: alu_op_out = ALU_NULL;
                    endcase

                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b0;
                    reg_write = 1'b1;
                end

                OPCODE_LOAD: begin
                    imm_type_out = IMM_I_TYPE;
                    case(funct3)
                        3'b010: begin
                            alu_op_out = ALU_ADD; //LW
                            lsu_op_out = LW;
                        end
                        default: alu_op_out = ALU_NULL;
                    endcase

                    alu_en_out = 1'b1;
                    alu_a_src_out = ALU_A_RS1;
                    alu_b_src_out = ALU_B_IMM;

                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b0;
                    reg_write = 1'b1;
                    lsu_en_out = 1'b1;
                end

                OPCODE_SW: begin
                    imm_type_out = IMM_S_TYPE;

                    alu_en_out = 1'b1;
                    alu_a_src_out = ALU_A_RS1;
                    alu_b_src_out = ALU_B_IMM;
                    alu_op_out = ALU_ADD; //SW

                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b1;
                    lsu_en_out = 1'b1;
                    lsu_op_out = SW;
                end

                OPCODE_BRANCH: begin
                    imm_type_out = IMM_B_TYPE;
                    case(funct3)
                        BEQ_FUNCT3: begin
                            branch_op_out = BRANCH_BEQ;
                            comp_op_out = COMP_BEQ;
                        end

                        BNE_FUNCT3: begin
                            branch_op_out = BRANCH_BNE;
                            comp_op_out = COMP_BNE;
                        end 
                        default: branch_op_out = NO_BRANCH;
                    endcase
                    alu_en_out = 1'b1;
                    alu_a_src_out = ALU_A_PC;
                    alu_b_src_out = ALU_B_IMM;
                    alu_op_out = ALU_ADD;
                    comp_en_out = 1'b1;
                    comp_a_src_out = COMP_A_RS1;
                    comp_b_src_out = COMP_B_RS2;

                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b1;
                    reg_write = 1'b0;
                end

                OPCODE_JAL: begin
                    imm_type_out = IMM_J_TYPE;
                    jump_op_out = JUMP_JAL;
                    alu_a_src_out = ALU_A_PC;
                    alu_b_src_out = ALU_B_IMM;
                    alu_op_out = ALU_ADD;
                    alu_en_out = 1'b1;
                    
                    use_rs1_out = 1'b0;
                    use_rs2_out = 1'b0;
                    reg_write = 1'b1;
                end

                OPCODE_JALR: begin
                    imm_type_out = IMM_I_TYPE;
                    jump_op_out = JUMP_JALR;
                    
                    alu_en_out = 1'b1;
                    alu_a_src_out = ALU_A_RS1;
                    alu_b_src_out = ALU_B_IMM;
                    alu_op_out = ALU_ADD;
                    
                    use_rs1_out = 1'b1;
                    use_rs2_out = 1'b0;
                    reg_write = 1'b1;
                end

                OPCODE_LUI: begin
                    imm_type_out = IMM_U_TYPE;
                    
                    alu_a_src_out = ALU_A_ZERO;
                    alu_b_src_out = ALU_B_IMM;
                    alu_op_out = ALU_ADD;
                    alu_en_out = 1'b1;

                    reg_write = 1'b1;
                end

                default: begin
                    imm_type_out = NULL_IMM;
                    branch_op_out = NO_BRANCH;
                    jump_op_out = NO_JUMP;
                end
            endcase
        end
    end
    
endmodule