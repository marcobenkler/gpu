// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_sfu_sign_expo.h for the primary calling header

#ifndef VERILATED_VTB_SFU_SIGN_EXPO___024ROOT_H_
#define VERILATED_VTB_SFU_SIGN_EXPO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtb_sfu_sign_expo___024unit;


class Vtb_sfu_sign_expo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_sfu_sign_expo___024root final {
  public:
    // CELLS
    Vtb_sfu_sign_expo___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ tb_sfu_sign_expo__DOT__op;
    CData/*0:0*/ tb_sfu_sign_expo__DOT__sign_out;
    CData/*7:0*/ tb_sfu_sign_expo__DOT__exp_out;
    CData/*0:0*/ tb_sfu_sign_expo__DOT__is_normal;
    CData/*2:0*/ tb_sfu_sign_expo__DOT____Vtogcov__op;
    CData/*0:0*/ tb_sfu_sign_expo__DOT____Vtogcov__sign_out;
    CData/*7:0*/ tb_sfu_sign_expo__DOT____Vtogcov__exp_out;
    CData/*0:0*/ tb_sfu_sign_expo__DOT____Vtogcov__is_normal;
    CData/*0:0*/ tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__sign_in;
    CData/*7:0*/ tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__exp_in;
    CData/*0:0*/ tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_zero;
    CData/*0:0*/ tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_nan;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_sfu_sign_expo__DOT__operand;
    IData/*22:0*/ tb_sfu_sign_expo__DOT__mant_out;
    IData/*31:0*/ tb_sfu_sign_expo__DOT____Vtogcov__operand;
    IData/*22:0*/ tb_sfu_sign_expo__DOT____Vtogcov__mant_out;
    IData/*22:0*/ tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__mant_in;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_sfu_sign_expo__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<QData/*43:0*/, 52> tb_sfu_sign_expo__DOT__TESTS = {{
        0x00000000000000ffULL, 0x00000100000001ffULL,
        0x000000ff00000000ULL, 0x000001ff00000100ULL,
        0x000000ff800000ffULL, 0x000000ff000002ffULL,
        0x0000007f0000007fULL, 0x0000017f0000017fULL,
        0x00000001000000fdULL, 0x000000fefffffe00ULL,
        0x00000000000002ffULL, 0x00000200000000ffULL,
        0x00000300000001ffULL, 0x000002ff00000000ULL,
        0x000003ff000000ffULL, 0x000002ff800000ffULL,
        0x000002ff000002ffULL, 0x0000027f0000007fULL,
        0x0000037f000000ffULL, 0x00000201000000beULL,
        0x000002fefffffe3fULL, 0x00000200000002ffULL,
        0x00000400000001ffULL, 0x00000500000001ffULL,
        0x000004ff000000ffULL, 0x000005ff000000ffULL,
        0x000004ff800000ffULL, 0x000004ff000002ffULL,
        0x0000047f00000000ULL, 0x0000057f000000ffULL,
        0x00000400000002ffULL, 0x000006000000007fULL,
        0x000007000000007fULL, 0x000006ff000000ffULL,
        0x000007ff00000000ULL, 0x000006ff800000ffULL,
        0x000006ff000002ffULL, 0x0000067f00000080ULL,
        0x0000077f0000007eULL, 0x000006fefffffeffULL,
        0x0000080000000000ULL, 0x0000090000000100ULL,
        0x000008ff000000ffULL, 0x000009ff000000ffULL,
        0x000008ff800000ffULL, 0x000008ff000002ffULL,
        0x00000a000000007fULL, 0x00000b000000007fULL,
        0x00000aff000000ffULL, 0x00000bff000000ffULL,
        0x00000aff800000ffULL, 0x00000aff000002ffULL
    }};

    // CONSTRUCTORS
    Vtb_sfu_sign_expo___024root(Vtb_sfu_sign_expo__Syms* symsp, const char* namep);
    ~Vtb_sfu_sign_expo___024root();
    VL_UNCOPYABLE(Vtb_sfu_sign_expo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
        const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};


#endif  // guard
