// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vassertion_tb__pch.h"

//============================================================
// Constructors

Vassertion_tb::Vassertion_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vassertion_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vassertion_tb::Vassertion_tb(const char* _vcname__)
    : Vassertion_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vassertion_tb::~Vassertion_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vassertion_tb___024root___eval_debug_assertions(Vassertion_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vassertion_tb___024root___eval_static(Vassertion_tb___024root* vlSelf);
void Vassertion_tb___024root___eval_initial(Vassertion_tb___024root* vlSelf);
void Vassertion_tb___024root___eval_settle(Vassertion_tb___024root* vlSelf);
void Vassertion_tb___024root___eval(Vassertion_tb___024root* vlSelf);

void Vassertion_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vassertion_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vassertion_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vassertion_tb___024root___eval_static(&(vlSymsp->TOP));
        Vassertion_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vassertion_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vassertion_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vassertion_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vassertion_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vassertion_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vassertion_tb___024root___eval_final(Vassertion_tb___024root* vlSelf);

VL_ATTR_COLD void Vassertion_tb::final() {
    Vassertion_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vassertion_tb::hierName() const { return vlSymsp->name(); }
const char* Vassertion_tb::modelName() const { return "Vassertion_tb"; }
unsigned Vassertion_tb::threads() const { return 1; }
void Vassertion_tb::prepareClone() const { contextp()->prepareClone(); }
void Vassertion_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
