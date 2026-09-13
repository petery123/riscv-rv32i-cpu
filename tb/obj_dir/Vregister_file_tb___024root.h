// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB___024ROOT_H_
#define VERILATED_VREGISTER_FILE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ register_file_tb__DOT__clk;
    CData/*4:0*/ register_file_tb__DOT__read_addr1;
    CData/*4:0*/ register_file_tb__DOT__read_addr2;
    CData/*4:0*/ register_file_tb__DOT__write_addr;
    CData/*0:0*/ register_file_tb__DOT__write_en;
    CData/*0:0*/ __VdlyVal__register_file_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__register_file_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ register_file_tb__DOT__write_data;
    IData/*31:0*/ register_file_tb__DOT__read_data1;
    IData/*31:0*/ register_file_tb__DOT__read_data2;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> register_file_tb__DOT__myRegister__DOT__registers;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h50bf4e21__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister_file_tb___024root(Vregister_file_tb__Syms* symsp, const char* v__name);
    ~Vregister_file_tb___024root();
    VL_UNCOPYABLE(Vregister_file_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
