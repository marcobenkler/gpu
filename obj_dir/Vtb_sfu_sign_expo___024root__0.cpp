// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfu_sign_expo.h for the primary calling header

#include "Vtb_sfu_sign_expo__pch.h"

VlCoroutine Vtb_sfu_sign_expo___024root___eval_initial__TOP__Vtiming__0(Vtb_sfu_sign_expo___024root* vlSelf);

void Vtb_sfu_sign_expo___024root___eval_initial(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_initial\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sfu_sign_expo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VlCoroutine Vtb_sfu_sign_expo___024root___eval_initial__TOP__Vtiming__0(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o;
    tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o = 0;
    CData/*2:0*/ __Vtask_tb_sfu_sign_expo__DOT__check__0__op;
    __Vtask_tb_sfu_sign_expo__DOT__check__0__op = 0;
    IData/*31:0*/ __Vtask_tb_sfu_sign_expo__DOT__check__0__in;
    __Vtask_tb_sfu_sign_expo__DOT__check__0__in = 0;
    CData/*0:0*/ __Vtask_tb_sfu_sign_expo__DOT__check__0__sign_exp;
    __Vtask_tb_sfu_sign_expo__DOT__check__0__sign_exp = 0;
    CData/*7:0*/ __Vtask_tb_sfu_sign_expo__DOT__check__0__exp_exp;
    __Vtask_tb_sfu_sign_expo__DOT__check__0__exp_exp = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("sim/sfu/tb_sign_expo.fst"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_sfu_sign_expo__DOT__op = 0U;
    vlSelfRef.tb_sfu_sign_expo__DOT__operand = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "verify/tb/sfu/tb_sfu_sign_expo.sv", 
                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o = 0U;
    while (VL_GTS_III(32, 0x00000034U, tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o)) {
        vlSelfRef.tb_sfu_sign_expo__DOT__op = (7U & (IData)(
                                                            (vlSelfRef.tb_sfu_sign_expo__DOT__TESTS
                                                             [
                                                             ((0x33U 
                                                               >= 
                                                               (0x0000003fU 
                                                                & tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o))
                                                               ? 
                                                              (0x0000003fU 
                                                               & tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o)
                                                               : 0U)] 
                                                             >> 0x00000029U)));
        vlSelfRef.tb_sfu_sign_expo__DOT__operand = (IData)(
                                                           (vlSelfRef.tb_sfu_sign_expo__DOT__TESTS
                                                            [
                                                            ((0x33U 
                                                              >= 
                                                              (0x0000003fU 
                                                               & tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o))
                                                              ? 
                                                             (0x0000003fU 
                                                              & tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o)
                                                              : 0U)] 
                                                            >> 9U));
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "verify/tb/sfu/tb_sfu_sign_expo.sv", 
                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_sfu_sign_expo__DOT__check__0__exp_exp 
            = (0x000000ffU & (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__TESTS
                                     [((0x33U >= (0x0000003fU 
                                                  & tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o))
                                        ? (0x0000003fU 
                                           & tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o)
                                        : 0U)]));
        __Vtask_tb_sfu_sign_expo__DOT__check__0__sign_exp 
            = (1U & (IData)((vlSelfRef.tb_sfu_sign_expo__DOT__TESTS
                             [((0x33U >= (0x0000003fU 
                                          & tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o))
                                ? (0x0000003fU & tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o)
                                : 0U)] >> 8U)));
        __Vtask_tb_sfu_sign_expo__DOT__check__0__in 
            = vlSelfRef.tb_sfu_sign_expo__DOT__operand;
        __Vtask_tb_sfu_sign_expo__DOT__check__0__op 
            = vlSelfRef.tb_sfu_sign_expo__DOT__op;
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out) 
                          != (IData)(__Vtask_tb_sfu_sign_expo__DOT__check__0__sign_exp))))) {
            __Vtemp_1 = Vtb_sfu_sign_expo___024unit::__Venumtab_enum_name15
                [__Vtask_tb_sfu_sign_expo__DOT__check__0__op];
            VL_WRITEF_NX("[%0t] %%Error: tb_sfu_sign_expo.sv:104: Assertion failed in %m: %s sign: got=%0b exp=%0b in=%0b\n",7, 'M',vlSymsp->name(),"tb_sfu_sign_expo.check", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(__Vtemp_1), '#',1,(IData)(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out)
                         , '#',1,__Vtask_tb_sfu_sign_expo__DOT__check__0__sign_exp
                         , '#',1,(__Vtask_tb_sfu_sign_expo__DOT__check__0__in 
                                  >> 0x1fU));
            VL_STOP_MT("verify/tb/sfu/tb_sfu_sign_expo.sv", 104, "");
        } else {
            ++(vlSymsp->__Vcoverage[136]);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out) 
                          != (IData)(__Vtask_tb_sfu_sign_expo__DOT__check__0__exp_exp))))) {
            __Vtemp_2 = Vtb_sfu_sign_expo___024unit::__Venumtab_enum_name15
                [__Vtask_tb_sfu_sign_expo__DOT__check__0__op];
            VL_WRITEF_NX("[%0t] %%Error: tb_sfu_sign_expo.sv:106: Assertion failed in %m: %s exp: got=%0b exp=%0b in=%0b\n",7, 'M',vlSymsp->name(),"tb_sfu_sign_expo.check", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , 'S',&(__Vtemp_2), '#',8,(IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)
                         , '#',8,__Vtask_tb_sfu_sign_expo__DOT__check__0__exp_exp
                         , '#',8,(0x000000ffU & (__Vtask_tb_sfu_sign_expo__DOT__check__0__in 
                                                 >> 0x17U)));
            VL_STOP_MT("verify/tb/sfu/tb_sfu_sign_expo.sv", 106, "");
        } else {
            ++(vlSymsp->__Vcoverage[137]);
        }
        ++(vlSymsp->__Vcoverage[138]);
        tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o 
            = ((IData)(1U) + tb_sfu_sign_expo__DOT__unnamedblk1__DOT__o);
        ++(vlSymsp->__Vcoverage[139]);
    }
    VL_WRITEF_NX("DONE\n",0);
    VL_FINISH_MT("verify/tb/sfu/tb_sfu_sign_expo.sv", 124, "");
    ++(vlSymsp->__Vcoverage[140]);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb_sfu_sign_expo___024root___eval_triggers_vec__act(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_triggers_vec__act\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb_sfu_sign_expo___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___trigger_anySet__act\n"); );
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

void Vtb_sfu_sign_expo___024root___act_sequent__TOP__0(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___act_sequent__TOP__0\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op) 
         ^ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__op))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 0, vlSelfRef.tb_sfu_sign_expo__DOT__op, vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__op);
        vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__op 
            = vlSelfRef.tb_sfu_sign_expo__DOT__op;
    }
    if ((vlSelfRef.tb_sfu_sign_expo__DOT__operand ^ vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__operand)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 6, vlSelfRef.tb_sfu_sign_expo__DOT__operand, vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__operand);
        vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__operand 
            = vlSelfRef.tb_sfu_sign_expo__DOT__operand;
    }
    if (((vlSelfRef.tb_sfu_sign_expo__DOT__operand 
          >> 0x0000001fU) ^ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__sign_in))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 141, 
                               (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                >> 0x0000001fU), vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__sign_in);
        vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__sign_in 
            = (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
               >> 0x0000001fU);
    }
    if ((0x000000ffU & ((vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                         >> 0x00000017U) ^ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__exp_in)))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 143, 
                               (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                >> 0x00000017U), vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__exp_in);
        vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__exp_in 
            = (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                              >> 0x00000017U));
    }
    if ((0x007fffffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                        ^ vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__mant_in))) {
        VL_COV_TOGGLE_CHG_ST_I(23, vlSymsp->__Vcoverage + 159, vlSelfRef.tb_sfu_sign_expo__DOT__operand, vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__mant_in);
        vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT____Vtogcov__mant_in 
            = (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand);
    }
    if (((IData)((0U == (0x7fffffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand))) 
         ^ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_zero))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 221, (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (0x7fffffffU 
                                                                        & vlSelfRef.tb_sfu_sign_expo__DOT__operand))), vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_zero);
        vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_zero 
            = (IData)((0U == (0x7fffffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand)));
    }
    if (((IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                  & (0U != (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand)))) 
         ^ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_nan))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 223, (IData)(
                                                                      ((0x7f800000U 
                                                                        == 
                                                                        (0x7f800000U 
                                                                         & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x007fffffU 
                                                                           & vlSelfRef.tb_sfu_sign_expo__DOT__operand)))), vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_nan);
        vlSelfRef.tb_sfu_sign_expo__DOT__u_sfu_sign_expo__DOT__u_sfu_sign_expo_props__DOT____Vtogcov__is_nan 
            = (IData)(((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                       & (0U != (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand))));
    }
    vlSelfRef.tb_sfu_sign_expo__DOT__is_normal = 0U;
    vlSelfRef.tb_sfu_sign_expo__DOT__sign_out = 0U;
    vlSelfRef.tb_sfu_sign_expo__DOT__exp_out = 0U;
    vlSelfRef.tb_sfu_sign_expo__DOT__mant_out = 0U;
    if ((0U == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op))) {
        if ((IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                     & (0U != (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand))))) {
            vlSelfRef.tb_sfu_sign_expo__DOT__sign_out = 0U;
            vlSelfRef.tb_sfu_sign_expo__DOT__exp_out = 0xffU;
            vlSelfRef.tb_sfu_sign_expo__DOT__mant_out = 0x007fffffU;
            ++(vlSymsp->__Vcoverage[214]);
        } else {
            if ((IData)((0x7f800000U == (0x7fffffffU 
                                         & vlSelfRef.tb_sfu_sign_expo__DOT__operand)))) {
                vlSelfRef.tb_sfu_sign_expo__DOT__sign_out 
                    = (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                       >> 0x0000001fU);
                vlSelfRef.tb_sfu_sign_expo__DOT__exp_out = 0U;
                vlSelfRef.tb_sfu_sign_expo__DOT__mant_out = 0U;
                ++(vlSymsp->__Vcoverage[210]);
            } else {
                if ((IData)((0U == (0x7fffffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand)))) {
                    vlSelfRef.tb_sfu_sign_expo__DOT__sign_out 
                        = (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                           >> 0x0000001fU);
                    vlSelfRef.tb_sfu_sign_expo__DOT__exp_out = 0xffU;
                    vlSelfRef.tb_sfu_sign_expo__DOT__mant_out = 0U;
                    ++(vlSymsp->__Vcoverage[205]);
                } else {
                    vlSelfRef.tb_sfu_sign_expo__DOT__sign_out 
                        = (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                           >> 0x0000001fU);
                    vlSelfRef.tb_sfu_sign_expo__DOT__exp_out 
                        = (0x000000ffU & ((IData)(0xfdU) 
                                          - (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                             >> 0x00000017U)));
                    vlSelfRef.tb_sfu_sign_expo__DOT__is_normal = 1U;
                    ++(vlSymsp->__Vcoverage[206]);
                }
                if ((IData)((0U == (0x7fffffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand)))) {
                    ++(vlSymsp->__Vcoverage[207]);
                }
                if ((0U != (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand))) {
                    ++(vlSymsp->__Vcoverage[208]);
                }
                if ((0U != (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                           >> 0x00000017U)))) {
                    ++(vlSymsp->__Vcoverage[209]);
                }
            }
            if ((IData)((0x7f800000U == (0x7fffffffU 
                                         & vlSelfRef.tb_sfu_sign_expo__DOT__operand)))) {
                ++(vlSymsp->__Vcoverage[211]);
            }
            if ((0U != (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand))) {
                ++(vlSymsp->__Vcoverage[212]);
            }
            if ((0xffU != (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                          >> 0x00000017U)))) {
                ++(vlSymsp->__Vcoverage[213]);
            }
        }
        ++(vlSymsp->__Vcoverage[218]);
    } else {
        ++(vlSymsp->__Vcoverage[219]);
    }
    if ((IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                 & (0U != (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand))))) {
        ++(vlSymsp->__Vcoverage[215]);
    }
    if ((0U == (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand))) {
        ++(vlSymsp->__Vcoverage[216]);
    }
    if ((0xffU != (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                  >> 0x00000017U)))) {
        ++(vlSymsp->__Vcoverage[217]);
    }
    ++(vlSymsp->__Vcoverage[220]);
    if ((vlSelfRef.tb_sfu_sign_expo__DOT__mant_out 
         ^ vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__mant_out)) {
        VL_COV_TOGGLE_CHG_ST_I(23, vlSymsp->__Vcoverage + 88, vlSelfRef.tb_sfu_sign_expo__DOT__mant_out, vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__mant_out);
        vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__mant_out 
            = vlSelfRef.tb_sfu_sign_expo__DOT__mant_out;
    }
    if (((IData)(vlSelfRef.tb_sfu_sign_expo__DOT__is_normal) 
         ^ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__is_normal))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 134, vlSelfRef.tb_sfu_sign_expo__DOT__is_normal, vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__is_normal);
        vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__is_normal 
            = vlSelfRef.tb_sfu_sign_expo__DOT__is_normal;
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(4, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((1U != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op)) 
                                   | (~ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: sfu_sign_expo_assertions.sv:18: Assertion failed in %m: RSQRT produced negative value\n",3, 'M',vlSymsp->name(),"tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("verify/assertions/sfu/sfu_sign_expo_assertions.sv", 18, "");
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out)))) {
        ++(vlSymsp->__Vcoverage[225]);
    }
    if ((1U != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op))) {
        ++(vlSymsp->__Vcoverage[226]);
    }
    if (((1U == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op)) 
         & (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out))) {
        ++(vlSymsp->__Vcoverage[227]);
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(4, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((3U != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op)) 
                                   | (~ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: sfu_sign_expo_assertions.sv:21: Assertion failed in %m: EX2 produced negative value\n",3, 'M',vlSymsp->name(),"tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("verify/assertions/sfu/sfu_sign_expo_assertions.sv", 21, "");
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out)))) {
        ++(vlSymsp->__Vcoverage[228]);
    }
    if ((3U != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op))) {
        ++(vlSymsp->__Vcoverage[229]);
    }
    if (((3U == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op)) 
         & (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out))) {
        ++(vlSymsp->__Vcoverage[230]);
    }
    if (((IData)(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out) 
         ^ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__sign_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 70, vlSelfRef.tb_sfu_sign_expo__DOT__sign_out, vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__sign_out);
        vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__sign_out 
            = vlSelfRef.tb_sfu_sign_expo__DOT__sign_out;
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(4, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(((0x7f800000U 
                                                == 
                                                (0x7f800000U 
                                                 & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                                               & (0U 
                                                  != 
                                                  (0x007fffffU 
                                                   & vlSelfRef.tb_sfu_sign_expo__DOT__operand))))) 
                                   | (0xffU == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)))))))) {
            VL_WRITEF_NX("[%0t] %%Error: sfu_sign_expo_assertions.sv:27: Assertion failed in %m: Wrong output after NaN input\n",3, 'M',vlSymsp->name(),"tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("verify/assertions/sfu/sfu_sign_expo_assertions.sv", 27, "");
        }
    }
    if ((0xffU == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out))) {
        ++(vlSymsp->__Vcoverage[236]);
    }
    if ((1U & (~ (IData)(((0x7f800000U == (0x7f800000U 
                                           & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                          & (0U != (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand))))))) {
        ++(vlSymsp->__Vcoverage[237]);
    }
    if ((IData)(((0x7f800000U == (0x7f800000U & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                 & ((0U != (0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                    & (0xffU != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)))))) {
        ++(vlSymsp->__Vcoverage[238]);
    }
    if (((IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out) 
         ^ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__exp_out))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 72, vlSelfRef.tb_sfu_sign_expo__DOT__exp_out, vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__exp_out);
        vlSelfRef.tb_sfu_sign_expo__DOT____Vtogcov__exp_out 
            = vlSelfRef.tb_sfu_sign_expo__DOT__exp_out;
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(4, 1)) {
        if (VL_UNLIKELY(((1U & (~ ((~ (IData)(((0U 
                                                == 
                                                (0x7fffffffU 
                                                 & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                                               & (3U 
                                                  != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op))))) 
                                   | ((0U == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)) 
                                      | (0xffU == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: sfu_sign_expo_assertions.sv:24: Assertion failed in %m: Wrong output after zero input\n",3, 'M',vlSymsp->name(),"tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1));
            VL_STOP_MT("verify/assertions/sfu/sfu_sign_expo_assertions.sv", 24, "");
        }
    }
    if ((0xffU == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out))) {
        ++(vlSymsp->__Vcoverage[231]);
    }
    if ((0U == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out))) {
        ++(vlSymsp->__Vcoverage[232]);
    }
    if ((3U == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op))) {
        ++(vlSymsp->__Vcoverage[233]);
    }
    if ((1U & (~ (IData)((0U == (0x7fffffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand)))))) {
        ++(vlSymsp->__Vcoverage[234]);
    }
    if ((IData)(((0U == (0x7fffffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                 & (((3U != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op)) 
                     & (0U != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out))) 
                    & (0xffU != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)))))) {
        ++(vlSymsp->__Vcoverage[235]);
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(4, 1)) {
        if (VL_UNLIKELY(((1U & (~ (((0U != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op)) 
                                    | (~ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__is_normal))) 
                                   | (((0x7fU >= (0x000000ffU 
                                                  & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                                     >> 0x00000017U))) 
                                       | (0x7fU > (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out))) 
                                      & ((0x7fU <= 
                                          (0x000000ffU 
                                           & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                              >> 0x00000017U))) 
                                         | (0x7fU < (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)))))))))) {
            VL_WRITEF_NX("[%0t] %%Error: sfu_sign_expo_assertions.sv:32: Assertion failed in %m: RCP exp wrong direction: exp_in=%0d exp_out=%0d\n",5, 'M',vlSymsp->name(),"tb_sfu_sign_expo.u_sfu_sign_expo.u_sfu_sign_expo_props", 'T',-12
                         , '#',64,VL_TIME_UNITED_Q(1)
                         , '#',8,(0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                                 >> 0x00000017U))
                         , '#',8,(IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out));
            VL_STOP_MT("verify/assertions/sfu/sfu_sign_expo_assertions.sv", 32, "");
        }
    }
    if (((0x7fU > (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)) 
         & (0x7fU < (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)))) {
        ++(vlSymsp->__Vcoverage[239]);
    }
    if (((0x7fU > (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)) 
         & (0x7fU <= (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                     >> 0x00000017U))))) {
        ++(vlSymsp->__Vcoverage[240]);
    }
    if (((0x7fU >= (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                   >> 0x00000017U))) 
         & (0x7fU < (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)))) {
        ++(vlSymsp->__Vcoverage[241]);
    }
    if (((0x7fU >= (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                   >> 0x00000017U))) 
         & (0x7fU <= (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                     >> 0x00000017U))))) {
        ++(vlSymsp->__Vcoverage[242]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__is_normal)))) {
        ++(vlSymsp->__Vcoverage[243]);
    }
    if ((0U != (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op))) {
        ++(vlSymsp->__Vcoverage[244]);
    }
    if (((((0U == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op)) 
           & (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__is_normal)) 
          & (0x7fU > (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                     >> 0x00000017U)))) 
         & (0x7fU >= (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)))) {
        ++(vlSymsp->__Vcoverage[245]);
    }
    if (((((0U == (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__op)) 
           & (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__is_normal)) 
          & (0x7fU < (0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                     >> 0x00000017U)))) 
         & (0x7fU <= (IData)(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out)))) {
        ++(vlSymsp->__Vcoverage[246]);
    }
}

void Vtb_sfu_sign_expo___024root___eval_act(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_act\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_sfu_sign_expo___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_sfu_sign_expo___024root___eval_nba(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_nba\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_sfu_sign_expo___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_sfu_sign_expo___024root___timing_resume(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___timing_resume\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_sfu_sign_expo___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_sfu_sign_expo___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_sfu_sign_expo___024root___eval_phase__act(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_phase__act\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_sfu_sign_expo___024root___eval_triggers_vec__act(vlSelf);
    Vtb_sfu_sign_expo___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_sfu_sign_expo___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_sfu_sign_expo___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_sfu_sign_expo___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_sfu_sign_expo___024root___timing_resume(vlSelf);
        Vtb_sfu_sign_expo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_sfu_sign_expo___024root___eval_phase__inact(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_phase__inact\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("verify/tb/sfu/tb_sfu_sign_expo.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_sfu_sign_expo___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_sfu_sign_expo___024root___eval_phase__nba(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_phase__nba\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_sfu_sign_expo___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_sfu_sign_expo___024root___eval_nba(vlSelf);
        Vtb_sfu_sign_expo___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_sfu_sign_expo___024root___eval(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_sfu_sign_expo___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verify/tb/sfu/tb_sfu_sign_expo.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("verify/tb/sfu/tb_sfu_sign_expo.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_sfu_sign_expo___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("verify/tb/sfu/tb_sfu_sign_expo.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_sfu_sign_expo___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_sfu_sign_expo___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_sfu_sign_expo___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_sfu_sign_expo___024root___eval_debug_assertions(Vtb_sfu_sign_expo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root___eval_debug_assertions\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
