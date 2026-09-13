// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder_tb.h for the primary calling header

#ifndef VERILATED_VDECODER_TB___024UNIT_H_
#define VERILATED_VDECODER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"


class Vdecoder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecoder_tb___024unit final {
  public:

    // INTERNAL VARIABLES
    Vdecoder_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdecoder_tb___024unit();
    ~Vdecoder_tb___024unit();
    void ctor(Vdecoder_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdecoder_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


#endif  // guard
