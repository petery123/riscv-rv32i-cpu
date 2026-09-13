// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"

VL_ATTR_COLD void Vregister_file_tb_register_file_tb___eval_static__TOP__register_file_tb(Vregister_file_tb_register_file_tb* vlSelf);
void Vregister_file_tb___024root___timing_ready(Vregister_file_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_file_tb___024root___eval_static(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_static\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregister_file_tb_register_file_tb___eval_static__TOP__register_file_tb((&vlSymsp->TOP__register_file_tb));
    vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb____PVT__clk__0 = 0U;
    Vregister_file_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vregister_file_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vregister_file_tb_register_file_tb___act_sequent__TOP__register_file_tb__0(Vregister_file_tb_register_file_tb* vlSelf);

VL_ATTR_COLD bool Vregister_file_tb___024root___eval_stl(Vregister_file_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_stl\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister_file_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vregister_file_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vregister_file_tb_register_file_tb___act_sequent__TOP__register_file_tb__0((&vlSymsp->TOP__register_file_tb));
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__stl(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_dump_triggers__stl\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vregister_file_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__ico(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_dump_triggers__ico\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vregister_file_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__act(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_dump_triggers__act\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vregister_file_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__nba(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_dump_triggers__nba\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vregister_file_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__obs(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_dump_triggers__obs\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__react(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_dump_triggers__react\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_final(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_final\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vregister_file_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vregister_file_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___trigger_anySet__stl\n"); );
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

bool Vregister_file_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vregister_file_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vregister_file_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vregister_file_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge register_file_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge register_file_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister_file_tb___024root___ctor_var_reset(Vregister_file_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___ctor_var_reset\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__register_file_tb____PVT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

VL_ATTR_COLD void Vregister_file_tb___024root___configure_coverage(Vregister_file_tb___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___configure_coverage\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
