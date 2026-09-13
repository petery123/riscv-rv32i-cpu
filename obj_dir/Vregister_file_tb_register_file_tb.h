// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB_REGISTER_FILE_TB_H_
#define VERILATED_VREGISTER_FILE_TB_REGISTER_FILE_TB_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vregister_file_tb___024unit__03a__03aregister_file_transaction;
class Vregister_file_tb_register_file_tb__03a__03acg;


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb_register_file_tb final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ __PVT__read_addr1;
    CData/*4:0*/ __PVT__read_addr2;
    CData/*4:0*/ __PVT__write_addr;
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__write_en;
    CData/*4:0*/ __PVT__mon_read_addr1;
    CData/*4:0*/ __PVT__mon_read_addr2;
    CData/*0:0*/ __PVT__mon_write_en;
    CData/*4:0*/ __PVT__mon_write_addr;
    CData/*0:0*/ _Vpast_5_1;
    CData/*4:0*/ _Vpast_6_1;
    CData/*0:0*/ _Vpast_9_1;
    CData/*4:0*/ __Vsampled_TOP__register_file_tb____PVT__read_addr1;
    CData/*4:0*/ __Vsampled_TOP__register_file_tb____PVT__read_addr2;
    CData/*0:0*/ __Vsampled_TOP__register_file_tb____PVT__write_en;
    CData/*4:0*/ __Vsampled_TOP__register_file_tb____PVT__write_addr;
    IData/*31:0*/ __PVT__write_data;
    IData/*31:0*/ __PVT__read_data1;
    IData/*31:0*/ __PVT__read_data2;
    IData/*31:0*/ __PVT__mon_read_data1;
    IData/*31:0*/ __PVT__mon_read_data2;
    IData/*31:0*/ __PVT__mon_write_data;
    IData/*31:0*/ __PVT__total_checks;
    IData/*31:0*/ __PVT__passed;
    IData/*31:0*/ __PVT__failed;
    IData/*31:0*/ __PVT__check_registers__Vstatic__expected1;
    IData/*31:0*/ __PVT__check_registers__Vstatic__expected2;
    IData/*31:0*/ _Vpast_7_1;
    IData/*31:0*/ __Vsampled_TOP__register_file_tb____PVT__write_data;
    VlUnpacked<IData/*31:0*/, 32> __PVT__expected_registers;
    VlUnpacked<IData/*31:0*/, 32> __PVT__dut__DOT__registers;
    VlUnpacked<IData/*31:0*/, 32> __Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers;
    VlClassRef<Vregister_file_tb_register_file_tb__03a__03acg> __PVT__cg_inst;

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister_file_tb_register_file_tb();
    ~Vregister_file_tb_register_file_tb();
    void ctor(Vregister_file_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vregister_file_tb_register_file_tb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


#endif  // guard
