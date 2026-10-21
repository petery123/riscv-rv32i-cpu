interface alu_if;

    import riscv_pkg::*;

    logic [31:0] a;
    logic [31:0] b;
    alu_op_t     alu_op;
    logic [31:0] result;

    logic valid;  // testbench synchronization only

    modport dut (
        input  a,
        input  b,
        input  alu_op,
        output result
    );

endinterface