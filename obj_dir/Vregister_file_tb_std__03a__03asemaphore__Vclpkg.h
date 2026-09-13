// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VREGISTER_FILE_TB_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister_file_tb_std__03a__03asemaphore__Vclpkg();
    ~Vregister_file_tb_std__03a__03asemaphore__Vclpkg();
    void ctor(Vregister_file_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vregister_file_tb_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
};


class Vregister_file_tb__Syms;

class Vregister_file_tb_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    IData/*31:0*/ __PVT__m_nextKeyCount;
    QData/*63:0*/ __PVT__m_ticket;
    QData/*63:0*/ __PVT__m_nextTicket;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::semaphore"; }
    VlClass* clone() const { return new Vregister_file_tb_std__03a__03asemaphore(*this); }
    VlCoroutine __VnoInFunc_get(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vregister_file_tb__Syms* __restrict vlSymsp);
  public:
    Vregister_file_tb_std__03a__03asemaphore() = default;
    void init(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    ~Vregister_file_tb_std__03a__03asemaphore() {}
};


#endif  // guard
