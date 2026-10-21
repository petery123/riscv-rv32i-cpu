class alu_monitor extends uvm_monitor;

    `uvm_component_utils(alu_monitor)

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction //new()

    virtual alu_if vif;

    uvm_analysis_port #(alu_transaction) mon_analysis_port;

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        mon_analysis_port = new("mon_analysis_port", this);

        if (!uvm_config_db #(virtual alu_if)::get(this, "", "vif", vif)) begin
            `uvm_error(get_type_name(), "Didn't get handle to virtual interface alu_if")
        end
    endfunction

    virtual task run_phase(uvm_phase phase);
        alu_transaction txn;

        forever begin
            @(posedge vif.valid);
            txn = alu_transaction::type_id::create("txn");
            txn.a = vif.a;
            txn.b = vif.b;
            txn.alu_op = vif.alu_op;
            txn.result = vif.result;
            mon_analysis_port.write(txn);
        end
    endtask

    
endclass //alu_monitor extends uvm_monitor
