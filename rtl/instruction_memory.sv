module instruction_memory (
    input logic [31:0] pc_address,
    output logic [31:0] instr_out
);

    logic [31:0] memory [0:255];

    assign instr_out = memory[pc_address[9:2]];

    // Write program into memory
    initial begin
        $readmemh("programs/program.hex", memory);
    end


endmodule
