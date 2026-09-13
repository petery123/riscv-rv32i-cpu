// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"

VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf);

void Valu_tb___024root___eval_initial(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Valu_tb___024root___eval_sample(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_sample\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Valu_tb___024root___eval_ico(Valu_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_ico\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Valu_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Valu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf);

bool Valu_tb___024root___eval_act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
    }
    Valu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Valu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Valu_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
        {
            // Inlined CFunc: _eval_body__act
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                Valu_tb___024root___act_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Valu_tb___024root___eval_inact(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_inact\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/alu_tb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Valu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Valu_tb___024root___eval_nba(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_nba\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Valu_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Valu_tb___024root___act_sequent__TOP__0(vlSelf);
            }
        }
        Valu_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Valu_tb___024root___eval_obs(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_obs\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Valu_tb___024root___eval_react(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_react\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Valu_tb___024root___eval_postponed(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_postponed\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__a = 5U;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         25);
    vlSelfRef.alu_tb__DOT__a = 0x0000000aU;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 1U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((0x0000000bU == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("ADD PASS\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:29: Assertion failed in %m: ADD FAILED: should be 11 however was %d\n",4, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 29, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         35);
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((4U == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("SUB PASS\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:39: Assertion failed in %m: SUB FAILED: should be 4 however was %d-%d = %d\n",6, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__a
                         , '#',32,vlSelfRef.alu_tb__DOT__b
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 39, "");
        }
    }
    vlSelfRef.alu_tb__DOT__a = 2U;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 2U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         45);
    vlSelfRef.alu_tb__DOT__a = 1U;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 3U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((2U == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("AND PASS\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:49: Assertion failed in %m: AND FAILED: should be 2 however was %d\n",4, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 49, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         55);
    vlSelfRef.alu_tb__DOT__a = 1U;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 4U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((7U == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("OR PASS\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:59: Assertion failed in %m: OR FAILED: should be 7 however was %d\n",4, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 59, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         65);
    vlSelfRef.alu_tb__DOT__a = 1U;
    vlSelfRef.alu_tb__DOT__b = 3U;
    vlSelfRef.alu_tb__DOT__alu_op = 5U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((7U == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("XOR PASS\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:69: Assertion failed in %m: XOR FAILED: should be 7 however was %d\n",4, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 69, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         78);
    vlSelfRef.alu_tb__DOT__a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__b = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = 6U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((8U == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SLL\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:83: Assertion failed in %m: FAIL: SLL expected 8, got %0d\n",4, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 83, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         93);
    vlSelfRef.alu_tb__DOT__a = 0x80000000U;
    vlSelfRef.alu_tb__DOT__b = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = 7U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((0x40000000U == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SRL\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:98: Assertion failed in %m: FAIL: SRL expected 40000000, got %h\n",4, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 98, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         109);
    vlSelfRef.alu_tb__DOT__a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__b = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = 8U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((0xc0000000U == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SRA\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:114: Assertion failed in %m: FAIL: SRA expected C0000000, got %h\n",4, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 114, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         124);
    vlSelfRef.alu_tb__DOT__a = 0xffffffffU;
    vlSelfRef.alu_tb__DOT__b = 1U;
    vlSelfRef.alu_tb__DOT__alu_op = 9U;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((1U == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SLT\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:129: Assertion failed in %m: FAIL: SLT expected 1, got %0d\n",4, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 129, "");
        }
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         141);
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((0U == vlSelfRef.alu_tb__DOT__result)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SLTU\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:146: Assertion failed in %m: FAIL: SLTU expected 0, got %0d\n",4, 'M',vlSymsp->name(),"alu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 146, "");
        }
    }
    VL_FINISH_MT("tb/alu_tb.sv", 148, "");
    co_return;
}

bool Valu_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_anySet__ico\n"); );
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

bool Valu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_anySet__act\n"); );
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

void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___act_sequent__TOP__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__result = ((8U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                      ? ((- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.alu_tb__DOT__alu_op) 
                                                         >> 1U))))) 
                                         & (((1U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                              ? (1U 
                                                 & (- (IData)(
                                                              (vlSelfRef.alu_tb__DOT__a 
                                                               < vlSelfRef.alu_tb__DOT__b))))
                                              : (1U 
                                                 & (- (IData)(
                                                              VL_LTS_III(32, vlSelfRef.alu_tb__DOT__a, vlSelfRef.alu_tb__DOT__b))))) 
                                            & (- (IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.alu_tb__DOT__alu_op) 
                                                              >> 2U)))))))
                                      : ((4U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                          ? ((2U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelfRef.alu_tb__DOT__a, 
                                                                (0x0000001fU 
                                                                 & vlSelfRef.alu_tb__DOT__b))
                                                  : 
                                                 (vlSelfRef.alu_tb__DOT__a 
                                                  >> 
                                                  (0x0000001fU 
                                                   & vlSelfRef.alu_tb__DOT__b)))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                  ? 
                                                 (vlSelfRef.alu_tb__DOT__a 
                                                  << 
                                                  (0x0000001fU 
                                                   & vlSelfRef.alu_tb__DOT__b))
                                                  : 
                                                 (vlSelfRef.alu_tb__DOT__a 
                                                  ^ vlSelfRef.alu_tb__DOT__b)))
                                          : ((2U & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                  ? 
                                                 (vlSelfRef.alu_tb__DOT__a 
                                                  | vlSelfRef.alu_tb__DOT__b)
                                                  : 
                                                 (vlSelfRef.alu_tb__DOT__a 
                                                  & vlSelfRef.alu_tb__DOT__b))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__alu_op))
                                                  ? 
                                                 (vlSelfRef.alu_tb__DOT__a 
                                                  - vlSelfRef.alu_tb__DOT__b)
                                                  : 
                                                 (vlSelfRef.alu_tb__DOT__a 
                                                  + vlSelfRef.alu_tb__DOT__b)))));
}

void Valu_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Valu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Valu_tb___024root___eval_debug_assertions(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_debug_assertions\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
