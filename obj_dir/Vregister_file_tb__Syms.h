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
#include "Vregister_file_tb_register_file_tb.h"
#include "Vregister_file_tb_std.h"
#include "Vregister_file_tb___024unit.h"
#include "Vregister_file_tb_register_file_tb__03a__03acg__Vclpkg.h"
#include "Vregister_file_tb_std__03a__03asemaphore__Vclpkg.h"
#include "Vregister_file_tb_std__03a__03aprocess__Vclpkg.h"
#include "Vregister_file_tb___024unit__03a__03aregister_file_transaction__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vregister_file_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vregister_file_tb___024root    TOP;
    Vregister_file_tb___024unit__03a__03aregister_file_transaction__Vclpkg TOP____024unit__03a__03aregister_file_transaction__Vclpkg;
    Vregister_file_tb___024unit    TOP____024unit;
    Vregister_file_tb_register_file_tb TOP__register_file_tb;
    Vregister_file_tb_std          TOP__std;
    Vregister_file_tb_register_file_tb__03a__03acg__Vclpkg TOP__register_file_tb__03a__03acg__Vclpkg;
    Vregister_file_tb_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vregister_file_tb_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    Vregister_file_tb__Syms(VerilatedContext* contextp, const char* namep, Vregister_file_tb* modelp);
    ~Vregister_file_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
