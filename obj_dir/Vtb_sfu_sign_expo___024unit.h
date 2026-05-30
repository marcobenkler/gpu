// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfu_sign_expo.h for the primary calling header

#ifndef VERILATED_VTB_SFU_SIGN_EXPO___024UNIT_H_
#define VERILATED_VTB_SFU_SIGN_EXPO___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vtb_sfu_sign_expo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfu_sign_expo___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 8> __Venumtab_enum_name15;

    // INTERNAL VARIABLES
    Vtb_sfu_sign_expo__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_sfu_sign_expo___024unit();
    ~Vtb_sfu_sign_expo___024unit();
    void ctor(Vtb_sfu_sign_expo__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_sfu_sign_expo___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
