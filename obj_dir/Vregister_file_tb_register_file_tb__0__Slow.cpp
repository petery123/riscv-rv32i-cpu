// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"

VL_ATTR_COLD void Vregister_file_tb_register_file_tb___eval_static__TOP__register_file_tb(Vregister_file_tb_register_file_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vregister_file_tb_register_file_tb___eval_static__TOP__register_file_tb\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk = 0U;
    vlSelfRef.__PVT__total_checks = 0U;
    vlSelfRef.__PVT__passed = 0U;
    vlSelfRef.__PVT__failed = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelfRef.__PVT__check_registers__Vstatic__expected1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6112226742583157839ull);
    vlSelfRef.__PVT__check_registers__Vstatic__expected2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 872845890453115412ull);
    vlSelfRef._Vpast_6_1 = 0U;
    vlSelfRef._Vpast_7_1 = 0U;
}

VL_ATTR_COLD void Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb(Vregister_file_tb_register_file_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vregister_file_tb_register_file_tb___eval_initial__TOP__register_file_tb\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__cg_inst = VL_NEW(Vregister_file_tb_register_file_tb__03a__03acg, vlSymsp);
}

VL_ATTR_COLD void Vregister_file_tb_register_file_tb___ctor_var_reset(Vregister_file_tb_register_file_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vregister_file_tb_register_file_tb___ctor_var_reset\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__read_addr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7316218282594940117ull);
    vlSelf->__PVT__read_addr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17267524713501448261ull);
    vlSelf->__PVT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7370095266023931979ull);
    vlSelf->__PVT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11298066925140600626ull);
    vlSelf->__PVT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7858586797580960854ull);
    vlSelf->__PVT__read_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1952627831297024750ull);
    vlSelf->__PVT__read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2066318529818353712ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__expected_registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13785702543735271550ull);
    }
    vlSelf->__PVT__mon_read_addr1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12864403203759840450ull);
    vlSelf->__PVT__mon_read_addr2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10717788674819226629ull);
    vlSelf->__PVT__mon_read_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3337395778486237525ull);
    vlSelf->__PVT__mon_read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4099719943373833612ull);
    vlSelf->__PVT__mon_write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2562293018532948701ull);
    vlSelf->__PVT__mon_write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1527675703525555829ull);
    vlSelf->__PVT__mon_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3584758059505654788ull);
    vlSelf->_Vpast_5_1 = 0;
    vlSelf->_Vpast_6_1 = 0;
    vlSelf->_Vpast_7_1 = 0;
    vlSelf->_Vpast_9_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__dut__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2311894079901432744ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__Vsampled_TOP__register_file_tb____PVT__dut__DOT__registers[__Vi0] = 0;
    }
    vlSelf->__Vsampled_TOP__register_file_tb____PVT__read_addr1 = 0;
    vlSelf->__Vsampled_TOP__register_file_tb____PVT__read_addr2 = 0;
    vlSelf->__Vsampled_TOP__register_file_tb____PVT__write_en = 0;
    vlSelf->__Vsampled_TOP__register_file_tb____PVT__write_addr = 0;
    vlSelf->__Vsampled_TOP__register_file_tb____PVT__write_data = 0;
}

VL_ATTR_COLD void Vregister_file_tb_register_file_tb___configure_coverage(Vregister_file_tb_register_file_tb* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vregister_file_tb_register_file_tb___configure_coverage\n"); );
    Vregister_file_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
