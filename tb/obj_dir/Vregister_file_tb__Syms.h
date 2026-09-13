// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGISTER_FILE_TB__SYMS_H_
#define VERILATED_VREGISTER_FILE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vregister_file_tb.h"

// INCLUDE MODULE CLASSES
#include "Vregister_file_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vregister_file_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vregister_file_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vregister_file_tb___024root    TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_register_file_tb;

    // CONSTRUCTORS
    Vregister_file_tb__Syms(VerilatedContext* contextp, const char* namep, Vregister_file_tb* modelp);
    ~Vregister_file_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
