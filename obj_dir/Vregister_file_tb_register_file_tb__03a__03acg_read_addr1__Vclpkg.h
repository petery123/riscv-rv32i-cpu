// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE_TB_REGISTER_FILE_TB__03A__03ACG_READ_ADDR1__VCLPKG_H_
#define VERILATED_VREGISTER_FILE_TB_REGISTER_FILE_TB__03A__03ACG_READ_ADDR1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_covergroup.h"
#include "verilated_timing.h"
#include "Vregister_file_tb_std.h"


class Vregister_file_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file_tb_register_file_tb__03a__03acg_read_addr1__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT____Vint;

    // INTERNAL VARIABLES
    Vregister_file_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister_file_tb_register_file_tb__03a__03acg_read_addr1__Vclpkg();
    ~Vregister_file_tb_register_file_tb__03a__03acg_read_addr1__Vclpkg();
    void ctor(Vregister_file_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vregister_file_tb_register_file_tb__03a__03acg_read_addr1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, bool localCounter, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __VnoInFunc_get_coverage(Vregister_file_tb__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_coverage__Vfuncrtn);
};


class Vregister_file_tb__Syms;

class Vregister_file_tb_register_file_tb__03a__03acg_read_addr1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vregister_file_tb_vl_covergroup_options_t__struct__0 __PVT__option;
    Vregister_file_tb_vl_covergroup_type_options_t__struct__0 __PVT__type_option;
    VlCoverpointT<1> __PVT____Vcp_read_addr1;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "register_file_tb::cg_read_addr1"; }
    VlClass* clone() const { return new Vregister_file_tb_register_file_tb__03a__03acg_read_addr1(*this); }
    void __VnoInFunc_get_inst_coverage(Vregister_file_tb__Syms* __restrict vlSymsp, std::string covered_bins, std::string total_bins, double &get_inst_coverage__Vfuncrtn);
    void __VnoInFunc_sample(Vregister_file_tb__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_inst_name(Vregister_file_tb__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_start(Vregister_file_tb__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_stop(Vregister_file_tb__Syms* __restrict vlSymsp) {}
  private:
    void _ctor_var_reset(Vregister_file_tb__Syms* __restrict vlSymsp);
  public:
    Vregister_file_tb_register_file_tb__03a__03acg_read_addr1() = default;
    void init(Vregister_file_tb__Syms* __restrict vlSymsp);
    ~Vregister_file_tb_register_file_tb__03a__03acg_read_addr1() {}
};


#endif  // guard
