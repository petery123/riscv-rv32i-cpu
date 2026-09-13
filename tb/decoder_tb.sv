module decoder_tb;
    logic [31:0] inst;
    logic [6:0] opcode;
    logic [4:0] rd;
    logic [2:0] funct3;
    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [6:0] funct7;
    instr_type_t instr_type;
    immediate_t im_type;
    logic signed [31:0] immediate;
    alu_op_t alu_op;

    instr_type_t expected_type;

    decoder dut(
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

    task test_instruction(
            input logic [31:0] test_inst,
            input logic [6:0]  exp_opcode,
            input logic [4:0]  exp_rd,
            input logic [2:0]  exp_funct3,
            input logic [4:0]  exp_rs1,
            input instr_type_t exp_instr_type,
            input logic signed [31:0] exp_immediate,
            input alu_op_t exp_alu_op
        );
        inst = test_inst;

        #1;

        assert (opcode == exp_opcode)
            $display("PASS: opcode");
        else
            $error("FAIL: opcode expected %b, got %b", exp_opcode, opcode);

        assert (rd == exp_rd)
            $display("PASS: rd");
        else
            $error("FAIL: rd expected %0d, got %0d", exp_rd, rd);

        assert (funct3 == exp_funct3)
            $display("PASS: funct3");
        else
            $error("FAIL: funct3 expected %b, got %b", exp_funct3, funct3);

        assert (rs1 == exp_rs1)
            $display("PASS: rs1");
        else
            $error("FAIL: rs1 expected %0d, got %0d", exp_rs1, rs1);

        assert (instr_type == exp_instr_type)
            $display("PASS: instruction type");
        else
            $error("FAIL: instruction type");

        assert (immediate == exp_immediate)
            $display("PASS: immediate");
        else
            $error("FAIL: immediate expected %0d, got %0d",
                exp_immediate, immediate);
        
        assert (alu_op == exp_alu_op)
            $display("PASS: alu_op");
        else
            $error("FAIL: alu_op expected %0d, got %0d",
                exp_alu_op, alu_op);
    endtask

    initial begin

        // -------------------------------------------------
        // R-type: ADD x5, x6, x7
        // -------------------------------------------------
        expected_type = '0;
        expected_type.is_r_type = 1'b1;

        test_instruction(
            32'h007302B3,
            7'b0110011,
            5'd5,
            3'b000,
            5'd6,
            expected_type,
            32'sd0,
            ADD
        );


        // -------------------------------------------------
        // R-type: SUB x5, x6, x7
        // -------------------------------------------------
        expected_type = '0;
        expected_type.is_r_type = 1'b1;

        test_instruction(
            32'h407302B3,
            7'b0110011,
            5'd5,
            3'b000,
            5'd6,
            expected_type,
            32'sd0,
            SUB
        );


        // -------------------------------------------------
        // R-type: AND x5, x6, x7
        // -------------------------------------------------
        expected_type = '0;
        expected_type.is_r_type = 1'b1;

        test_instruction(
            32'h007372B3,
            7'b0110011,
            5'd5,
            3'b111,
            5'd6,
            expected_type,
            32'sd0,
            AND
        );


        // -------------------------------------------------
        // R-type: OR x5, x6, x7
        // -------------------------------------------------
        expected_type = '0;
        expected_type.is_r_type = 1'b1;

        test_instruction(
            32'h007362B3,
            7'b0110011,
            5'd5,
            3'b110,
            5'd6,
            expected_type,
            32'sd0,
            OR
        );


        // -------------------------------------------------
        // R-type: XOR x5, x6, x7
        // -------------------------------------------------
        expected_type = '0;
        expected_type.is_r_type = 1'b1;

        test_instruction(
            32'h007342B3,
            7'b0110011,
            5'd5,
            3'b100,
            5'd6,
            expected_type,
            32'sd0,
            XOR
        );


        // -------------------------------------------------
        // I-type: ADDI x5, x6, -4
        // -------------------------------------------------
        expected_type = '0;
        expected_type.is_i_type = 1'b1;

        test_instruction(
            32'hFFC30293,
            7'b0010011,
            5'd5,
            3'b000,
            5'd6,
            expected_type,
            -32'sd4,
            ADD
        );


        // -------------------------------------------------
        // I-type: ANDI x5, x6, 12
        // -------------------------------------------------
        expected_type = '0;
        expected_type.is_i_type = 1'b1;

        test_instruction(
            32'h00C37293,
            7'b0010011,
            5'd5,
            3'b111,
            5'd6,
            expected_type,
            32'sd12,
            AND
        );


        // -------------------------------------------------
        // I-type: ORI x5, x6, 12
        // -------------------------------------------------
        expected_type = '0;
        expected_type.is_i_type = 1'b1;

        test_instruction(
            32'h00C36293,
            7'b0010011,
            5'd5,
            3'b110,
            5'd6,
            expected_type,
            32'sd12,
            OR
        );


        // -------------------------------------------------
        // I-type: XORI x5, x6, 12
        // -------------------------------------------------
        expected_type = '0;
        expected_type.is_i_type = 1'b1;

        test_instruction(
            32'h00C34293,
            7'b0010011,
            5'd5,
            3'b100,
            5'd6,
            expected_type,
            32'sd12,
            XOR
        );

        $finish;
    end


endmodule
