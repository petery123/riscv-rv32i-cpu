// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"

void Vregister_file_tb_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, Vregister_file_tb__Syms* __restrict vlSymsp, VlClassRef<Vregister_file_tb_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vregister_file_tb_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vregister_file_tb_std__03a__03aprocess> p;
    p = VL_NEW(Vregister_file_tb_std__03a__03aprocess, vlSymsp);

// $c statement at /home/yakub/verilator/include/verilated_std.sv:159:7
    VL_NULL_CHECK(p, "/home/yakub/verilator/include/verilated_std.sv", 159)->m_process = vlProcess;
    self__Vfuncrtn = p;
}

void Vregister_file_tb_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue(Vregister_file_tb__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vregister_file_tb_std__03a__03aprocess>> &processQueue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vregister_file_tb_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue\n"); );
    // Body
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<Vregister_file_tb_std__03a__03aprocess> unnamedblk1_1__DOT__unnamedblk1__DOT__p;
    unnamedblk1_1__DOT____Vrepeat0 = processQueue.size();
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        unnamedblk1_1__DOT__unnamedblk1__DOT__p = processQueue.pop_front();
        if ((VlNull{} != unnamedblk1_1__DOT__unnamedblk1__DOT__p)) {
            VL_NULL_CHECK(unnamedblk1_1__DOT__unnamedblk1__DOT__p, "/home/yakub/verilator/include/verilated_std.sv", 200)->__VnoInFunc_kill(vlSymsp);
        }
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
}

void Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_set_status(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body

// $c statement at /home/yakub/verilator/include/verilated_std.sv:166:7
    this->m_process->state(s);
}

void Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_status(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 0U;
    status__Vfuncrtn = 
// $cpure expression at /home/yakub/verilator/include/verilated_std.sv:172:21
this->m_process->state()
    ;
}

void Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_kill(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
}

void Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_suspend(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:183: Assertion failed in %m: std::process::suspend() not supported\n",3, 'M',vlSymsp->name(),"std.process.suspend", 'T',-12
                 , '#',64,VL_TIME_UNITED_Q(1));
    VL_STOP_MT("/home/yakub/verilator/include/verilated_std.sv", 183, "");
}

void Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_resume(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
}

VlCoroutine Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_await(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hc185b2c7__0;
    __Vtrigprevexpr_hc185b2c7__0 = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_1__status;
    IData/*31:0*/ __VlefCall_0__status;
    this->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
    this->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
    if ((1U & (~ ((0U == __VlefCall_0__status) | (4U 
                                                  == __VlefCall_1__status))))) {
        CData/*0:0*/ __VdynTrigger_hc369db89__0;
        __VdynTrigger_hc369db89__0 = 0;
        __VdynTrigger_hc369db89__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hc369db89__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] ((32'h0 == std::process.__VlefCall_0__status) | (32'h4 == std::process.__VlefCall_1__status)))", 
                                                         "/home/yakub/verilator/include/verilated_std.sv", 
                                                         192);
            __Vtrigprevexpr_hc185b2c7__0 = ((0U == __VlefCall_0__status) 
                                            | (4U == __VlefCall_1__status));
            __VdynTrigger_hc369db89__0 = __Vtrigprevexpr_hc185b2c7__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc369db89__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] ((32'h0 == std::process.__VlefCall_0__status) | (32'h4 == std::process.__VlefCall_1__status)))", 
                                                     "/home/yakub/verilator/include/verilated_std.sv", 
                                                     192);
    }
    co_return;
}

void Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_get_randstate(Vregister_file_tb__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_CVT_PACK_STR_NI(
// $c expression at /home/yakub/verilator/include/verilated_std.sv:235:26
0
    );

// $c statement at /home/yakub/verilator/include/verilated_std.sv:237:7
    s = this->m_process->randstate();
    get_randstate__Vfuncrtn = s;
}

void Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_set_randstate(Vregister_file_tb__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /home/yakub/verilator/include/verilated_std.sv:242:7
    this->m_process->randstate(s);
}

void Vregister_file_tb_std__03a__03aprocess::init(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vregister_file_tb_std__03a__03aprocess::_ctor_var_reset(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
