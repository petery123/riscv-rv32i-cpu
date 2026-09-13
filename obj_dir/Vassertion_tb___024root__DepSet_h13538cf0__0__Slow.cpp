// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vassertion_tb.h for the primary calling header

#include "Vassertion_tb__pch.h"
#include "Vassertion_tb___024root.h"

VL_ATTR_COLD void Vassertion_tb___024root___eval_static__TOP(Vassertion_tb___024root* vlSelf);

VL_ATTR_COLD void Vassertion_tb___024root___eval_static(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vassertion_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vassertion_tb___024root___eval_static__TOP(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.assertion_tb__DOT__clk = 0U;
    vlSelfRef.assertion_tb__DOT__d = 0U;
    vlSelfRef.assertion_tb__DOT__q = 0U;
}

VL_ATTR_COLD void Vassertion_tb___024root___eval_final(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vassertion_tb___024root___eval_settle(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vassertion_tb___024root___dump_triggers__act(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge assertion_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vassertion_tb___024root___dump_triggers__nba(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge assertion_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vassertion_tb___024root___ctor_var_reset(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->assertion_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->assertion_tb__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->assertion_tb__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->assertion_tb__DOT___Vpast_0_0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__assertion_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__assertion_tb__DOT__clk__v0 = 0;
    vlSelf->__Vsampled_TOP__assertion_tb__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__assertion_tb__DOT___Vpast_0_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__assertion_tb__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__assertion_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
