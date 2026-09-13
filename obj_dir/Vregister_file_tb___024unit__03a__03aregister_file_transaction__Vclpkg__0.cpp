// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file_tb.h for the primary calling header

#include "Vregister_file_tb__pch.h"

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::init(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    this->__PVT____Vconstraintmode.resize(5U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < this->__PVT____Vconstraintmode.size())) {
        this->__PVT____Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    this->__PVT__constraint.write_var(this->__PVT__same_addr, 1ULL, 
                                      "same_addr", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__write_addr, 5ULL, 
                                      "write_addr", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__read_addr1, 5ULL, 
                                      "read_addr1", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__write_en, 1ULL, 
                                      "write_en", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__read_addr2, 5ULL, 
                                      "read_addr2", 0ULL);
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_randomize(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    this->__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_same_addr_c_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_same_addr_c_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool same_addr) (__Vbool (__Vbv (= write_addr read_addr1)))))"s, "tb/register_file_transaction.sv", 0x0000000eU, 
                                 "        same_addr -> (write_addr == read_addr1);");
    this->__PVT__constraint.hard("(__Vbv (=> (__Vbool (__Vbv (not (__Vbool same_addr)))) (__Vbool (__Vbv (not (= write_addr read_addr1))))))"s, "tb/register_file_transaction.sv", 0x0000000fU, 
                                 "        !same_addr -> (write_addr != read_addr1);");
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_same_addr_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_same_addr_dist_setup_constraint\n"); );
    // Body
    QData/*63:0*/ __Vdist_bucket0;
    __Vdist_bucket0 = 0;
    __Vdist_bucket0 = (1ULL + VL_MODDIV_QQQ(64, (QData)(
                                                        VL_RANDOM_Q()), 0x0000000000000064ULL));
    if (this->__PVT____Vconstraintmode.at(0U)) {
        this->__PVT__constraint.hard("(bvor (__Vbv (= ((_ zero_extend 31) same_addr) #x00000001)) (__Vbv (= ((_ zero_extend 31) same_addr) #x00000000)))"s, "tb/register_file_transaction.sv", 0x00000013U, 
                                     "        same_addr dist{");
        this->__PVT__constraint.hard(((0x0000000000000046ULL 
                                       >= __Vdist_bucket0)
                                       ? "(__Vbv (= ((_ zero_extend 31) same_addr) #x00000000))"s
                                       : "(__Vbv (= ((_ zero_extend 31) same_addr) #x00000001))"s), "tb/register_file_transaction.sv", 0x00000013U, 
                                     "        same_addr dist{");
    }
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_write_en_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_write_en_dist_setup_constraint\n"); );
    // Body
    QData/*63:0*/ __Vdist_bucket1;
    __Vdist_bucket1 = 0;
    __Vdist_bucket1 = (1ULL + VL_MODDIV_QQQ(64, (QData)(
                                                        VL_RANDOM_Q()), 0x0000000000000064ULL));
    if (this->__PVT____Vconstraintmode.at(1U)) {
        this->__PVT__constraint.hard("(bvor (__Vbv (= ((_ zero_extend 31) write_en) #x00000001)) (__Vbv (= ((_ zero_extend 31) write_en) #x00000000)))"s, "tb/register_file_transaction.sv", 0x0000001aU, 
                                     "        write_en dist {0:= 30, 1:=70};");
        this->__PVT__constraint.hard(((0x000000000000001eULL 
                                       >= __Vdist_bucket1)
                                       ? "(__Vbv (= ((_ zero_extend 31) write_en) #x00000000))"s
                                       : "(__Vbv (= ((_ zero_extend 31) write_en) #x00000001))"s), "tb/register_file_transaction.sv", 0x0000001aU, 
                                     "        write_en dist {0:= 30, 1:=70};");
    }
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_write_addr_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_write_addr_dist_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    QData/*63:0*/ __Vdist_bucket2;
    __Vdist_bucket2 = 0;
    __Vdist_bucket2 = (1ULL + VL_MODDIV_QQQ(64, (QData)(
                                                        VL_RANDOM_Q()), 0x0000000000000064ULL));
    if (this->__PVT____Vconstraintmode.at(2U)) {
        this->__PVT__constraint.hard("(bvor (bvand (__Vbv (bvuge ((_ zero_extend 27) write_addr) #x00000001)) (__Vbv (bvule ((_ zero_extend 27) write_addr) #x0000001f))) (__Vbv (= ((_ zero_extend 27) write_addr) #x00000000)))"s, "tb/register_file_transaction.sv", 0x0000001eU, 
                                     "        write_addr dist {");
        VL_SFORMAT_NX(__Vtemp_1,"#x%x",1, '#',32,((IData)(1U) 
                                                  + (IData)(
                                                            VL_MODDIV_QQQ(64, (QData)(
                                                                                VL_RANDOM_Q()), 0x000000000000001fULL))));
        this->__PVT__constraint.hard(((0x0000000000000014ULL 
                                       >= __Vdist_bucket2)
                                       ? "(__Vbv (= ((_ zero_extend 27) write_addr) #x00000000))"s
                                       : VL_SFORMATF_N_NX("(__Vbv (= ((_ zero_extend 27) write_addr) %s))",1
                                                          , 'S',&(__Vtemp_1)) ), "tb/register_file_transaction.sv", 0x0000001eU, 
                                     "        write_addr dist {");
    }
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_read_addr1_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_read_addr1_dist_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    QData/*63:0*/ __Vdist_bucket3;
    __Vdist_bucket3 = 0;
    __Vdist_bucket3 = (1ULL + VL_MODDIV_QQQ(64, (QData)(
                                                        VL_RANDOM_Q()), 0x0000000000000064ULL));
    if (this->__PVT____Vconstraintmode.at(3U)) {
        this->__PVT__constraint.hard("(bvor (bvand (__Vbv (bvuge ((_ zero_extend 27) read_addr1) #x00000001)) (__Vbv (bvule ((_ zero_extend 27) read_addr1) #x0000001f))) (__Vbv (= ((_ zero_extend 27) read_addr1) #x00000000)))"s, "tb/register_file_transaction.sv", 0x00000025U, 
                                     "        read_addr1 dist {");
        VL_SFORMAT_NX(__Vtemp_1,"#x%x",1, '#',32,((IData)(1U) 
                                                  + (IData)(
                                                            VL_MODDIV_QQQ(64, (QData)(
                                                                                VL_RANDOM_Q()), 0x000000000000001fULL))));
        this->__PVT__constraint.hard(((0x0000000000000014ULL 
                                       >= __Vdist_bucket3)
                                       ? "(__Vbv (= ((_ zero_extend 27) read_addr1) #x00000000))"s
                                       : VL_SFORMATF_N_NX("(__Vbv (= ((_ zero_extend 27) read_addr1) %s))",1
                                                          , 'S',&(__Vtemp_1)) ), "tb/register_file_transaction.sv", 0x00000025U, 
                                     "        read_addr1 dist {");
    }
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_read_addr2_dist_setup_constraint(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc_read_addr2_dist_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    QData/*63:0*/ __Vdist_bucket4;
    __Vdist_bucket4 = 0;
    __Vdist_bucket4 = (1ULL + VL_MODDIV_QQQ(64, (QData)(
                                                        VL_RANDOM_Q()), 0x0000000000000064ULL));
    if (this->__PVT____Vconstraintmode.at(4U)) {
        this->__PVT__constraint.hard("(bvor (bvand (__Vbv (bvuge ((_ zero_extend 27) read_addr2) #x00000001)) (__Vbv (bvule ((_ zero_extend 27) read_addr2) #x0000001f))) (__Vbv (= ((_ zero_extend 27) read_addr2) #x00000000)))"s, "tb/register_file_transaction.sv", 0x0000002cU, 
                                     "        read_addr2 dist {");
        VL_SFORMAT_NX(__Vtemp_1,"#x%x",1, '#',32,((IData)(1U) 
                                                  + (IData)(
                                                            VL_MODDIV_QQQ(64, (QData)(
                                                                                VL_RANDOM_Q()), 0x000000000000001fULL))));
        this->__PVT__constraint.hard(((0x0000000000000014ULL 
                                       >= __Vdist_bucket4)
                                       ? "(__Vbv (= ((_ zero_extend 27) read_addr2) #x00000000))"s
                                       : VL_SFORMATF_N_NX("(__Vbv (= ((_ zero_extend 27) read_addr2) %s))",1
                                                          , 'S',&(__Vtemp_1)) ), "tb/register_file_transaction.sv", 0x0000002cU, 
                                     "        read_addr2 dist {");
    }
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc___Vsetup_constraints(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_same_addr_c_setup_constraint(vlSymsp);
    this->__VnoInFunc_same_addr_dist_setup_constraint(vlSymsp);
    this->__VnoInFunc_write_en_dist_setup_constraint(vlSymsp);
    this->__VnoInFunc_write_addr_dist_setup_constraint(vlSymsp);
    this->__VnoInFunc_read_addr1_dist_setup_constraint(vlSymsp);
    this->__VnoInFunc_read_addr2_dist_setup_constraint(vlSymsp);
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc___VBasicRand(Vregister_file_tb__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__write_data = VL_RANDOM_RNG_I(__Vm_rng);
}

void Vregister_file_tb___024unit__03a__03aregister_file_transaction::_ctor_var_reset(Vregister_file_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vregister_file_tb___024unit__03a__03aregister_file_transaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__write_addr = VL_SCOPED_RAND_RESET_I(5, 11410630139921525221ULL, 7370095266023931979ull);
    __PVT__read_addr1 = VL_SCOPED_RAND_RESET_I(5, 11410630139921525221ULL, 7316218282594940117ull);
    __PVT__read_addr2 = VL_SCOPED_RAND_RESET_I(5, 11410630139921525221ULL, 17267524713501448261ull);
    __PVT__write_data = VL_SCOPED_RAND_RESET_I(32, 11410630139921525221ULL, 11298066925140600626ull);
    __PVT__write_en = VL_SCOPED_RAND_RESET_I(1, 11410630139921525221ULL, 7858586797580960854ull);
    __PVT__same_addr = VL_SCOPED_RAND_RESET_I(1, 11410630139921525221ULL, 14489525551868171654ull);
    __PVT____Vconstraintmode.atDefault() = 0;
}
