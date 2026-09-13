module register_file_tb;
    // Parameters
    parameter ADDR_WIDTH = 5;
    parameter DATA_WIDTH = 32;
    parameter NUM_REGISTERS = 2**ADDR_WIDTH;

    // signals
    logic [ADDR_WIDTH-1:0] read_addr1;
    logic [ADDR_WIDTH-1:0] read_addr2;
    logic [ADDR_WIDTH-1:0] write_addr;
    logic [DATA_WIDTH-1:0] write_data;
    logic clk = 0;
    logic write_en;
    logic [DATA_WIDTH-1:0] read_data1;
    logic [DATA_WIDTH-1:0] read_data2;

    logic [DATA_WIDTH-1:0] expected_registers [NUM_REGISTERS];

    register_file_transaction txn;

    // Monitor Variables
    logic [ADDR_WIDTH-1:0] mon_read_addr1;
    logic [ADDR_WIDTH-1:0] mon_read_addr2;
    logic [DATA_WIDTH-1:0] mon_read_data1;
    logic [DATA_WIDTH-1:0] mon_read_data2;
    logic mon_write_en;
    logic [ADDR_WIDTH-1:0] mon_write_addr;
    logic [DATA_WIDTH-1:0] mon_write_data;

    logic [DATA_WIDTH-1:0] observed_data;

    int total_checks = 0;
    int passed = 0;
    int failed = 0;
    
    // DUT
    register_file #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .read_addr1(read_addr1),
        .read_addr2(read_addr2),
        .write_addr(write_addr),
        .write_data(write_data),
        .clk(clk),
        .write_en(write_en),
        .read_data1(read_data1),
        .read_data2(read_data2)
    );

    task check_registers ();
        logic [DATA_WIDTH-1:0] expected1;
        logic [DATA_WIDTH-1:0] expected2;
        
        expected1 = expected_registers[mon_read_addr1];
        expected2 = expected_registers[mon_read_addr2];

        assert (mon_read_data1 == expected1) begin
            $display("PASS 1: R[%0d] = %0d", mon_read_addr1, expected1) ;
            passed += 1;
        end else begin
            $error("FAIL 1: R[%0d] expected %0d, got %0d", mon_read_addr1, expected1, mon_read_data1);
            failed += 1;
        end

        assert (mon_read_data2 == expected2) begin
            $display("PASS 2: R[%0d] = %0d", mon_read_addr2, expected2) ;
            passed +=1;
        end else begin 
            $error("FAIL 2: R[%0d] expected %0d, got %0d", mon_read_addr2, expected2, mon_read_data2);
            failed += 1;
        end

        total_checks += 1;

    endtask //automatic

    task driver();
        
        write_en   = txn.write_en;
        write_addr = txn.write_addr;
        read_addr1 = txn.read_addr1;
        read_addr2 = txn.read_addr2;
        write_data = txn.write_data;

        @(negedge(clk));

        
    endtask

    task monitor();

        mon_read_addr1 = read_addr1;
        mon_read_addr2 = read_addr2;
        mon_read_data1 = read_data1;
        mon_read_data2 = read_data2;
        mon_write_en   = write_en;
        mon_write_addr = write_addr;
        mon_write_data = write_data;

        // Update Reference Model
        $display(
            "MONITOR: WE=%0d | W[%0d]=%0d | R1[%0d]=%0d | R2[%0d]=%0d",
            mon_write_en,
            mon_write_addr,
            mon_write_data,
            mon_read_addr1,
            mon_read_data1,
            mon_read_addr2,
            mon_read_data2
        );
        if (mon_write_addr != 0 && mon_write_en) begin
            $display("mon_write_data %d", mon_write_data);
            expected_registers[mon_write_addr] = mon_write_data;
        end

        write_en = 0;
    endtask

    task run_rand_test(
            input int repetitions,
        );

        $display(
            "\nTEST: Repeat %0d",
            repetitions,
        );

        repeat (repetitions) begin
            assert(txn.randomize());
            driver();
            monitor();
            check_registers();
        end
    endtask

    // Assertions
    assert property (
        @(posedge clk)
        dut.registers[0] == '0
    );

    // genvar i;
    // generate
    //     for (i = 0; i < NUM_REGISTERS; i++) begin
    //         assert property (
    //             @(posedge clk)
    //             !write_en |-> dut.registers[i] == $past(dut.registers[i])
    //         ) else
    //             $error("DISABLE WRITE ASSERTION FAILED: current value=%0d, old value=%0d",
    //             dut.registers[i],
    //             $past(dut.registers[i])
    //         );
    //     end
    // endgenerate

    // assert property (
    //     @(posedge clk)
    //     $past(write_en && (write_addr != 0))
    //     |-> dut.registers[$past(write_addr)] == $past(write_data)
    // ) else
    //     $error("WRITE ASSERTION FAILED: addr=%0d expected=%0d actual=%0d",
    //        $past(write_addr),
    //        $past(write_data),
    //        dut.registers[$past(write_addr)]
    // );

    assert property (
        @(posedge clk)
        (write_en && (write_addr !=0)) |=> (dut.registers[$past(write_addr)] == $past(write_data))
    );

    assert property (
        @( posedge clk)
        (write_en && (write_addr == 0)) |=> (dut.registers[0] == '0)
    );

    assert property (
        @(posedge clk)
        read_data1 == ((read_addr1 == '0)? '0 : dut.registers[read_addr1])
    );

    assert property (
        @(posedge clk)
        read_data2 == ((read_addr2 == '0)? '0 : dut.registers[read_addr2])
    );

    // SV COVERAGE
    covergroup cg @(posedge clk);

        coverpoint write_en;
        coverpoint write_addr;
        coverpoint read_addr1;
        coverpoint read_addr2;

        coverpoint (write_addr == read_addr1){
            bins different_addr = {0};
            bins same_addr      = {1};
        }

        // cross write_addr, read_addr1{
        //     bins bin1 = write_addr intersect read_addr1;
        // };

    endgroup

    cg cg_inst;

    initial begin
        // Instanciate the covergroup object similar to a class object
        cg_inst = new();
    end

    // clk
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // test
    initial begin
        read_addr1 = 0;
        read_addr2 = 0;
        write_addr = 0;
        write_data = 0;
        write_en   = 0;

        expected_registers = '{default: 0};

        txn = new();
        txn.write_addr_dist.constraint_mode(1);
        txn.same_addr_dist.constraint_mode(0);
        txn.read_addr1_dist.constraint_mode(1);
        txn.write_en_dist.constraint_mode(1);
        txn.read_addr2_dist.constraint_mode(1);


        // Random 100 test generator
        run_rand_test(100);

        // Coverage: read_addr1 = 12

        // read_reg1(12, observed_data);
        // read_reg2(19, observed_data);
        // read_reg2(24, observed_data);
        // read_reg2(31, observed_data);

        $display("\n========== TEST SUMMARY ==========");
        $display("Total Checks       : %0d", total_checks);
        $display("Passed Checks      : %0d", passed);
        $display("Failed Checks      : %0d", failed);

        if (failed == 0)
            $display("TEST PASSED");
        else
            $display("TEST FAILED");

        $display("=================================\n");
        $finish;
    end

endmodule
