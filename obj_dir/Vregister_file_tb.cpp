// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregister_file_tb__pch.h"

//============================================================
// Constructors

Vregister_file_tb::Vregister_file_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregister_file_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT__register_file_tb{vlSymsp->TOP.__PVT__register_file_tb}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , register_file_tb__03a__03acg__Vclpkg{vlSymsp->TOP.register_file_tb__03a__03acg__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , __024unit__03a__03aregister_file_transaction__Vclpkg{vlSymsp->TOP.__024unit__03a__03aregister_file_transaction__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregister_file_tb::Vregister_file_tb(const char* _vcname__)
    : Vregister_file_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregister_file_tb::~Vregister_file_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vregister_file_tb___024root___eval_debug_assertions(Vregister_file_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vregister_file_tb___024root___eval_static(Vregister_file_tb___024root* vlSelf);
void Vregister_file_tb___024root___eval_initial(Vregister_file_tb___024root* vlSelf);
VL_ATTR_COLD bool Vregister_file_tb___024root___eval_stl(Vregister_file_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vregister_file_tb___024root___eval_sample(Vregister_file_tb___024root* vlSelf);
bool Vregister_file_tb___024root___eval_ico(Vregister_file_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vregister_file_tb___024root___eval_act(Vregister_file_tb___024root* vlSelf);
bool Vregister_file_tb___024root___eval_inact(Vregister_file_tb___024root* vlSelf);
bool Vregister_file_tb___024root___eval_nba(Vregister_file_tb___024root* vlSelf);
bool Vregister_file_tb___024root___eval_obs(Vregister_file_tb___024root* vlSelf);
bool Vregister_file_tb___024root___eval_react(Vregister_file_tb___024root* vlSelf);
void Vregister_file_tb___024root___eval_postponed(Vregister_file_tb___024root* vlSelf);
VL_ATTR_COLD void Vregister_file_tb___024root___eval_final(Vregister_file_tb___024root* vlSelf);
VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__stl(Vregister_file_tb___024root* vlSelf);
VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__ico(Vregister_file_tb___024root* vlSelf);
VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__act(Vregister_file_tb___024root* vlSelf);
VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__nba(Vregister_file_tb___024root* vlSelf);
VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__obs(Vregister_file_tb___024root* vlSelf);
VL_ATTR_COLD void Vregister_file_tb___024root___eval_dump_triggers__react(Vregister_file_tb___024root* vlSelf);

void Vregister_file_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregister_file_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vregister_file_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vregister_file_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vregister_file_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vregister_file_tb::evalStatic() {
    Vregister_file_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vregister_file_tb::evalInitial() {
    Vregister_file_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vregister_file_tb::evalStl(bool firstIteration) {
    return Vregister_file_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vregister_file_tb::evalSample() {
    Vregister_file_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vregister_file_tb::evalIco(bool firstIteration) {
    return Vregister_file_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vregister_file_tb::evalAct() {
    return Vregister_file_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vregister_file_tb::evalInact() {
    return Vregister_file_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vregister_file_tb::evalNba() {
    return Vregister_file_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vregister_file_tb::evalObs() {
    return Vregister_file_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vregister_file_tb::evalReact() {
    return Vregister_file_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vregister_file_tb::evalPostponed() {
    Vregister_file_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vregister_file_tb::evalFinal() {
    Vregister_file_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vregister_file_tb::dumpTriggersStl() {
    Vregister_file_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vregister_file_tb::dumpTriggersIco() {
    Vregister_file_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vregister_file_tb::dumpTriggersAct() {
    Vregister_file_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vregister_file_tb::dumpTriggersNba() {
    Vregister_file_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vregister_file_tb::dumpTriggersObs() {
    Vregister_file_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vregister_file_tb::dumpTriggersReact() {
    Vregister_file_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vregister_file_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vregister_file_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vregister_file_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vregister_file_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregister_file_tb::hierName() const { return vlSymsp->name(); }
const char* Vregister_file_tb::modelName() const { return "Vregister_file_tb"; }
unsigned Vregister_file_tb::threads() const { return 1; }
void Vregister_file_tb::prepareClone() const { contextp()->prepareClone(); }
void Vregister_file_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
