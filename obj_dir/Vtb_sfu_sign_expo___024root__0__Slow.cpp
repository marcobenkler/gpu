// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfu_sign_expo.h for the primary calling header

#include "Vtb_sfu_sign_expo__pch.h"

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___eval_static(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_static\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___eval_final(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_final\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_sfu_sign_expo___024root___eval_phase__stl(Vtb_sfu_sign_expo___024root* vlSelf);

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___eval_settle(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_settle\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sfu_sign_expo___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verify/tb/sfu/tb_sfu_sign_expo.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_sfu_sign_expo___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___eval_triggers_vec__stl(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_triggers_vec__stl\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_sfu_sign_expo___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sfu_sign_expo___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_sfu_sign_expo___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_sfu_sign_expo___024root___act_sequent__TOP__0(Vtb_sfu_sign_expo___024root* vlSelf);

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___eval_stl(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_stl\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_sfu_sign_expo___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_sfu_sign_expo___024root___eval_phase__stl(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_phase__stl\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_sfu_sign_expo___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sfu_sign_expo___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_sfu_sign_expo___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_sfu_sign_expo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_sfu_sign_expo___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_sfu_sign_expo___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___ctor_var_reset(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___ctor_var_reset\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_sfu_sign_expo__DOT__op = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8651892219613875620ull);
    vlSelf->tb_sfu_sign_expo__DOT__operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 357382578031365031ull);
    vlSelf->tb_sfu_sign_expo__DOT__sign_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17402935895935862216ull);
    vlSelf->tb_sfu_sign_expo__DOT__exp_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15848790670691174564ull);
    vlSelf->tb_sfu_sign_expo__DOT__mant_out = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17629548809620455984ull);
    vlSelf->tb_sfu_sign_expo__DOT__is_normal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16488037235316087153ull);
    vlSelf->tb_sfu_sign_expo__DOT____Vtogcov__op = 0;
    vlSelf->tb_sfu_sign_expo__DOT____Vtogcov__operand = 0;
    vlSelf->tb_sfu_sign_expo__DOT____Vtogcov__sign_out = 0;
    vlSelf->tb_sfu_sign_expo__DOT____Vtogcov__exp_out = 0;
    vlSelf->tb_sfu_sign_expo__DOT____Vtogcov__mant_out = 0;
    vlSelf->tb_sfu_sign_expo__DOT____Vtogcov__is_normal = 0;
    vlSelf->tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__sign_in = 0;
    vlSelf->tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__exp_in = 0;
    vlSelf->tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__mant_in = 0;
    vlSelf->tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_zero = 0;
    vlSelf->tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_nan = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___configure_coverage(Vtb_sfu_sign_expo___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___configure_coverage\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[0]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 5, 18, ".tb_sfu_sign_expo", "v_toggle/tb_sfu_sign_expo", "op");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[6]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 6, 18, ".tb_sfu_sign_expo", "v_toggle/tb_sfu_sign_expo", "operand");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[70]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 7, 18, ".tb_sfu_sign_expo", "v_toggle/tb_sfu_sign_expo", "sign_out");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[72]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 8, 18, ".tb_sfu_sign_expo", "v_toggle/tb_sfu_sign_expo", "exp_out");
    vlSelf->__vlCoverToggleInsert(0, 22, 1, &(vlSymsp->__Vcoverage[88]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 9, 18, ".tb_sfu_sign_expo", "v_toggle/tb_sfu_sign_expo", "mant_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[134]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 10, 18, ".tb_sfu_sign_expo", "v_toggle/tb_sfu_sign_expo", "is_normal");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 103, 10, ".tb_sfu_sign_expo", "v_line/tb_sfu_sign_expo", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 105, 10, ".tb_sfu_sign_expo", "v_line/tb_sfu_sign_expo", "else", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 101, 10, ".tb_sfu_sign_expo", "v_line/tb_sfu_sign_expo", "block", "101", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 116, 9, ".tb_sfu_sign_expo", "v_line/tb_sfu_sign_expo", "block", "116-120", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "verify/tb/sfu/tb_sfu_sign_expo.sv", 109, 5, ".tb_sfu_sign_expo", "v_line/tb_sfu_sign_expo", "block", "109-111,113-116,123-124", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[0]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 4, 25, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_toggle/sfu_sign_expo", "op");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[141]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 5, 25, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_toggle/sfu_sign_expo", "sign_in");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[143]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 6, 25, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_toggle/sfu_sign_expo", "exp_in");
    vlSelf->__vlCoverToggleInsert(0, 22, 1, &(vlSymsp->__Vcoverage[159]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 7, 25, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_toggle/sfu_sign_expo", "mant_in");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[70]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 8, 25, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_toggle/sfu_sign_expo", "sign_out");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[72]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 9, 25, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_toggle/sfu_sign_expo", "exp_out");
    vlSelf->__vlCoverToggleInsert(0, 22, 1, &(vlSymsp->__Vcoverage[88]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 10, 25, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_toggle/sfu_sign_expo", "mant_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[134]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 11, 25, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_toggle/sfu_sign_expo", "is_normal");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 34, 22, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_line/sfu_sign_expo", "if", "34-37", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 34, 23, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_line/sfu_sign_expo", "else", "40-43", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 34, 41, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_expr/sfu_sign_expo", "((exp_in == 8'h0)==1 && (mant_in == 23'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 34, 41, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_expr/sfu_sign_expo", "((mant_in == 23'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 34, 41, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_expr/sfu_sign_expo", "((exp_in == 8'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 28, 22, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_line/sfu_sign_expo", "elsif", "28-31", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 28, 42, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_expr/sfu_sign_expo", "((exp_in == 8'hff)==1 && (mant_in == 23'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 28, 42, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_expr/sfu_sign_expo", "((mant_in == 23'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 28, 42, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_expr/sfu_sign_expo", "((exp_in == 8'hff)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 22, 17, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_line/sfu_sign_expo", "elsif", "22-25", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 22, 37, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_expr/sfu_sign_expo", "((exp_in == 8'hff)==1 && (mant_in != 23'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 22, 37, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_expr/sfu_sign_expo", "((mant_in != 23'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 22, 37, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_expr/sfu_sign_expo", "((exp_in == 8'hff)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 20, 20, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_line/sfu_sign_expo", "case", "20", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 46, 13, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_line/sfu_sign_expo", "case", "46", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "rtl/execute/sfu/sfu_sign_expo.sv", 14, 5, ".tb_sfu_sign_expo.u_sfu_sign_expo", "v_line/sfu_sign_expo", "block", "14-19", "", "", "", "");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[0]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 4, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "op");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[141]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 5, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "sign_in");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[143]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 6, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "exp_in");
    vlSelf->__vlCoverToggleInsert(0, 22, 1, &(vlSymsp->__Vcoverage[159]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 7, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "mant_in");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[70]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 8, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "sign_out");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[72]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 9, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "exp_out");
    vlSelf->__vlCoverToggleInsert(0, 22, 1, &(vlSymsp->__Vcoverage[88]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 10, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "mant_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[134]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 11, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "is_normal");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[221]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 14, 10, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "is_zero");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[223]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 15, 10, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_toggle/sfu_sign_expo_assertions", "is_nan");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 17, 32, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((sign_out == 1'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 17, 32, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((op != sfu_pkg::SFU_RSQRT)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 17, 32, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((op != sfu_pkg::SFU_RSQRT)==0 && (sign_out == 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 20, 30, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((sign_out == 1'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 20, 30, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((op != sfu_pkg::SFU_EX2)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 20, 30, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((op != sfu_pkg::SFU_EX2)==0 && (sign_out == 1'h0)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 23, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((exp_out == 8'hff)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 23, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((exp_out == 8'h0)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 23, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((op != sfu_pkg::SFU_EX2)==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 23, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "(is_zero==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 23, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "(is_zero==1 && (op != sfu_pkg::SFU_EX2)==1 && (exp_out == 8'h0)==0 && (exp_out == 8'hff)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 26, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((exp_out == 8'hff)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 26, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "(is_nan==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 26, 24, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "(is_nan==1 && (exp_out == 8'hff)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 29, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((exp_out < 8'h7f)==1 && (exp_out > 8'h7f)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 29, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((exp_out < 8'h7f)==1 && (exp_in >= 8'h7f)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 29, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((exp_in <= 8'h7f)==1 && (exp_out > 8'h7f)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 29, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((exp_in <= 8'h7f)==1 && (exp_in >= 8'h7f)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 29, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "(is_normal==0) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 29, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((op != sfu_pkg::SFU_RCP)==1) => 1", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 29, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((op != sfu_pkg::SFU_RCP)==0 && is_normal==1 && (exp_in >= 8'h7f)==0 && (exp_out > 8'h7f)==0) => 0", "", "", "", "", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "verify/assertions/sfu/sfu_sign_expo_assertions.sv", 29, 44, ".tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", "v_expr/sfu_sign_expo_assertions", "((op != sfu_pkg::SFU_RCP)==0 && is_normal==1 && (exp_in <= 8'h7f)==0 && (exp_out < 8'h7f)==0) => 0", "", "", "", "", "");
}
