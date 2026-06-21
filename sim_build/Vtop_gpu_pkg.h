// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_GPU_PKG_H_
#define VERILATED_VTOP_GPU_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_gpu_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ warp_cnt = 4U;
    static constexpr IData/*31:0*/ lane_cnt = 4U;
    static constexpr IData/*31:0*/ reg_cnt = 0x00000020U;
    static constexpr IData/*31:0*/ MEM_DEPTH = 0x00000020U;

    // CONSTRUCTORS
    Vtop_gpu_pkg();
    ~Vtop_gpu_pkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_gpu_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
