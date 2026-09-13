// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB___024UNIT__03A__03AREGISTER_FILE_TRANSACTION__VCLPKG_H_
#define VERILATED_VREGISTER_FILE_TB___024UNIT__03A__03AREGISTER_FILE_TRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb___024unit__03a__03aregister_file_transaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister_file_tb___024unit__03a__03aregister_file_transaction__Vclpkg();
    ~Vregister_file_tb___024unit__03a__03aregister_file_transaction__Vclpkg();
    void ctor(Vregister_file_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vregister_file_tb___024unit__03a__03aregister_file_transaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class Vregister_file_tb__Syms;

class Vregister_file_tb___024unit__03a__03aregister_file_transaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ __PVT__write_addr;
    CData/*4:0*/ __PVT__read_addr1;
    CData/*4:0*/ __PVT__read_addr2;
    CData/*0:0*/ __PVT__write_en;
    CData/*0:0*/ __PVT__same_addr;
    IData/*31:0*/ __PVT__write_data;
    VlQueue<CData/*0:0*/> __PVT____Vconstraintmode;
    VlRandomizer __PVT__constraint;

    // INTERNAL VARIABLES
    VlRNGReseeds __Vm_rng;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::register_file_transaction"; }
    VlClass* clone() const { return new Vregister_file_tb___024unit__03a__03aregister_file_transaction(*this); }
    void __VnoInFunc___VBasicRand(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_read_addr1_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_read_addr2_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_same_addr_c_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_same_addr_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_write_addr_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_write_en_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vregister_file_tb__Syms* __restrict vlSymsp);
  public:
    Vregister_file_tb___024unit__03a__03aregister_file_transaction() = default;
    void init(Vregister_file_tb__Syms* __restrict vlSymsp);
    ~Vregister_file_tb___024unit__03a__03aregister_file_transaction() {}
};


#endif  // guard
