// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_tb.h for the primary calling header

#include "Vdecoder_tb__pch.h"

VlCoroutine Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0(Vdecoder_tb___024root* vlSelf);

void Vdecoder_tb___024root___eval_initial(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_initial\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vdecoder_tb___024root___eval_sample(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_sample\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdecoder_tb___024root___eval_ico(Vdecoder_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_ico\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vdecoder_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vdecoder_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vdecoder_tb___024root___act_sequent__TOP__0(Vdecoder_tb___024root* vlSelf);

bool Vdecoder_tb___024root___eval_act(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_act\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
    }
    Vdecoder_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdecoder_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdecoder_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
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
                Vdecoder_tb___024root___act_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Vdecoder_tb___024root___eval_inact(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_inact\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/decoder_tb.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vdecoder_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vdecoder_tb___024root___eval_nba(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_nba\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdecoder_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vdecoder_tb___024root___act_sequent__TOP__0(vlSelf);
            }
        }
        Vdecoder_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vdecoder_tb___024root___eval_obs(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_obs\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vdecoder_tb___024root___eval_react(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_react\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vdecoder_tb___024root___eval_postponed(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_postponed\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ decoder_tb__DOT__expected_type;
    decoder_tb__DOT__expected_type = 0;
    IData/*31:0*/ decoder_tb__DOT__test_instruction__Vstatic__test_inst;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst = 0;
    CData/*6:0*/ decoder_tb__DOT__test_instruction__Vstatic__exp_opcode;
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode = 0;
    CData/*4:0*/ decoder_tb__DOT__test_instruction__Vstatic__exp_rd;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd = 0;
    CData/*2:0*/ decoder_tb__DOT__test_instruction__Vstatic__exp_funct3;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 = 0;
    CData/*4:0*/ decoder_tb__DOT__test_instruction__Vstatic__exp_rs1;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 = 0;
    SData/*8:0*/ decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type = 0;
    IData/*31:0*/ decoder_tb__DOT__test_instruction__Vstatic__exp_immediate;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate = 0;
    CData/*2:0*/ decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op = 0;
    SData/*8:0*/ __Vtask_decoder_tb__DOT__test_instruction__0__exp_instr_type;
    __Vtask_decoder_tb__DOT__test_instruction__0__exp_instr_type = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__1__test_inst;
    __Vtask_decoder_tb__DOT__test_instruction__1__test_inst = 0;
    CData/*6:0*/ __Vtask_decoder_tb__DOT__test_instruction__1__exp_opcode;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_opcode = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__1__exp_rd;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_rd = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__1__exp_funct3;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_funct3 = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__1__exp_rs1;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_rs1 = 0;
    SData/*8:0*/ __Vtask_decoder_tb__DOT__test_instruction__1__exp_instr_type;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_instr_type = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__1__exp_immediate;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_immediate = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__1__exp_alu_op;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_alu_op = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__2__test_inst;
    __Vtask_decoder_tb__DOT__test_instruction__2__test_inst = 0;
    CData/*6:0*/ __Vtask_decoder_tb__DOT__test_instruction__2__exp_opcode;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_opcode = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__2__exp_rd;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_rd = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__2__exp_funct3;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_funct3 = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__2__exp_rs1;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_rs1 = 0;
    SData/*8:0*/ __Vtask_decoder_tb__DOT__test_instruction__2__exp_instr_type;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_instr_type = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__2__exp_immediate;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_immediate = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__2__exp_alu_op;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_alu_op = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__3__test_inst;
    __Vtask_decoder_tb__DOT__test_instruction__3__test_inst = 0;
    CData/*6:0*/ __Vtask_decoder_tb__DOT__test_instruction__3__exp_opcode;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_opcode = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__3__exp_rd;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_rd = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__3__exp_funct3;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_funct3 = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__3__exp_rs1;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_rs1 = 0;
    SData/*8:0*/ __Vtask_decoder_tb__DOT__test_instruction__3__exp_instr_type;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_instr_type = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__3__exp_immediate;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_immediate = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__3__exp_alu_op;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_alu_op = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__4__test_inst;
    __Vtask_decoder_tb__DOT__test_instruction__4__test_inst = 0;
    CData/*6:0*/ __Vtask_decoder_tb__DOT__test_instruction__4__exp_opcode;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_opcode = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__4__exp_rd;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_rd = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__4__exp_funct3;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_funct3 = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__4__exp_rs1;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_rs1 = 0;
    SData/*8:0*/ __Vtask_decoder_tb__DOT__test_instruction__4__exp_instr_type;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_instr_type = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__4__exp_immediate;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_immediate = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__4__exp_alu_op;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_alu_op = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__5__test_inst;
    __Vtask_decoder_tb__DOT__test_instruction__5__test_inst = 0;
    CData/*6:0*/ __Vtask_decoder_tb__DOT__test_instruction__5__exp_opcode;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_opcode = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__5__exp_rd;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_rd = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__5__exp_funct3;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_funct3 = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__5__exp_rs1;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_rs1 = 0;
    SData/*8:0*/ __Vtask_decoder_tb__DOT__test_instruction__5__exp_instr_type;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_instr_type = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__5__exp_immediate;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_immediate = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__5__exp_alu_op;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_alu_op = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__6__test_inst;
    __Vtask_decoder_tb__DOT__test_instruction__6__test_inst = 0;
    CData/*6:0*/ __Vtask_decoder_tb__DOT__test_instruction__6__exp_opcode;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_opcode = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__6__exp_rd;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_rd = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__6__exp_funct3;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_funct3 = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__6__exp_rs1;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_rs1 = 0;
    SData/*8:0*/ __Vtask_decoder_tb__DOT__test_instruction__6__exp_instr_type;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_instr_type = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__6__exp_immediate;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_immediate = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__6__exp_alu_op;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_alu_op = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__7__test_inst;
    __Vtask_decoder_tb__DOT__test_instruction__7__test_inst = 0;
    CData/*6:0*/ __Vtask_decoder_tb__DOT__test_instruction__7__exp_opcode;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_opcode = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__7__exp_rd;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_rd = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__7__exp_funct3;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_funct3 = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__7__exp_rs1;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_rs1 = 0;
    SData/*8:0*/ __Vtask_decoder_tb__DOT__test_instruction__7__exp_instr_type;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_instr_type = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__7__exp_immediate;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_immediate = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__7__exp_alu_op;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_alu_op = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__8__test_inst;
    __Vtask_decoder_tb__DOT__test_instruction__8__test_inst = 0;
    CData/*6:0*/ __Vtask_decoder_tb__DOT__test_instruction__8__exp_opcode;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_opcode = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__8__exp_rd;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_rd = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__8__exp_funct3;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_funct3 = 0;
    CData/*4:0*/ __Vtask_decoder_tb__DOT__test_instruction__8__exp_rs1;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_rs1 = 0;
    SData/*8:0*/ __Vtask_decoder_tb__DOT__test_instruction__8__exp_instr_type;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_instr_type = 0;
    IData/*31:0*/ __Vtask_decoder_tb__DOT__test_instruction__8__exp_immediate;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_immediate = 0;
    CData/*2:0*/ __Vtask_decoder_tb__DOT__test_instruction__8__exp_alu_op;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_alu_op = 0;
    // Body
    decoder_tb__DOT__expected_type = 0U;
    decoder_tb__DOT__expected_type = (0x00000100U | (IData)(decoder_tb__DOT__expected_type));
    __Vtask_decoder_tb__DOT__test_instruction__0__exp_instr_type 
        = decoder_tb__DOT__expected_type;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst = 0x007302b3U;
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode = 0x33U;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd = 5U;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 = 0U;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 = 6U;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type 
        = __Vtask_decoder_tb__DOT__test_instruction__0__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate = 0U;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op = 0U;
    vlSelfRef.decoder_tb__DOT__inst = 0x007302b3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/decoder_tb.sv", 
                                         42);
    decoder_tb__DOT__expected_type = 0U;
    decoder_tb__DOT__expected_type = (0x00000100U | (IData)(decoder_tb__DOT__expected_type));
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_alu_op = 1U;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_immediate = 0U;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_instr_type 
        = decoder_tb__DOT__expected_type;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_rs1 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_funct3 = 0U;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_rd = 5U;
    __Vtask_decoder_tb__DOT__test_instruction__1__exp_opcode = 0x33U;
    __Vtask_decoder_tb__DOT__test_instruction__1__test_inst = 0x407302b3U;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst 
        = __Vtask_decoder_tb__DOT__test_instruction__1__test_inst;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY((((0x0000007fU & vlSelfRef.decoder_tb__DOT__inst) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: opcode\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:47: Assertion failed in %m: FAIL: opcode expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',7,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode)
                         , '#',7,(0x0000007fU & vlSelfRef.decoder_tb__DOT__inst));
            VL_STOP_MT("tb/decoder_tb.sv", 47, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 7U)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rd\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:52: Assertion failed in %m: FAIL: rd expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 7U)));
            VL_STOP_MT("tb/decoder_tb.sv", 52, "");
        }
        if (VL_LIKELY((((7U & (vlSelfRef.decoder_tb__DOT__inst 
                               >> 0x0000000cU)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: funct3\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:57: Assertion failed in %m: FAIL: funct3 expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3)
                         , '#',3,(7U & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000cU)));
            VL_STOP_MT("tb/decoder_tb.sv", 57, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000fU)) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rs1\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:62: Assertion failed in %m: FAIL: rs1 expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 0x0000000fU)));
            VL_STOP_MT("tb/decoder_tb.sv", 62, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__instr_type) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: instruction type\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:67: Assertion failed in %m: FAIL: instruction type\n",3, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/decoder_tb.sv", 67, "");
        }
        if (VL_LIKELY(((vlSelfRef.decoder_tb__DOT__immediate 
                        == decoder_tb__DOT__test_instruction__Vstatic__exp_immediate)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: immediate\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:72: Assertion failed in %m: FAIL: immediate expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,decoder_tb__DOT__test_instruction__Vstatic__exp_immediate
                         , '~',32,vlSelfRef.decoder_tb__DOT__immediate);
            VL_STOP_MT("tb/decoder_tb.sv", 72, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__alu_op) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: alu_op\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:78: Assertion failed in %m: FAIL: alu_op expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op)
                         , '#',3,vlSelfRef.decoder_tb__DOT__alu_op);
            VL_STOP_MT("tb/decoder_tb.sv", 78, "");
        }
    }
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode 
        = __Vtask_decoder_tb__DOT__test_instruction__1__exp_opcode;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd 
        = __Vtask_decoder_tb__DOT__test_instruction__1__exp_rd;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 
        = __Vtask_decoder_tb__DOT__test_instruction__1__exp_funct3;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 
        = __Vtask_decoder_tb__DOT__test_instruction__1__exp_rs1;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type 
        = __Vtask_decoder_tb__DOT__test_instruction__1__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate 
        = __Vtask_decoder_tb__DOT__test_instruction__1__exp_immediate;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op 
        = __Vtask_decoder_tb__DOT__test_instruction__1__exp_alu_op;
    vlSelfRef.decoder_tb__DOT__inst = decoder_tb__DOT__test_instruction__Vstatic__test_inst;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/decoder_tb.sv", 
                                         42);
    decoder_tb__DOT__expected_type = 0U;
    decoder_tb__DOT__expected_type = (0x00000100U | (IData)(decoder_tb__DOT__expected_type));
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_alu_op = 2U;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_immediate = 0U;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_instr_type 
        = decoder_tb__DOT__expected_type;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_rs1 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_funct3 = 7U;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_rd = 5U;
    __Vtask_decoder_tb__DOT__test_instruction__2__exp_opcode = 0x33U;
    __Vtask_decoder_tb__DOT__test_instruction__2__test_inst = 0x007372b3U;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst 
        = __Vtask_decoder_tb__DOT__test_instruction__2__test_inst;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY((((0x0000007fU & vlSelfRef.decoder_tb__DOT__inst) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: opcode\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:47: Assertion failed in %m: FAIL: opcode expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',7,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode)
                         , '#',7,(0x0000007fU & vlSelfRef.decoder_tb__DOT__inst));
            VL_STOP_MT("tb/decoder_tb.sv", 47, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 7U)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rd\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:52: Assertion failed in %m: FAIL: rd expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 7U)));
            VL_STOP_MT("tb/decoder_tb.sv", 52, "");
        }
        if (VL_LIKELY((((7U & (vlSelfRef.decoder_tb__DOT__inst 
                               >> 0x0000000cU)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: funct3\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:57: Assertion failed in %m: FAIL: funct3 expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3)
                         , '#',3,(7U & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000cU)));
            VL_STOP_MT("tb/decoder_tb.sv", 57, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000fU)) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rs1\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:62: Assertion failed in %m: FAIL: rs1 expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 0x0000000fU)));
            VL_STOP_MT("tb/decoder_tb.sv", 62, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__instr_type) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: instruction type\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:67: Assertion failed in %m: FAIL: instruction type\n",3, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/decoder_tb.sv", 67, "");
        }
        if (VL_LIKELY(((vlSelfRef.decoder_tb__DOT__immediate 
                        == decoder_tb__DOT__test_instruction__Vstatic__exp_immediate)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: immediate\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:72: Assertion failed in %m: FAIL: immediate expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,decoder_tb__DOT__test_instruction__Vstatic__exp_immediate
                         , '~',32,vlSelfRef.decoder_tb__DOT__immediate);
            VL_STOP_MT("tb/decoder_tb.sv", 72, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__alu_op) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: alu_op\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:78: Assertion failed in %m: FAIL: alu_op expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op)
                         , '#',3,vlSelfRef.decoder_tb__DOT__alu_op);
            VL_STOP_MT("tb/decoder_tb.sv", 78, "");
        }
    }
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode 
        = __Vtask_decoder_tb__DOT__test_instruction__2__exp_opcode;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd 
        = __Vtask_decoder_tb__DOT__test_instruction__2__exp_rd;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 
        = __Vtask_decoder_tb__DOT__test_instruction__2__exp_funct3;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 
        = __Vtask_decoder_tb__DOT__test_instruction__2__exp_rs1;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type 
        = __Vtask_decoder_tb__DOT__test_instruction__2__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate 
        = __Vtask_decoder_tb__DOT__test_instruction__2__exp_immediate;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op 
        = __Vtask_decoder_tb__DOT__test_instruction__2__exp_alu_op;
    vlSelfRef.decoder_tb__DOT__inst = decoder_tb__DOT__test_instruction__Vstatic__test_inst;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/decoder_tb.sv", 
                                         42);
    decoder_tb__DOT__expected_type = 0U;
    decoder_tb__DOT__expected_type = (0x00000100U | (IData)(decoder_tb__DOT__expected_type));
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_alu_op = 3U;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_immediate = 0U;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_instr_type 
        = decoder_tb__DOT__expected_type;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_rs1 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_funct3 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_rd = 5U;
    __Vtask_decoder_tb__DOT__test_instruction__3__exp_opcode = 0x33U;
    __Vtask_decoder_tb__DOT__test_instruction__3__test_inst = 0x007362b3U;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst 
        = __Vtask_decoder_tb__DOT__test_instruction__3__test_inst;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY((((0x0000007fU & vlSelfRef.decoder_tb__DOT__inst) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: opcode\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:47: Assertion failed in %m: FAIL: opcode expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',7,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode)
                         , '#',7,(0x0000007fU & vlSelfRef.decoder_tb__DOT__inst));
            VL_STOP_MT("tb/decoder_tb.sv", 47, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 7U)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rd\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:52: Assertion failed in %m: FAIL: rd expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 7U)));
            VL_STOP_MT("tb/decoder_tb.sv", 52, "");
        }
        if (VL_LIKELY((((7U & (vlSelfRef.decoder_tb__DOT__inst 
                               >> 0x0000000cU)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: funct3\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:57: Assertion failed in %m: FAIL: funct3 expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3)
                         , '#',3,(7U & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000cU)));
            VL_STOP_MT("tb/decoder_tb.sv", 57, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000fU)) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rs1\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:62: Assertion failed in %m: FAIL: rs1 expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 0x0000000fU)));
            VL_STOP_MT("tb/decoder_tb.sv", 62, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__instr_type) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: instruction type\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:67: Assertion failed in %m: FAIL: instruction type\n",3, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/decoder_tb.sv", 67, "");
        }
        if (VL_LIKELY(((vlSelfRef.decoder_tb__DOT__immediate 
                        == decoder_tb__DOT__test_instruction__Vstatic__exp_immediate)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: immediate\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:72: Assertion failed in %m: FAIL: immediate expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,decoder_tb__DOT__test_instruction__Vstatic__exp_immediate
                         , '~',32,vlSelfRef.decoder_tb__DOT__immediate);
            VL_STOP_MT("tb/decoder_tb.sv", 72, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__alu_op) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: alu_op\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:78: Assertion failed in %m: FAIL: alu_op expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op)
                         , '#',3,vlSelfRef.decoder_tb__DOT__alu_op);
            VL_STOP_MT("tb/decoder_tb.sv", 78, "");
        }
    }
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode 
        = __Vtask_decoder_tb__DOT__test_instruction__3__exp_opcode;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd 
        = __Vtask_decoder_tb__DOT__test_instruction__3__exp_rd;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 
        = __Vtask_decoder_tb__DOT__test_instruction__3__exp_funct3;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 
        = __Vtask_decoder_tb__DOT__test_instruction__3__exp_rs1;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type 
        = __Vtask_decoder_tb__DOT__test_instruction__3__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate 
        = __Vtask_decoder_tb__DOT__test_instruction__3__exp_immediate;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op 
        = __Vtask_decoder_tb__DOT__test_instruction__3__exp_alu_op;
    vlSelfRef.decoder_tb__DOT__inst = decoder_tb__DOT__test_instruction__Vstatic__test_inst;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/decoder_tb.sv", 
                                         42);
    decoder_tb__DOT__expected_type = 0U;
    decoder_tb__DOT__expected_type = (0x00000100U | (IData)(decoder_tb__DOT__expected_type));
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_alu_op = 4U;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_immediate = 0U;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_instr_type 
        = decoder_tb__DOT__expected_type;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_rs1 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_funct3 = 4U;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_rd = 5U;
    __Vtask_decoder_tb__DOT__test_instruction__4__exp_opcode = 0x33U;
    __Vtask_decoder_tb__DOT__test_instruction__4__test_inst = 0x007342b3U;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst 
        = __Vtask_decoder_tb__DOT__test_instruction__4__test_inst;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY((((0x0000007fU & vlSelfRef.decoder_tb__DOT__inst) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: opcode\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:47: Assertion failed in %m: FAIL: opcode expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',7,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode)
                         , '#',7,(0x0000007fU & vlSelfRef.decoder_tb__DOT__inst));
            VL_STOP_MT("tb/decoder_tb.sv", 47, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 7U)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rd\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:52: Assertion failed in %m: FAIL: rd expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 7U)));
            VL_STOP_MT("tb/decoder_tb.sv", 52, "");
        }
        if (VL_LIKELY((((7U & (vlSelfRef.decoder_tb__DOT__inst 
                               >> 0x0000000cU)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: funct3\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:57: Assertion failed in %m: FAIL: funct3 expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3)
                         , '#',3,(7U & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000cU)));
            VL_STOP_MT("tb/decoder_tb.sv", 57, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000fU)) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rs1\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:62: Assertion failed in %m: FAIL: rs1 expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 0x0000000fU)));
            VL_STOP_MT("tb/decoder_tb.sv", 62, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__instr_type) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: instruction type\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:67: Assertion failed in %m: FAIL: instruction type\n",3, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/decoder_tb.sv", 67, "");
        }
        if (VL_LIKELY(((vlSelfRef.decoder_tb__DOT__immediate 
                        == decoder_tb__DOT__test_instruction__Vstatic__exp_immediate)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: immediate\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:72: Assertion failed in %m: FAIL: immediate expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,decoder_tb__DOT__test_instruction__Vstatic__exp_immediate
                         , '~',32,vlSelfRef.decoder_tb__DOT__immediate);
            VL_STOP_MT("tb/decoder_tb.sv", 72, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__alu_op) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: alu_op\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:78: Assertion failed in %m: FAIL: alu_op expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op)
                         , '#',3,vlSelfRef.decoder_tb__DOT__alu_op);
            VL_STOP_MT("tb/decoder_tb.sv", 78, "");
        }
    }
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode 
        = __Vtask_decoder_tb__DOT__test_instruction__4__exp_opcode;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd 
        = __Vtask_decoder_tb__DOT__test_instruction__4__exp_rd;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 
        = __Vtask_decoder_tb__DOT__test_instruction__4__exp_funct3;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 
        = __Vtask_decoder_tb__DOT__test_instruction__4__exp_rs1;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type 
        = __Vtask_decoder_tb__DOT__test_instruction__4__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate 
        = __Vtask_decoder_tb__DOT__test_instruction__4__exp_immediate;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op 
        = __Vtask_decoder_tb__DOT__test_instruction__4__exp_alu_op;
    vlSelfRef.decoder_tb__DOT__inst = decoder_tb__DOT__test_instruction__Vstatic__test_inst;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/decoder_tb.sv", 
                                         42);
    decoder_tb__DOT__expected_type = 0U;
    decoder_tb__DOT__expected_type = (0x00000080U | (IData)(decoder_tb__DOT__expected_type));
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_alu_op = 0U;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_immediate = 0xfffffffcU;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_instr_type 
        = decoder_tb__DOT__expected_type;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_rs1 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_funct3 = 0U;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_rd = 5U;
    __Vtask_decoder_tb__DOT__test_instruction__5__exp_opcode = 0x13U;
    __Vtask_decoder_tb__DOT__test_instruction__5__test_inst = 0xffc30293U;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst 
        = __Vtask_decoder_tb__DOT__test_instruction__5__test_inst;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY((((0x0000007fU & vlSelfRef.decoder_tb__DOT__inst) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: opcode\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:47: Assertion failed in %m: FAIL: opcode expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',7,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode)
                         , '#',7,(0x0000007fU & vlSelfRef.decoder_tb__DOT__inst));
            VL_STOP_MT("tb/decoder_tb.sv", 47, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 7U)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rd\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:52: Assertion failed in %m: FAIL: rd expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 7U)));
            VL_STOP_MT("tb/decoder_tb.sv", 52, "");
        }
        if (VL_LIKELY((((7U & (vlSelfRef.decoder_tb__DOT__inst 
                               >> 0x0000000cU)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: funct3\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:57: Assertion failed in %m: FAIL: funct3 expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3)
                         , '#',3,(7U & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000cU)));
            VL_STOP_MT("tb/decoder_tb.sv", 57, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000fU)) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rs1\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:62: Assertion failed in %m: FAIL: rs1 expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 0x0000000fU)));
            VL_STOP_MT("tb/decoder_tb.sv", 62, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__instr_type) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: instruction type\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:67: Assertion failed in %m: FAIL: instruction type\n",3, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/decoder_tb.sv", 67, "");
        }
        if (VL_LIKELY(((vlSelfRef.decoder_tb__DOT__immediate 
                        == decoder_tb__DOT__test_instruction__Vstatic__exp_immediate)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: immediate\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:72: Assertion failed in %m: FAIL: immediate expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,decoder_tb__DOT__test_instruction__Vstatic__exp_immediate
                         , '~',32,vlSelfRef.decoder_tb__DOT__immediate);
            VL_STOP_MT("tb/decoder_tb.sv", 72, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__alu_op) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: alu_op\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:78: Assertion failed in %m: FAIL: alu_op expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op)
                         , '#',3,vlSelfRef.decoder_tb__DOT__alu_op);
            VL_STOP_MT("tb/decoder_tb.sv", 78, "");
        }
    }
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode 
        = __Vtask_decoder_tb__DOT__test_instruction__5__exp_opcode;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd 
        = __Vtask_decoder_tb__DOT__test_instruction__5__exp_rd;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 
        = __Vtask_decoder_tb__DOT__test_instruction__5__exp_funct3;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 
        = __Vtask_decoder_tb__DOT__test_instruction__5__exp_rs1;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type 
        = __Vtask_decoder_tb__DOT__test_instruction__5__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate 
        = __Vtask_decoder_tb__DOT__test_instruction__5__exp_immediate;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op 
        = __Vtask_decoder_tb__DOT__test_instruction__5__exp_alu_op;
    vlSelfRef.decoder_tb__DOT__inst = decoder_tb__DOT__test_instruction__Vstatic__test_inst;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/decoder_tb.sv", 
                                         42);
    decoder_tb__DOT__expected_type = 0U;
    decoder_tb__DOT__expected_type = (0x00000080U | (IData)(decoder_tb__DOT__expected_type));
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_alu_op = 2U;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_immediate = 0x0000000cU;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_instr_type 
        = decoder_tb__DOT__expected_type;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_rs1 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_funct3 = 7U;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_rd = 5U;
    __Vtask_decoder_tb__DOT__test_instruction__6__exp_opcode = 0x13U;
    __Vtask_decoder_tb__DOT__test_instruction__6__test_inst = 0x00c37293U;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst 
        = __Vtask_decoder_tb__DOT__test_instruction__6__test_inst;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY((((0x0000007fU & vlSelfRef.decoder_tb__DOT__inst) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: opcode\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:47: Assertion failed in %m: FAIL: opcode expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',7,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode)
                         , '#',7,(0x0000007fU & vlSelfRef.decoder_tb__DOT__inst));
            VL_STOP_MT("tb/decoder_tb.sv", 47, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 7U)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rd\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:52: Assertion failed in %m: FAIL: rd expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 7U)));
            VL_STOP_MT("tb/decoder_tb.sv", 52, "");
        }
        if (VL_LIKELY((((7U & (vlSelfRef.decoder_tb__DOT__inst 
                               >> 0x0000000cU)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: funct3\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:57: Assertion failed in %m: FAIL: funct3 expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3)
                         , '#',3,(7U & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000cU)));
            VL_STOP_MT("tb/decoder_tb.sv", 57, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000fU)) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rs1\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:62: Assertion failed in %m: FAIL: rs1 expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 0x0000000fU)));
            VL_STOP_MT("tb/decoder_tb.sv", 62, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__instr_type) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: instruction type\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:67: Assertion failed in %m: FAIL: instruction type\n",3, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/decoder_tb.sv", 67, "");
        }
        if (VL_LIKELY(((vlSelfRef.decoder_tb__DOT__immediate 
                        == decoder_tb__DOT__test_instruction__Vstatic__exp_immediate)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: immediate\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:72: Assertion failed in %m: FAIL: immediate expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,decoder_tb__DOT__test_instruction__Vstatic__exp_immediate
                         , '~',32,vlSelfRef.decoder_tb__DOT__immediate);
            VL_STOP_MT("tb/decoder_tb.sv", 72, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__alu_op) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: alu_op\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:78: Assertion failed in %m: FAIL: alu_op expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op)
                         , '#',3,vlSelfRef.decoder_tb__DOT__alu_op);
            VL_STOP_MT("tb/decoder_tb.sv", 78, "");
        }
    }
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode 
        = __Vtask_decoder_tb__DOT__test_instruction__6__exp_opcode;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd 
        = __Vtask_decoder_tb__DOT__test_instruction__6__exp_rd;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 
        = __Vtask_decoder_tb__DOT__test_instruction__6__exp_funct3;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 
        = __Vtask_decoder_tb__DOT__test_instruction__6__exp_rs1;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type 
        = __Vtask_decoder_tb__DOT__test_instruction__6__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate 
        = __Vtask_decoder_tb__DOT__test_instruction__6__exp_immediate;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op 
        = __Vtask_decoder_tb__DOT__test_instruction__6__exp_alu_op;
    vlSelfRef.decoder_tb__DOT__inst = decoder_tb__DOT__test_instruction__Vstatic__test_inst;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/decoder_tb.sv", 
                                         42);
    decoder_tb__DOT__expected_type = 0U;
    decoder_tb__DOT__expected_type = (0x00000080U | (IData)(decoder_tb__DOT__expected_type));
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_alu_op = 3U;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_immediate = 0x0000000cU;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_instr_type 
        = decoder_tb__DOT__expected_type;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_rs1 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_funct3 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_rd = 5U;
    __Vtask_decoder_tb__DOT__test_instruction__7__exp_opcode = 0x13U;
    __Vtask_decoder_tb__DOT__test_instruction__7__test_inst = 0x00c36293U;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst 
        = __Vtask_decoder_tb__DOT__test_instruction__7__test_inst;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY((((0x0000007fU & vlSelfRef.decoder_tb__DOT__inst) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: opcode\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:47: Assertion failed in %m: FAIL: opcode expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',7,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode)
                         , '#',7,(0x0000007fU & vlSelfRef.decoder_tb__DOT__inst));
            VL_STOP_MT("tb/decoder_tb.sv", 47, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 7U)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rd\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:52: Assertion failed in %m: FAIL: rd expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 7U)));
            VL_STOP_MT("tb/decoder_tb.sv", 52, "");
        }
        if (VL_LIKELY((((7U & (vlSelfRef.decoder_tb__DOT__inst 
                               >> 0x0000000cU)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: funct3\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:57: Assertion failed in %m: FAIL: funct3 expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3)
                         , '#',3,(7U & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000cU)));
            VL_STOP_MT("tb/decoder_tb.sv", 57, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000fU)) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rs1\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:62: Assertion failed in %m: FAIL: rs1 expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 0x0000000fU)));
            VL_STOP_MT("tb/decoder_tb.sv", 62, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__instr_type) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: instruction type\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:67: Assertion failed in %m: FAIL: instruction type\n",3, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/decoder_tb.sv", 67, "");
        }
        if (VL_LIKELY(((vlSelfRef.decoder_tb__DOT__immediate 
                        == decoder_tb__DOT__test_instruction__Vstatic__exp_immediate)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: immediate\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:72: Assertion failed in %m: FAIL: immediate expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,decoder_tb__DOT__test_instruction__Vstatic__exp_immediate
                         , '~',32,vlSelfRef.decoder_tb__DOT__immediate);
            VL_STOP_MT("tb/decoder_tb.sv", 72, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__alu_op) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: alu_op\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:78: Assertion failed in %m: FAIL: alu_op expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op)
                         , '#',3,vlSelfRef.decoder_tb__DOT__alu_op);
            VL_STOP_MT("tb/decoder_tb.sv", 78, "");
        }
    }
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode 
        = __Vtask_decoder_tb__DOT__test_instruction__7__exp_opcode;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd 
        = __Vtask_decoder_tb__DOT__test_instruction__7__exp_rd;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 
        = __Vtask_decoder_tb__DOT__test_instruction__7__exp_funct3;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 
        = __Vtask_decoder_tb__DOT__test_instruction__7__exp_rs1;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type 
        = __Vtask_decoder_tb__DOT__test_instruction__7__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate 
        = __Vtask_decoder_tb__DOT__test_instruction__7__exp_immediate;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op 
        = __Vtask_decoder_tb__DOT__test_instruction__7__exp_alu_op;
    vlSelfRef.decoder_tb__DOT__inst = decoder_tb__DOT__test_instruction__Vstatic__test_inst;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/decoder_tb.sv", 
                                         42);
    decoder_tb__DOT__expected_type = 0U;
    decoder_tb__DOT__expected_type = (0x00000080U | (IData)(decoder_tb__DOT__expected_type));
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_alu_op = 4U;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_immediate = 0x0000000cU;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_instr_type 
        = decoder_tb__DOT__expected_type;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_rs1 = 6U;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_funct3 = 4U;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_rd = 5U;
    __Vtask_decoder_tb__DOT__test_instruction__8__exp_opcode = 0x13U;
    __Vtask_decoder_tb__DOT__test_instruction__8__test_inst = 0x00c34293U;
    decoder_tb__DOT__test_instruction__Vstatic__test_inst 
        = __Vtask_decoder_tb__DOT__test_instruction__8__test_inst;
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY((((0x0000007fU & vlSelfRef.decoder_tb__DOT__inst) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: opcode\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:47: Assertion failed in %m: FAIL: opcode expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',7,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode)
                         , '#',7,(0x0000007fU & vlSelfRef.decoder_tb__DOT__inst));
            VL_STOP_MT("tb/decoder_tb.sv", 47, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 7U)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rd\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:52: Assertion failed in %m: FAIL: rd expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 7U)));
            VL_STOP_MT("tb/decoder_tb.sv", 52, "");
        }
        if (VL_LIKELY((((7U & (vlSelfRef.decoder_tb__DOT__inst 
                               >> 0x0000000cU)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: funct3\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:57: Assertion failed in %m: FAIL: funct3 expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3)
                         , '#',3,(7U & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000cU)));
            VL_STOP_MT("tb/decoder_tb.sv", 57, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000fU)) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rs1\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:62: Assertion failed in %m: FAIL: rs1 expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 0x0000000fU)));
            VL_STOP_MT("tb/decoder_tb.sv", 62, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__instr_type) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: instruction type\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:67: Assertion failed in %m: FAIL: instruction type\n",3, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/decoder_tb.sv", 67, "");
        }
        if (VL_LIKELY(((vlSelfRef.decoder_tb__DOT__immediate 
                        == decoder_tb__DOT__test_instruction__Vstatic__exp_immediate)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: immediate\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:72: Assertion failed in %m: FAIL: immediate expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,decoder_tb__DOT__test_instruction__Vstatic__exp_immediate
                         , '~',32,vlSelfRef.decoder_tb__DOT__immediate);
            VL_STOP_MT("tb/decoder_tb.sv", 72, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__alu_op) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: alu_op\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:78: Assertion failed in %m: FAIL: alu_op expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op)
                         , '#',3,vlSelfRef.decoder_tb__DOT__alu_op);
            VL_STOP_MT("tb/decoder_tb.sv", 78, "");
        }
    }
    decoder_tb__DOT__test_instruction__Vstatic__exp_opcode 
        = __Vtask_decoder_tb__DOT__test_instruction__8__exp_opcode;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rd 
        = __Vtask_decoder_tb__DOT__test_instruction__8__exp_rd;
    decoder_tb__DOT__test_instruction__Vstatic__exp_funct3 
        = __Vtask_decoder_tb__DOT__test_instruction__8__exp_funct3;
    decoder_tb__DOT__test_instruction__Vstatic__exp_rs1 
        = __Vtask_decoder_tb__DOT__test_instruction__8__exp_rs1;
    decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type 
        = __Vtask_decoder_tb__DOT__test_instruction__8__exp_instr_type;
    decoder_tb__DOT__test_instruction__Vstatic__exp_immediate 
        = __Vtask_decoder_tb__DOT__test_instruction__8__exp_immediate;
    decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op 
        = __Vtask_decoder_tb__DOT__test_instruction__8__exp_alu_op;
    vlSelfRef.decoder_tb__DOT__inst = decoder_tb__DOT__test_instruction__Vstatic__test_inst;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/decoder_tb.sv", 
                                         42);
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (VL_LIKELY((((0x0000007fU & vlSelfRef.decoder_tb__DOT__inst) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: opcode\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:47: Assertion failed in %m: FAIL: opcode expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',7,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_opcode)
                         , '#',7,(0x0000007fU & vlSelfRef.decoder_tb__DOT__inst));
            VL_STOP_MT("tb/decoder_tb.sv", 47, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 7U)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rd\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:52: Assertion failed in %m: FAIL: rd expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rd)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 7U)));
            VL_STOP_MT("tb/decoder_tb.sv", 52, "");
        }
        if (VL_LIKELY((((7U & (vlSelfRef.decoder_tb__DOT__inst 
                               >> 0x0000000cU)) == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: funct3\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:57: Assertion failed in %m: FAIL: funct3 expected %b, got %b\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_funct3)
                         , '#',3,(7U & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000cU)));
            VL_STOP_MT("tb/decoder_tb.sv", 57, "");
        }
        if (VL_LIKELY((((0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                        >> 0x0000000fU)) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: rs1\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:62: Assertion failed in %m: FAIL: rs1 expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',5,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_rs1)
                         , '#',5,(0x0000001fU & (vlSelfRef.decoder_tb__DOT__inst 
                                                 >> 0x0000000fU)));
            VL_STOP_MT("tb/decoder_tb.sv", 62, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__instr_type) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_instr_type))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: instruction type\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:67: Assertion failed in %m: FAIL: instruction type\n",3, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("tb/decoder_tb.sv", 67, "");
        }
        if (VL_LIKELY(((vlSelfRef.decoder_tb__DOT__immediate 
                        == decoder_tb__DOT__test_instruction__Vstatic__exp_immediate)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: immediate\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:72: Assertion failed in %m: FAIL: immediate expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '~',32,decoder_tb__DOT__test_instruction__Vstatic__exp_immediate
                         , '~',32,vlSelfRef.decoder_tb__DOT__immediate);
            VL_STOP_MT("tb/decoder_tb.sv", 72, "");
        }
        if (VL_LIKELY((((IData)(vlSelfRef.decoder_tb__DOT__alu_op) 
                        == (IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_PASS_ON_NONVACUOUS, 2, 1)))) {
                VL_WRITEF_NX("PASS: alu_op\n",0);
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)))) {
            VL_WRITEF_NX("[%0t] %%Error: decoder_tb.sv:78: Assertion failed in %m: FAIL: alu_op expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"decoder_tb.test_instruction", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',3,(IData)(decoder_tb__DOT__test_instruction__Vstatic__exp_alu_op)
                         , '#',3,vlSelfRef.decoder_tb__DOT__alu_op);
            VL_STOP_MT("tb/decoder_tb.sv", 78, "");
        }
    }
    VL_FINISH_MT("tb/decoder_tb.sv", 245, "");
    co_return;
}

bool Vdecoder_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___trigger_anySet__ico\n"); );
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

bool Vdecoder_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___trigger_anySet__act\n"); );
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

extern const VlWide<1024>/*32767:0*/ Vdecoder_tb__ConstPool__CONST_h625aa9cc_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vdecoder_tb__ConstPool__TABLE_hce7bf640_0;

void Vdecoder_tb___024root___act_sequent__TOP__0(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___act_sequent__TOP__0\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    IData/*31:0*/ __VExpandSel_Lsb_1;
    // Body
    __VdfgRegularize_h6e95ff9d_0_3 = (IData)((1U == 
                                              (5U & vlSelfRef.decoder_tb__DOT__inst)));
    __VdfgRegularize_h6e95ff9d_0_4 = (IData)((2U == 
                                              (0x0000000aU 
                                               & vlSelfRef.decoder_tb__DOT__inst)));
    vlSelfRef.decoder_tb__DOT__instr_type = ((0x00000040U 
                                              & vlSelfRef.decoder_tb__DOT__inst)
                                              ? ((- (IData)(
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.decoder_tb__DOT__inst 
                                                                 >> 4U))))) 
                                                 & (((8U 
                                                      & vlSelfRef.decoder_tb__DOT__inst)
                                                      ? 
                                                     (2U 
                                                      & (- (IData)(
                                                                   (7U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelfRef.decoder_tb__DOT__inst)))))
                                                      : 
                                                     ((4U 
                                                       & vlSelfRef.decoder_tb__DOT__inst)
                                                       ? 
                                                      (1U 
                                                       & (- (IData)(
                                                                    (3U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelfRef.decoder_tb__DOT__inst)))))
                                                       : 
                                                      (0x0010U 
                                                       & (- (IData)(
                                                                    (3U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelfRef.decoder_tb__DOT__inst))))))) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.decoder_tb__DOT__inst 
                                                                     >> 5U))))))
                                              : ((0x00000020U 
                                                  & vlSelfRef.decoder_tb__DOT__inst)
                                                  ? 
                                                 ((0x00000010U 
                                                   & vlSelfRef.decoder_tb__DOT__inst)
                                                   ? 
                                                  (((4U 
                                                     & vlSelfRef.decoder_tb__DOT__inst)
                                                     ? 
                                                    (8U 
                                                     & (- (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelfRef.decoder_tb__DOT__inst)))))
                                                     : 
                                                    (0x0100U 
                                                     & (- (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelfRef.decoder_tb__DOT__inst)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.decoder_tb__DOT__inst 
                                                                     >> 3U))))))
                                                   : 
                                                  (0x0020U 
                                                   & (- (IData)(
                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4) 
                                                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_3))))))
                                                  : 
                                                 ((0x00000010U 
                                                   & vlSelfRef.decoder_tb__DOT__inst)
                                                   ? 
                                                  (((4U 
                                                     & vlSelfRef.decoder_tb__DOT__inst)
                                                     ? 
                                                    (4U 
                                                     & (- (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelfRef.decoder_tb__DOT__inst)))))
                                                     : 
                                                    (0x0080U 
                                                     & (- (IData)(
                                                                  (3U 
                                                                   == 
                                                                   (3U 
                                                                    & vlSelfRef.decoder_tb__DOT__inst)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.decoder_tb__DOT__inst 
                                                                     >> 3U))))))
                                                   : 
                                                  (0x0040U 
                                                   & (- (IData)(
                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_3) 
                                                                 & (IData)(__VdfgRegularize_h6e95ff9d_0_4))))))));
    __VExpandSel_Lsb_1 = ((0x00007f00U & (vlSelfRef.decoder_tb__DOT__inst 
                                          >> 0x00000011U)) 
                          | (0x000000e0U & (vlSelfRef.decoder_tb__DOT__inst 
                                            >> 7U)));
    vlSelfRef.decoder_tb__DOT__alu_op = (7U & ((0x00000100U 
                                                & (IData)(vlSelfRef.decoder_tb__DOT__instr_type))
                                                ? (
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & __VExpandSel_Lsb_1))
                                                     ? 0U
                                                     : 
                                                    (Vdecoder_tb__ConstPool__CONST_h625aa9cc_0
                                                     [
                                                     (((IData)(2U) 
                                                       + __VExpandSel_Lsb_1) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x00000020U) 
                                                      - 
                                                      (0x0000001fU 
                                                       & __VExpandSel_Lsb_1)))) 
                                                   | (Vdecoder_tb__ConstPool__CONST_h625aa9cc_0
                                                      [
                                                      (__VExpandSel_Lsb_1 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x0000001fU 
                                                       & __VExpandSel_Lsb_1)))
                                                : (
                                                   (0x00000080U 
                                                    & (IData)(vlSelfRef.decoder_tb__DOT__instr_type))
                                                    ? 
                                                   (0x004c4000U 
                                                    >> 
                                                    ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelfRef.decoder_tb__DOT__inst 
                                                         >> 0x0000000cU))))
                                                    : 0U)));
    __VdfgRegularize_h6e95ff9d_0_0 = (1U & Vdecoder_tb__ConstPool__TABLE_hce7bf640_0
                                      [vlSelfRef.decoder_tb__DOT__instr_type]);
    __VdfgRegularize_h6e95ff9d_0_1 = (1U & (Vdecoder_tb__ConstPool__TABLE_hce7bf640_0
                                            [vlSelfRef.decoder_tb__DOT__instr_type] 
                                            >> 1U));
    vlSelfRef.decoder_tb__DOT__immediate = ((4U & Vdecoder_tb__ConstPool__TABLE_hce7bf640_0
                                             [vlSelfRef.decoder_tb__DOT__instr_type])
                                             ? (((IData)(__VdfgRegularize_h6e95ff9d_0_0)
                                                  ? 
                                                 VL_EXTENDS_II(32,21, 
                                                               ((((0x00000200U 
                                                                   & (vlSelfRef.decoder_tb__DOT__inst 
                                                                      >> 0x00000016U)) 
                                                                  | ((0x000001feU 
                                                                      & (vlSelfRef.decoder_tb__DOT__inst 
                                                                         >> 0x0000000bU)) 
                                                                     | (1U 
                                                                        & (vlSelfRef.decoder_tb__DOT__inst 
                                                                           >> 0x00000014U)))) 
                                                                 << 0x0000000bU) 
                                                                | (0x000007feU 
                                                                   & (vlSelfRef.decoder_tb__DOT__inst 
                                                                      >> 0x00000014U))))
                                                  : 
                                                 (0xfffff000U 
                                                  & vlSelfRef.decoder_tb__DOT__inst)) 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_1))))))
                                             : ((IData)(__VdfgRegularize_h6e95ff9d_0_1)
                                                 ? 
                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_0)
                                                  ? 
                                                 VL_EXTENDS_II(32,13, 
                                                               ((((2U 
                                                                   & (vlSelfRef.decoder_tb__DOT__inst 
                                                                      >> 0x0000001eU)) 
                                                                  | (1U 
                                                                     & (vlSelfRef.decoder_tb__DOT__inst 
                                                                        >> 7U))) 
                                                                 << 0x0000000bU) 
                                                                | ((0x000007e0U 
                                                                    & (vlSelfRef.decoder_tb__DOT__inst 
                                                                       >> 0x00000014U)) 
                                                                   | (0x0000001eU 
                                                                      & (vlSelfRef.decoder_tb__DOT__inst 
                                                                         >> 7U)))))
                                                  : 
                                                 VL_EXTENDS_II(32,12, 
                                                               ((0x00000fe0U 
                                                                 & (vlSelfRef.decoder_tb__DOT__inst 
                                                                    >> 0x00000014U)) 
                                                                | (0x0000001fU 
                                                                   & (vlSelfRef.decoder_tb__DOT__inst 
                                                                      >> 7U)))))
                                                 : 
                                                (VL_EXTENDS_II(32,12, 
                                                               (vlSelfRef.decoder_tb__DOT__inst 
                                                                >> 0x00000014U)) 
                                                 & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_0))))));
}

void Vdecoder_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vdecoder_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___trigger_clear__act\n"); );
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
void Vdecoder_tb___024root___eval_debug_assertions(Vdecoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_tb___024root___eval_debug_assertions\n"); );
    Vdecoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
