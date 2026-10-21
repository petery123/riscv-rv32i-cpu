class alu_agent extends uvm_agent;

    `uvm_component_utils(alu_agent)

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    alu_driver m_driver;
    alu_monitor m_monitor;
    uvm_sequencer #(alu_transaction) m_sequencer;

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (get_is_active()) begin
            m_driver = alu_driver::type_id::create("m_driver", this);
            m_sequencer = uvm_sequencer #(alu_transaction)::type_id::create("m_sequencer", this);
        end

        m_monitor = alu_monitor::type_id::create("m_monitor", this);
    endfunction

    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);

        if (get_is_active())
            m_driver.seq_item_port.connect(m_sequencer.seq_item_export);
        
    endfunction


endclass
