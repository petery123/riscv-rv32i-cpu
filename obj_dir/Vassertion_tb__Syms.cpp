// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vassertion_tb__pch.h"
#include "Vassertion_tb.h"
#include "Vassertion_tb___024root.h"

// FUNCTIONS
Vassertion_tb__Syms::~Vassertion_tb__Syms()
{
}

Vassertion_tb__Syms::Vassertion_tb__Syms(VerilatedContext* contextp, const char* namep, Vassertion_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(11);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_assertion_tb.configure(this, name(), "assertion_tb", "assertion_tb", "<null>", -12, VerilatedScope::SCOPE_OTHER);
}
