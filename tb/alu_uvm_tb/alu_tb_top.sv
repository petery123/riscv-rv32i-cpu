module alu_tb_top;

    import uvm_pkg::*;
    import alu_pkg::*;

    alu_if alu_if0();
    alu dut0(.intf(alu_if0));

    initial begin
        uvm_config_db #(virtual alu_if)::set(null, "uvm_test_top.*", "vif", alu_if0);
        run_test("alu_test");
    end

endmodule
