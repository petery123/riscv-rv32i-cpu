//      // verilator_coverage annotation
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
            logic [ADDR_WIDTH-1:0] mon_write_addr = write_addr;
            logic [DATA_WIDTH-1:0] mon_write_data = write_data;
            
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
        
            task write_reg(
                input logic [ADDR_WIDTH-1:0] addr,
                input logic [DATA_WIDTH-1:0] data,
                input logic write_en_in = 1'b1
                );
                begin
                    write_en = write_en_in;
                    write_addr = addr;
                    write_data = data;
        
                    @(negedge clk);
        
                    if (addr != 0 && write_en)
                        expected_registers[addr] = data;
            
                    write_en = 0;
                end
            endtask
        
            task read_reg1(
                input logic [ADDR_WIDTH-1:0] addr,
                output logic [DATA_WIDTH-1:0] data    
                );
                begin
                    read_addr1 = addr;
                    @(negedge clk);
                    data = read_data1;
                end        
            endtask 
        
            task check_read1(
                input logic [ADDR_WIDTH-1:0] addr,
                );
                begin
                    logic [DATA_WIDTH-1:0] actual;
                    logic [DATA_WIDTH-1:0] expected;
        
                    expected = expected_registers[addr];
        
                    read_reg1(addr, actual);
                    assert (actual == expected)
                        $display("PASS 1: R[%0d] = %0d", addr, expected) ;
                    else 
                        $error("FAIL 1: R[%0d] expected %0d, got %0d", addr, expected, actual);
                end
            endtask
        
            task read_reg2(
                input logic [ADDR_WIDTH-1:0] addr,
                output logic [DATA_WIDTH-1:0] data    
                );
                begin
                    read_addr2 = addr;
                    @(negedge clk);
                    data = read_data2;
                end        
            endtask 
        
            task check_read2(
                input logic [ADDR_WIDTH-1:0] addr,
                );
                begin
                    logic [DATA_WIDTH-1:0] actual;
                    logic [DATA_WIDTH-1:0] expected;
        
                    expected = expected_registers[addr];
        
                    read_reg2(addr, actual);
                    assert (actual == expected)
                        $display("PASS 2: R[%0d] = %0d", addr, expected) ;
                    else 
                        $error("FAIL 2: R[%0d] expected %0d, got %0d", addr, expected, actual);
                end
            endtask
        
            task check_both_reads ();
                logic [DATA_WIDTH-1:0] expected1;
                logic [DATA_WIDTH-1:0] expected2;
                
                expected1 = expected_registers[mon_read_addr1];
                expected2 = expected_registers[mon_read_addr2];
        
                assert (mon_read_data1 == expected1)
                    $display("PASS 1: R[%0d] = %0d", mon_read_addr1, expected1) ;
                else 
                    $error("FAIL 1: R[%0d] expected %0d, got %0d", mon_read_addr1, expected1, mon_read_data1);
                
                assert (mon_read_data2 == expected2)
                    $display("PASS 2: R[%0d] = %0d", mon_read_addr2, expected2) ;
                else 
                    $error("FAIL 2: R[%0d] expected %0d, got %0d", mon_read_addr2, expected2, mon_read_data2);
        
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
                    input logic write_eq_read_1,
                    input logic write_addr_0x,
                    input logic write_en_0
                );
        
                $display(
                    "\nTEST: Repeat %0d | write_eq_read_1: %0d | write_addr_0x: %0d | write_en_0: %0d",
                    repetitions,
                    write_eq_read_1,
                    write_addr_0x,
                    write_en_0
                );
        
                txn.write_eq_read_1.constraint_mode(write_eq_read_1);
                txn.write_addr_0x.constraint_mode(write_addr_0x);
                txn.write_en_0.constraint_mode(write_en_0);
        
                repeat (repetitions) begin
                    assert(txn.randomize());
                    driver();
                    monitor();
                    check_both_reads();
                end
            endtask
        
            // Assertions
            assert property (
                @(posedge clk)
                dut.registers[0] == '0
            );
        
            // Check that when not write enable, no register change happens
            // WRONG
            // assert property (
            //     @(posedge clk)
            //     (write_en == 0) |=> ($past(dut.registers) == dut.registers);
            // )
        
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
        
                // Random 100 test generator
 000059         run_rand_test(60, 0, 0, 0);
~000012         run_rand_test(15, 1, 0, 0);
%000009         run_rand_test(10, 0, 1, 0);
%000007         run_rand_test(15, 0, 0, 1);
        
                $display("All tests completed.");
 000082         $finish;
 000018     end
        
        endmodule
        
