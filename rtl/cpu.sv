import riscv_pkg::*;

module cpu (
    input logic clk,
    input logic reset
    // input logic [31:0] inst
);
    logic [31:0] inst;
    logic [6:0] opcode;
    logic [4:0] rd;
    logic [2:0] funct3;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [6:0] funct7;
    instr_type_t instr_type;
    immediate_t im_type;
    logic signed [DATA_WIDTH-1:0] immediate;
    alu_op_t alu_op;

    logic [DATA_WIDTH-1:0] a;
    logic [DATA_WIDTH-1:0] b;
    logic [DATA_WIDTH-1:0] result;

    logic [DATA_WIDTH-1:0] read_data1;
    logic [DATA_WIDTH-1:0] read_data2;    
    logic [DATA_WIDTH-1:0] write_data;
    logic write_en;

    logic [DATA_WIDTH-1:0] next_pc;
    logic [DATA_WIDTH-1:0] pc;

    logic mem_write;
    logic [DATA_WIDTH-1:0] mem_write_data;
    logic [DATA_WIDTH-1:0] mem_read_data;
    logic [9:0] mem_addr; 
    access_size_t mem_access_size;
    logic mem_is_signed;     


    program_counter pc_m(
        .clk(clk),
        .reset(reset),
        .next_pc(next_pc),
        .pc(pc)
    );
    
    decoder decoder_m(
        .inst(inst),
        .opcode(opcode),
        .rd(rd),
        .funct3(funct3),
        .rs1(rs1),
        .rs2(rs2),
        .funct7(funct7),
        .instr_type(instr_type),
        .im_type(im_type),
        .immediate(immediate),
        .alu_op(alu_op)
    );

    alu alu_m(
        .a(a),
        .b(b),
        .alu_op(alu_op),
        .result(result)
    );

    register_file register_file_m (
        .read_addr1(rs1),
        .read_addr2(rs2),
        .write_addr(rd),
        .write_data(write_data),
        .clk(clk),
        .write_en(write_en),
        .read_data1(read_data1),
        .read_data2(read_data2)
    );

    data_memory data_memory_m(
        .clk(clk),
        .access_size(mem_access_size),
        .is_signed(mem_is_signed),
        .mem_write(mem_write),
        .address(result),
        .write_data(read_data2),
        .read_data(mem_read_data)
    );

    instruction_memory instruction_memory_m(
        .pc_address(pc),
        .instr_out(inst)
    );

    always_comb begin : set_mem_write
        mem_write = 1'b0;
        if (instr_type.is_store) begin
            mem_write = 1'b1;
        end 
    end

    always_comb begin : set_alu_inputs
        a = read_data1;
        b = '0;
        
        if (instr_type.is_r_type) begin
            b = read_data2;
        end else if (instr_type.is_i_type || instr_type.is_store || instr_type.is_load) begin
            b = immediate;
        end
    end

    always_comb begin : set_write_en
        write_en = 1'b0;
        if (instr_type.is_r_type || instr_type.is_i_type || instr_type.is_load || instr_type.is_lui || instr_type.is_auipc || instr_type.is_jal || instr_type.is_jalr ) begin
            write_en = 1'b1;
        end 
    end

    always_comb begin : set_write_data
        write_data = '0;
        if (instr_type.is_r_type || instr_type.is_i_type) begin
            write_data = result; 
        end else if (instr_type.is_load) begin
            write_data = mem_read_data;
        end else if (instr_type.is_lui) begin
            write_data = immediate;
        end else if (instr_type.is_auipc) begin
            write_data = pc + immediate;
        end else if (instr_type.is_jal || instr_type.is_jalr) begin
            write_data = pc + 4;
        end
    end

    always_comb begin : set_access_size_sign
        mem_access_size = WORD;
        mem_is_signed   = 1'b0;

        if (instr_type.is_load) begin
            case (funct3)
                3'b000: begin
                    mem_access_size = BYTE;
                    mem_is_signed   = 1'b1;
                end

                3'b001: begin
                    mem_access_size = HALFWORD;
                    mem_is_signed   = 1'b1;
                end

                3'b010: begin
                    mem_access_size = WORD;
                end

                3'b100: begin
                    mem_access_size = BYTE;
                    mem_is_signed   = 1'b0;
                end

                3'b101: begin
                    mem_access_size = HALFWORD;
                    mem_is_signed   = 1'b0;
                end

                default: ;
            endcase

        end else if (instr_type.is_store) begin
            case (funct3)
                3'b000: mem_access_size = BYTE;
                3'b001: mem_access_size = HALFWORD;
                3'b010: mem_access_size = WORD;
                default: ;
            endcase
        end
    end

    always_comb begin : set_next_pc
        next_pc = pc + 4;

        if (instr_type.is_jal) begin
            next_pc = pc + immediate;

        end else if (instr_type.is_jalr) begin
            next_pc = (read_data1 + immediate) & 32'hFFFF_FFFE;

        end else if (instr_type.is_branch) begin
            case (funct3)
                3'b000: if (read_data1 == read_data2)
                            next_pc = pc + immediate;  // BEQ

                3'b001: if (read_data1 != read_data2)
                            next_pc = pc + immediate;  // BNE

                3'b100: if ($signed(read_data1) < $signed(read_data2))
                            next_pc = pc + immediate;  // BLT

                3'b101: if ($signed(read_data1) >= $signed(read_data2))
                            next_pc = pc + immediate;  // BGE

                3'b110: if ($unsigned(read_data1) < $unsigned(read_data2))
                            next_pc = pc + immediate;  // BLTU

                3'b111: if ($unsigned(read_data1) >= $unsigned(read_data2))
                            next_pc = pc + immediate;  // BGEU

                default: ;
            endcase
        end
    end

endmodule
