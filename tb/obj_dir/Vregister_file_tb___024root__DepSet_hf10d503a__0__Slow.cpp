// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"
#include "Vregister_file_tb___024root.h"

VL_ATTR_COLD void Vregister_file_tb___024root___eval_static__TOP(Vregister_file_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_file_tb___024root___eval_static(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregister_file_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_static__TOP(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.register_file_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_final(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_settle(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__act(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge register_file_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__nba(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge register_file_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister_file_tb___024root___ctor_var_reset(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->register_file_tb__DOT__read_addr1 = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT__read_addr2 = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT__write_addr = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->register_file_tb__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->register_file_tb__DOT__read_data1 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT__read_data2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->register_file_tb__DOT__myRegister__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdlyVal__register_file_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__register_file_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
