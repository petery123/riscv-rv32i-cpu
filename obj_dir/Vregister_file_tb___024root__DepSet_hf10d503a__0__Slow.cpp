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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__stl(Vregister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vregister_file_tb___024root___eval_phase__stl(Vregister_file_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_file_tb___024root___eval_settle(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vregister_file_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/register_file_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vregister_file_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__stl(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vregister_file_tb___024root___act_comb__TOP__0(Vregister_file_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_file_tb___024root___eval_stl(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vregister_file_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vregister_file_tb___024root___eval_triggers__stl(Vregister_file_tb___024root* vlSelf);

VL_ATTR_COLD bool Vregister_file_tb___024root___eval_phase__stl(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vregister_file_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vregister_file_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
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
        vlSelf->register_file_tb__DOT__expected_registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->register_file_tb__DOT__random_write_addr = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT__random_read_addr1 = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT__random_read_addr2 = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT__random_data = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT__check_both_reads__Vstatic__expected1 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT__check_both_reads__Vstatic__expected2 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_0_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_1_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_2_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_3_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_4_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_5_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_6_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_7_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_8_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_9_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_10_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_11_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_12_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_13_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_14_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_15_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_16_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_17_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_18_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_19_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_20_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_21_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_22_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_23_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_24_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_25_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_26_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_27_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_28_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_29_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_30_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_31_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_32_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_33_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_34_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_35_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_36_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_37_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_38_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_39_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_40_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_41_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_42_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_43_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_44_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_45_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_46_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_47_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_48_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_49_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_50_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_51_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_52_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_53_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_54_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_55_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_56_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_57_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_58_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_59_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_60_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_61_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_62_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_63_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_64_0 = VL_RAND_RESET_I(1);
    vlSelf->register_file_tb__DOT___Vpast_65_0 = VL_RAND_RESET_I(5);
    vlSelf->register_file_tb__DOT___Vpast_66_0 = VL_RAND_RESET_I(32);
    vlSelf->register_file_tb__DOT___Vpast_67_0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->register_file_tb__DOT__dut__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vsampled_TOP__register_file_tb__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_0_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_2_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_4_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_6_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_8_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_10_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_12_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_14_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_16_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_18_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_20_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_22_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_24_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_26_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_28_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_30_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_32_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_34_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_36_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_38_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_40_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_42_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_44_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_46_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_48_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_50_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_52_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_54_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_56_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_58_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_60_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_62_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_64_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_65_0 = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_66_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT___Vpast_67_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT__read_addr1 = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__Vsampled_TOP__register_file_tb__DOT__dut__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vsampled_TOP__register_file_tb__DOT__read_addr2 = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT__write_addr = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__register_file_tb__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
