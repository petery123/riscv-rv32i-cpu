// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_initial(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 32, 256, 0, "programs/program.hex"s
                     ,  &(vlSelfRef.cpu_tb__DOT__dut__DOT__instruction_memory_m__DOT__memory)
                     , 0, ~0ULL);
    }
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vcpu_tb___024root___eval_sample(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_sample\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcpu_tb___024root___eval_ico(Vcpu_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_ico\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vcpu_tb___024root___timing_ready(Vcpu_tb___024root* vlSelf);
void Vcpu_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcpu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vcpu_tb___024root___timing_resume(Vcpu_tb___024root* vlSelf);

bool Vcpu_tb___024root___eval_act(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_act\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.cpu_tb__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0)) 
                                                          << 2U) 
                                                         | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.cpu_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
            = vlSelfRef.cpu_tb__DOT__clk;
    }
    Vcpu_tb___024root___timing_ready(vlSelf);
    Vcpu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcpu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcpu_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vcpu_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_tb___024root___eval_inact(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_inact\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/cpu_tb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vcpu_tb___024root___nba_sequent__TOP__0(Vcpu_tb___024root* vlSelf);
void Vcpu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vcpu_tb___024root___eval_nba(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_nba\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcpu_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vcpu_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vcpu_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vcpu_tb___024root___eval_obs(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_obs\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vcpu_tb___024root___eval_react(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_react\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vcpu_tb___024root___eval_postponed(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_postponed\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/cpu_tb.sv", 
                                             15);
        vlSelfRef.cpu_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__clk)));
    }
    co_return;
}

void Vcpu_tb___024root____VbeforeTrig_h1926a843__0(Vcpu_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.cpu_tb__DOT__reset = 1U;
    Vcpu_tb___024root____VbeforeTrig_h1926a843__0(vlSelf, 
                                                  "@(negedge cpu_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h1926a843__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge cpu_tb.clk)", 
                                                         "tb/cpu_tb.sv", 
                                                         21);
    vlSelfRef.cpu_tb__DOT__reset = 0U;
    cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x0000000dU;
    while (VL_LTS_III(32, 0U, cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vcpu_tb___024root____VbeforeTrig_h1926a843__0(vlSelf, 
                                                      "@(negedge cpu_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h1926a843__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge cpu_tb.clk)", 
                                                             "tb/cpu_tb.sv", 
                                                             24);
        cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (cpu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY(((8U == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[3U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SLL\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:29: Assertion failed in %m: FAIL: SLL\n",3, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/cpu_tb.sv", 29, "");
        }
        if (VL_LIKELY(((2U == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[4U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SRL\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:34: Assertion failed in %m: FAIL: SRL\n",3, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/cpu_tb.sv", 34, "");
        }
        if (VL_LIKELY(((0xfffffffeU == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[6U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SRA\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:39: Assertion failed in %m: FAIL: SRA got %h\n",4, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[6U]);
            VL_STOP_MT("tb/cpu_tb.sv", 39, "");
        }
        if (VL_LIKELY(((1U == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[7U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SLT\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:45: Assertion failed in %m: FAIL: SLT\n",3, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/cpu_tb.sv", 45, "");
        }
        if (VL_LIKELY(((0U == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[8U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SLTU\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:50: Assertion failed in %m: FAIL: SLTU\n",3, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/cpu_tb.sv", 50, "");
        }
        if (VL_LIKELY(((0x00000010U == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[9U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SLLI\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:55: Assertion failed in %m: FAIL: SLLI\n",3, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/cpu_tb.sv", 55, "");
        }
        if (VL_LIKELY(((2U == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[10U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SRLI\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:60: Assertion failed in %m: FAIL: SRLI\n",3, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/cpu_tb.sv", 60, "");
        }
        if (VL_LIKELY(((0xfffffffeU == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[11U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SRAI\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:65: Assertion failed in %m: FAIL: SRAI\n",3, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/cpu_tb.sv", 65, "");
        }
        if (VL_LIKELY(((1U == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[12U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SLTI\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:70: Assertion failed in %m: FAIL: SLTI\n",3, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/cpu_tb.sv", 70, "");
        }
        if (VL_LIKELY(((0U == vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[13U])))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: SLTIU\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:75: Assertion failed in %m: FAIL: SLTIU\n",3, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/cpu_tb.sv", 75, "");
        }
        if (VL_LIKELY(((0x00000034U == vlSelfRef.cpu_tb__DOT__dut__DOT__pc)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: PC = 52\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: cpu_tb.sv:80: Assertion failed in %m: FAIL: PC expected 52, got %0d\n",4, 'M',vlSymsp->name(),"cpu_tb", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',32,vlSelfRef.cpu_tb__DOT__dut__DOT__pc);
            VL_STOP_MT("tb/cpu_tb.sv", 80, "");
        }
    }
    VL_FINISH_MT("tb/cpu_tb.sv", 82, "");
    co_return;
}

bool Vcpu_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_anySet__ico\n"); );
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

bool Vcpu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 512> Vcpu_tb__ConstPool__TABLE_h5e462861_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vcpu_tb__ConstPool__TABLE_hce7bf640_0;
extern const VlWide<1024>/*32767:0*/ Vcpu_tb__ConstPool__CONST_hee6d8bd0_0;

void Vcpu_tb___024root___nba_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__0\n"); );
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
    IData/*31:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0;
    __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0 = 0;
    SData/*15:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1;
    __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1 = 0;
    CData/*7:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1 = 0;
    SData/*15:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2;
    __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2 = 0;
    CData/*7:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3;
    __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3 = 0;
    CData/*7:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3 = 0;
    CData/*7:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4;
    __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4 = 0;
    CData/*7:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4 = 0;
    CData/*7:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5;
    __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5 = 0;
    CData/*7:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5 = 0;
    CData/*7:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6;
    __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6 = 0;
    CData/*7:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6 = 0;
    IData/*31:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0;
    __VdlyVal__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0;
    __VdlySet__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0 = 0;
    // Body
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0 = 0U;
    if (VL_UNLIKELY(((0x00000020U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))))) {
        VL_WRITEF_NX("here\n",0);
        if ((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__mem_access_size))) {
            __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0 
                = vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2;
            __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0 
                = (0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                  >> 2U));
            __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0 = 1U;
        } else if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__mem_access_size))))) {
            VL_WRITEF_NX("halfword: %h\n",1, '#',16,
                         (0x0000ffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2));
            if ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__result)) {
                __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1 
                    = (0x0000ffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2);
                __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1 
                    = (0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                      >> 2U));
                __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1 = 1U;
            } else {
                __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2 
                    = (0x0000ffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2);
                __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2 
                    = (0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                      >> 2U));
                __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2 = 1U;
            }
        } else if ((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__mem_access_size))) {
            if ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__result)) {
                if ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__result)) {
                    __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3 
                        = (0x000000ffU & vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2);
                    __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3 
                        = (0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                          >> 2U));
                    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3 = 1U;
                } else {
                    __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4 
                        = (0x000000ffU & vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2);
                    __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4 
                        = (0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                          >> 2U));
                    __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4 = 1U;
                }
            } else if ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__result)) {
                __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5 
                    = (0x000000ffU & vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2);
                __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5 
                    = (0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                      >> 2U));
                __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5 = 1U;
            } else {
                __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6 
                    = (0x000000ffU & vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2);
                __VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6 
                    = (0x000000ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__result 
                                      >> 2U));
                __VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6 = 1U;
            }
        }
    }
    if ((Vcpu_tb__ConstPool__TABLE_h5e462861_0[vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type] 
         & (0U != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))) {
        __VdlyVal__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0 
            = ((0U != (3U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type) 
                             >> 7U))) ? vlSelfRef.cpu_tb__DOT__dut__DOT__result
                : ((0x00000040U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))
                    ? vlSelfRef.cpu_tb__DOT__dut__DOT__mem_read_data
                    : ((8U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))
                        ? vlSelfRef.cpu_tb__DOT__dut__DOT__immediate
                        : ((4U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))
                            ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                            : (((IData)(4U) + vlSelfRef.cpu_tb__DOT__dut__DOT__pc) 
                               & (- (IData)((0U != 
                                             (3U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))))))))));
        __VdlyDim0__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7;
        __VdlySet__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0 = 1U;
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory[__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0] 
            = __VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v0;
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory[__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1] 
            = ((0x0000ffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1]) 
               | ((IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v1) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory[__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2] 
            = ((0xffff0000U & vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2]) 
               | (IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v2));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory[__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3] 
            = ((0x00ffffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3]) 
               | ((IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory[__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4] 
            = ((0xff00ffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4]) 
               | ((IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v4) 
                  << 0x00000010U));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory[__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5] 
            = ((0xffff00ffU & vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5]) 
               | ((IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v5) 
                  << 8U));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory[__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6] 
            = ((0xffffff00U & vlSelfRef.cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6]) 
               | (IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__data_memory_m__DOT__memory__v6));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers[__VdlyDim0__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0] 
            = __VdlyVal__cpu_tb__DOT__dut__DOT__register_file_m__DOT__registers__v0;
    }
    vlSelfRef.cpu_tb__DOT__dut__DOT__pc = ((IData)(vlSelfRef.cpu_tb__DOT__reset)
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))
                                             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                             : ((1U 
                                                 & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))
                                                 ? 
                                                (0xfffffffeU 
                                                 & (vlSelfRef.cpu_tb__DOT__dut__DOT__a 
                                                    + vlSelfRef.cpu_tb__DOT__dut__DOT__immediate))
                                                 : 
                                                ((0x00000010U 
                                                  & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_type))
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                     ? 
                                                    ((vlSelfRef.cpu_tb__DOT__dut__DOT__a 
                                                      >= vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2)
                                                      ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                     : 
                                                    ((vlSelfRef.cpu_tb__DOT__dut__DOT__a 
                                                      < vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2)
                                                      ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                     ? 
                                                    (VL_GTES_III(32, vlSelfRef.cpu_tb__DOT__dut__DOT__a, vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2)
                                                      ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                     : 
                                                    (VL_LTS_III(32, vlSelfRef.cpu_tb__DOT__dut__DOT__a, vlSelfRef.cpu_tb__DOT__dut__DOT__read_data2)
                                                      ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                    ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)
                                                      ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0
                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)
                                                      ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))
                                                  : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
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

void Vcpu_tb___024root___timing_ready(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___timing_ready\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1926a843__0.ready("@(negedge cpu_tb.clk)");
    }
}

void Vcpu_tb___024root___timing_resume(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___timing_resume\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h1926a843__0.moveToResumeQueue(
                                                          "@(negedge cpu_tb.clk)");
    vlSelfRef.__VtrigSched_h1926a843__0.resume("@(negedge cpu_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcpu_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vcpu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vcpu_tb___024root____VbeforeTrig_h1926a843__0(Vcpu_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root____VbeforeTrig_h1926a843__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.cpu_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelfRef.cpu_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1926a843__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1926a843__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vcpu_tb___024root___eval_debug_assertions(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_debug_assertions\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
