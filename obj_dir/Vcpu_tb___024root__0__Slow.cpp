// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"

void Vcpu_tb___024root___timing_ready(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_static(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_static\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk1__DOT__halfword_hold = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 756764909898101516ull);
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk2__DOT__byte_hold = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6747326550722885723ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelfRef.cpu_tb__DOT__clk;
    Vcpu_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vcpu_tb___024root___stl_sequent__TOP__0(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcpu_tb___024root___eval_stl(Vcpu_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_stl\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vcpu_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vcpu_tb___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__stl(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_dump_triggers__stl\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vcpu_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__ico(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_dump_triggers__ico\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vcpu_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__act(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_dump_triggers__act\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vcpu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__nba(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_dump_triggers__nba\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vcpu_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__obs(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_dump_triggers__obs\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__react(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_dump_triggers__react\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_final(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_final\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcpu_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*2:0*/, 512> Vcpu_tb__ConstPool__TABLE_hce7bf640_0;
extern const VlWide<1024>/*32767:0*/ Vcpu_tb__ConstPool__CONST_hee6d8bd0_0;

VL_ATTR_COLD void Vcpu_tb___024root___stl_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___stl_sequent__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ cpu_tb__DOT__dut__DOT__alu_op;
    cpu_tb__DOT__dut__DOT__alu_op = 0;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__b;
    cpu_tb__DOT__dut__DOT__b = 0;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__mem_is_signed;
    cpu_tb__DOT__dut__DOT__mem_is_signed = 0;
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*6:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(4U) 
                                                + vlSelfRef.cpu_tb__DOT__dut__DOT__pc);
    __VdfgRegularize_h6e95ff9d_0_12 = (0x0000001fU 
                                       & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                          [(0x000000ffU 
                                            & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          >> 0x0000000fU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = (1U 
                                                 & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                    [
                                                    (0x000000ffU 
                                                     & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                        >> 2U))] 
                                                    >> 0x0000000eU));
    __VdfgRegularize_h6e95ff9d_0_13 = (0x0000001fU 
                                       & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                          [(0x000000ffU 
                                            & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                               >> 2U))] 
                                          >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (0x0000001fU 
                                                & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 7U));
    __VdfgRegularize_h6e95ff9d_0_15 = (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                       [(0x000000ffU 
                                         & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                            >> 2U))] 
                                       >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (1U 
                                                & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (1U 
                                                & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                       >> 2U))] 
                                                   >> 0x0000000dU));
    __VdfgRegularize_h6e95ff9d_0_8 = (7U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                            [(0x000000ffU 
                                              & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 0x0000000cU));
    __VdfgRegularize_h6e95ff9d_0_5 = (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                      [(0x000000ffU 
                                        & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                           >> 2U))] 
                                      >> 0x00000019U);
    __VdfgRegularize_h6e95ff9d_0_3 = (0x000001ffU & 
                                      (- (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                       >> 2U))])))));
    __VdfgRegularize_h6e95ff9d_0_10 = (1U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                             [(0x000000ffU 
                                               & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 4U));
    __VdfgRegularize_h6e95ff9d_0_20 = (1U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                             [(0x000000ffU 
                                               & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 5U));
    __VdfgRegularize_h6e95ff9d_0_6 = (1U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                            [(0x000000ffU 
                                              & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                 >> 2U))] 
                                            >> 2U));
    __VdfgRegularize_h6e95ff9d_0_19 = (1U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                             [(0x000000ffU 
                                               & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                  >> 2U))] 
                                             >> 3U));
    vlSelfRef.cpu_tb__DOT__dut__DOT__a = ((0U == (IData)(__VdfgRegularize_h6e95ff9d_0_12))
                                           ? 0U : vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers
                                          [__VdfgRegularize_h6e95ff9d_0_12]);
    vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2 = (
                                                   (0U 
                                                    == (IData)(__VdfgRegularize_h6e95ff9d_0_13))
                                                    ? 0U
                                                    : vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers
                                                   [__VdfgRegularize_h6e95ff9d_0_13]);
    __VdfgRegularize_h6e95ff9d_0_17 = (1U & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_6)) 
                                             & vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                             [(0x000000ffU 
                                               & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                  >> 2U))]));
    __VdfgRegularize_h6e95ff9d_0_18 = (1U & ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_19)) 
                                             & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                [(0x000000ffU 
                                                  & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                     >> 2U))] 
                                                >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (vlSelfRef.cpu_tb__DOT__dut__DOT__a 
                                                 == vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2);
    vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type = (
                                                   (0x00000040U 
                                                    & vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                    [
                                                    (0x000000ffU 
                                                     & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                        >> 2U))])
                                                    ? 
                                                   ((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_10))))) 
                                                    & (((IData)(__VdfgRegularize_h6e95ff9d_0_19)
                                                         ? 
                                                        (2U 
                                                         & (- (IData)(
                                                                      (7U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                                        [
                                                                        (0x000000ffU 
                                                                         & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                                            >> 2U))])))))
                                                         : 
                                                        ((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                                          ? 
                                                         (1U 
                                                          & (IData)(__VdfgRegularize_h6e95ff9d_0_3))
                                                          : 
                                                         (0x0010U 
                                                          & (IData)(__VdfgRegularize_h6e95ff9d_0_3)))) 
                                                       & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_20)))))
                                                    : 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_20)
                                                     ? 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_10)
                                                      ? 
                                                     (((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                                        ? 
                                                       (8U 
                                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_3))
                                                        : 
                                                       (0x0100U 
                                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_3))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_19))))))
                                                      : 
                                                     (0x0020U 
                                                      & (- (IData)(
                                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_18) 
                                                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_17))))))
                                                     : 
                                                    ((IData)(__VdfgRegularize_h6e95ff9d_0_10)
                                                      ? 
                                                     (((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                                        ? 
                                                       (4U 
                                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_3))
                                                        : 
                                                       (0x0080U 
                                                        & (IData)(__VdfgRegularize_h6e95ff9d_0_3))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_19))))))
                                                      : 
                                                     (0x0040U 
                                                      & (- (IData)(
                                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_17) 
                                                                    & (IData)(__VdfgRegularize_h6e95ff9d_0_18))))))));
    cpu_tb__DOT__dut__DOT__mem_is_signed = (1U & ((~ 
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                        [
                                                        (0x000000ffU 
                                                         & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                            >> 2U))] 
                                                        >> 0x0000000dU)))) 
                                                  & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type) 
                                                     >> 6U)));
    vlSelfRef.cpu_tb__DOT__dut__DOT__mem_access_size 
        = ((0x00000040U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))
            ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                ? 2U : (1U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))))
            : ((0x00000020U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))
                ? (((1U == (IData)(__VdfgRegularize_h6e95ff9d_0_8))
                     ? 1U : 2U) & (- (IData)((0U != (IData)(__VdfgRegularize_h6e95ff9d_0_8)))))
                : 2U));
    __VdfgRegularize_h6e95ff9d_0_9 = (1U & Vcpu_tb__ConstPool__TABLE_hce7bf640_0
                                      [vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type]);
    __VdfgRegularize_h6e95ff9d_0_14 = (1U & (Vcpu_tb__ConstPool__TABLE_hce7bf640_0
                                             [vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type] 
                                             >> 1U));
    vlSelfRef.cpu_tb__DOT__dut__DOT__immediate = ((4U 
                                                   & Vcpu_tb__ConstPool__TABLE_hce7bf640_0
                                                   [vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type])
                                                   ? 
                                                  (((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                     ? 
                                                    VL_EXTENDS_II(32,21, 
                                                                  ((((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                                                     << 0x00000014U) 
                                                                    | (((0x000001feU 
                                                                         & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                                            [
                                                                            (0x000000ffU 
                                                                             & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                                                >> 2U))] 
                                                                            >> 0x0000000bU)) 
                                                                        | (1U 
                                                                           & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                                              [
                                                                              (0x000000ffU 
                                                                               & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                                                >> 2U))] 
                                                                              >> 0x00000014U))) 
                                                                       << 0x0000000bU)) 
                                                                   | (0x000007feU 
                                                                      & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                                         [
                                                                         (0x000000ffU 
                                                                          & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                                             >> 2U))] 
                                                                         >> 0x00000014U))))
                                                     : 
                                                    (0xfffff000U 
                                                     & vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                     [
                                                     (0x000000ffU 
                                                      & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                         >> 2U))])) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_14))))))
                                                   : 
                                                  ((IData)(__VdfgRegularize_h6e95ff9d_0_14)
                                                    ? 
                                                   ((IData)(__VdfgRegularize_h6e95ff9d_0_9)
                                                     ? 
                                                    VL_EXTENDS_II(32,13, 
                                                                  ((((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                                                     << 0x0000000cU) 
                                                                    | (0x00000800U 
                                                                       & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                                          [
                                                                          (0x000000ffU 
                                                                           & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                                              >> 2U))] 
                                                                          << 4U))) 
                                                                   | ((0x000007e0U 
                                                                       & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                                          [
                                                                          (0x000000ffU 
                                                                           & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                                              >> 2U))] 
                                                                          >> 0x00000014U)) 
                                                                      | (0x0000001eU 
                                                                         & (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                                            [
                                                                            (0x000000ffU 
                                                                             & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                                                >> 2U))] 
                                                                            >> 7U)))))
                                                     : 
                                                    VL_EXTENDS_II(32,12, 
                                                                  (((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                                    << 5U) 
                                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))))
                                                    : 
                                                   (VL_EXTENDS_II(32,12, 
                                                                  (vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory
                                                                   [
                                                                   (0x000000ffU 
                                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                                       >> 2U))] 
                                                                   >> 0x00000014U)) 
                                                    & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_9))))));
    if ((0x00000100U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))) {
        cpu_tb__DOT__dut__DOT__alu_op = (0x0000000fU 
                                         & Vcpu_tb__ConstPool__CONST_hee6d8bd0_0
                                         [((0x07fffff8U 
                                            & ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                               << 3U)) 
                                           | (0x07ffffffU 
                                              & (IData)(__VdfgRegularize_h6e95ff9d_0_8)))]);
        cpu_tb__DOT__dut__DOT__b = vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2;
    } else {
        cpu_tb__DOT__dut__DOT__alu_op = (0x0000000fU 
                                         & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                   ? 2U
                                                   : 3U)
                                                  : 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(__VdfgRegularize_h6e95ff9d_0_5))
                                                    ? 6U
                                                    : 
                                                   (7U 
                                                    & (- (IData)(
                                                                 (0x20U 
                                                                  == (IData)(__VdfgRegularize_h6e95ff9d_0_5))))))
                                                   : 4U))
                                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                   ? 9U
                                                   : 8U)
                                                  : 
                                                 (5U 
                                                  & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type) 
                                                             >> 7U))))));
        cpu_tb__DOT__dut__DOT__b = (vlSelfRef.cpu_tb__DOT__dut__DOT__immediate 
                                    & (- (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type) 
                                                      >> 5U))))));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (vlSelfRef.cpu_tb__DOT__dut__DOT__pc 
                                                + vlSelfRef.cpu_tb__DOT__dut__DOT__immediate);
    vlSelfRef.cpu_tb__DOT__dut__DOT__result = ((8U 
                                                & (IData)(cpu_tb__DOT__dut__DOT__alu_op))
                                                ? (
                                                   (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(cpu_tb__DOT__dut__DOT__alu_op) 
                                                                   >> 1U))))) 
                                                   & (((1U 
                                                        & (IData)(cpu_tb__DOT__dut__DOT__alu_op))
                                                        ? 
                                                       (1U 
                                                        & (- (IData)(
                                                                     (vlSelfRef.cpu_tb__DOT__dut__DOT__a 
                                                                      < cpu_tb__DOT__dut__DOT__b))))
                                                        : 
                                                       (1U 
                                                        & (- (IData)(
                                                                     VL_LTS_III(32, vlSelfRef.cpu_tb__DOT__dut__DOT__a, cpu_tb__DOT__dut__DOT__b))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ 
                                                                       ((IData)(cpu_tb__DOT__dut__DOT__alu_op) 
                                                                        >> 2U)))))))
                                                : (
                                                   (4U 
                                                    & (IData)(cpu_tb__DOT__dut__DOT__alu_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(cpu_tb__DOT__dut__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(cpu_tb__DOT__dut__DOT__alu_op))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_tb__DOT__dut__DOT__a, 
                                                                    (0x0000001fU 
                                                                     & cpu_tb__DOT__dut__DOT__b))
                                                      : 
                                                     (vlSelfRef.cpu_tb__DOT__dut__DOT__a 
                                                      >> 
                                                      (0x0000001fU 
                                                       & cpu_tb__DOT__dut__DOT__b)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(cpu_tb__DOT__dut__DOT__alu_op))
                                                      ? 
                                                     (vlSelfRef.cpu_tb__DOT__dut__DOT__a 
                                                      << 
                                                      (0x0000001fU 
                                                       & cpu_tb__DOT__dut__DOT__b))
                                                      : 
                                                     (cpu_tb__DOT__dut__DOT__b 
                                                      ^ vlSelfRef.cpu_tb__DOT__dut__DOT__a)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(cpu_tb__DOT__dut__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(cpu_tb__DOT__dut__DOT__alu_op))
                                                      ? 
                                                     (cpu_tb__DOT__dut__DOT__b 
                                                      | vlSelfRef.cpu_tb__DOT__dut__DOT__a)
                                                      : 
                                                     (cpu_tb__DOT__dut__DOT__b 
                                                      & vlSelfRef.cpu_tb__DOT__dut__DOT__a))
                                                     : 
                                                    ((1U 
                                                      & (IData)(cpu_tb__DOT__dut__DOT__alu_op))
                                                      ? 
                                                     (vlSelfRef.cpu_tb__DOT__dut__DOT__a 
                                                      - cpu_tb__DOT__dut__DOT__b)
                                                      : 
                                                     (cpu_tb__DOT__dut__DOT__b 
                                                      + vlSelfRef.cpu_tb__DOT__dut__DOT__a)))));
    if ((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__mem_access_size))) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__mem_read_data 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
            [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                             >> 2U))];
    } else if ((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__mem_access_size))) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk1__DOT__halfword_hold 
            = (0x0000ffffU & ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__result)
                               ? (vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                                  [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                                   >> 2U))] 
                                  >> 0x10U) : vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                              [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                               >> 2U))]));
        vlSelfRef.cpu_tb__DOT__dut__DOT__mem_read_data 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk1__DOT__halfword_hold;
        if (cpu_tb__DOT__dut__DOT__mem_is_signed) {
            vlSelfRef.cpu_tb__DOT__dut__DOT__mem_read_data 
                = VL_EXTENDS_II(32,16, (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk1__DOT__halfword_hold));
        }
    } else if ((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__mem_access_size))) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk2__DOT__byte_hold 
            = (0x000000ffU & ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__result)
                               ? ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__result)
                                   ? (vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                                      [(0x000000ffU 
                                        & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                           >> 2U))] 
                                      >> 0x18U) : (vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                                                   [
                                                   (0x000000ffU 
                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                                       >> 2U))] 
                                                   >> 0x10U))
                               : ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__result)
                                   ? (vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                                      [(0x000000ffU 
                                        & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                           >> 2U))] 
                                      >> 8U) : vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                                  [(0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                                   >> 2U))])));
        vlSelfRef.cpu_tb__DOT__dut__DOT__mem_read_data 
            = ((IData)(cpu_tb__DOT__dut__DOT__mem_is_signed)
                ? (((- (IData)((1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk2__DOT__byte_hold) 
                                      >> 7U)))) << 8U) 
                   | (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk2__DOT__byte_hold))
                : (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__unnamedblk2__DOT__byte_hold));
    } else {
        vlSelfRef.cpu_tb__DOT__dut__DOT__mem_read_data = 0U;
    }
}

bool Vcpu_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcpu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcpu_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge cpu_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge cpu_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root___ctor_var_reset(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___ctor_var_reset\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->cpu_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5729153853397715463ull);
    vlSelf->cpu_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4669460685312951478ull);
    vlSelf->cpu_tb__DOT__dut__DOT__instr_type = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15566567961935565389ull);
    vlSelf->cpu_tb__DOT__dut__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6092114070976251952ull);
    vlSelf->cpu_tb__DOT__dut__DOT__a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16453270536004313499ull);
    vlSelf->cpu_tb__DOT__dut__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14961314209432259338ull);
    vlSelf->cpu_tb__DOT__dut__DOT__read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13197178559563985819ull);
    vlSelf->cpu_tb__DOT__dut__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15446351515042717921ull);
    vlSelf->cpu_tb__DOT__dut__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13585886941454768160ull);
    vlSelf->cpu_tb__DOT__dut__DOT__mem_access_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9571406871672916260ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15490778564120429393ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17224076829770344765ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15308298978222845558ull);
    }
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_21 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}

VL_ATTR_COLD void Vcpu_tb___024root___configure_coverage(Vcpu_tb___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___configure_coverage\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
