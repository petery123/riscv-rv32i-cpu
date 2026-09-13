// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"
#include "Vregister_file_tb__Syms.h"
#include "Vregister_file_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vregister_file_tb___024root___eval_initial__TOP__Vtiming__1(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__actual;
    register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__actual = 0;
    IData/*31:0*/ register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__expected;
    register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__expected = 0;
    IData/*31:0*/ register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__actual;
    register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__actual = 0;
    IData/*31:0*/ register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected;
    register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected = 0;
    IData/*31:0*/ register_file_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    register_file_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__write_reg__0__addr;
    __Vtask_register_file_tb__DOT__write_reg__0__addr = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__write_reg__0__data;
    __Vtask_register_file_tb__DOT__write_reg__0__data = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__check_read1__1__addr;
    __Vtask_register_file_tb__DOT__check_read1__1__addr = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__read_reg1__2__addr;
    __Vtask_register_file_tb__DOT__read_reg1__2__addr = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__read_reg1__2__data;
    __Vtask_register_file_tb__DOT__read_reg1__2__data = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__write_reg__3__addr;
    __Vtask_register_file_tb__DOT__write_reg__3__addr = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__write_reg__3__data;
    __Vtask_register_file_tb__DOT__write_reg__3__data = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__check_read2__4__addr;
    __Vtask_register_file_tb__DOT__check_read2__4__addr = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__read_reg2__5__addr;
    __Vtask_register_file_tb__DOT__read_reg2__5__addr = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__read_reg2__5__data;
    __Vtask_register_file_tb__DOT__read_reg2__5__data = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__write_reg__6__addr;
    __Vtask_register_file_tb__DOT__write_reg__6__addr = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__write_reg__6__data;
    __Vtask_register_file_tb__DOT__write_reg__6__data = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__check_read2__7__addr;
    __Vtask_register_file_tb__DOT__check_read2__7__addr = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__read_reg2__8__addr;
    __Vtask_register_file_tb__DOT__read_reg2__8__addr = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__read_reg2__8__data;
    __Vtask_register_file_tb__DOT__read_reg2__8__data = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__write_reg__9__addr;
    __Vtask_register_file_tb__DOT__write_reg__9__addr = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__write_reg__9__data;
    __Vtask_register_file_tb__DOT__write_reg__9__data = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__write_reg__10__addr;
    __Vtask_register_file_tb__DOT__write_reg__10__addr = 0;
    IData/*31:0*/ __Vtask_register_file_tb__DOT__write_reg__10__data;
    __Vtask_register_file_tb__DOT__write_reg__10__data = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__check_both_reads__11__addr1;
    __Vtask_register_file_tb__DOT__check_both_reads__11__addr1 = 0;
    CData/*4:0*/ __Vtask_register_file_tb__DOT__check_both_reads__11__addr2;
    __Vtask_register_file_tb__DOT__check_both_reads__11__addr2 = 0;
    // Body
    vlSelfRef.register_file_tb__DOT__read_addr1 = 0U;
    vlSelfRef.register_file_tb__DOT__read_addr2 = 0U;
    vlSelfRef.register_file_tb__DOT__write_addr = 0U;
    vlSelfRef.register_file_tb__DOT__write_data = 0U;
    vlSelfRef.register_file_tb__DOT__write_en = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[1U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[2U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[3U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[4U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[5U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[6U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[7U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[8U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[9U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0xaU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0xbU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0xcU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0xdU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0xeU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0xfU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x10U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x11U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x12U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x13U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x14U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x15U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x16U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x17U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x18U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x19U] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x1aU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x1bU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x1cU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x1dU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x1eU] = 0U;
    vlSelfRef.register_file_tb__DOT__expected_registers[0x1fU] = 0U;
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "tb/register_file_tb.sv", 
                                                         214);
    __Vtask_register_file_tb__DOT__write_reg__0__data = 0x7bU;
    __Vtask_register_file_tb__DOT__write_reg__0__addr = 5U;
    vlSelfRef.register_file_tb__DOT__write_en = 1U;
    vlSelfRef.register_file_tb__DOT__write_addr = __Vtask_register_file_tb__DOT__write_reg__0__addr;
    vlSelfRef.register_file_tb__DOT__write_data = __Vtask_register_file_tb__DOT__write_reg__0__data;
    if ((0U != (IData)(__Vtask_register_file_tb__DOT__write_reg__0__addr))) {
        vlSelfRef.register_file_tb__DOT__expected_registers[__Vtask_register_file_tb__DOT__write_reg__0__addr] 
            = __Vtask_register_file_tb__DOT__write_reg__0__data;
    }
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "tb/register_file_tb.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         51);
    vlSelfRef.register_file_tb__DOT__write_en = 0U;
    __Vtask_register_file_tb__DOT__check_read1__1__addr = 5U;
    register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__expected 
        = vlSelfRef.register_file_tb__DOT__expected_registers
        [__Vtask_register_file_tb__DOT__check_read1__1__addr];
    __Vtask_register_file_tb__DOT__read_reg1__2__addr 
        = __Vtask_register_file_tb__DOT__check_read1__1__addr;
    vlSelfRef.register_file_tb__DOT__read_addr1 = __Vtask_register_file_tb__DOT__read_reg1__2__addr;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         63);
    __Vtask_register_file_tb__DOT__read_reg1__2__data 
        = vlSelfRef.register_file_tb__DOT__read_data1;
    register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__actual 
        = __Vtask_register_file_tb__DOT__read_reg1__2__data;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__actual 
                       == register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__expected))) {
            VL_WRITEF_NX("PASS 1: R[%0#] = %0#\n",0,
                         5,__Vtask_register_file_tb__DOT__check_read1__1__addr,
                         32,register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__expected);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:81: Assertion failed in %Nregister_file_tb.check_read1.unnamedblk1: FAIL 1: R[%0#] expected %0#, got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),5,(IData)(__Vtask_register_file_tb__DOT__check_read1__1__addr),
                         32,register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__expected,
                         32,register_file_tb__DOT__check_read1__Vstatic__unnamedblk1__DOT__actual);
            VL_STOP_MT("tb/register_file_tb.sv", 81, "");
        }
    }
    __Vtask_register_file_tb__DOT__write_reg__3__data = 0x1c8U;
    __Vtask_register_file_tb__DOT__write_reg__3__addr = 0xaU;
    vlSelfRef.register_file_tb__DOT__write_en = 1U;
    vlSelfRef.register_file_tb__DOT__write_addr = __Vtask_register_file_tb__DOT__write_reg__3__addr;
    vlSelfRef.register_file_tb__DOT__write_data = __Vtask_register_file_tb__DOT__write_reg__3__data;
    if ((0U != (IData)(__Vtask_register_file_tb__DOT__write_reg__3__addr))) {
        vlSelfRef.register_file_tb__DOT__expected_registers[__Vtask_register_file_tb__DOT__write_reg__3__addr] 
            = __Vtask_register_file_tb__DOT__write_reg__3__data;
    }
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "tb/register_file_tb.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         51);
    vlSelfRef.register_file_tb__DOT__write_en = 0U;
    __Vtask_register_file_tb__DOT__check_read2__4__addr = 0xaU;
    register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected 
        = vlSelfRef.register_file_tb__DOT__expected_registers
        [__Vtask_register_file_tb__DOT__check_read2__4__addr];
    __Vtask_register_file_tb__DOT__read_reg2__5__addr 
        = __Vtask_register_file_tb__DOT__check_read2__4__addr;
    vlSelfRef.register_file_tb__DOT__read_addr2 = __Vtask_register_file_tb__DOT__read_reg2__5__addr;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         91);
    __Vtask_register_file_tb__DOT__read_reg2__5__data 
        = vlSelfRef.register_file_tb__DOT__read_data2;
    register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__actual 
        = __Vtask_register_file_tb__DOT__read_reg2__5__data;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__actual 
                       == register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected))) {
            VL_WRITEF_NX("PASS 2: R[%0#] = %0#\n",0,
                         5,__Vtask_register_file_tb__DOT__check_read2__4__addr,
                         32,register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:109: Assertion failed in %Nregister_file_tb.check_read2.unnamedblk2: FAIL 2: R[%0#] expected %0#, got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),5,(IData)(__Vtask_register_file_tb__DOT__check_read2__4__addr),
                         32,register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected,
                         32,register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__actual);
            VL_STOP_MT("tb/register_file_tb.sv", 109, "");
        }
    }
    __Vtask_register_file_tb__DOT__write_reg__6__data = 0x3e7U;
    __Vtask_register_file_tb__DOT__write_reg__6__addr = 0U;
    vlSelfRef.register_file_tb__DOT__write_en = 1U;
    vlSelfRef.register_file_tb__DOT__write_addr = __Vtask_register_file_tb__DOT__write_reg__6__addr;
    vlSelfRef.register_file_tb__DOT__write_data = __Vtask_register_file_tb__DOT__write_reg__6__data;
    if ((0U != (IData)(__Vtask_register_file_tb__DOT__write_reg__6__addr))) {
        vlSelfRef.register_file_tb__DOT__expected_registers[__Vtask_register_file_tb__DOT__write_reg__6__addr] 
            = __Vtask_register_file_tb__DOT__write_reg__6__data;
    }
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "tb/register_file_tb.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         51);
    vlSelfRef.register_file_tb__DOT__write_en = 0U;
    __Vtask_register_file_tb__DOT__check_read2__7__addr = 0U;
    register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected 
        = vlSelfRef.register_file_tb__DOT__expected_registers
        [__Vtask_register_file_tb__DOT__check_read2__7__addr];
    __Vtask_register_file_tb__DOT__read_reg2__8__addr 
        = __Vtask_register_file_tb__DOT__check_read2__7__addr;
    vlSelfRef.register_file_tb__DOT__read_addr2 = __Vtask_register_file_tb__DOT__read_reg2__8__addr;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         91);
    __Vtask_register_file_tb__DOT__read_reg2__8__data 
        = vlSelfRef.register_file_tb__DOT__read_data2;
    register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__actual 
        = __Vtask_register_file_tb__DOT__read_reg2__8__data;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__actual 
                       == register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected))) {
            VL_WRITEF_NX("PASS 2: R[%0#] = %0#\n",0,
                         5,__Vtask_register_file_tb__DOT__check_read2__7__addr,
                         32,register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:109: Assertion failed in %Nregister_file_tb.check_read2.unnamedblk2: FAIL 2: R[%0#] expected %0#, got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),5,(IData)(__Vtask_register_file_tb__DOT__check_read2__7__addr),
                         32,register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__expected,
                         32,register_file_tb__DOT__check_read2__Vstatic__unnamedblk2__DOT__actual);
            VL_STOP_MT("tb/register_file_tb.sv", 109, "");
        }
    }
    __Vtask_register_file_tb__DOT__write_reg__9__data = 0x309U;
    __Vtask_register_file_tb__DOT__write_reg__9__addr = 7U;
    vlSelfRef.register_file_tb__DOT__write_en = 1U;
    vlSelfRef.register_file_tb__DOT__write_addr = __Vtask_register_file_tb__DOT__write_reg__9__addr;
    vlSelfRef.register_file_tb__DOT__write_data = __Vtask_register_file_tb__DOT__write_reg__9__data;
    if ((0U != (IData)(__Vtask_register_file_tb__DOT__write_reg__9__addr))) {
        vlSelfRef.register_file_tb__DOT__expected_registers[__Vtask_register_file_tb__DOT__write_reg__9__addr] 
            = __Vtask_register_file_tb__DOT__write_reg__9__data;
    }
    co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge register_file_tb.clk)", 
                                                         "tb/register_file_tb.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         51);
    vlSelfRef.register_file_tb__DOT__write_en = 0U;
    vlSelfRef.register_file_tb__DOT__read_addr1 = 7U;
    vlSelfRef.register_file_tb__DOT__read_addr2 = 7U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/register_file_tb.sv", 
                                         230);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((vlSelfRef.register_file_tb__DOT__read_data1 
                       == vlSelfRef.register_file_tb__DOT__expected_registers
                       [7U]))) {
            VL_WRITEF_NX("PASS: Read port 1\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:236: Assertion failed in %Nregister_file_tb: FAIL: Read port 1\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("tb/register_file_tb.sv", 236, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY((vlSelfRef.register_file_tb__DOT__read_data2 
                       == vlSelfRef.register_file_tb__DOT__expected_registers
                       [7U]))) {
            VL_WRITEF_NX("PASS: Read port 2\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:242: Assertion failed in %Nregister_file_tb: FAIL: Read port 2\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("tb/register_file_tb.sv", 242, "");
        }
    }
    register_file_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x64U;
    while (VL_LTS_III(32, 0U, register_file_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        vlSelfRef.register_file_tb__DOT__random_write_addr 
            = (0x1fU & VL_URANDOM_RANGE_I(0U, 0x1fU));
        vlSelfRef.register_file_tb__DOT__random_read_addr1 
            = (0x1fU & VL_URANDOM_RANGE_I(0U, 0x1fU));
        vlSelfRef.register_file_tb__DOT__random_read_addr2 
            = (0x1fU & VL_URANDOM_RANGE_I(0U, 0x1fU));
        vlSelfRef.register_file_tb__DOT__random_data 
            = VL_RANDOM_I();
        __Vtask_register_file_tb__DOT__write_reg__10__data 
            = vlSelfRef.register_file_tb__DOT__random_data;
        __Vtask_register_file_tb__DOT__write_reg__10__addr 
            = vlSelfRef.register_file_tb__DOT__random_write_addr;
        vlSelfRef.register_file_tb__DOT__write_en = 1U;
        vlSelfRef.register_file_tb__DOT__write_addr 
            = __Vtask_register_file_tb__DOT__write_reg__10__addr;
        vlSelfRef.register_file_tb__DOT__write_data 
            = __Vtask_register_file_tb__DOT__write_reg__10__data;
        if ((0U != (IData)(__Vtask_register_file_tb__DOT__write_reg__10__addr))) {
            vlSelfRef.register_file_tb__DOT__expected_registers[__Vtask_register_file_tb__DOT__write_reg__10__addr] 
                = __Vtask_register_file_tb__DOT__write_reg__10__data;
        }
        co_await vlSelfRef.__VtrigSched_h50bf4e21__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge register_file_tb.clk)", 
                                                             "tb/register_file_tb.sv", 
                                                             50);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/register_file_tb.sv", 
                                             51);
        vlSelfRef.register_file_tb__DOT__write_en = 0U;
        __Vtask_register_file_tb__DOT__check_both_reads__11__addr2 
            = vlSelfRef.register_file_tb__DOT__random_read_addr2;
        __Vtask_register_file_tb__DOT__check_both_reads__11__addr1 
            = vlSelfRef.register_file_tb__DOT__random_read_addr1;
        vlSelfRef.register_file_tb__DOT__read_addr1 
            = __Vtask_register_file_tb__DOT__check_both_reads__11__addr1;
        vlSelfRef.register_file_tb__DOT__read_addr2 
            = __Vtask_register_file_tb__DOT__check_both_reads__11__addr2;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/register_file_tb.sv", 
                                             123);
        vlSelfRef.register_file_tb__DOT__check_both_reads__Vstatic__expected1 
            = vlSelfRef.register_file_tb__DOT__expected_registers
            [__Vtask_register_file_tb__DOT__check_both_reads__11__addr1];
        vlSelfRef.register_file_tb__DOT__check_both_reads__Vstatic__expected2 
            = vlSelfRef.register_file_tb__DOT__expected_registers
            [__Vtask_register_file_tb__DOT__check_both_reads__11__addr2];
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((vlSelfRef.register_file_tb__DOT__read_data1 
                           == vlSelfRef.register_file_tb__DOT__check_both_reads__Vstatic__expected1))) {
                VL_WRITEF_NX("PASS 1: R[%0#] = %0#\n",0,
                             5,__Vtask_register_file_tb__DOT__check_both_reads__11__addr1,
                             32,vlSelfRef.register_file_tb__DOT__check_both_reads__Vstatic__expected1);
            } else {
                VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:131: Assertion failed in %Nregister_file_tb.check_both_reads: FAIL 1: R[%0#] expected %0#, got %0#\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),5,
                             (IData)(__Vtask_register_file_tb__DOT__check_both_reads__11__addr1),
                             32,vlSelfRef.register_file_tb__DOT__check_both_reads__Vstatic__expected1,
                             32,vlSelfRef.register_file_tb__DOT__read_data1);
                VL_STOP_MT("tb/register_file_tb.sv", 131, "");
            }
        }
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_LIKELY((vlSelfRef.register_file_tb__DOT__read_data2 
                           == vlSelfRef.register_file_tb__DOT__check_both_reads__Vstatic__expected2))) {
                VL_WRITEF_NX("PASS 2: R[%0#] = %0#\n",0,
                             5,__Vtask_register_file_tb__DOT__check_both_reads__11__addr2,
                             32,vlSelfRef.register_file_tb__DOT__check_both_reads__Vstatic__expected2);
            } else {
                VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:136: Assertion failed in %Nregister_file_tb.check_both_reads: FAIL 2: R[%0#] expected %0#, got %0#\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),5,
                             (IData)(__Vtask_register_file_tb__DOT__check_both_reads__11__addr2),
                             32,vlSelfRef.register_file_tb__DOT__check_both_reads__Vstatic__expected2,
                             32,vlSelfRef.register_file_tb__DOT__read_data2);
                VL_STOP_MT("tb/register_file_tb.sv", 136, "");
            }
        }
        register_file_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (register_file_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("All tests completed.\n",0);
    VL_FINISH_MT("tb/register_file_tb.sv", 257, "");
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

VL_INLINE_OPT void Vregister_file_tb___024root___nba_sequent__TOP__0(Vregister_file_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__register_file_tb__DOT__dut__DOT__registers__v0;
    __VdlyVal__register_file_tb__DOT__dut__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__register_file_tb__DOT__dut__DOT__registers__v0;
    __VdlyDim0__register_file_tb__DOT__dut__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__register_file_tb__DOT__dut__DOT__registers__v0;
    __VdlySet__register_file_tb__DOT__dut__DOT__registers__v0 = 0;
    // Body
    __VdlySet__register_file_tb__DOT__dut__DOT__registers__v0 = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((0U != vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0U]))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:141: Assertion failed in %Nregister_file_tb: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("tb/register_file_tb.sv", 141, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_67_0)) 
                                  | (0U == vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0U])))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:183: Assertion failed in %Nregister_file_tb: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("tb/register_file_tb.sv", 183, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_64_0)) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_65_0] 
                                     == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_66_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:178: Assertion failed in %Nregister_file_tb: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("tb/register_file_tb.sv", 178, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr1))
                           ? 0U : vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__dut__DOT__registers
                          [vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr1]) 
                         != ((0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr1))
                              ? 0U : vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                             [vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr1])))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:188: Assertion failed in %Nregister_file_tb: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("tb/register_file_tb.sv", 188, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((((0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr2))
                           ? 0U : vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__dut__DOT__registers
                          [vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr2]) 
                         != ((0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr2))
                              ? 0U : vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                             [vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__read_addr2])))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:193: Assertion failed in %Nregister_file_tb: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("tb/register_file_tb.sv", 193, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_0_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[0]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0U],32,vlSelfRef.register_file_tb__DOT___Vpast_1_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [1U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_2_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[1]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [1U],32,vlSelfRef.register_file_tb__DOT___Vpast_3_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [2U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_4_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[2]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [2U],32,vlSelfRef.register_file_tb__DOT___Vpast_5_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [3U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_6_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[3]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [3U],32,vlSelfRef.register_file_tb__DOT___Vpast_7_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [4U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_8_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[4]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [4U],32,vlSelfRef.register_file_tb__DOT___Vpast_9_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [5U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_10_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[5]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [5U],32,vlSelfRef.register_file_tb__DOT___Vpast_11_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [6U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_12_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[6]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [6U],32,vlSelfRef.register_file_tb__DOT___Vpast_13_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [7U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_14_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[7]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [7U],32,vlSelfRef.register_file_tb__DOT___Vpast_15_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [8U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_16_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[8]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [8U],32,vlSelfRef.register_file_tb__DOT___Vpast_17_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [9U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_18_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[9]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [9U],32,vlSelfRef.register_file_tb__DOT___Vpast_19_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0xaU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_20_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[10]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0xaU],32,vlSelfRef.register_file_tb__DOT___Vpast_21_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0xbU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_22_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[11]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0xbU],32,vlSelfRef.register_file_tb__DOT___Vpast_23_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0xcU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_24_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[12]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0xcU],32,vlSelfRef.register_file_tb__DOT___Vpast_25_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0xdU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_26_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[13]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0xdU],32,vlSelfRef.register_file_tb__DOT___Vpast_27_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0xeU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_28_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[14]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0xeU],32,vlSelfRef.register_file_tb__DOT___Vpast_29_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0xfU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_30_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[15]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0xfU],32,vlSelfRef.register_file_tb__DOT___Vpast_31_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x10U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_32_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[16]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x10U],32,vlSelfRef.register_file_tb__DOT___Vpast_33_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x11U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_34_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[17]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x11U],32,vlSelfRef.register_file_tb__DOT___Vpast_35_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x12U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_36_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[18]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x12U],32,vlSelfRef.register_file_tb__DOT___Vpast_37_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x13U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_38_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[19]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x13U],32,vlSelfRef.register_file_tb__DOT___Vpast_39_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x14U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_40_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[20]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x14U],32,vlSelfRef.register_file_tb__DOT___Vpast_41_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x15U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_42_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[21]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x15U],32,vlSelfRef.register_file_tb__DOT___Vpast_43_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x16U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_44_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[22]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x16U],32,vlSelfRef.register_file_tb__DOT___Vpast_45_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x17U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_46_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[23]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x17U],32,vlSelfRef.register_file_tb__DOT___Vpast_47_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x18U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_48_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[24]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x18U],32,vlSelfRef.register_file_tb__DOT___Vpast_49_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x19U] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_50_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[25]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x19U],32,vlSelfRef.register_file_tb__DOT___Vpast_51_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x1aU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_52_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[26]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x1aU],32,vlSelfRef.register_file_tb__DOT___Vpast_53_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x1bU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_54_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[27]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x1bU],32,vlSelfRef.register_file_tb__DOT___Vpast_55_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x1cU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_56_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[28]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x1cU],32,vlSelfRef.register_file_tb__DOT___Vpast_57_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x1dU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_58_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[29]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x1dU],32,vlSelfRef.register_file_tb__DOT___Vpast_59_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x1eU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_60_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[30]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x1eU],32,vlSelfRef.register_file_tb__DOT___Vpast_61_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
        if (VL_UNLIKELY((1U & (~ ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
                                  | (vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                                     [0x1fU] == vlSelfRef.__Vsampled_TOP__register_file_tb__DOT___Vpast_62_0)))))) {
            VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:160: Assertion failed in %Nregister_file_tb.genblk1[31]: DISABLE WRITE ASSERTION FAILED: current value=%0#, old value=%0#\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,vlSelfRef.register_file_tb__DOT__dut__DOT__registers
                         [0x1fU],32,vlSelfRef.register_file_tb__DOT___Vpast_63_0);
            VL_STOP_MT("tb/register_file_tb.sv", 160, "");
        }
    }
    if (((IData)(vlSelfRef.register_file_tb__DOT__write_en) 
         & (0U != (IData)(vlSelfRef.register_file_tb__DOT__write_addr)))) {
        __VdlyVal__register_file_tb__DOT__dut__DOT__registers__v0 
            = vlSelfRef.register_file_tb__DOT__write_data;
        __VdlyDim0__register_file_tb__DOT__dut__DOT__registers__v0 
            = vlSelfRef.register_file_tb__DOT__write_addr;
        __VdlySet__register_file_tb__DOT__dut__DOT__registers__v0 = 1U;
    }
    vlSelfRef.register_file_tb__DOT___Vpast_66_0 = vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_data;
    vlSelfRef.register_file_tb__DOT___Vpast_65_0 = vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_addr;
    vlSelfRef.register_file_tb__DOT___Vpast_64_0 = 
        ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
         & (0U != (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_addr)));
    vlSelfRef.register_file_tb__DOT___Vpast_67_0 = 
        ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_en) 
         & (0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb__DOT__write_addr)));
    vlSelfRef.register_file_tb__DOT___Vpast_0_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0U];
    vlSelfRef.register_file_tb__DOT___Vpast_2_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [1U];
    vlSelfRef.register_file_tb__DOT___Vpast_4_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [2U];
    vlSelfRef.register_file_tb__DOT___Vpast_6_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [3U];
    vlSelfRef.register_file_tb__DOT___Vpast_8_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [4U];
    vlSelfRef.register_file_tb__DOT___Vpast_10_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [5U];
    vlSelfRef.register_file_tb__DOT___Vpast_12_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [6U];
    vlSelfRef.register_file_tb__DOT___Vpast_14_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [7U];
    vlSelfRef.register_file_tb__DOT___Vpast_16_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [8U];
    vlSelfRef.register_file_tb__DOT___Vpast_18_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [9U];
    vlSelfRef.register_file_tb__DOT___Vpast_20_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xaU];
    vlSelfRef.register_file_tb__DOT___Vpast_22_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xbU];
    vlSelfRef.register_file_tb__DOT___Vpast_24_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xcU];
    vlSelfRef.register_file_tb__DOT___Vpast_26_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xdU];
    vlSelfRef.register_file_tb__DOT___Vpast_28_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xeU];
    vlSelfRef.register_file_tb__DOT___Vpast_30_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xfU];
    vlSelfRef.register_file_tb__DOT___Vpast_32_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x10U];
    vlSelfRef.register_file_tb__DOT___Vpast_34_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x11U];
    vlSelfRef.register_file_tb__DOT___Vpast_36_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x12U];
    vlSelfRef.register_file_tb__DOT___Vpast_38_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x13U];
    vlSelfRef.register_file_tb__DOT___Vpast_40_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x14U];
    vlSelfRef.register_file_tb__DOT___Vpast_42_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x15U];
    vlSelfRef.register_file_tb__DOT___Vpast_44_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x16U];
    vlSelfRef.register_file_tb__DOT___Vpast_46_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x17U];
    vlSelfRef.register_file_tb__DOT___Vpast_48_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x18U];
    vlSelfRef.register_file_tb__DOT___Vpast_50_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x19U];
    vlSelfRef.register_file_tb__DOT___Vpast_52_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1aU];
    vlSelfRef.register_file_tb__DOT___Vpast_54_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1bU];
    vlSelfRef.register_file_tb__DOT___Vpast_56_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1cU];
    vlSelfRef.register_file_tb__DOT___Vpast_58_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1dU];
    vlSelfRef.register_file_tb__DOT___Vpast_60_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1eU];
    vlSelfRef.register_file_tb__DOT___Vpast_62_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1fU];
    vlSelfRef.register_file_tb__DOT___Vpast_1_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0U];
    vlSelfRef.register_file_tb__DOT___Vpast_3_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [1U];
    vlSelfRef.register_file_tb__DOT___Vpast_5_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [2U];
    vlSelfRef.register_file_tb__DOT___Vpast_7_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [3U];
    vlSelfRef.register_file_tb__DOT___Vpast_9_0 = vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [4U];
    vlSelfRef.register_file_tb__DOT___Vpast_11_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [5U];
    vlSelfRef.register_file_tb__DOT___Vpast_13_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [6U];
    vlSelfRef.register_file_tb__DOT___Vpast_15_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [7U];
    vlSelfRef.register_file_tb__DOT___Vpast_17_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [8U];
    vlSelfRef.register_file_tb__DOT___Vpast_19_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [9U];
    vlSelfRef.register_file_tb__DOT___Vpast_21_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xaU];
    vlSelfRef.register_file_tb__DOT___Vpast_23_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xbU];
    vlSelfRef.register_file_tb__DOT___Vpast_25_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xcU];
    vlSelfRef.register_file_tb__DOT___Vpast_27_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xdU];
    vlSelfRef.register_file_tb__DOT___Vpast_29_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xeU];
    vlSelfRef.register_file_tb__DOT___Vpast_31_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0xfU];
    vlSelfRef.register_file_tb__DOT___Vpast_33_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x10U];
    vlSelfRef.register_file_tb__DOT___Vpast_35_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x11U];
    vlSelfRef.register_file_tb__DOT___Vpast_37_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x12U];
    vlSelfRef.register_file_tb__DOT___Vpast_39_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x13U];
    vlSelfRef.register_file_tb__DOT___Vpast_41_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x14U];
    vlSelfRef.register_file_tb__DOT___Vpast_43_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x15U];
    vlSelfRef.register_file_tb__DOT___Vpast_45_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x16U];
    vlSelfRef.register_file_tb__DOT___Vpast_47_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x17U];
    vlSelfRef.register_file_tb__DOT___Vpast_49_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x18U];
    vlSelfRef.register_file_tb__DOT___Vpast_51_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x19U];
    vlSelfRef.register_file_tb__DOT___Vpast_53_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1aU];
    vlSelfRef.register_file_tb__DOT___Vpast_55_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1bU];
    vlSelfRef.register_file_tb__DOT___Vpast_57_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1cU];
    vlSelfRef.register_file_tb__DOT___Vpast_59_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1dU];
    vlSelfRef.register_file_tb__DOT___Vpast_61_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1eU];
    vlSelfRef.register_file_tb__DOT___Vpast_63_0 = 
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers
        [0x1fU];
    if (__VdlySet__register_file_tb__DOT__dut__DOT__registers__v0) {
        vlSelfRef.register_file_tb__DOT__dut__DOT__registers[__VdlyDim0__register_file_tb__DOT__dut__DOT__registers__v0] 
            = __VdlyVal__register_file_tb__DOT__dut__DOT__registers__v0;
    }
}
