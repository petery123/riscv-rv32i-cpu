// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"

VlCoroutine Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb__Vtiming__0(Vregister_file_tb_register_file_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb__Vtiming__0\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    while (true) {
        co_await vlSymsp->TOP.__VdlySched.delay(5ULL, 
                                                nullptr, 
                                                "tb/register_file_tb.sv", 
                                                217);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
    }
    co_return;
}

void Vregister_file_tb___024root____VbeforeTrig_h86032a67__0(Vregister_file_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb__Vtiming__1(Vregister_file_tb_register_file_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb__Vtiming__1\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vregister_file_tb___024unit__03a__03aregister_file_transaction> __PVT__txn;
    IData/*31:0*/ __Vtask_run_rand_test__2__repetitions;
    __Vtask_run_rand_test__2__repetitions = 0;
    IData/*31:0*/ __Vtask_run_rand_test__2____VlefCond_1;
    __Vtask_run_rand_test__2____VlefCond_1 = 0;
    IData/*31:0*/ __Vtask_run_rand_test__2____VlefCall_0__randomize;
    __Vtask_run_rand_test__2____VlefCall_0__randomize = 0;
    IData/*31:0*/ __Vtask_run_rand_test__2__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_run_rand_test__2__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_randomize__3__Vfuncout;
    __Vtask_randomize__3__Vfuncout = 0;
    // Body
    vlSelfRef.__PVT__read_addr1 = 0U;
    vlSelfRef.__PVT__read_addr2 = 0U;
    vlSelfRef.__PVT__write_addr = 0U;
    vlSelfRef.__PVT__write_data = 0U;
    vlSelfRef.__PVT__write_en = 0U;
    vlSelfRef.__PVT__expected_registers[0U] = 0U;
    vlSelfRef.__PVT__expected_registers[1U] = 0U;
    vlSelfRef.__PVT__expected_registers[2U] = 0U;
    vlSelfRef.__PVT__expected_registers[3U] = 0U;
    vlSelfRef.__PVT__expected_registers[4U] = 0U;
    vlSelfRef.__PVT__expected_registers[5U] = 0U;
    vlSelfRef.__PVT__expected_registers[6U] = 0U;
    vlSelfRef.__PVT__expected_registers[7U] = 0U;
    vlSelfRef.__PVT__expected_registers[8U] = 0U;
    vlSelfRef.__PVT__expected_registers[9U] = 0U;
    vlSelfRef.__PVT__expected_registers[10U] = 0U;
    vlSelfRef.__PVT__expected_registers[11U] = 0U;
    vlSelfRef.__PVT__expected_registers[12U] = 0U;
    vlSelfRef.__PVT__expected_registers[13U] = 0U;
    vlSelfRef.__PVT__expected_registers[14U] = 0U;
    vlSelfRef.__PVT__expected_registers[15U] = 0U;
    vlSelfRef.__PVT__expected_registers[16U] = 0U;
    vlSelfRef.__PVT__expected_registers[17U] = 0U;
    vlSelfRef.__PVT__expected_registers[18U] = 0U;
    vlSelfRef.__PVT__expected_registers[19U] = 0U;
    vlSelfRef.__PVT__expected_registers[20U] = 0U;
    vlSelfRef.__PVT__expected_registers[21U] = 0U;
    vlSelfRef.__PVT__expected_registers[22U] = 0U;
    vlSelfRef.__PVT__expected_registers[23U] = 0U;
    vlSelfRef.__PVT__expected_registers[24U] = 0U;
    vlSelfRef.__PVT__expected_registers[25U] = 0U;
    vlSelfRef.__PVT__expected_registers[26U] = 0U;
    vlSelfRef.__PVT__expected_registers[27U] = 0U;
    vlSelfRef.__PVT__expected_registers[28U] = 0U;
    vlSelfRef.__PVT__expected_registers[29U] = 0U;
    vlSelfRef.__PVT__expected_registers[30U] = 0U;
    vlSelfRef.__PVT__expected_registers[31U] = 0U;
    __PVT__txn = VL_NEW(Vregister_file_tb___024unit__03a__03aregister_file_transaction, vlSymsp);
    VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 231)->__PVT____Vconstraintmode.atWrite(2U) = 1U;
    VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 232)->__PVT____Vconstraintmode.atWrite(0U) = 0U;
    VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 233)->__PVT____Vconstraintmode.atWrite(3U) = 1U;
    VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 234)->__PVT____Vconstraintmode.atWrite(1U) = 1U;
    VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 235)->__PVT____Vconstraintmode.atWrite(4U) = 1U;
    __Vtask_run_rand_test__2__repetitions = 0x00000064U;
    __Vtask_run_rand_test__2__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    VL_WRITEF_NX("\nTEST: Repeat %0d \n",1, '~',32,__Vtask_run_rand_test__2__repetitions);
    __Vtask_run_rand_test__2__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_run_rand_test__2__repetitions;
    while (VL_LTS_III(32, 0U, __Vtask_run_rand_test__2__unnamedblk1_1__DOT____Vrepeat0)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if ((VlNull{} != __PVT__txn)) {
                VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 130)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__3__Vfuncout);
                __Vtask_run_rand_test__2____VlefCall_0__randomize 
                    = __Vtask_randomize__3__Vfuncout;
                __Vtask_run_rand_test__2____VlefCond_1 
                    = __Vtask_run_rand_test__2____VlefCall_0__randomize;
            } else {
                __Vtask_run_rand_test__2____VlefCond_1 = 0U;
            }
            if (VL_LIKELY(((1U & (~ (0U != __Vtask_run_rand_test__2____VlefCond_1)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                    VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:130: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"register_file_tb.run_rand_test.unnamedblk1_1", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1));
                    VL_STOP_MT("tb/register_file_tb.sv", 130, "");
                }
            }
        }
        vlSelfRef.__PVT__write_en = VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 80)
            ->__PVT__write_en;
        vlSelfRef.__PVT__write_addr = VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 81)
            ->__PVT__write_addr;
        vlSelfRef.__PVT__read_addr1 = VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 82)
            ->__PVT__read_addr1;
        vlSelfRef.__PVT__read_addr2 = VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 83)
            ->__PVT__read_addr2;
        vlSelfRef.__PVT__write_data = VL_NULL_CHECK(__PVT__txn, "tb/register_file_tb.sv", 84)
            ->__PVT__write_data;
        Vregister_file_tb___024root____VbeforeTrig_h86032a67__0((&vlSymsp->TOP), 
                                                                "@(negedge register_file_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h86032a67__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge register_file_tb.clk)", 
                                                                "tb/register_file_tb.sv", 
                                                                86);
        vlSelfRef.__PVT__mon_read_addr1 = vlSelfRef.__PVT__read_addr1;
        vlSelfRef.__PVT__mon_read_addr2 = vlSelfRef.__PVT__read_addr2;
        vlSelfRef.__PVT__mon_read_data1 = vlSelfRef.__PVT__read_data1;
        vlSelfRef.__PVT__mon_read_data2 = vlSelfRef.__PVT__read_data2;
        vlSelfRef.__PVT__mon_write_en = vlSelfRef.__PVT__write_en;
        vlSelfRef.__PVT__mon_write_addr = vlSelfRef.__PVT__write_addr;
        vlSelfRef.__PVT__mon_write_data = vlSelfRef.__PVT__write_data;
        VL_WRITEF_NX("MONITOR: WE=%0d | W[%0d]=%0d | R1[%0d]=%0d | R2[%0d]=%0d\n",7
                     , '#',1,vlSelfRef.__PVT__mon_write_en
                     , '#',5,(IData)(vlSelfRef.__PVT__mon_write_addr)
                     , '#',32,vlSelfRef.__PVT__mon_write_data
                     , '#',5,(IData)(vlSelfRef.__PVT__mon_read_addr1)
                     , '#',32,vlSelfRef.__PVT__mon_read_data1
                     , '#',5,(IData)(vlSelfRef.__PVT__mon_read_addr2)
                     , '#',32,vlSelfRef.__PVT__mon_read_data2);
        if (VL_UNLIKELY((((0U != (IData)(vlSelfRef.__PVT__mon_write_addr)) 
                          & (IData)(vlSelfRef.__PVT__mon_write_en))))) {
            VL_WRITEF_NX("mon_write_data %d\n",1, '#',32,vlSelfRef.__PVT__mon_write_data);
            vlSelfRef.__PVT__expected_registers[vlSelfRef.__PVT__mon_write_addr] 
                = vlSelfRef.__PVT__mon_write_data;
        }
        vlSelfRef.__PVT__write_en = 0U;
        vlSelfRef.__PVT__check_registers__Vstatic__expected1 
            = vlSelfRef.__PVT__expected_registers[vlSelfRef.__PVT__mon_read_addr1];
        vlSelfRef.__PVT__check_registers__Vstatic__expected2 
            = vlSelfRef.__PVT__expected_registers[vlSelfRef.__PVT__mon_read_addr2];
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
            if (VL_LIKELY(((vlSelfRef.__PVT__mon_read_data1 
                            == vlSelfRef.__PVT__check_registers__Vstatic__expected1)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                    VL_WRITEF_NX("PASS 1: R[%0d] = %0d\n",2
                                 , '#',5,vlSelfRef.__PVT__mon_read_addr1
                                 , '#',32,vlSelfRef.__PVT__check_registers__Vstatic__expected1);
                    vlSelfRef.__PVT__passed = ((IData)(1U) 
                                               + vlSelfRef.__PVT__passed);
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:62: Assertion failed in %m: FAIL 1: R[%0d] expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"register_file_tb.check_registers", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',5,(IData)(vlSelfRef.__PVT__mon_read_addr1)
                             , '#',32,vlSelfRef.__PVT__check_registers__Vstatic__expected1
                             , '#',32,vlSelfRef.__PVT__mon_read_data1);
                VL_STOP_MT("tb/register_file_tb.sv", 62, "");
                vlSelfRef.__PVT__failed = ((IData)(1U) 
                                           + vlSelfRef.__PVT__failed);
            }
            if (VL_LIKELY(((vlSelfRef.__PVT__mon_read_data2 
                            == vlSelfRef.__PVT__check_registers__Vstatic__expected2)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                    VL_WRITEF_NX("PASS 2: R[%0d] = %0d\n",2
                                 , '#',5,vlSelfRef.__PVT__mon_read_addr2
                                 , '#',32,vlSelfRef.__PVT__check_registers__Vstatic__expected2);
                    vlSelfRef.__PVT__passed = ((IData)(1U) 
                                               + vlSelfRef.__PVT__passed);
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
                VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:70: Assertion failed in %m: FAIL 2: R[%0d] expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"register_file_tb.check_registers", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',5,(IData)(vlSelfRef.__PVT__mon_read_addr2)
                             , '#',32,vlSelfRef.__PVT__check_registers__Vstatic__expected2
                             , '#',32,vlSelfRef.__PVT__mon_read_data2);
                VL_STOP_MT("tb/register_file_tb.sv", 70, "");
                vlSelfRef.__PVT__failed = ((IData)(1U) 
                                           + vlSelfRef.__PVT__failed);
            }
        }
        vlSelfRef.__PVT__total_checks = ((IData)(1U) 
                                         + vlSelfRef.__PVT__total_checks);
        __Vtask_run_rand_test__2__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_run_rand_test__2__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n========== TEST SUMMARY ==========\nTotal Checks       : %0d\nPassed Checks      : %0d\nFailed Checks      : %0d\n",3
                 , '~',32,vlSelfRef.__PVT__total_checks
                 , '~',32,vlSelfRef.__PVT__passed, '~',32,vlSelfRef.__PVT__failed);
    if ((0U == vlSelfRef.__PVT__failed)) {
        VL_WRITEF_NX("TEST PASSED\n",0);
    } else {
        VL_WRITEF_NX("TEST FAILED\n",0);
    }
    VL_WRITEF_NX("=================================\n\n",0);
    VL_FINISH_MT("tb/register_file_tb.sv", 259, "");
    co_return;
}

void Vregister_file_tb_register_file_tb___act_sequent__TOP__register_file_tb__0(Vregister_file_tb_register_file_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vregister_file_tb_register_file_tb___act_sequent__TOP__register_file_tb__0\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__read_data1 = ((0U == (IData)(vlSelfRef.__PVT__read_addr1))
                                    ? 0U : vlSelfRef.__PVT__dut__DOT__registers
                                   [vlSelfRef.__PVT__read_addr1]);
    vlSelfRef.__PVT__read_data2 = ((0U == (IData)(vlSelfRef.__PVT__read_addr2))
                                    ? 0U : vlSelfRef.__PVT__dut__DOT__registers
                                   [vlSelfRef.__PVT__read_addr2]);
}

void Vregister_file_tb_register_file_tb___nba_sequent__TOP__register_file_tb__0(Vregister_file_tb_register_file_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vregister_file_tb_register_file_tb___nba_sequent__TOP__register_file_tb__0\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__dut__DOT__registers__v0;
    __VdlyVal__dut__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__dut__DOT__registers__v0;
    __VdlyDim0__dut__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__dut__DOT__registers__v0;
    __VdlySet__dut__DOT__registers__v0 = 0;
    // Body
    VL_NULL_CHECK(vlSelfRef.__PVT__cg_inst, "tb/register_file_tb.sv", 207)->__VnoInFunc_sample(vlSymsp);
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (VL_UNLIKELY(((0U != vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers[0U])))) {
                VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:138: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"register_file_tb", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/register_file_tb.sv", 138, "");
            }
            if (VL_UNLIKELY(((((0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__read_addr1))
                                ? 0U : vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers
                               [vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__read_addr1]) 
                              != ((0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__read_addr1))
                                   ? 0U : vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers
                                  [vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__read_addr1]))))) {
                VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:178: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"register_file_tb", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/register_file_tb.sv", 178, "");
            }
            if (VL_UNLIKELY(((((0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__read_addr2))
                                ? 0U : vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers
                               [vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__read_addr2]) 
                              != ((0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__read_addr2))
                                   ? 0U : vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers
                                  [vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__read_addr2]))))) {
                VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:183: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"register_file_tb", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/register_file_tb.sv", 183, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef._Vpast_9_1)) 
                                       | (0U == vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers[0U]))))))) {
                VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:173: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"register_file_tb", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/register_file_tb.sv", 173, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef._Vpast_5_1)) 
                                       | (vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers
                                          [vlSelfRef._Vpast_6_1] 
                                          == vlSelfRef._Vpast_7_1))))))) {
                VL_WRITEF_NX("[%0t] %%Error: register_file_tb.sv:168: Assertion failed in %m: 'assert' failed.\n",3, 'M',vlSymsp->name(),"register_file_tb", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1));
                VL_STOP_MT("tb/register_file_tb.sv", 168, "");
            }
        }
    }
    __VdlySet__dut__DOT__registers__v0 = 0U;
    if (((IData)(vlSelfRef.__PVT__write_en) & (0U != (IData)(vlSelfRef.__PVT__write_addr)))) {
        __VdlyVal__dut__DOT__registers__v0 = vlSelfRef.__PVT__write_data;
        __VdlyDim0__dut__DOT__registers__v0 = vlSelfRef.__PVT__write_addr;
        __VdlySet__dut__DOT__registers__v0 = 1U;
    }
    vlSelfRef._Vpast_9_1 = ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__write_en) 
                            & (0U == (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__write_addr)));
    if (__VdlySet__dut__DOT__registers__v0) {
        vlSelfRef.__PVT__dut__DOT__registers[__VdlyDim0__dut__DOT__registers__v0] 
            = __VdlyVal__dut__DOT__registers__v0;
    }
    vlSelfRef._Vpast_7_1 = vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__write_data;
    vlSelfRef._Vpast_6_1 = vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__write_addr;
    vlSelfRef._Vpast_5_1 = ((IData)(vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__write_en) 
                            & (0U != (IData)(vlSelfRef.__Vsampled_TOP__register_file_tb____PVT__write_addr)));
}
