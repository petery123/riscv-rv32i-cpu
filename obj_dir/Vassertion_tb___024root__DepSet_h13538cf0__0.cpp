// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vassertion_tb.h for the primary calling header

#include "Vassertion_tb__pch.h"
#include "Vassertion_tb___024root.h"

VlCoroutine Vassertion_tb___024root___eval_initial__TOP__Vtiming__0(Vassertion_tb___024root* vlSelf);
VlCoroutine Vassertion_tb___024root___eval_initial__TOP__Vtiming__1(Vassertion_tb___024root* vlSelf);

void Vassertion_tb___024root___eval_initial(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vassertion_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vassertion_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__assertion_tb__DOT__clk__0 
        = vlSelfRef.assertion_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vassertion_tb___024root___eval_initial__TOP__Vtiming__0(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.assertion_tb__DOT__d = 0x7bU;
    co_await vlSelfRef.__VtrigSched_h9bc7bcf5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge assertion_tb.clk)", 
                                                         "assertion_tb.sv", 
                                                         20);
    co_await vlSelfRef.__VtrigSched_h9bc7bcf5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge assertion_tb.clk)", 
                                                         "assertion_tb.sv", 
                                                         20);
    VL_FINISH_MT("assertion_tb.sv", 22, "");
}

VL_INLINE_OPT VlCoroutine Vassertion_tb___024root___eval_initial__TOP__Vtiming__1(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "assertion_tb.sv", 
                                             7);
        vlSelfRef.__VdlyVal__assertion_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelfRef.assertion_tb__DOT__clk)));
        vlSelfRef.__VdlySet__assertion_tb__DOT__clk__v0 = 1U;
    }
}

void Vassertion_tb___024root___eval_act(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vassertion_tb___024root___nba_sequent__TOP__0(Vassertion_tb___024root* vlSelf);
void Vassertion_tb___024root___nba_sequent__TOP__1(Vassertion_tb___024root* vlSelf);

void Vassertion_tb___024root___eval_nba(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vassertion_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vassertion_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vassertion_tb___024root___nba_sequent__TOP__1(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__assertion_tb__DOT__clk__v0) {
        vlSelfRef.__VdlySet__assertion_tb__DOT__clk__v0 = 0U;
        vlSelfRef.assertion_tb__DOT__clk = vlSelfRef.__VdlyVal__assertion_tb__DOT__clk__v0;
    }
}

void Vassertion_tb___024root___timing_resume(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9bc7bcf5__0.resume(
                                                   "@(posedge assertion_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vassertion_tb___024root___timing_commit(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9bc7bcf5__0.commit(
                                                   "@(posedge assertion_tb.clk)");
    }
}

void Vassertion_tb___024root___eval_triggers__act(Vassertion_tb___024root* vlSelf);

bool Vassertion_tb___024root___eval_phase__act(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vassertion_tb___024root___eval_triggers__act(vlSelf);
    Vassertion_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vassertion_tb___024root___timing_resume(vlSelf);
        Vassertion_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vassertion_tb___024root___eval_phase__nba(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vassertion_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vassertion_tb___024root___dump_triggers__nba(Vassertion_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vassertion_tb___024root___dump_triggers__act(Vassertion_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vassertion_tb___024root___eval(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    vlSelfRef.__Vsampled_TOP__assertion_tb__DOT__q 
        = vlSelfRef.assertion_tb__DOT__q;
    vlSelfRef.__Vsampled_TOP__assertion_tb__DOT___Vpast_0_0 
        = vlSelfRef.assertion_tb__DOT___Vpast_0_0;
    vlSelfRef.__Vsampled_TOP__assertion_tb__DOT__d 
        = vlSelfRef.assertion_tb__DOT__d;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vassertion_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("assertion_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vassertion_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("assertion_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vassertion_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vassertion_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vassertion_tb___024root___eval_debug_assertions(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
