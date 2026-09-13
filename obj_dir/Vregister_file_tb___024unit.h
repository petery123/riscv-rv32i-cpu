// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB___024UNIT_H_
#define VERILATED_VREGISTER_FILE_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister_file_tb___024unit();
    ~Vregister_file_tb___024unit();
    void ctor(Vregister_file_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vregister_file_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


#endif  // guard
