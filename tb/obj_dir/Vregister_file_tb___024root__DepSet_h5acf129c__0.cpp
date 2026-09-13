// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"
#include "Vregister_file_tb__Syms.h"
#include "Vregister_file_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vregister_file_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "register_file_tb.sv", 
                                                         30);
    vlSelfRef.register_file_tb__DOT__write_en = 1U;
    vlSelfRef.register_file_tb__DOT__write_addr = 5U;
    vlSelfRef.register_file_tb__DOT__write_data = 0x7bU;
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "register_file_tb.sv", 
                                                         34);
    vlSelfRef.register_file_tb__DOT__write_en = 1U;
    vlSelfRef.register_file_tb__DOT__write_addr = 0xaU;
    vlSelfRef.register_file_tb__DOT__write_data = 0x1c8U;
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "register_file_tb.sv", 
                                                         38);
    vlSelfRef.register_file_tb__DOT__write_en = 0U;
    vlSelfRef.register_file_tb__DOT__read_addr1 = 5U;
    vlSelfRef.register_file_tb__DOT__read_addr2 = 0xaU;
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "register_file_tb.sv", 
                                                         42);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((0x7bU == vlSelfRef.register_file_tb__DOT__read_data1))) {
            VL_WRITEF_NX("TEST read pass\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:45: Assertion failed in %Nregister_file_tb: Wrong address in read, read_data1 = %10#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__read_data1);
            VL_STOP_MT("register_file_tb.sv", 45, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((0x1c8U == vlSelfRef.register_file_tb__DOT__read_data2))) {
            VL_WRITEF_NX("TEST read 2 pass\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:48: Assertion failed in %Nregister_file_tb: Wrong address in read, read_data2 = %10#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__read_data2);
            VL_STOP_MT("register_file_tb.sv", 48, "");
        }
    }
    VL_FINISH_MT("register_file_tb.sv", 50, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___dump_triggers__act(Vregister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister_file_tb___024root___eval_triggers__act(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.register_file_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__register_file_tb__DOT__clk__0 
        = vlSelfRef.register_file_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister_file_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
