// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecoder_tb__pch.h"

//============================================================
// Constructors

Vdecoder_tb::Vdecoder_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecoder_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdecoder_tb::Vdecoder_tb(const char* _vcname__)
    : Vdecoder_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecoder_tb::~Vdecoder_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecoder_tb___024root___eval_debug_assertions(Vdecoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdecoder_tb___024root___eval_static(Vdecoder_tb___024root* vlSelf);
void Vdecoder_tb___024root___eval_initial(Vdecoder_tb___024root* vlSelf);
VL_ATTR_COLD bool Vdecoder_tb___024root___eval_stl(Vdecoder_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vdecoder_tb___024root___eval_sample(Vdecoder_tb___024root* vlSelf);
bool Vdecoder_tb___024root___eval_ico(Vdecoder_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vdecoder_tb___024root___eval_act(Vdecoder_tb___024root* vlSelf);
bool Vdecoder_tb___024root___eval_inact(Vdecoder_tb___024root* vlSelf);
bool Vdecoder_tb___024root___eval_nba(Vdecoder_tb___024root* vlSelf);
bool Vdecoder_tb___024root___eval_obs(Vdecoder_tb___024root* vlSelf);
bool Vdecoder_tb___024root___eval_react(Vdecoder_tb___024root* vlSelf);
void Vdecoder_tb___024root___eval_postponed(Vdecoder_tb___024root* vlSelf);
VL_ATTR_COLD void Vdecoder_tb___024root___eval_final(Vdecoder_tb___024root* vlSelf);
VL_ATTR_COLD void Vdecoder_tb___024root___eval_dump_triggers__stl(Vdecoder_tb___024root* vlSelf);
VL_ATTR_COLD void Vdecoder_tb___024root___eval_dump_triggers__ico(Vdecoder_tb___024root* vlSelf);
VL_ATTR_COLD void Vdecoder_tb___024root___eval_dump_triggers__act(Vdecoder_tb___024root* vlSelf);
VL_ATTR_COLD void Vdecoder_tb___024root___eval_dump_triggers__nba(Vdecoder_tb___024root* vlSelf);
VL_ATTR_COLD void Vdecoder_tb___024root___eval_dump_triggers__obs(Vdecoder_tb___024root* vlSelf);
VL_ATTR_COLD void Vdecoder_tb___024root___eval_dump_triggers__react(Vdecoder_tb___024root* vlSelf);

void Vdecoder_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecoder_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vdecoder_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vdecoder_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vdecoder_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vdecoder_tb::evalStatic() {
    Vdecoder_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vdecoder_tb::evalInitial() {
    Vdecoder_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vdecoder_tb::evalStl(bool firstIteration) {
    return Vdecoder_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vdecoder_tb::evalSample() {
    Vdecoder_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vdecoder_tb::evalIco(bool firstIteration) {
    return Vdecoder_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vdecoder_tb::evalAct() {
    return Vdecoder_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vdecoder_tb::evalInact() {
    return Vdecoder_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vdecoder_tb::evalNba() {
    return Vdecoder_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vdecoder_tb::evalObs() {
    return Vdecoder_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vdecoder_tb::evalReact() {
    return Vdecoder_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vdecoder_tb::evalPostponed() {
    Vdecoder_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vdecoder_tb::evalFinal() {
    Vdecoder_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder_tb::dumpTriggersStl() {
    Vdecoder_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder_tb::dumpTriggersIco() {
    Vdecoder_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder_tb::dumpTriggersAct() {
    Vdecoder_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder_tb::dumpTriggersNba() {
    Vdecoder_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder_tb::dumpTriggersObs() {
    Vdecoder_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vdecoder_tb::dumpTriggersReact() {
    Vdecoder_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vdecoder_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vdecoder_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdecoder_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdecoder_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecoder_tb::hierName() const { return vlSymsp->name(); }
const char* Vdecoder_tb::modelName() const { return "Vdecoder_tb"; }
unsigned Vdecoder_tb::threads() const { return 1; }
void Vdecoder_tb::prepareClone() const { contextp()->prepareClone(); }
void Vdecoder_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
