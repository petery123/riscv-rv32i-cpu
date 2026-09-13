// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_tb.h for the primary calling header

#ifndef VERILATED_VCPU_TB___024ROOT_H_
#define VERILATED_VCPU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"


class Vcpu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_tb__DOT__clk;
    CData/*0:0*/ cpu_tb__DOT__reset;
    CData/*2:0*/ cpu_tb__DOT__dut__DOT__mem_access_size;
    CData/*7:0*/ cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk2__DOT__byte_hold;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0;
    SData/*8:0*/ cpu_tb__DOT__dut__DOT__instr_type;
    SData/*15:0*/ cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk1__DOT__halfword_hold;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__immediate;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__a;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__result;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__read_data2;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__mem_read_data;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 256> cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory;
    VlUnpacked<IData/*31:0*/, 256> cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1926a843__0;

    // INTERNAL VARIABLES
    Vcpu_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcpu_tb___024root(Vcpu_tb__Syms* symsp, const char* namep);
    ~Vcpu_tb___024root();
    VL_UNCOPYABLE(Vcpu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


#endif  // guard
