class alu_scoreboard extends uvm_scoreboard;

    `uvm_component_utils(alu_scoreboard)

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    uvm_analysis_imp #(alu_transaction, alu_scoreboard) ap_imp;

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        ap_imp = new("ap_imp", this);
    endfunction

    virtual function void write(alu_transaction txn);

        logic [31:0] expected_result;

        case (txn.alu_op)
            ADD : expected_result = txn.a + txn.b;
            SUB : expected_result = txn.a - txn.b;
            AND : expected_result = txn.a & txn.b;
            OR  : expected_result = txn.a | txn.b;
            XOR : expected_result = txn.a ^ txn.b;
            SLL : expected_result = txn.a << txn.b[4:0];
            SRL : expected_result = txn.a >> txn.b[4:0];
            SRA : expected_result = $signed(txn.a) >>> txn.b[4:0];
            SLT : expected_result = ($signed(txn.a) < $signed(txn.b));
            SLTU: expected_result = (txn.a < txn.b);
            default: expected_result = '0;
        endcase

        if (txn.result !== expected_result) begin
            `uvm_error(
                get_type_name(),
                $sformatf(
                    "Mismatch: a=%h b=%h op=%s expected=%h actual=%h",
                    txn.a,
                    txn.b,
                    txn.alu_op.name(),
                    expected_result,
                    txn.result
                )
            )
        end
        else begin
            `uvm_info(
                get_type_name(),
                $sformatf(
                    "PASS: a=%h b=%h op=%s result=%h",
                    txn.a,
                    txn.b,
                    txn.alu_op.name(),
                    txn.result
                ),
                UVM_LOW
            )
        end

    endfunction

endclass
