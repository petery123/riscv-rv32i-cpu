// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vassertion_tb.h for the primary calling header

#ifndef VERILATED_VASSERTION_TB___024ROOT_H_
#define VERILATED_VASSERTION_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vassertion_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vassertion_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ assertion_tb__DOT__clk;
    CData/*0:0*/ __VdlyVal__assertion_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__assertion_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__assertion_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ assertion_tb__DOT__d;
    IData/*31:0*/ assertion_tb__DOT__q;
    IData/*31:0*/ assertion_tb__DOT___Vpast_0_0;
    IData/*31:0*/ __Vsampled_TOP__assertion_tb__DOT__q;
    IData/*31:0*/ __Vsampled_TOP__assertion_tb__DOT___Vpast_0_0;
    IData/*31:0*/ __Vsampled_TOP__assertion_tb__DOT__d;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9bc7bcf5__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vassertion_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vassertion_tb___024root(Vassertion_tb__Syms* symsp, const char* v__name);
    ~Vassertion_tb___024root();
    VL_UNCOPYABLE(Vassertion_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
