// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vregister_file_tb__pch.h"
#include "Vregister_file_tb.h"
#include "Vregister_file_tb___024root.h"

// FUNCTIONS
Vregister_file_tb__Syms::~Vregister_file_tb__Syms()
{
}

Vregister_file_tb__Syms::Vregister_file_tb__Syms(VerilatedContext* contextp, const char* namep, Vregister_file_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(95);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_register_file_tb.configure(this, name(), "register_file_tb", "register_file_tb", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__check_both_reads.configure(this, name(), "register_file_tb.check_both_reads", "check_both_reads", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__check_read1__unnamedblk1.configure(this, name(), "register_file_tb.check_read1.unnamedblk1", "unnamedblk1", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__check_read2__unnamedblk2.configure(this, name(), "register_file_tb.check_read2.unnamedblk2", "unnamedblk2", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__0__KET__.configure(this, name(), "register_file_tb.genblk1[0]", "genblk1[0]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__10__KET__.configure(this, name(), "register_file_tb.genblk1[10]", "genblk1[10]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__11__KET__.configure(this, name(), "register_file_tb.genblk1[11]", "genblk1[11]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__12__KET__.configure(this, name(), "register_file_tb.genblk1[12]", "genblk1[12]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__13__KET__.configure(this, name(), "register_file_tb.genblk1[13]", "genblk1[13]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__14__KET__.configure(this, name(), "register_file_tb.genblk1[14]", "genblk1[14]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__15__KET__.configure(this, name(), "register_file_tb.genblk1[15]", "genblk1[15]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__16__KET__.configure(this, name(), "register_file_tb.genblk1[16]", "genblk1[16]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__17__KET__.configure(this, name(), "register_file_tb.genblk1[17]", "genblk1[17]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__18__KET__.configure(this, name(), "register_file_tb.genblk1[18]", "genblk1[18]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__19__KET__.configure(this, name(), "register_file_tb.genblk1[19]", "genblk1[19]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__1__KET__.configure(this, name(), "register_file_tb.genblk1[1]", "genblk1[1]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__20__KET__.configure(this, name(), "register_file_tb.genblk1[20]", "genblk1[20]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__21__KET__.configure(this, name(), "register_file_tb.genblk1[21]", "genblk1[21]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__22__KET__.configure(this, name(), "register_file_tb.genblk1[22]", "genblk1[22]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__23__KET__.configure(this, name(), "register_file_tb.genblk1[23]", "genblk1[23]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__24__KET__.configure(this, name(), "register_file_tb.genblk1[24]", "genblk1[24]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__25__KET__.configure(this, name(), "register_file_tb.genblk1[25]", "genblk1[25]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__26__KET__.configure(this, name(), "register_file_tb.genblk1[26]", "genblk1[26]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__27__KET__.configure(this, name(), "register_file_tb.genblk1[27]", "genblk1[27]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__28__KET__.configure(this, name(), "register_file_tb.genblk1[28]", "genblk1[28]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__29__KET__.configure(this, name(), "register_file_tb.genblk1[29]", "genblk1[29]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__2__KET__.configure(this, name(), "register_file_tb.genblk1[2]", "genblk1[2]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__30__KET__.configure(this, name(), "register_file_tb.genblk1[30]", "genblk1[30]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__31__KET__.configure(this, name(), "register_file_tb.genblk1[31]", "genblk1[31]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__3__KET__.configure(this, name(), "register_file_tb.genblk1[3]", "genblk1[3]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__4__KET__.configure(this, name(), "register_file_tb.genblk1[4]", "genblk1[4]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__5__KET__.configure(this, name(), "register_file_tb.genblk1[5]", "genblk1[5]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__6__KET__.configure(this, name(), "register_file_tb.genblk1[6]", "genblk1[6]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__7__KET__.configure(this, name(), "register_file_tb.genblk1[7]", "genblk1[7]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__8__KET__.configure(this, name(), "register_file_tb.genblk1[8]", "genblk1[8]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_register_file_tb__genblk1__BRA__9__KET__.configure(this, name(), "register_file_tb.genblk1[9]", "genblk1[9]", "<null>", -12, VerilatedScope::SCOPE_OTHER);
}
