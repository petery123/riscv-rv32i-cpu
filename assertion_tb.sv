module assertion_tb;

    logic clk = 0;
    logic [31:0] d = 0;
    logic [31:0] q = 0;

    always #5 clk <= ~clk;

    // DUT
    always_ff @(posedge clk) begin
        q <= d;
    end

    // This should FAIL on the first edge where d changes to 123
    assert property (@(posedge clk) q == $past(d));

    initial begin
        d = 123;

        repeat (2) @(posedge clk);

        $finish;
    end

endmodule
