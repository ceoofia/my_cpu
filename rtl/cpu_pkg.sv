/*
    Here defines common parameters etc.

    Following instructions are supported: 
    R-type: ADD, SUB, AND, OR, XOR, SLT
    I-type: ADDI, ANDI, ORI, SLTI, LW, JALR
    S-type: SW
    B-type: BEQ, BNE
    U-type: LUI
    J-type: JAL
*/
`timescale 1ns/1ps

package cpu_pkg;

    //defines opcodes for different types of instructions
    parameter OPCODE_R      = 7'b0110011; //R-type
    parameter OPCODE_I_ALU  = 7'b0010011; //I-type ALU
    parameter OPCODE_LOAD   = 7'b0000011; //Load
    parameter OPCODE_SW     = 7'b0100011; //Store
    parameter OPCODE_BRANCH = 7'b1100011; //Branches
    parameter OPCODE_JAL    = 7'b1101111; //JAL
    parameter OPCODE_JALR   = 7'b1100111; //JALR
    parameter OPCODE_LUI    = 7'b0110111; //LUI
    
    /*
        typedef enum logic [2:0] {
        ADD_SUB_FUNCT3 = 3'h0,
        AND_FUNCT3  = 3'h7,
        OR_FUNCT3   = 3'h6,
        XOR_FUNCT3  = 3'h4,
        SLT_FUNCT3  = 3'h2
        }  R_funct3;
    */
    

    typedef enum logic [2:0] {
        BEQ_FUNCT3 = 3'b000,
        BNE_FUNCT3 = 3'b001
    } BR_funct3;

    typedef enum logic [2:0] {
        NEXTPC,
        ALU_PC_RESULT,
        OFFSET,
        ALU_PC_RESULT_JALR,
        NOP_PC
    } pc_mux_sel;

    typedef enum logic [2:0] {
        IMM_S_TYPE,
        IMM_I_TYPE,
        IMM_B_TYPE,
        IMM_U_TYPE,
        IMM_J_TYPE,
        NO_IMM,
        NULL_IMM
    } imm_sel;

    typedef enum logic [2:0] {
        ALU_ADD,
        ALU_SUB,
        ALU_AND,
        ALU_OR,
        ALU_XOR,
        ALU_SLT, //?
        ALU_NULL, //operation
        ALU_NOP //used for NOP, writes back to x0 with 0
    } alu_op;

    typedef enum logic [1:0] {
        ALU_A_RS1,
        ALU_A_PC,
        ALU_A_ZERO,
        ALU_A_NOP
    } alu_a_src;

    typedef enum logic [1:0] {
        ALU_B_RS2,
        ALU_B_IMM,
        ALU_B_NOP
    } alu_b_src;
    
    typedef enum logic [1:0] {
        COMP_A_RS1,
        COMP_A_NOP
    } comp_a_src;

    typedef enum logic [1:0] {
        COMP_B_RS2,
        COMP_B_IMM,
        COMP_B_NOP
    } comp_b_src;

    typedef enum logic [2:0] {
        NO_BRANCH,
        BRANCH_BEQ,
        BRANCH_BNE
    } branch_op;

    typedef enum logic [2:0] {
        NO_JUMP,
        JUMP_JAL,
        JUMP_JALR
    } jump_op;

    typedef enum logic [2:0] {
        COMP_EQ,
        COMP_NE,
        COMP_LT,
        COMP_SLT,
        NO_COMP
    } comp_op;

    typedef enum logic [1:0] {
        LW,
        SW,
        NO_LSU
    } lsu_op;

    typedef enum logic [1:0] {
        RS1_FW_EX,
        RS1_FW_MEM,
        RS1_NO_FW
    } fw_rs1_sel;

    typedef enum logic [1:0] {
        RS2_FW_EX,
        RS2_FW_MEM,
        RS2_NO_FW
    } fw_rs2_sel;

    //a package of control signals
    typedef struct packed {
        logic alu_en;
        alu_op alu_op_type;
        alu_a_src alu_a_src_sel;
        alu_b_src alu_b_src_sel;

        //Comparator related
        logic comp_en;
        comp_op comp_op_type;
        comp_a_src comp_a_src_sel;
        comp_b_src comp_b_src_sel;

        //branch and jump
        branch_op branch_op_type;
        jump_op jump_op_type;

        //Source and destinations
        logic [4:0] rs1_addr; 
        logic use_rs1;
        logic [4:0] rs2_addr;
        logic use_rs2;
        logic [4:0] rd_addr;
        logic use_rd;
        logic reg_write;

        //memory
        logic lsu_en;

        //misc
        logic [31:0] instr_pc;

        lsu_op  lsu_op_type;
        logic [31:0] imm_value;

        logic [31:0] rs1_data;
        logic [31:0] rs2_data;
    } idex_ctrl_signals_t;



endpackage