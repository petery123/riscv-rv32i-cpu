// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder_tb.h for the primary calling header

#ifndef VERILATED_VDECODER_TB___024ROOT_H_
#define VERILATED_VDECODER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"


class Vdecoder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecoder_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ decoder_tb__DOT__alu_op;
    SData/*8:0*/ decoder_tb__DOT__instr_type;
    IData/*31:0*/ decoder_tb__DOT__inst;
    IData/*31:0*/ decoder_tb__DOT__immediate;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vdecoder_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdecoder_tb___024root(Vdecoder_tb__Syms* symsp, const char* namep);
    ~Vdecoder_tb___024root();
    VL_UNCOPYABLE(Vdecoder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


#endif  // guard
