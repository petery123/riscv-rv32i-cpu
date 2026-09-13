// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VASSERTION_TB__SYMS_H_
#define VERILATED_VASSERTION_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vassertion_tb.h"

// INCLUDE MODULE CLASSES
#include "Vassertion_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vassertion_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vassertion_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vassertion_tb___024root        TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_assertion_tb;

    // CONSTRUCTORS
    Vassertion_tb__Syms(VerilatedContext* contextp, const char* namep, Vassertion_tb* modelp);
    ~Vassertion_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
