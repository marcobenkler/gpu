// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_gpu_pkg
constexpr IData/*31:0*/ Vtop_gpu_pkg::warp_cnt;
constexpr IData/*31:0*/ Vtop_gpu_pkg::lane_cnt;
constexpr IData/*31:0*/ Vtop_gpu_pkg::reg_cnt;
constexpr IData/*31:0*/ Vtop_gpu_pkg::MEM_DEPTH;



Vtop_gpu_pkg::Vtop_gpu_pkg() = default;
Vtop_gpu_pkg::~Vtop_gpu_pkg() = default;

void Vtop_gpu_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtop_gpu_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_gpu_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
