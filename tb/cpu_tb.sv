import riscv_pkg::*;

module cpu_tb;
    logic clk;
    logic reset;
    // logic [31:0] inst;

    cpu dut (
        .clk(clk),
        .reset(reset)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        reset = 1'b1;

        @(negedge clk);
        reset = 1'b0;

        repeat (2) @(negedge clk);

        assert (dut.register_file_m.registers[5] == 32'h1234_5000)
            $display("PASS: LUI");
        else
            $error(
                "FAIL: LUI expected 12345000, got %h",
                dut.register_file_m.registers[5]
            );

        assert (dut.register_file_m.registers[6] == 32'h0000_1004)
            $display("PASS: AUIPC");
        else
            $error(
                "FAIL: AUIPC expected 00001004, got %h",
                dut.register_file_m.registers[6]
            );

        assert (dut.pc == 32'd8)
            $display("PASS: PC = 8");
        else
            $error(
                "FAIL: PC expected 8, got %0d",
                dut.pc
            );

        $finish;
    end

    

endmodule
