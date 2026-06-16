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
    
    typedef enum logic [2:0] {
        ADD_SUB_FUNCT3 = 3'h0,
        AND_FUNCT3  = 3'h7,
        OR_FUNCT3   = 3'h6,
        XOR_FUNCT3  = 3'h4,
        SLT_FUNCT3  = 3'h2
    } R_funct3;

    typedef enum logic [2:0] {
        NEXTPC,
        ALU_PC_RESULT,
        OFFSET,
        ALU_PC_RESULT_JALR,
        NOP_PC
    } pc_mux_sel;



endpackage