// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vassertion_tb.h for the primary calling header

#include "Vassertion_tb__pch.h"
#include "Vassertion_tb__Syms.h"
#include "Vassertion_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vassertion_tb___024root___dump_triggers__act(Vassertion_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vassertion_tb___024root___eval_triggers__act(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.assertion_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__assertion_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__assertion_tb__DOT__clk__0 
        = vlSelfRef.assertion_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vassertion_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vassertion_tb___024root___nba_sequent__TOP__0(Vassertion_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vassertion_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vassertion_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((vlSelfRef.__Vsampled_TOP__assertion_tb__DOT__q 
                         != vlSelfRef.__Vsampled_TOP__assertion_tb__DOT___Vpast_0_0))) {
            VL_WRITEF_NX("[%0t] %%Error: assertion_tb.sv:15: Assertion failed in %Nassertion_tb: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("assertion_tb.sv", 15, "");
        }
    }
    vlSelfRef.assertion_tb__DOT__q = vlSelfRef.assertion_tb__DOT__d;
    vlSelfRef.assertion_tb__DOT___Vpast_0_0 = vlSelfRef.__Vsampled_TOP__assertion_tb__DOT__d;
}
