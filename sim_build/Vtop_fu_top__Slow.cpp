// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_fu_top___ctor_var_reset(Vtop_fu_top* vlSelf);

Vtop_fu_top::Vtop_fu_top() = default;
Vtop_fu_top::~Vtop_fu_top() = default;

void Vtop_fu_top::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_fu_top___ctor_var_reset(this);
}

void Vtop_fu_top::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_fu_top::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
