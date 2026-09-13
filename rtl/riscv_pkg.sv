package riscv_pkg;

    typedef struct packed {
        logic is_r_type;
        logic is_i_type;
        logic is_load;
        logic is_store;
        logic is_branch;
        logic is_lui;
        logic is_auipc;
        logic is_jal;
        logic is_jalr;
    } instr_type_t;

    typedef enum logic [2:0] {
        NO_IMMEDIATE,
        I_TYPE,
        S_TYPE,
        B_TYPE,
        U_TYPE,
        J_TYPE
    } immediate_t;

    typedef enum logic [3:0] {
        ADD,
        SUB,
        AND,
        OR,
        XOR,
        SLL,
        SRL,
        SRA,
        SLT,
        SLTU
    } alu_op_t;

    typedef enum logic [2:0] {
        BYTE,
        HALFWORD,
        WORD,
        RESERVED
    } access_size_t;

    parameter int ADDR_WIDTH = 5;
    parameter int DATA_WIDTH = 32;

endpackage

/*
R-type: register-to-register arithmetic/logic. It reads rs1 and rs2, performs an ALU operation, and writes the result to rd. 
    Examples: ADD, SUB, AND, OR.
I-type: uses one register plus an immediate value. It usually reads rs1, combines it with an immediate, and writes to rd. 
    Examples: ADDI, ANDI, ORI. JALR also uses an I-type bit layout, but you gave it its own class because its behavior is different.
Load: reads an address from rs1 + immediate, accesses memory, and writes the loaded value into rd. 
    Examples: LB, LH, LW.
Store: reads data from rs2, computes a memory address using rs1 + immediate, and writes the data to memory. 
    Examples: SB, SH, SW.
Branch: compares rs1 and rs2. If the branch condition is true, the PC changes by a signed branch offset. 
    Examples: BEQ, BNE, BLT.
LUI: "Load Upper Immediate." It takes a 20-bit immediate, 
    places it in the upper 20 bits of the result, fills the lower 12 bits with zeros, and writes that to rd.
AUIPC: "Add Upper Immediate to PC." Similar immediate layout to LUI, 
    but instead of just writing the immediate, it adds it to the current PC and stores the result in rd.
JAL: "Jump And Link." It jumps to PC + immediate and saves the return address, normally PC + 4, into rd.
JALR: "Jump And Link Register." It jumps to an address based on rs1 + immediate, while also saving PC + 4 into rd.
*/
