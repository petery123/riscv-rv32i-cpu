class alu_driver extends uvm_driver #(alu_transaction);

    `uvm_component_utils(alu_driver)

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    virtual alu_if vif;

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db #(virtual alu_if)::get(this, "", "vif", vif)) begin
            `uvm_fatal(get_type_name(), "Didn't get handle to virtual interface alu_if")
        end
    endfunction

    virtual task run_phase(uvm_phase phase);
        alu_transaction txn;
        vif.valid = 0;

        forever begin
            seq_item_port.get_next_item(txn);

            vif.a = txn.a;
            vif.b = txn.b;
            vif.alu_op = txn.alu_op;
            #1;
            vif.valid = 1;
            #1;
            vif.valid = 0;

            seq_item_port.item_done();
        end
    endtask
endclass
