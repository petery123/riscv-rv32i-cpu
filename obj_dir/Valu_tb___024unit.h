// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_tb.h for the primary calling header

#ifndef VERILATED_VALU_TB___024UNIT_H_
#define VERILATED_VALU_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"


class Valu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    Valu_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Valu_tb___024unit();
    ~Valu_tb___024unit();
    void ctor(Valu_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Valu_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


#endif  // guard
