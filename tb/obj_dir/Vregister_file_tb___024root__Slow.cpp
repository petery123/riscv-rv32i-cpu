// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"
#include "Vregister_file_tb__Syms.h"
#include "Vregister_file_tb___024root.h"

void Vregister_file_tb___024root___ctor_var_reset(Vregister_file_tb___024root* vlSelf);

Vregister_file_tb___024root::Vregister_file_tb___024root(Vregister_file_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregister_file_tb___024root___ctor_var_reset(this);
}

void Vregister_file_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vregister_file_tb___024root::~Vregister_file_tb___024root() {
}
