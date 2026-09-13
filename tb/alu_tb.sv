import riscv_pkg::*;

module alu_tb;

    // signals
    logic [31:0] a;
    logic [31:0] b;
    logic [31:0] result;
    alu_op_t alu_op;

    // instanciate ALU
    alu myAlu ( 
        .a(a),
        .b(b),
        .alu_op(alu_op),
        .result(result)
    );

    // initial block
    initial begin
        // ADD
        a = 5;
        b = 6;
        alu_op = ADD;
        #1

        assert(result == 11) begin
            $display("ADD PASS");
        end else $error("ADD FAILED: should be 11 however was %d", result);
        
        // SUB
        a = 10;
        b = 6;
        alu_op = SUB;
        #1

        assert(result == 4) begin
            $display("SUB PASS");
        end else $error("SUB FAILED: should be 4 however was %d-%d = %d",a, b, result);

        // AND
        a = 32'b010;
        b = 32'b110;
        alu_op = AND;
        #1

        assert(result == 32'b010) begin
            $display("AND PASS");
        end else $error("AND FAILED: should be 2 however was %d", result);

        // OR
        a = 32'b001;
        b = 32'b110;
        alu_op = OR;
        #1

        assert(result == 32'b111) begin
            $display("OR PASS");
        end else $error("OR FAILED: should be 7 however was %d", result);

        // XOR
        a = 32'b001;
        b = 32'b110;
        alu_op = XOR;
        #1

        assert(result == 32'b111) begin
            $display("XOR PASS");
        end else $error("XOR FAILED: should be 7 however was %d", result);

        // -------------------------------------------------
        // SLL
        // 1 << 3 = 8
        // -------------------------------------------------
        a = 32'd1;
        b = 32'd3;
        alu_op = SLL;
        #1;

        assert (result == 32'd8)
            $display("PASS: SLL");
        else
            $error("FAIL: SLL expected 8, got %0d", result);


        // -------------------------------------------------
        // SRL
        // 0x80000000 >> 1 = 0x40000000
        // -------------------------------------------------
        a = 32'h8000_0000;
        b = 32'd1;
        alu_op = SRL;
        #1;

        assert (result == 32'h4000_0000)
            $display("PASS: SRL");
        else
            $error("FAIL: SRL expected 40000000, got %h", result);


        // -------------------------------------------------
        // SRA
        // arithmetic shift preserves sign
        // 0x80000000 >>> 1 = 0xC0000000
        // -------------------------------------------------
        a = 32'h8000_0000;
        b = 32'd1;
        alu_op = SRA;
        #1;

        assert (result == 32'hC000_0000)
            $display("PASS: SRA");
        else
            $error("FAIL: SRA expected C0000000, got %h", result);


        // -------------------------------------------------
        // SLT
        // signed: -1 < 1 -> true
        // -------------------------------------------------
        a = 32'hFFFF_FFFF;
        b = 32'd1;
        alu_op = SLT;
        #1;

        assert (result == 32'd1)
            $display("PASS: SLT");
        else
            $error("FAIL: SLT expected 1, got %0d", result);


        // -------------------------------------------------
        // SLTU
        // unsigned:
        // 0xFFFFFFFF = 4294967295
        // 4294967295 < 1 -> false
        // -------------------------------------------------
        a = 32'hFFFF_FFFF;
        b = 32'd1;
        alu_op = SLTU;
        #1;

        assert (result == 32'd0)
            $display("PASS: SLTU");
        else
            $error("FAIL: SLTU expected 0, got %0d", result);

        $finish;
    end

endmodule
