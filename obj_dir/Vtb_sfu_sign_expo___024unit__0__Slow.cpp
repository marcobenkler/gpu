// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfu_sign_expo.h for the primary calling header

#include "Vtb_sfu_sign_expo__pch.h"

VL_ATTR_COLD void Vtb_sfu_sign_expo___024unit___ctor_var_reset(Vtb_sfu_sign_expo___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_sfu_sign_expo___024unit___ctor_var_reset\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name15[__Vi] = ""s;
    }
    vlSelf->__Venumtab_enum_name15[0] = "SFU_RCP"s;
    vlSelf->__Venumtab_enum_name15[1] = "SFU_RSQRT"s;
    vlSelf->__Venumtab_enum_name15[2] = "SFU_LG2"s;
    vlSelf->__Venumtab_enum_name15[3] = "SFU_EX2"s;
    vlSelf->__Venumtab_enum_name15[4] = "SFU_SIN"s;
    vlSelf->__Venumtab_enum_name15[5] = "SFU_COS"s;
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024unit___configure_coverage(Vtb_sfu_sign_expo___024unit* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_sfu_sign_expo___024unit___configure_coverage\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
