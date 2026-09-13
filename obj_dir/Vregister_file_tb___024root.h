// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB___024ROOT_H_
#define VERILATED_VREGISTER_FILE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vregister_file_tb___024unit;
class Vregister_file_tb___024unit__03a__03aregister_file_transaction__Vclpkg;
class Vregister_file_tb_register_file_tb;
class Vregister_file_tb_register_file_tb__03a__03acg__Vclpkg;
class Vregister_file_tb_std;
class Vregister_file_tb_std__03a__03aprocess__Vclpkg;
class Vregister_file_tb_std__03a__03asemaphore__Vclpkg;


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb___024root final {
  public:
    // CELLS
    Vregister_file_tb_register_file_tb* __PVT__register_file_tb;
    Vregister_file_tb_std* __PVT__std;
    Vregister_file_tb___024unit* __PVT____024unit;
    Vregister_file_tb_register_file_tb__03a__03acg__Vclpkg* register_file_tb__03a__03acg__Vclpkg;
    Vregister_file_tb_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vregister_file_tb_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vregister_file_tb___024unit__03a__03aregister_file_transaction__Vclpkg* __024unit__03a__03aregister_file_transaction__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr___TOP__register_file_tb____PVT__clk__0;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h86032a67__0;
    VlDynamicTriggerScheduler __VdynSched;

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister_file_tb___024root(Vregister_file_tb__Syms* symsp, const char* namep);
    ~Vregister_file_tb___024root();
    VL_UNCOPYABLE(Vregister_file_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


#endif  // guard
