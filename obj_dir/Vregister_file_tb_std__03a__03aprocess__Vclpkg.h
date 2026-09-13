// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VREGISTER_FILE_TB_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vregister_file_tb_std__03a__03aprocess;


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister_file_tb_std__03a__03aprocess__Vclpkg();
    ~Vregister_file_tb_std__03a__03aprocess__Vclpkg();
    void ctor(Vregister_file_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vregister_file_tb_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_killQueue(Vregister_file_tb__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vregister_file_tb_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vregister_file_tb__Syms* __restrict vlSymsp, VlClassRef<Vregister_file_tb_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vregister_file_tb__Syms;

class Vregister_file_tb_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new Vregister_file_tb_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vregister_file_tb__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vregister_file_tb__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vregister_file_tb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vregister_file_tb__Syms* __restrict vlSymsp);
  public:
    Vregister_file_tb_std__03a__03aprocess() = default;
    void init(Vregister_file_tb__Syms* __restrict vlSymsp);
    ~Vregister_file_tb_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /home/yakub/verilator/include/verilated_std.sv:212:21

template<> template<>
inline bool VlClassRef<Vregister_file_tb_std__03a__03aprocess>::operator==(const VlClassRef<Vregister_file_tb_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process == rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<Vregister_file_tb_std__03a__03aprocess>::operator!=(const VlClassRef<Vregister_file_tb_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->m_process != rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<Vregister_file_tb_std__03a__03aprocess>::operator<(const VlClassRef<Vregister_file_tb_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process < rhs.m_objp->m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
