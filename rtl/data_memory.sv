import riscv_pkg::*;

module data_memory (
    input logic clk,
    input access_size_t access_size,
    input logic is_signed,
    input logic mem_write,
    input logic [9:0] address,
    input logic [31:0] write_data,
    output logic [31:0] read_data
);
    logic [31:0] memory [0:255];

    always_comb begin
        case (access_size)
            WORD : read_data = memory[address[9:2]];
            HALFWORD : begin
                logic [15:0] halfword_hold;
                halfword_hold = address[1]? memory[address[9:2]][31:16] : memory[address[9:2]][15:0];
                read_data = halfword_hold;
                if (is_signed)
                    read_data = 32'(signed'(halfword_hold));
            end
            BYTE: begin
                logic [7:0] byte_hold;
                case (address[1:0])
                    2'b00: byte_hold = memory[address[9:2]][7:0];
                    2'b01: byte_hold = memory[address[9:2]][15:8];
                    2'b10: byte_hold = memory[address[9:2]][23:16];
                    2'b11: byte_hold = memory[address[9:2]][31:24];
                endcase
                if (is_signed) begin
                    read_data = {{24{byte_hold[7]}}, byte_hold};
                end else begin
                    read_data = byte_hold;
                end
            end
            default: read_data = '0;
        endcase
    end
    

    always_ff @( posedge clk ) begin
        if (mem_write) begin
            $display("here");
            case (access_size)
                WORD : memory[address[9:2]] <= write_data;
                HALFWORD : begin
                    case (address[1])
                        1'b0: memory[address[9:2]][15:0] <= write_data[15:0];
                        1'b1: memory[address[9:2]][31:16] <= write_data[15:0];
                    endcase
                    $display("halfword: %h",  write_data[15:0]);
                end
                BYTE: begin
                    case (address[1:0])
                        2'b00: memory[address[9:2]][7:0] <= write_data[7:0];
                        2'b01: memory[address[9:2]][15:8] <= write_data[7:0];
                        2'b10: memory[address[9:2]][23:16] <= write_data[7:0];
                        2'b11: memory[address[9:2]][31:24] <= write_data[7:0];
                    endcase
                end
            endcase
        end
    end
endmodule
