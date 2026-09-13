// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vassertion_tb.h for the primary calling header

#include "Vassertion_tb__pch.h"
#include "Vassertion_tb__Syms.h"
#include "Vassertion_tb___024root.h"

void Vassertion_tb___024root___ctor_var_reset(Vassertion_tb___024root* vlSelf);

Vassertion_tb___024root::Vassertion_tb___024root(Vassertion_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vassertion_tb___024root___ctor_var_reset(this);
}

void Vassertion_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vassertion_tb___024root::~Vassertion_tb___024root() {
}
