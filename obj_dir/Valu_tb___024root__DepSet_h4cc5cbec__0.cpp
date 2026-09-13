// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb__Syms.h"
#include "Valu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__a = 5U;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 0U;
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         23);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((0xbU == vlSelfRef.alu_tb__DOT__result))) {
            VL_WRITEF_NX("ADD PASS\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:27: Assertion failed in %Nalu_tb: ADD FAILED: should be 11 however was %10#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 27, "");
        }
    }
    vlSelfRef.alu_tb__DOT__a = 0xaU;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 1U;
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         33);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((4U == vlSelfRef.alu_tb__DOT__result))) {
            VL_WRITEF_NX("SUB PASS\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:37: Assertion failed in %Nalu_tb: SUB FAILED: should be 4 however was %10#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 37, "");
        }
    }
    vlSelfRef.alu_tb__DOT__a = 2U;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 2U;
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         43);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((2U == vlSelfRef.alu_tb__DOT__result))) {
            VL_WRITEF_NX("AND PASS\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:47: Assertion failed in %Nalu_tb: AND FAILED: should be 2 however was %10#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 47, "");
        }
    }
    vlSelfRef.alu_tb__DOT__a = 1U;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 3U;
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         53);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((7U == vlSelfRef.alu_tb__DOT__result))) {
            VL_WRITEF_NX("OR PASS\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:57: Assertion failed in %Nalu_tb: OR FAILED: should be 7 however was %10#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 57, "");
        }
    }
    vlSelfRef.alu_tb__DOT__a = 1U;
    vlSelfRef.alu_tb__DOT__b = 6U;
    vlSelfRef.alu_tb__DOT__alu_op = 4U;
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "tb/alu_tb.sv", 
                                         63);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((7U == vlSelfRef.alu_tb__DOT__result))) {
            VL_WRITEF_NX("XOR PASS\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: alu_tb.sv:67: Assertion failed in %Nalu_tb: XOR FAILED: should be 7 however was %10#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.alu_tb__DOT__result);
            VL_STOP_MT("tb/alu_tb.sv", 67, "");
        }
    }
    VL_FINISH_MT("tb/alu_tb.sv", 69, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
