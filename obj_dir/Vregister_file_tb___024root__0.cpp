// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"

VL_ATTR_COLD void Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb(Vregister_file_tb_register_file_tb* vlSelf);
VlCoroutine Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb__Vtiming__0(Vregister_file_tb_register_file_tb* vlSelf);
VlCoroutine Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb__Vtiming__1(Vregister_file_tb_register_file_tb* vlSelf);

void Vregister_file_tb___024root___eval_initial(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_initial\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb((&vlSymsp->TOP__register_file_tb));
    Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb__Vtiming__0((&vlSymsp->TOP__register_file_tb));
    Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb__Vtiming__1((&vlSymsp->TOP__register_file_tb));
}

void Vregister_file_tb___024root___eval_sample(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_sample\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__register_file_tb.__Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers 
        = vlSymsp->TOP__register_file_tb.__PVT__dut__DOT__registers;
    vlSymsp->TOP__register_file_tb.__Vsampled_TOP__register_file_tb____PVT__read_addr1 
        = vlSymsp->TOP__register_file_tb.__PVT__read_addr1;
    vlSymsp->TOP__register_file_tb.__Vsampled_TOP__register_file_tb____PVT__read_addr2 
        = vlSymsp->TOP__register_file_tb.__PVT__read_addr2;
    vlSymsp->TOP__register_file_tb.__Vsampled_TOP__register_file_tb____PVT__write_en 
        = vlSymsp->TOP__register_file_tb.__PVT__write_en;
    vlSymsp->TOP__register_file_tb.__Vsampled_TOP__register_file_tb____PVT__write_addr 
        = vlSymsp->TOP__register_file_tb.__PVT__write_addr;
    vlSymsp->TOP__register_file_tb.__Vsampled_TOP__register_file_tb____PVT__write_data 
        = vlSymsp->TOP__register_file_tb.__PVT__write_data;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vregister_file_tb___024root___eval_ico(Vregister_file_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_ico\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister_file_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vregister_file_tb___024root___timing_ready(Vregister_file_tb___024root* vlSelf);
void Vregister_file_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vregister_file_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vregister_file_tb___024root___timing_resume(Vregister_file_tb___024root* vlSelf);
void Vregister_file_tb_register_file_tb___act_sequent__TOP__register_file_tb__0(Vregister_file_tb_register_file_tb* vlSelf);

bool Vregister_file_tb___024root___eval_act(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_act\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                     (((vlSelfRef.__VdynSched.evaluate() 
                                                        << 3U) 
                                                       | (((~ (IData)(vlSymsp->TOP__register_file_tb.__PVT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb____PVT__clk__0)) 
                                                          << 2U)) 
                                                      | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSymsp->TOP__register_file_tb.__PVT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb____PVT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb____PVT__clk__0 
            = vlSymsp->TOP__register_file_tb.__PVT__clk;
        vlSelfRef.__VdynSched.doPostUpdates();
    }
    Vregister_file_tb___024root___timing_ready(vlSelf);
    Vregister_file_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister_file_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vregister_file_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vregister_file_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vregister_file_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                Vregister_file_tb_register_file_tb___act_sequent__TOP__register_file_tb__0((&vlSymsp->TOP__register_file_tb));
            }
        }
    }
    return (__VactExecute);
}

bool Vregister_file_tb___024root___eval_inact(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_inact\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/register_file_tb.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vregister_file_tb_register_file_tb___nba_sequent__TOP__register_file_tb__0(Vregister_file_tb_register_file_tb* vlSelf);
void Vregister_file_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vregister_file_tb___024root___eval_nba(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_nba\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vregister_file_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vregister_file_tb_register_file_tb___nba_sequent__TOP__register_file_tb__0((&vlSymsp->TOP__register_file_tb));
            }
            if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vregister_file_tb_register_file_tb___act_sequent__TOP__register_file_tb__0((&vlSymsp->TOP__register_file_tb));
            }
        }
        Vregister_file_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vregister_file_tb___024root___eval_obs(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_obs\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vregister_file_tb___024root___eval_react(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_react\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vregister_file_tb___024root___eval_postponed(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_postponed\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vregister_file_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vregister_file_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vregister_file_tb___024root___timing_ready(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___timing_ready\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h86032a67__0.ready("@(negedge register_file_tb.clk)");
    }
}

void Vregister_file_tb___024root___timing_resume(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___timing_resume\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h86032a67__0.moveToResumeQueue(
                                                          "@(negedge register_file_tb.clk)");
    vlSelfRef.__VtrigSched_h86032a67__0.resume("@(negedge register_file_tb.clk)");
    vlSelfRef.__VdynSched.resume();
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vregister_file_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vregister_file_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vregister_file_tb___024root____VbeforeTrig_h86032a67__0(Vregister_file_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root____VbeforeTrig_h86032a67__0\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSymsp->TOP__register_file_tb.__PVT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb____PVT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb____PVT__clk__0 
        = vlSymsp->TOP__register_file_tb.__PVT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h86032a67__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vregister_file_tb___024root___eval_debug_assertions(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_debug_assertions\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
