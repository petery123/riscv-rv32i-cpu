import riscv_pkg::*;

module register_file(
    input logic [ADDR_WIDTH-1:0] read_addr1,
    input logic [ADDR_WIDTH-1:0] read_addr2,
    input logic [ADDR_WIDTH-1:0] write_addr,
    input logic [DATA_WIDTH-1:0] write_data,
    input logic clk,
    input logic write_en,

    output logic [DATA_WIDTH-1:0] read_data1,
    output logic [DATA_WIDTH-1:0] read_data2
);
    
    logic [DATA_WIDTH-1:0] registers [32];

    always_ff @( posedge clk ) begin 
        if (write_en && (write_addr != 0))
            registers[write_addr] <= write_data;
    end

    assign read_data1 = (read_addr1 == 0)? '0 : registers[read_addr1];
    assign read_data2 = (read_addr2 == 0)? '0 : registers[read_addr2];
endmodule
