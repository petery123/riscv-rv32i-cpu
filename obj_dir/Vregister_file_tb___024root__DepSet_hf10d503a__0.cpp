// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"
#include "Vregister_file_tb___024root.h"

VlCoroutine Vregister_file_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_file_tb___024root* vlSelf);
VlCoroutine Vregister_file_tb___024root___eval_initial__TOP__Vtiming__1(Vregister_file_tb___024root* vlSelf);

void Vregister_file_tb___024root___eval_initial(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vregister_file_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vregister_file_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0 
        = vlSelfRef.register_file_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vregister_file_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.register_file_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/register_file_tb.sv", 
                                             201);
        vlSelfRef.register_file_tb__DOT__clk = (1U 
                                                & (~ (IData)(vlSelfRef.register_file_tb__DOT__clk)));
    }
}

void Vregister_file_tb___024root___act_comb__TOP__0(Vregister_file_tb___024root* vlSelf);

void Vregister_file_tb___024root___eval_act(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vregister_file_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregister_file_tb___024root___act_comb__TOP__0(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.register_file_tb__DOT__read_data1 = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.register_file_tb__DOT__read_addr1))
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                                   [vlSelfRef.register_file_tb__DOT__read_addr1]);
    vlSelfRef.register_file_tb__DOT__read_data2 = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.register_file_tb__DOT__read_addr2))
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                                   [vlSelfRef.register_file_tb__DOT__read_addr2]);
}

void Vregister_file_tb___024root___nba_sequent__TOP__0(Vregister_file_tb___024root* vlSelf);

void Vregister_file_tb___024root___eval_nba(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vregister_file_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vregister_file_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vregister_file_tb___024root___timing_resume(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h50bf4e21__0.resume(
                                                   "@(posedge register_file_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vregister_file_tb___024root___timing_commit(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h50bf4e21__0.commit(
                                                   "@(posedge register_file_tb.clk)");
    }
}

void Vregister_file_tb___024root___eval_triggers__act(Vregister_file_tb___024root* vlSelf);

bool Vregister_file_tb___024root___eval_phase__act(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregister_file_tb___024root___eval_triggers__act(vlSelf);
    Vregister_file_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vregister_file_tb___024root___timing_resume(vlSelf);
        Vregister_file_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregister_file_tb___024root___eval_phase__nba(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregister_file_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__nba(Vregister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__act(Vregister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister_file_tb___024root___eval(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en 
        = vlSelfRef.register_file_tb__DOT__write_en;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_0_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_0_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_2_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_2_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_4_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_4_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_6_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_6_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_8_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_8_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_10_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_10_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_12_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_12_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_14_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_14_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_16_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_16_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_18_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_18_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_20_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_20_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_22_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_22_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_24_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_24_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_26_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_26_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_28_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_28_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_30_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_30_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_32_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_32_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_34_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_34_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_36_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_36_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_38_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_38_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_40_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_40_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_42_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_42_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_44_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_44_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_46_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_46_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_48_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_48_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_50_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_50_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_52_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_52_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_54_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_54_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_56_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_56_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_58_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_58_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_60_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_60_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_62_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_62_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_64_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_64_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_65_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_65_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_66_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_66_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_67_0 
        = vlSelfRef.register_file_tb__DOT___Vpast_67_0;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr1 
        = vlSelfRef.register_file_tb__DOT__read_addr1;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__dut__DOT__registers 
        = vlSelfRef.register_file_tb__DOT__dut__DOT__registers;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr2 
        = vlSelfRef.register_file_tb__DOT__read_addr2;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_addr 
        = vlSelfRef.register_file_tb__DOT__write_addr;
    vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_data 
        = vlSelfRef.register_file_tb__DOT__write_data;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vregister_file_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/register_file_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vregister_file_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/register_file_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vregister_file_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vregister_file_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregister_file_tb___024root___eval_debug_assertions(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
