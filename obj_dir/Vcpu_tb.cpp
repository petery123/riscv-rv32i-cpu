// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu_tb__pch.h"

//============================================================
// Constructors

Vcpu_tb::Vcpu_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcpu_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcpu_tb::Vcpu_tb(const char* _vcname__)
    : Vcpu_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcpu_tb::~Vcpu_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcpu_tb___024root___eval_debug_assertions(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___eval_static(Vcpu_tb___024root* vlSelf);
void Vcpu_tb___024root___eval_initial(Vcpu_tb___024root* vlSelf);
VL_ATTR_COLD bool Vcpu_tb___024root___eval_stl(Vcpu_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vcpu_tb___024root___eval_sample(Vcpu_tb___024root* vlSelf);
bool Vcpu_tb___024root___eval_ico(Vcpu_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vcpu_tb___024root___eval_act(Vcpu_tb___024root* vlSelf);
bool Vcpu_tb___024root___eval_inact(Vcpu_tb___024root* vlSelf);
bool Vcpu_tb___024root___eval_nba(Vcpu_tb___024root* vlSelf);
bool Vcpu_tb___024root___eval_obs(Vcpu_tb___024root* vlSelf);
bool Vcpu_tb___024root___eval_react(Vcpu_tb___024root* vlSelf);
void Vcpu_tb___024root___eval_postponed(Vcpu_tb___024root* vlSelf);
VL_ATTR_COLD void Vcpu_tb___024root___eval_final(Vcpu_tb___024root* vlSelf);
VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__stl(Vcpu_tb___024root* vlSelf);
VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__ico(Vcpu_tb___024root* vlSelf);
VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__act(Vcpu_tb___024root* vlSelf);
VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__nba(Vcpu_tb___024root* vlSelf);
VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__obs(Vcpu_tb___024root* vlSelf);
VL_ATTR_COLD void Vcpu_tb___024root___eval_dump_triggers__react(Vcpu_tb___024root* vlSelf);

void Vcpu_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vcpu_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vcpu_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vcpu_tb::evalStatic() {
    Vcpu_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vcpu_tb::evalInitial() {
    Vcpu_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vcpu_tb::evalStl(bool firstIteration) {
    return Vcpu_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vcpu_tb::evalSample() {
    Vcpu_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vcpu_tb::evalIco(bool firstIteration) {
    return Vcpu_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vcpu_tb::evalAct() {
    return Vcpu_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vcpu_tb::evalInact() {
    return Vcpu_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vcpu_tb::evalNba() {
    return Vcpu_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vcpu_tb::evalObs() {
    return Vcpu_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vcpu_tb::evalReact() {
    return Vcpu_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vcpu_tb::evalPostponed() {
    Vcpu_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vcpu_tb::evalFinal() {
    Vcpu_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcpu_tb::dumpTriggersStl() {
    Vcpu_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcpu_tb::dumpTriggersIco() {
    Vcpu_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcpu_tb::dumpTriggersAct() {
    Vcpu_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcpu_tb::dumpTriggersNba() {
    Vcpu_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcpu_tb::dumpTriggersObs() {
    Vcpu_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcpu_tb::dumpTriggersReact() {
    Vcpu_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vcpu_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vcpu_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcpu_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcpu_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcpu_tb::hierName() const { return vlSymsp->name(); }
const char* Vcpu_tb::modelName() const { return "Vcpu_tb"; }
unsigned Vcpu_tb::threads() const { return 1; }
void Vcpu_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcpu_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
