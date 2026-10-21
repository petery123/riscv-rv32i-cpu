class alu_transaction extends uvm_sequence_item;

    rand logic [31:0] a;
    rand logic [31:0] b;
    rand alu_op_t alu_op;
    
    logic [31:0] result;

    `uvm_object_utils_begin(alu_transaction)
        `uvm_field_int(a, UVM_ALL_ON)        
        `uvm_field_int(b, UVM_ALL_ON)
        `uvm_field_enum(alu_op_t, alu_op, UVM_ALL_ON)    
        `uvm_field_int(result, UVM_ALL_ON)
    `uvm_object_utils_end

    function new(string name = "alu_transaction");
        super.new(name);
    endfunction //new()

endclass //className extends superClass
