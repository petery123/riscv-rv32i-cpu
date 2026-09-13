import riscv_pkg::*;

module decoder  (
    input  logic [31:0] inst,
    output logic [6:0] opcode,
    output logic [4:0] rd,
    output logic [2:0] funct3,
    output logic [4:0] rs1,
    output logic [4:0] rs2,
    output logic [6:0] funct7,

    output instr_type_t instr_type,
    output immediate_t im_type,
    output logic signed [31:0] immediate,
    output alu_op_t alu_op
);
        
    assign opcode     = inst[6:0];
    assign rd         = inst[11:7];
    assign funct3     = inst[14:12];
    assign rs1        = inst[19:15];
    assign rs2        = inst[24:20];
    assign funct7     = inst[31:25];

    always_comb begin : opcode_decode

        instr_type = '0;
        case (opcode)
            7'b0110011 : instr_type.is_r_type  = 1'b1;
            7'b0010011 : instr_type.is_i_type  = 1'b1;
            7'b0000011 : instr_type.is_load    = 1'b1;
            7'b0100011 : instr_type.is_store   = 1'b1;
            7'b1100011 : instr_type.is_branch  = 1'b1;
            7'b0110111 : instr_type.is_lui     = 1'b1;
            7'b0010111 : instr_type.is_auipc   = 1'b1;
            7'b1101111 : instr_type.is_jal     = 1'b1;
            7'b1100111 : instr_type.is_jalr    = 1'b1;
            default    : instr_type = '0 ;
        endcase

    end

    always_comb begin : get_im_type
        
        if (instr_type.is_i_type || instr_type.is_load || instr_type.is_jalr) begin
            im_type = I_TYPE;
        end
        else if (instr_type.is_store) begin
            im_type = S_TYPE;
        end
        else if (instr_type.is_branch) begin
            im_type = B_TYPE;
        end
        else if (instr_type.is_lui || instr_type.is_auipc) begin
            im_type = U_TYPE;
        end
        else if (instr_type.is_jal) begin
            im_type = J_TYPE;
        end
        else begin
            im_type = NO_IMMEDIATE;
        end
    end

    always_comb begin : calc_immediate
        case (im_type)
            I_TYPE : immediate =  $signed(inst[31:20]);
            S_TYPE : immediate =  $signed({inst[31:25], inst[11:7]});
            B_TYPE : immediate =  $signed({inst[31], inst[7], inst[30:25], inst[11:8], 1'b0});
            U_TYPE : immediate =  $signed({inst[31:12], 12'b0});
            J_TYPE : immediate =  $signed({inst[31], inst[19:12], inst[20], inst[30:21], 1'b0});
            default: immediate = '0;
        endcase
    end

    always_comb begin: get_op
        alu_op = ADD;

        if (instr_type.is_r_type) begin
            case ({funct7, funct3})
                10'b0000000_000: alu_op = ADD;
                10'b0100000_000: alu_op = SUB;
                10'b0000000_111: alu_op = AND;
                10'b0000000_110: alu_op = OR;
                10'b0000000_100: alu_op = XOR;
                10'b0000000_001: alu_op = SLL;
                10'b0000000_101: alu_op = SRL;
                10'b0100000_101: alu_op = SRA;
                10'b0000000_010: alu_op = SLT;
                10'b0000000_011: alu_op = SLTU;
                default:         alu_op = ADD;
            endcase
        end
        
        else if (instr_type.is_i_type) begin
            case (funct3)
                3'b000: alu_op = ADD;   // ADDI
                3'b010: alu_op = SLT;   // SLTI
                3'b011: alu_op = SLTU;  // SLTIU
                3'b100: alu_op = XOR;   // XORI
                3'b110: alu_op = OR;    // ORI
                3'b111: alu_op = AND;   // ANDI

                3'b001: alu_op = SLL;   // SLLI

                3'b101: begin
                    if (funct7 == 7'b0000000)
                        alu_op = SRL;   // SRLI
                    else if (funct7 == 7'b0100000)
                        alu_op = SRA;   // SRAI
                    else
                        alu_op = ADD;
                end

                default: alu_op = ADD;
            endcase
        end

        else if (instr_type.is_load || instr_type.is_store || instr_type.is_jalr) begin
            alu_op = ADD;
        end

    end
    
endmodule
