// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vregister_file_tb__pch.h"

Vregister_file_tb__Syms::Vregister_file_tb__Syms(VerilatedContext* contextp, const char* namep, Vregister_file_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(713);
    // Setup sub module instances
    TOP____024unit__03a__03aregister_file_transaction__Vclpkg.ctor(this, "$unit::register_file_transaction__Vclpkg");
    TOP____024unit.ctor(this, "$unit");
    TOP__register_file_tb.ctor(this, "register_file_tb");
    TOP__std.ctor(this, "std");
    TOP__register_file_tb__03a__03acg__Vclpkg.ctor(this, "register_file_tb::cg__Vclpkg");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03aregister_file_transaction__Vclpkg = &TOP____024unit__03a__03aregister_file_transaction__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__register_file_tb = &TOP__register_file_tb;
    TOP.__PVT__std = &TOP__std;
    TOP.register_file_tb__03a__03acg__Vclpkg = &TOP__register_file_tb__03a__03acg__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03aregister_file_transaction__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__register_file_tb.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__register_file_tb__03a__03acg__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
}

Vregister_file_tb__Syms::~Vregister_file_tb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__register_file_tb__03a__03acg__Vclpkg.dtor();
    TOP__std.dtor();
    TOP__register_file_tb.dtor();
    TOP____024unit.dtor();
    TOP____024unit__03a__03aregister_file_transaction__Vclpkg.dtor();
}
