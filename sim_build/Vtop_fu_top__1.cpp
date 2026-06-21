// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_haa2ba6c8_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hf0ca261b_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h743c250b_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hc5fa8ef7_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hc079a40c_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_hf339a501_0;

void Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.fu_sel = vlSymsp->TOP.gpu__DOT__fu_sel;
    vlSelfRef.alu_op = vlSymsp->TOP.gpu__DOT__alu_op;
    vlSelfRef.fpu_op = vlSymsp->TOP.gpu__DOT__fpu_op;
    vlSelfRef.u_alu_top__DOT__alu_op = vlSelfRef.alu_op;
    vlSelfRef.u_fpu_top__DOT__fpu_op = vlSelfRef.fpu_op;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op 
        = vlSelfRef.u_alu_top__DOT__alu_op;
    __Vtableidx6 = vlSelfRef.u_alu_top__DOT__alu_op;
    vlSelfRef.u_alu_top__DOT__sub = Vtop__ConstPool__TABLE_haa2ba6c8_0
        [__Vtableidx6];
    vlSelfRef.u_alu_top__DOT__cmp_op = Vtop__ConstPool__TABLE_hf0ca261b_0
        [__Vtableidx6];
    vlSelfRef.u_alu_top__DOT__logic_op = Vtop__ConstPool__TABLE_h743c250b_0
        [__Vtableidx6];
    vlSelfRef.u_alu_top__DOT__shift_op = Vtop__ConstPool__TABLE_hc5fa8ef7_0
        [__Vtableidx6];
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op 
        = vlSelfRef.u_fpu_top__DOT__fpu_op;
    __Vtableidx5 = vlSelfRef.u_fpu_top__DOT__fpu_op;
    vlSelfRef.u_fpu_top__DOT__add_op = Vtop__ConstPool__TABLE_haa2ba6c8_0
        [__Vtableidx5];
    vlSelfRef.u_fpu_top__DOT__cmp_op = Vtop__ConstPool__TABLE_hc079a40c_0
        [__Vtableidx5];
    vlSelfRef.u_fpu_top__DOT__cvt_op = Vtop__ConstPool__TABLE_hf339a501_0
        [__Vtableidx5];
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op 
        = vlSelfRef.u_alu_top__DOT__cmp_op;
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op 
        = vlSelfRef.u_alu_top__DOT__logic_op;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op 
        = vlSelfRef.u_alu_top__DOT__shift_op;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__sub 
        = vlSelfRef.u_alu_top__DOT__sub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op 
        = vlSelfRef.u_fpu_top__DOT__cmp_op;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op 
        = vlSelfRef.u_fpu_top__DOT__cvt_op;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op 
        = vlSelfRef.u_fpu_top__DOT__add_op;
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                                << 1U) | (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: alu_logic_integer.sv:9: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"gpu.lane[2].u_fu_top.u_alu_top.u_logic_module", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op));
                VL_STOP_MT("rtl/execute/FU/Integer/alu_logic_integer.sv", 9, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                                << 1U) | (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: alu_shift_integer.sv:13: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"gpu.lane[2].u_fu_top.u_alu_top.u_shift_module", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op));
                VL_STOP_MT("rtl/execute/FU/Integer/alu_shift_integer.sv", 13, "");
            }
        }
    }
}

void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.op_b = vlSymsp->TOP.gpu__DOT__op_b[2U];
    vlSelfRef.u_alu_top__DOT__op_b = vlSelfRef.op_b;
    vlSelfRef.u_fpu_top__DOT__operand_b = vlSelfRef.op_b;
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b 
        = vlSelfRef.u_fpu_top__DOT__operand_b;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range 
        = (0x0000001fU & vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__b);
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b_buf 
        = ((IData)(vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__sub)
            ? (~ vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b)
            : vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b);
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero 
        = (0U == (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b 
        = (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b 
           >> 0x0000001fU);
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b 
        = (0x000000ffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b 
                          >> 0x00000017U));
    vlSelfRef.u_fpu_top__DOT__sign_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b 
        = (0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b 
        = ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero)) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b 
        = (0x00800000U | (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b));
    if ((0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b = 0U;
    }
    vlSelfRef.u_fpu_top__DOT__exp_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b 
        = vlSelfRef.u_fpu_top__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b 
        = vlSelfRef.u_fpu_top__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b 
        = vlSelfRef.u_fpu_top__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b 
        = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b) 
            << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b) 
                                << 0x00000017U) | (0x007fffffU 
                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b)));
    vlSelfRef.u_fpu_top__DOT__mant_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b 
        = vlSelfRef.u_fpu_top__DOT__exp_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b 
        = vlSelfRef.u_fpu_top__DOT__exp_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff 
        = (1U & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op)
                  ? (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b))
                  : (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b)));
    vlSelfRef.u_fpu_top__DOT__flushed_operand_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b 
        = vlSelfRef.u_fpu_top__DOT__mant_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b 
        = vlSelfRef.u_fpu_top__DOT__mant_b;
}

void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__1(Vtop_fu_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.op_a = vlSymsp->TOP.gpu__DOT__op_a[2U];
    vlSelfRef.u_alu_top__DOT__op_a = vlSelfRef.op_a;
    vlSelfRef.u_fpu_top__DOT__operand_a = vlSelfRef.op_a;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
        = vlSelfRef.u_fpu_top__DOT__operand_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a 
        = vlSelfRef.u_fpu_top__DOT__operand_a;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__result 
        = (vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__a 
           + (vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b_buf 
              + (IData)(vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__sub)));
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__result 
        = ((2U & (IData)(vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op))
            ? ((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op))
                ? (vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
                   != vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b)
                : (vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
                   < vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b))
            : ((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op))
                ? VL_LTS_III(32, vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a, vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b)
                : (vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
                   == vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b)));
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__result 
        = ((0U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op))
            ? (vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
               & vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b)
            : ((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op))
                ? (vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
                   | vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b)
                : ((vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
                    ^ vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b) 
                   & (- (IData)((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)))))));
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__result 
        = ((0U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op))
            ? (vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a 
               << (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range))
            : ((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op))
                ? (vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a 
                   >> (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range))
                : (VL_SHIFTRS_III(32,32,5, vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a, (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range)) 
                   & (- (IData)((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)))))));
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_ss 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b));
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_su 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                                 (vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a 
                                                                  >> 0x0000001fU))) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a)))), 
                      VL_EXTENDS_QQ(64,33, (QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b))));
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_uu 
        = ((QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b)) 
           * (QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero 
        = (0U == (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a 
        = (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a 
           >> 0x0000001fU);
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a 
        = (0x000000ffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a 
                          >> 0x00000017U));
    vlSelfRef.u_alu_top__DOT__addsub_result = vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__compare_result = vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__logic_result = vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__shift_result = vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__mul_res 
        = (((4U & (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op))
             ? (((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op))
                  ? (IData)((vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_uu 
                             >> 0x00000020U)) : (IData)(
                                                        (vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_su 
                                                         >> 0x00000020U))) 
                & (- (IData)((1U & (~ ((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op) 
                                       >> 1U)))))) : 
            (((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op))
               ? (IData)((vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_ss 
                          >> 0x00000020U)) : (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_ss)) 
             & (- (IData)((1U & ((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op) 
                                 >> 1U)))))) & (- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op) 
                                                               >> 3U))))));
    vlSelfRef.u_fpu_top__DOT__sign_a = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a 
        = (0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a 
        = ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero)) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a 
        = (0x00800000U | (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a));
    if ((0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a = 0U;
    }
    vlSelfRef.u_fpu_top__DOT__exp_a = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a;
    vlSelfRef.u_alu_top__DOT__mul_result = vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__mul_res;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a 
        = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
            << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a) 
                                << 0x00000017U) | (0x007fffffU 
                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a)));
    vlSelfRef.u_fpu_top__DOT__mant_a = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp = vlSelfRef.u_fpu_top__DOT__exp_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a 
        = vlSelfRef.u_fpu_top__DOT__exp_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a 
        = vlSelfRef.u_fpu_top__DOT__exp_a;
    vlSelfRef.u_alu_top__DOT__result = ((8U & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                         ? ((4U & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                             ? (vlSelfRef.u_alu_top__DOT__compare_result 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.u_alu_top__DOT__alu_op) 
                                                                  >> 1U))))))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                 ? vlSelfRef.u_alu_top__DOT__shift_result
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                  ? vlSelfRef.u_alu_top__DOT__shift_result
                                                  : vlSelfRef.u_alu_top__DOT__logic_result)))
                                         : ((4U & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                 ? vlSelfRef.u_alu_top__DOT__logic_result
                                                 : vlSelfRef.u_alu_top__DOT__mul_result)
                                             : ((2U 
                                                 & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                 ? vlSelfRef.u_alu_top__DOT__mul_result
                                                 : vlSelfRef.u_alu_top__DOT__addsub_result)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a) 
           ^ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b));
    if ((8U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((4U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0xfafafafaU;
        } else if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0xfafafafaU;
        } else if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0xfafafafaU;
        } else {
            if ((0U != vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
                if ((0U != vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                }
                vlSelfRef.u_fpu_top__DOT__spec_vld 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
                vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)))) {
                        if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)))) {
                            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                        }
                    }
                }
                vlSelfRef.u_fpu_top__DOT__spec_vld 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
                vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                            ? 0U : 0xffffffffU);
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)))) {
                        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                        ? 0x80000000U : 0x7fffffffU);
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                                          | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                            }
                        }
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                 & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                        & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                       << 0x0000001fU);
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                     & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = (0x7f800000U | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                           & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                          << 0x0000001fU));
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                            ? vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b
                            : 0x7f800000U);
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)
                            ? vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a
                            : 0x7f800000U);
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                                          | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                            }
                        }
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                 & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                       << 0x0000001fU);
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                     & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = (0x7f800000U | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                           | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                          << 0x0000001fU));
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                            ? 0xff800000U : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b);
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)
                            ? 0xff800000U : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a);
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                          | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
                if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                              | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                  | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                 | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))
                        ? 0x7fc00000U : (0x7f800000U 
                                         | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                             ^ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                            << 0x0000001fU)));
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                        ^ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                       << 0x0000001fU);
            }
        }
    } else if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                              | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                  & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                        }
                    }
                }
            }
        }
        vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
        vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
        if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
             | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU)));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)
                    ? (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU))
                    : (0x7f800000U | ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                      << 0x0000001fU)));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? 0U : ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                            << 0x0000001fU));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)
                    ? (((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                        << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b) 
                                            << 0x00000017U) 
                                           | (0x007fffffU 
                                              & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b)))
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a);
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                              | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                  & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                        }
                    }
                }
            }
        }
        vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
        vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
        if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
             | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU))
                    : 0x7fc00000U);
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)
                    ? (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU))
                    : (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b) 
                                      << 0x0000001fU)));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                       << 0x0000001fU) : 0U);
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)
                    ? vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a);
        }
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant 
        = vlSelfRef.u_fpu_top__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a 
        = vlSelfRef.u_fpu_top__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a 
        = vlSelfRef.u_fpu_top__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true 
        = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp) 
                          - (IData)(0x7fU)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp 
        = (0x000003ffU & (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b) 
                           + (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a)) 
                          - (IData)(0x007fU)));
    if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a) 
         >= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta 
            = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a) 
                              - (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext 
            = (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b 
               << 2U);
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
            = ((0x1aU <= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta))
                ? 0U : VL_SHIFTR_III(26,26,8, vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted 
            = (0x00ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
                              >> 2U));
        vlSelfRef.__Vfunc_get_grs__12__mant_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted;
        vlSelfRef.__Vfunc_get_grs__12__mant = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b;
        vlSelfRef.__Vfunc_get_grs__12__exp_delta = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta;
        vlSelfRef.__Vfunc_get_grs__12__sticky_mask 
            = ((2U >= (IData)(vlSelfRef.__Vfunc_get_grs__12__exp_delta))
                ? 0U : ((0x1aU <= (IData)(vlSelfRef.__Vfunc_get_grs__12__exp_delta))
                         ? 0x00ffffffU : VL_SHIFTR_III(24,24,32, 0x00ffffffU, 
                                                       ((IData)(0x0000001aU) 
                                                        - (IData)(vlSelfRef.__Vfunc_get_grs__12__exp_delta)))));
        vlSelfRef.__Vfunc_get_grs__12__s_vec = (vlSelfRef.__Vfunc_get_grs__12__mant 
                                                & vlSelfRef.__Vfunc_get_grs__12__sticky_mask);
        vlSelfRef.__Vfunc_get_grs__12__result = ((0x06000000U 
                                                  & (vlSelfRef.__Vfunc_get_grs__12__mant_shifted 
                                                     << 0x00000019U)) 
                                                 | (((0U 
                                                      != vlSelfRef.__Vfunc_get_grs__12__s_vec) 
                                                     << 0x00000018U) 
                                                    | vlSelfRef.__Vfunc_get_grs__12__s_vec));
        vlSelfRef.__Vfunc_get_grs__12__Vfuncout = vlSelfRef.__Vfunc_get_grs__12__result;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__flags 
            = vlSelfRef.__Vfunc_get_grs__12__Vfuncout;
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta 
            = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b) 
                              - (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext 
            = (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a 
               << 2U);
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
            = ((0x1aU <= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta))
                ? 0U : VL_SHIFTR_III(26,26,8, vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted 
            = (0x00ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
                              >> 2U));
        vlSelfRef.__Vfunc_get_grs__13__mant_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted;
        vlSelfRef.__Vfunc_get_grs__13__mant = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a;
        vlSelfRef.__Vfunc_get_grs__13__exp_delta = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta;
        vlSelfRef.__Vfunc_get_grs__13__sticky_mask 
            = ((2U >= (IData)(vlSelfRef.__Vfunc_get_grs__13__exp_delta))
                ? 0U : ((0x1aU <= (IData)(vlSelfRef.__Vfunc_get_grs__13__exp_delta))
                         ? 0x00ffffffU : VL_SHIFTR_III(24,24,32, 0x00ffffffU, 
                                                       ((IData)(0x0000001aU) 
                                                        - (IData)(vlSelfRef.__Vfunc_get_grs__13__exp_delta)))));
        vlSelfRef.__Vfunc_get_grs__13__s_vec = (vlSelfRef.__Vfunc_get_grs__13__mant 
                                                & vlSelfRef.__Vfunc_get_grs__13__sticky_mask);
        vlSelfRef.__Vfunc_get_grs__13__result = ((0x06000000U 
                                                  & (vlSelfRef.__Vfunc_get_grs__13__mant_shifted 
                                                     << 0x00000019U)) 
                                                 | (((0U 
                                                      != vlSelfRef.__Vfunc_get_grs__13__s_vec) 
                                                     << 0x00000018U) 
                                                    | vlSelfRef.__Vfunc_get_grs__13__s_vec));
        vlSelfRef.__Vfunc_get_grs__13__Vfuncout = vlSelfRef.__Vfunc_get_grs__13__result;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__flags 
            = vlSelfRef.__Vfunc_get_grs__13__Vfuncout;
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a) 
           < (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b));
    vlSelfRef.result_alu = vlSelfRef.u_alu_top__DOT__result;
    vlSelfRef.u_fpu_top__DOT__sign_res_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res;
    vlSelfRef.u_fpu_top__DOT__spec_out = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp 
        = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
        = (0x0000ffffffffffffULL & ((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b)) 
                                    * (QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a))));
    vlSelfRef.u_fpu_top__DOT__exp_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted;
    vlSelfRef.u_fpu_top__DOT__shifted = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op) 
                  >> 1U)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft 
            = ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))
                ? (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)))
                    ? 0U : ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                             & VL_GTES_III(32, 0x00000017U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                             ? VL_SHIFTR_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                             ((IData)(0x00000017U) 
                                              - VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                             : ((VL_LTS_III(32, 0x00000017U, 
                                            VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                                 & VL_GTES_III(32, 0x0000001fU, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                                 ? VL_SHIFTL_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                                 (VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)) 
                                                  - (IData)(0x00000017U)))
                                 : 0xffffffffU))) : 
               (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)))
                 ? 0U : ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                          & VL_GTES_III(32, 0x00000017U, 
                                        VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                          ? VL_SHIFTR_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                          ((IData)(0x00000017U) 
                                           - VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                          : ((VL_LTS_III(32, 0x00000017U, 
                                         VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                              & VL_GTES_III(32, 0x0000001eU, 
                                            VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                              ? VL_SHIFTL_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                              (VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)) 
                                               - (IData)(0x00000017U)))
                              : 0x7fffffffU))));
    }
    if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))) {
        if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))) {
            if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a)) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp = 0U;
            } else {
                vlSelfRef.__Vfunc_lzd32_23__10__val 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a;
                vlSelfRef.__Vfunc_lzd32_23__10__Vfuncout 
                    = (((((((((0x80000000U == (0x80000000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__10__val)) 
                              | (0x40000000U == (0xc0000000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                             | (0x20000000U == (0xe0000000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                            | (0x10000000U == (0xf0000000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                           | (0x08000000U == (0xf8000000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                          | (0x04000000U == (0xfc000000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                         | (0x02000000U == (0xfe000000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                        | (0x01000000U == (0xff000000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__10__val)))
                        ? ((0x80000000U == (0x80000000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__10__val))
                            ? 8U : ((0x40000000U == 
                                     (0xc0000000U & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                     ? 7U : ((0x20000000U 
                                              == (0xe0000000U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                              ? 6U : 
                                             ((0x10000000U 
                                               == (0xf0000000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                               ? 5U
                                               : ((0x08000000U 
                                                   == 
                                                   (0xf8000000U 
                                                    & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                   ? 4U
                                                   : 
                                                  ((0x04000000U 
                                                    == 
                                                    (0xfc000000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                    ? 3U
                                                    : 
                                                   ((0x02000000U 
                                                     == 
                                                     (0xfe000000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                     ? 2U
                                                     : 1U)))))))
                        : (((((((((0x00800000U == (0xff800000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__10__val)) 
                                  | (0x00400000U == 
                                     (0xffc00000U & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                 | (0x00200000U == 
                                    (0xffe00000U & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                | (0x00100000U == (0xfff00000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                               | (0x00080000U == (0xfff80000U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                              | (0x00040000U == (0xfffc0000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                             | (0x00020000U == (0xfffe0000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                            | (0x00010000U == (0xffff0000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__10__val)))
                            ? ((0x00800000U == (0xff800000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                ? 0U : ((0x00400000U 
                                         == (0xffc00000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                         ? 0x21U : 
                                        ((0x00200000U 
                                          == (0xffe00000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                          ? 0x22U : 
                                         ((0x00100000U 
                                           == (0xfff00000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                           ? 0x23U : 
                                          ((0x00080000U 
                                            == (0xfff80000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                            ? 0x24U
                                            : ((0x00040000U 
                                                == 
                                                (0xfffc0000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                ? 0x25U
                                                : (
                                                   (0x00020000U 
                                                    == 
                                                    (0xfffe0000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                    ? 0x26U
                                                    : 0x27U)))))))
                            : (((((((((0x00008000U 
                                       == (0xffff8000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__10__val)) 
                                      | (0x00004000U 
                                         == (0xffffc000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                     | (0x00002000U 
                                        == (0xffffe000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                    | (0x00001000U 
                                       == (0xfffff000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                   | (0x00000800U == 
                                      (0xfffff800U 
                                       & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                  | (0x00000400U == 
                                     (0xfffffc00U & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                 | (0x00000200U == 
                                    (0xfffffe00U & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                | (0x00000100U == (0xffffff00U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__10__val)))
                                ? ((0x00008000U == 
                                    (0xffff8000U & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                    ? 0x28U : ((0x00004000U 
                                                == 
                                                (0xffffc000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                ? 0x29U
                                                : (
                                                   (0x00002000U 
                                                    == 
                                                    (0xffffe000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                    ? 0x2aU
                                                    : 
                                                   ((0x00001000U 
                                                     == 
                                                     (0xfffff000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                     ? 0x2bU
                                                     : 
                                                    ((0x00000800U 
                                                      == 
                                                      (0xfffff800U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                      ? 0x2cU
                                                      : 
                                                     ((0x00000400U 
                                                       == 
                                                       (0xfffffc00U 
                                                        & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                       ? 0x2dU
                                                       : 
                                                      ((0x00000200U 
                                                        == 
                                                        (0xfffffe00U 
                                                         & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                        ? 0x2eU
                                                        : 0x2fU)))))))
                                : (((((((((0x00000080U 
                                           == (0xffffff80U 
                                               & vlSelfRef.__Vfunc_lzd32_23__10__val)) 
                                          | (0x00000040U 
                                             == (0xffffffc0U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                         | (0x00000020U 
                                            == (0xffffffe0U 
                                                & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                        | (0x00000010U 
                                           == (0xfffffff0U 
                                               & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                       | (8U == (0xfffffff8U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                      | (4U == (0xfffffffcU 
                                                & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                     | (2U == (0xfffffffeU 
                                               & vlSelfRef.__Vfunc_lzd32_23__10__val))) 
                                    | (1U == vlSelfRef.__Vfunc_lzd32_23__10__val))
                                    ? ((0x00000080U 
                                        == (0xffffff80U 
                                            & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                        ? 0x30U : (
                                                   (0x00000040U 
                                                    == 
                                                    (0xffffffc0U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                    ? 0x31U
                                                    : 
                                                   ((0x00000020U 
                                                     == 
                                                     (0xffffffe0U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                     ? 0x32U
                                                     : 
                                                    ((0x00000010U 
                                                      == 
                                                      (0xfffffff0U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                      ? 0x33U
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0xfffffff8U 
                                                        & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                       ? 0x34U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0xfffffffcU 
                                                         & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                        ? 0x35U
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0xfffffffeU 
                                                          & vlSelfRef.__Vfunc_lzd32_23__10__val))
                                                         ? 0x36U
                                                         : 0x37U)))))))
                                    : 0U))));
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt 
                    = vlSelfRef.__Vfunc_lzd32_23__10__Vfuncout;
                if ((0x00000020U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                        = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
                           << (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                        = (0x000000ffU & ((IData)(0x96U) 
                                          - (0x0000001fU 
                                             & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
                } else {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                        = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
                           >> (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                        = (0x000000ffU & ((IData)(0x96U) 
                                          + (0x0000001fU 
                                             & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
                }
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt 
                    = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp);
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt) 
                        << 0x00000017U) | vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt);
            }
        } else if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a)) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp = 0U;
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt 
                = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
                   >> 0x1fU);
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt)
                    ? (- vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a)
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a);
            vlSelfRef.__Vfunc_lzd32_23__11__val = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec;
            vlSelfRef.__Vfunc_lzd32_23__11__Vfuncout 
                = (((((((((0x80000000U == (0x80000000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__11__val)) 
                          | (0x40000000U == (0xc0000000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                         | (0x20000000U == (0xe0000000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                        | (0x10000000U == (0xf0000000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                       | (0x08000000U == (0xf8000000U 
                                          & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                      | (0x04000000U == (0xfc000000U 
                                         & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                     | (0x02000000U == (0xfe000000U 
                                        & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                    | (0x01000000U == (0xff000000U 
                                       & vlSelfRef.__Vfunc_lzd32_23__11__val)))
                    ? ((0x80000000U == (0x80000000U 
                                        & vlSelfRef.__Vfunc_lzd32_23__11__val))
                        ? 8U : ((0x40000000U == (0xc0000000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                 ? 7U : ((0x20000000U 
                                          == (0xe0000000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                          ? 6U : ((0x10000000U 
                                                   == 
                                                   (0xf0000000U 
                                                    & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                   ? 5U
                                                   : 
                                                  ((0x08000000U 
                                                    == 
                                                    (0xf8000000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                    ? 4U
                                                    : 
                                                   ((0x04000000U 
                                                     == 
                                                     (0xfc000000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                     ? 3U
                                                     : 
                                                    ((0x02000000U 
                                                      == 
                                                      (0xfe000000U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                      ? 2U
                                                      : 1U)))))))
                    : (((((((((0x00800000U == (0xff800000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__11__val)) 
                              | (0x00400000U == (0xffc00000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                             | (0x00200000U == (0xffe00000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                            | (0x00100000U == (0xfff00000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                           | (0x00080000U == (0xfff80000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                          | (0x00040000U == (0xfffc0000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                         | (0x00020000U == (0xfffe0000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                        | (0x00010000U == (0xffff0000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__11__val)))
                        ? ((0x00800000U == (0xff800000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__11__val))
                            ? 0U : ((0x00400000U == 
                                     (0xffc00000U & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                     ? 0x21U : ((0x00200000U 
                                                 == 
                                                 (0xffe00000U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                 ? 0x22U
                                                 : 
                                                ((0x00100000U 
                                                  == 
                                                  (0xfff00000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                  ? 0x23U
                                                  : 
                                                 ((0x00080000U 
                                                   == 
                                                   (0xfff80000U 
                                                    & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                   ? 0x24U
                                                   : 
                                                  ((0x00040000U 
                                                    == 
                                                    (0xfffc0000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                    ? 0x25U
                                                    : 
                                                   ((0x00020000U 
                                                     == 
                                                     (0xfffe0000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                     ? 0x26U
                                                     : 0x27U)))))))
                        : (((((((((0x00008000U == (0xffff8000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__11__val)) 
                                  | (0x00004000U == 
                                     (0xffffc000U & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                                 | (0x00002000U == 
                                    (0xffffe000U & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                                | (0x00001000U == (0xfffff000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                               | (0x00000800U == (0xfffff800U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                              | (0x00000400U == (0xfffffc00U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                             | (0x00000200U == (0xfffffe00U 
                                                & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                            | (0x00000100U == (0xffffff00U 
                                               & vlSelfRef.__Vfunc_lzd32_23__11__val)))
                            ? ((0x00008000U == (0xffff8000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                ? 0x28U : ((0x00004000U 
                                            == (0xffffc000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                            ? 0x29U
                                            : ((0x00002000U 
                                                == 
                                                (0xffffe000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                ? 0x2aU
                                                : (
                                                   (0x00001000U 
                                                    == 
                                                    (0xfffff000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                    ? 0x2bU
                                                    : 
                                                   ((0x00000800U 
                                                     == 
                                                     (0xfffff800U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                     ? 0x2cU
                                                     : 
                                                    ((0x00000400U 
                                                      == 
                                                      (0xfffffc00U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                      ? 0x2dU
                                                      : 
                                                     ((0x00000200U 
                                                       == 
                                                       (0xfffffe00U 
                                                        & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                       ? 0x2eU
                                                       : 0x2fU)))))))
                            : (((((((((0x00000080U 
                                       == (0xffffff80U 
                                           & vlSelfRef.__Vfunc_lzd32_23__11__val)) 
                                      | (0x00000040U 
                                         == (0xffffffc0U 
                                             & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                                     | (0x00000020U 
                                        == (0xffffffe0U 
                                            & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                                    | (0x00000010U 
                                       == (0xfffffff0U 
                                           & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                                   | (8U == (0xfffffff8U 
                                             & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                                  | (4U == (0xfffffffcU 
                                            & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                                 | (2U == (0xfffffffeU 
                                           & vlSelfRef.__Vfunc_lzd32_23__11__val))) 
                                | (1U == vlSelfRef.__Vfunc_lzd32_23__11__val))
                                ? ((0x00000080U == 
                                    (0xffffff80U & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                    ? 0x30U : ((0x00000040U 
                                                == 
                                                (0xffffffc0U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                ? 0x31U
                                                : (
                                                   (0x00000020U 
                                                    == 
                                                    (0xffffffe0U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                    ? 0x32U
                                                    : 
                                                   ((0x00000010U 
                                                     == 
                                                     (0xfffffff0U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                     ? 0x33U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfffffff8U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                      ? 0x34U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffffffcU 
                                                        & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                       ? 0x35U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffffffeU 
                                                         & vlSelfRef.__Vfunc_lzd32_23__11__val))
                                                        ? 0x36U
                                                        : 0x37U)))))))
                                : 0U))));
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt 
                = vlSelfRef.__Vfunc_lzd32_23__11__Vfuncout;
            if ((0x00000020U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                    = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec 
                       << (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                    = (0x000000ffU & ((IData)(0x96U) 
                                      - (0x0000001fU 
                                         & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
            } else {
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                    = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec 
                       >> (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                    = (0x000000ffU & ((IData)(0x96U) 
                                      + (0x0000001fU 
                                         & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
            }
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt 
                = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp);
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt) 
                    << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt) 
                                        << 0x00000017U) 
                                       | vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt));
        }
        vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__result 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp;
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__result 
            = ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))
                ? (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign))))))
                : ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign)
                    ? (VL_LTS_III(32, 0x0000001eU, 
                                  VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)))
                        ? 0x80000000U : (- vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft))
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft));
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm 
        = (0x000003ffU & ((1U & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                         >> 0x0000002fU)))
                           ? ((IData)(1U) + VL_EXTENDS_II(10,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp)))
                           : VL_EXTENDS_II(10,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp))));
    vlSelfRef.u_fpu_top__DOT__mant_a_shifted = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted;
    vlSelfRef.u_fpu_top__DOT__mant_b_shifted = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted;
    vlSelfRef.u_fpu_top__DOT__flags_out_shifter = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__flags;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted 
        = vlSelfRef.u_fpu_top__DOT__exp_addsub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted 
        = vlSelfRef.u_fpu_top__DOT__shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted 
        = vlSelfRef.u_fpu_top__DOT__shifted;
    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul = 0U;
    } else if (VL_LTES_III(32, 0x000000ffU, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res = 0x000000ffU;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul = 0U;
    } else if ((1U & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                              >> 0x2fU)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res 
            = (0x000000ffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (((6U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                   >> 0x00000016U)) 
                          << 1U)) | (0U != (0x003fffffU 
                                            & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)))) 
                  << 0x00000018U));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (0x003fffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul 
            = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                      >> 0x18U)));
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res 
            = (0x000000ffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (((6U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                   >> 0x00000015U)) 
                          << 1U)) | (0U != (0x001fffffU 
                                            & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)))) 
                  << 0x00000018U));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (0x001fffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul 
            = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                      >> 0x17U)));
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_a_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_a_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_b_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_b_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
        = vlSelfRef.u_fpu_top__DOT__flags_out_shifter;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
        = vlSelfRef.u_fpu_top__DOT__flags_out_shifter;
    vlSelfRef.u_fpu_top__DOT__cvt_res = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__result;
    vlSelfRef.u_fpu_top__DOT__exp_res_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res;
    vlSelfRef.u_fpu_top__DOT__flags_out_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out;
    vlSelfRef.u_fpu_top__DOT__mant_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul;
    if (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp 
            = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted)
                ? ((((QData)((IData)(((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted 
                                       << 1U) | (1U 
                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                    >> 0x0000001aU))))) 
                     << 0x00000019U) | (QData)((IData)(
                                                       ((0x01000000U 
                                                         & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                            >> 1U)) 
                                                        | (0x00ffffffU 
                                                           & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in))))) 
                   > ((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted)) 
                      << 0x0000001aU)) : (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted)) 
                                           << 0x0000001aU) 
                                          > (((QData)((IData)(
                                                              ((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted 
                                                                << 1U) 
                                                               | (1U 
                                                                  & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                     >> 0x0000001aU))))) 
                                              << 0x00000019U) 
                                             | (QData)((IData)(
                                                               ((0x01000000U 
                                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in)))))));
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res 
            = (1U & ((1U & ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                            & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))))
                      ? (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp)
                      : ((~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a) 
                             & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b)))) 
                         & (((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                             & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b)) 
                            | (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp))))));
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp 
            = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted)
                ? ((((QData)((IData)(((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted 
                                       << 1U) | (1U 
                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                    >> 0x0000001aU))))) 
                     << 0x00000019U) | (QData)((IData)(
                                                       ((0x01000000U 
                                                         & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                            >> 1U)) 
                                                        | (0x00ffffffU 
                                                           & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in))))) 
                   < ((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted)) 
                      << 0x0000001aU)) : (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted)) 
                                           << 0x0000001aU) 
                                          < (((QData)((IData)(
                                                              ((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted 
                                                                << 1U) 
                                                               | (1U 
                                                                  & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                     >> 0x0000001aU))))) 
                                              << 0x00000019U) 
                                             | (QData)((IData)(
                                                               ((0x01000000U 
                                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in)))))));
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res 
            = (1U & ((1U & ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                            & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))))
                      ? (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp)
                      : (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a) 
                          & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))) 
                         | ((~ ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                                & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))) 
                            & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp))))));
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
        = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp = 0ULL;
    if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a) 
         == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
            = (0x01ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                              + vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted));
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a;
    } else if ((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                >= vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted)) {
        if (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x01ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                                  - vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted));
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                = (0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted)) 
                                             << 0x0000001aU) 
                                            - (((QData)((IData)(
                                                                ((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                       >> 0x0000001aU))))) 
                                                << 0x00000019U) 
                                               | (QData)((IData)(
                                                                 ((0x01000000U 
                                                                   & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                      >> 1U)) 
                                                                  | (0x00ffffffU 
                                                                     & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in)))))));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                          >> 0x1aU)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x01ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (0x06000000U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                              >> 0x00000018U)) 
                                     << 0x00000019U)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x06000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (((0U != (0x00ffffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))) 
                       << 0x00000018U) | (0x00ffffffU 
                                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))));
        }
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result 
            = ((~ (IData)(((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum) 
                           & (0U == (0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out))))) 
               & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a));
    } else {
        if (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                = (0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted)) 
                                             << 0x0000001aU) 
                                            - (((QData)((IData)(
                                                                ((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                       >> 0x0000001aU))))) 
                                                << 0x00000019U) 
                                               | (QData)((IData)(
                                                                 ((0x01000000U 
                                                                   & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                      >> 1U)) 
                                                                  | (0x00ffffffU 
                                                                     & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in)))))));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                          >> 0x1aU)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x01ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (0x06000000U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                              >> 0x00000018U)) 
                                     << 0x00000019U)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x06000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (((0U != (0x00ffffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))) 
                       << 0x00000018U) | (0x00ffffffU 
                                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))));
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x01ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted 
                                  - vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted));
        }
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff;
    }
    vlSelfRef.u_fpu_top__DOT__cmp_res = vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res;
    vlSelfRef.u_fpu_top__DOT__sign_result_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result;
    vlSelfRef.u_fpu_top__DOT__flags_out_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out;
    vlSelfRef.u_fpu_top__DOT__mant_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in 
        = vlSelfRef.u_fpu_top__DOT__flags_out_addsub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum 
        = vlSelfRef.u_fpu_top__DOT__mant_addsub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
        = ((0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out) 
           | (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in));
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp = 0ULL;
    if ((IData)(((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum) 
                 & (0U == (0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in))))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
            = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out);
    } else if ((0x01000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum)) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted)));
        if ((0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out);
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized 
                = (0x00ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum 
                                  >> 1U));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out) 
                   | (((4U & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum 
                              << 2U)) | ((2U & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in 
                                                >> 0x00000019U)) 
                                         | (IData)(
                                                   (0U 
                                                    != 
                                                    (0x03000000U 
                                                     & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in))))) 
                      << 0x00000018U));
        }
    } else if ((0x00800000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum)) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized 
            = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum);
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted;
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in;
    } else {
        vlSelfRef.__Vfunc_lzd24__14__val = (0x00ffffffU 
                                            & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum);
        vlSelfRef.__Vfunc_lzd24__14__Vfuncout = (((
                                                   ((((((0x00800000U 
                                                         == 
                                                         (0x00800000U 
                                                          & vlSelfRef.__Vfunc_lzd24__14__val)) 
                                                        | (0x00400000U 
                                                           == 
                                                           (0x00c00000U 
                                                            & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                       | (0x00200000U 
                                                          == 
                                                          (0x00e00000U 
                                                           & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                      | (0x00100000U 
                                                         == 
                                                         (0x00f00000U 
                                                          & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                     | (0x00080000U 
                                                        == 
                                                        (0x00f80000U 
                                                         & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                    | (0x00040000U 
                                                       == 
                                                       (0x00fc0000U 
                                                        & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                   | (0x00020000U 
                                                      == 
                                                      (0x00fe0000U 
                                                       & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                  | (0x00010000U 
                                                     == 
                                                     (0x00ff0000U 
                                                      & vlSelfRef.__Vfunc_lzd24__14__val)))
                                                  ? 
                                                 ((0x00800000U 
                                                   == 
                                                   (0x00800000U 
                                                    & vlSelfRef.__Vfunc_lzd24__14__val))
                                                   ? 0U
                                                   : 
                                                  ((0x00400000U 
                                                    == 
                                                    (0x00c00000U 
                                                     & vlSelfRef.__Vfunc_lzd24__14__val))
                                                    ? 1U
                                                    : 
                                                   ((0x00200000U 
                                                     == 
                                                     (0x00e00000U 
                                                      & vlSelfRef.__Vfunc_lzd24__14__val))
                                                     ? 2U
                                                     : 
                                                    ((0x00100000U 
                                                      == 
                                                      (0x00f00000U 
                                                       & vlSelfRef.__Vfunc_lzd24__14__val))
                                                      ? 3U
                                                      : 
                                                     ((0x00080000U 
                                                       == 
                                                       (0x00f80000U 
                                                        & vlSelfRef.__Vfunc_lzd24__14__val))
                                                       ? 4U
                                                       : 
                                                      ((0x00040000U 
                                                        == 
                                                        (0x00fc0000U 
                                                         & vlSelfRef.__Vfunc_lzd24__14__val))
                                                        ? 5U
                                                        : 
                                                       ((0x00020000U 
                                                         == 
                                                         (0x00fe0000U 
                                                          & vlSelfRef.__Vfunc_lzd24__14__val))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 (((((((((0x00008000U 
                                                          == 
                                                          (0x00ff8000U 
                                                           & vlSelfRef.__Vfunc_lzd24__14__val)) 
                                                         | (0x00004000U 
                                                            == 
                                                            (0x00ffc000U 
                                                             & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                        | (0x00002000U 
                                                           == 
                                                           (0x00ffe000U 
                                                            & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                       | (0x00001000U 
                                                          == 
                                                          (0x00fff000U 
                                                           & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                      | (0x00000800U 
                                                         == 
                                                         (0x00fff800U 
                                                          & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                     | (0x00000400U 
                                                        == 
                                                        (0x00fffc00U 
                                                         & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                    | (0x00000200U 
                                                       == 
                                                       (0x00fffe00U 
                                                        & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                   | (0x00000100U 
                                                      == 
                                                      (0x00ffff00U 
                                                       & vlSelfRef.__Vfunc_lzd24__14__val)))
                                                   ? 
                                                  ((0x00008000U 
                                                    == 
                                                    (0x00ff8000U 
                                                     & vlSelfRef.__Vfunc_lzd24__14__val))
                                                    ? 8U
                                                    : 
                                                   ((0x00004000U 
                                                     == 
                                                     (0x00ffc000U 
                                                      & vlSelfRef.__Vfunc_lzd24__14__val))
                                                     ? 9U
                                                     : 
                                                    ((0x00002000U 
                                                      == 
                                                      (0x00ffe000U 
                                                       & vlSelfRef.__Vfunc_lzd24__14__val))
                                                      ? 0x0aU
                                                      : 
                                                     ((0x00001000U 
                                                       == 
                                                       (0x00fff000U 
                                                        & vlSelfRef.__Vfunc_lzd24__14__val))
                                                       ? 0x0bU
                                                       : 
                                                      ((0x00000800U 
                                                        == 
                                                        (0x00fff800U 
                                                         & vlSelfRef.__Vfunc_lzd24__14__val))
                                                        ? 0x0cU
                                                        : 
                                                       ((0x00000400U 
                                                         == 
                                                         (0x00fffc00U 
                                                          & vlSelfRef.__Vfunc_lzd24__14__val))
                                                         ? 0x0dU
                                                         : 
                                                        ((0x00000200U 
                                                          == 
                                                          (0x00fffe00U 
                                                           & vlSelfRef.__Vfunc_lzd24__14__val))
                                                          ? 0x0eU
                                                          : 0x0fU)))))))
                                                   : 
                                                  (((((((((0x00000080U 
                                                           == 
                                                           (0x00ffff80U 
                                                            & vlSelfRef.__Vfunc_lzd24__14__val)) 
                                                          | (0x00000040U 
                                                             == 
                                                             (0x00ffffc0U 
                                                              & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                         | (0x00000020U 
                                                            == 
                                                            (0x00ffffe0U 
                                                             & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                        | (0x00000010U 
                                                           == 
                                                           (0x00fffff0U 
                                                            & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                       | (8U 
                                                          == 
                                                          (0x00fffff8U 
                                                           & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                      | (4U 
                                                         == 
                                                         (0x00fffffcU 
                                                          & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                     | (2U 
                                                        == 
                                                        (0x00fffffeU 
                                                         & vlSelfRef.__Vfunc_lzd24__14__val))) 
                                                    | (1U 
                                                       == vlSelfRef.__Vfunc_lzd24__14__val))
                                                    ? 
                                                   ((0x00000080U 
                                                     == 
                                                     (0x00ffff80U 
                                                      & vlSelfRef.__Vfunc_lzd24__14__val))
                                                     ? 0x10U
                                                     : 
                                                    ((0x00000040U 
                                                      == 
                                                      (0x00ffffc0U 
                                                       & vlSelfRef.__Vfunc_lzd24__14__val))
                                                      ? 0x11U
                                                      : 
                                                     ((0x00000020U 
                                                       == 
                                                       (0x00ffffe0U 
                                                        & vlSelfRef.__Vfunc_lzd24__14__val))
                                                       ? 0x12U
                                                       : 
                                                      ((0x00000010U 
                                                        == 
                                                        (0x00fffff0U 
                                                         & vlSelfRef.__Vfunc_lzd24__14__val))
                                                        ? 0x13U
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x00fffff8U 
                                                          & vlSelfRef.__Vfunc_lzd24__14__val))
                                                         ? 0x14U
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x00fffffcU 
                                                           & vlSelfRef.__Vfunc_lzd24__14__val))
                                                          ? 0x15U
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x00fffffeU 
                                                            & vlSelfRef.__Vfunc_lzd24__14__val))
                                                           ? 0x16U
                                                           : 0x17U)))))))
                                                    : 0x18U)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero 
            = vlSelfRef.__Vfunc_lzd24__14__Vfuncout;
        if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero) 
             >= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out);
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp 
                = ((0x03000000U & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in 
                                   >> 1U)) | (0x00ffffffU 
                                              & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp 
                = (0x0003ffffffffffffULL & ((((QData)((IData)(
                                                              (0x00ffffffU 
                                                               & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum))) 
                                              << 0x0000001aU) 
                                             | (QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp))) 
                                            << (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized 
                = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp 
                                          >> 0x1aU)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized 
                = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted) 
                                  - (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out) 
                   | (((6U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp 
                                       >> 0x00000018U)) 
                              << 1U)) | (0U != (0x00ffffffU 
                                                & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp)))) 
                      << 0x00000018U));
        }
    }
    vlSelfRef.u_fpu_top__DOT__exp_add_norm = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized;
    vlSelfRef.u_fpu_top__DOT__flags_out_norm = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out;
    vlSelfRef.u_fpu_top__DOT__mant_add_norm = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized;
    if (((0U == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
         || (1U == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)))) {
        vlSelfRef.u_fpu_top__DOT__sign_result = vlSelfRef.u_fpu_top__DOT__sign_result_addsub;
        vlSelfRef.u_fpu_top__DOT__exp_normalized = vlSelfRef.u_fpu_top__DOT__exp_add_norm;
        vlSelfRef.u_fpu_top__DOT__flag_rounding = vlSelfRef.u_fpu_top__DOT__flags_out_norm;
        vlSelfRef.u_fpu_top__DOT__mant_normalized = vlSelfRef.u_fpu_top__DOT__mant_add_norm;
    } else {
        vlSelfRef.u_fpu_top__DOT__sign_result = ((2U 
                                                  == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                 && (IData)(vlSelfRef.u_fpu_top__DOT__sign_res_mul));
        if ((2U == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__exp_normalized 
                = vlSelfRef.u_fpu_top__DOT__exp_res_mul;
            vlSelfRef.u_fpu_top__DOT__flag_rounding 
                = vlSelfRef.u_fpu_top__DOT__flags_out_mul;
            vlSelfRef.u_fpu_top__DOT__mant_normalized 
                = vlSelfRef.u_fpu_top__DOT__mant_mul;
        } else {
            vlSelfRef.u_fpu_top__DOT__exp_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__flag_rounding = 0U;
            vlSelfRef.u_fpu_top__DOT__mant_normalized = 0U;
        }
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized 
        = vlSelfRef.u_fpu_top__DOT__exp_normalized;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__flags 
        = vlSelfRef.u_fpu_top__DOT__flag_rounding;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized 
        = vlSelfRef.u_fpu_top__DOT__mant_normalized;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up 
        = (IData)(((vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__flags 
                    >> 0x0000001aU) & (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized 
                                       | (0U != (3U 
                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__flags 
                                                    >> 0x00000018U))))));
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final = 0U;
    if (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp 
            = (0x01ffffffU & ((IData)(1U) + vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized));
        if ((0x01000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp)) {
            if ((0xfeU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final = 0U;
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final = 0xffU;
            } else {
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final 
                    = (0x007fffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp 
                                      >> 1U));
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized)));
            }
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final 
                = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp);
            vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized;
        }
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final 
            = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized);
        vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized;
    }
    vlSelfRef.u_fpu_top__DOT__mant_final = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final;
    vlSelfRef.u_fpu_top__DOT__exp_final = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final;
    vlSelfRef.u_fpu_top__DOT__fpu_result = ((IData)(vlSelfRef.u_fpu_top__DOT__spec_vld)
                                             ? vlSelfRef.u_fpu_top__DOT__spec_out
                                             : (((3U 
                                                  == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                 | (4U 
                                                    == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)))
                                                 ? 
                                                ((IData)(vlSelfRef.u_fpu_top__DOT__cmp_res)
                                                  ? vlSelfRef.u_fpu_top__DOT__flushed_operand_a
                                                  : vlSelfRef.u_fpu_top__DOT__flushed_operand_b)
                                                 : 
                                                (((5U 
                                                   == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                  | ((6U 
                                                      == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                     | ((7U 
                                                         == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                        | (8U 
                                                           == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)))))
                                                  ? vlSelfRef.u_fpu_top__DOT__cvt_res
                                                  : 
                                                 (((IData)(vlSelfRef.u_fpu_top__DOT__sign_result) 
                                                   << 0x0000001fU) 
                                                  | (((IData)(vlSelfRef.u_fpu_top__DOT__exp_final) 
                                                      << 0x00000017U) 
                                                     | vlSelfRef.u_fpu_top__DOT__mant_final)))));
    vlSelfRef.result_fpu = vlSelfRef.u_fpu_top__DOT__fpu_result;
    vlSelfRef.result = ((IData)(vlSelfRef.fu_sel) ? vlSelfRef.result_fpu
                         : vlSelfRef.result_alu);
}

void Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.fu_sel = vlSymsp->TOP.gpu__DOT__fu_sel;
    vlSelfRef.alu_op = vlSymsp->TOP.gpu__DOT__alu_op;
    vlSelfRef.fpu_op = vlSymsp->TOP.gpu__DOT__fpu_op;
    vlSelfRef.op_b = vlSymsp->TOP.gpu__DOT__op_b[3U];
    vlSelfRef.op_a = vlSymsp->TOP.gpu__DOT__op_a[3U];
    vlSelfRef.u_alu_top__DOT__alu_op = vlSelfRef.alu_op;
    vlSelfRef.u_fpu_top__DOT__fpu_op = vlSelfRef.fpu_op;
    vlSelfRef.u_alu_top__DOT__op_b = vlSelfRef.op_b;
    vlSelfRef.u_fpu_top__DOT__operand_b = vlSelfRef.op_b;
    vlSelfRef.u_alu_top__DOT__op_a = vlSelfRef.op_a;
    vlSelfRef.u_fpu_top__DOT__operand_a = vlSelfRef.op_a;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op 
        = vlSelfRef.u_alu_top__DOT__alu_op;
    __Vtableidx8 = vlSelfRef.u_alu_top__DOT__alu_op;
    vlSelfRef.u_alu_top__DOT__sub = Vtop__ConstPool__TABLE_haa2ba6c8_0
        [__Vtableidx8];
    vlSelfRef.u_alu_top__DOT__cmp_op = Vtop__ConstPool__TABLE_hf0ca261b_0
        [__Vtableidx8];
    vlSelfRef.u_alu_top__DOT__logic_op = Vtop__ConstPool__TABLE_h743c250b_0
        [__Vtableidx8];
    vlSelfRef.u_alu_top__DOT__shift_op = Vtop__ConstPool__TABLE_hc5fa8ef7_0
        [__Vtableidx8];
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op 
        = vlSelfRef.u_fpu_top__DOT__fpu_op;
    __Vtableidx7 = vlSelfRef.u_fpu_top__DOT__fpu_op;
    vlSelfRef.u_fpu_top__DOT__add_op = Vtop__ConstPool__TABLE_haa2ba6c8_0
        [__Vtableidx7];
    vlSelfRef.u_fpu_top__DOT__cmp_op = Vtop__ConstPool__TABLE_hc079a40c_0
        [__Vtableidx7];
    vlSelfRef.u_fpu_top__DOT__cvt_op = Vtop__ConstPool__TABLE_hf339a501_0
        [__Vtableidx7];
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b 
        = vlSelfRef.u_fpu_top__DOT__operand_b;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
        = vlSelfRef.u_fpu_top__DOT__operand_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a 
        = vlSelfRef.u_fpu_top__DOT__operand_a;
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op 
        = vlSelfRef.u_alu_top__DOT__cmp_op;
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op 
        = vlSelfRef.u_alu_top__DOT__logic_op;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op 
        = vlSelfRef.u_alu_top__DOT__shift_op;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__sub 
        = vlSelfRef.u_alu_top__DOT__sub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op 
        = vlSelfRef.u_fpu_top__DOT__cmp_op;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op 
        = vlSelfRef.u_fpu_top__DOT__cvt_op;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op 
        = vlSelfRef.u_fpu_top__DOT__add_op;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range 
        = (0x0000001fU & vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__b);
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero 
        = (0U == (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b 
        = (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b 
           >> 0x0000001fU);
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b 
        = (0x000000ffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b 
                          >> 0x00000017U));
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_ss 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b));
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_su 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                                 (vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a 
                                                                  >> 0x0000001fU))) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a)))), 
                      VL_EXTENDS_QQ(64,33, (QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b))));
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_uu 
        = ((QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b)) 
           * (QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero 
        = (0U == (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a 
        = (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a 
           >> 0x0000001fU);
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a 
        = (0x000000ffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a 
                          >> 0x00000017U));
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__result 
        = ((2U & (IData)(vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op))
            ? ((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op))
                ? (vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
                   != vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b)
                : (vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
                   < vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b))
            : ((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op))
                ? VL_LTS_III(32, vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a, vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b)
                : (vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
                   == vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                                << 1U) | (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: alu_logic_integer.sv:9: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"gpu.lane[3].u_fu_top.u_alu_top.u_logic_module", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op));
                VL_STOP_MT("rtl/execute/FU/Integer/alu_logic_integer.sv", 9, "");
            }
        }
    }
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__result 
        = ((0U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op))
            ? (vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
               & vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b)
            : ((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op))
                ? (vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
                   | vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b)
                : ((vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
                    ^ vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b) 
                   & (- (IData)((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)))))));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                                << 1U) | (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: alu_shift_integer.sv:13: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"gpu.lane[3].u_fu_top.u_alu_top.u_shift_module", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op));
                VL_STOP_MT("rtl/execute/FU/Integer/alu_shift_integer.sv", 13, "");
            }
        }
    }
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b_buf 
        = ((IData)(vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__sub)
            ? (~ vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b)
            : vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b);
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt = 0U;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__result 
        = ((0U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op))
            ? (vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a 
               << (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range))
            : ((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op))
                ? (vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a 
                   >> (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range))
                : (VL_SHIFTRS_III(32,32,5, vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a, (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range)) 
                   & (- (IData)((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)))))));
    vlSelfRef.u_fpu_top__DOT__sign_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b 
        = (0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b 
        = ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero)) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b 
        = (0x00800000U | (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b));
    if ((0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b = 0U;
    }
    vlSelfRef.u_fpu_top__DOT__exp_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__mul_res 
        = (((4U & (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op))
             ? (((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op))
                  ? (IData)((vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_uu 
                             >> 0x00000020U)) : (IData)(
                                                        (vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_su 
                                                         >> 0x00000020U))) 
                & (- (IData)((1U & (~ ((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op) 
                                       >> 1U)))))) : 
            (((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op))
               ? (IData)((vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_ss 
                          >> 0x00000020U)) : (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_ss)) 
             & (- (IData)((1U & ((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op) 
                                 >> 1U)))))) & (- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op) 
                                                               >> 3U))))));
    vlSelfRef.u_fpu_top__DOT__sign_a = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a 
        = (0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a 
        = ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero)) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a 
        = (0x00800000U | (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a));
    if ((0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a = 0U;
    }
    vlSelfRef.u_fpu_top__DOT__exp_a = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a;
    vlSelfRef.u_alu_top__DOT__compare_result = vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__logic_result = vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__result 
        = (vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__a 
           + (vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b_buf 
              + (IData)(vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__sub)));
    vlSelfRef.u_alu_top__DOT__shift_result = vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__result;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b 
        = vlSelfRef.u_fpu_top__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b 
        = vlSelfRef.u_fpu_top__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b 
        = vlSelfRef.u_fpu_top__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b 
        = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b) 
            << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b) 
                                << 0x00000017U) | (0x007fffffU 
                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b)));
    vlSelfRef.u_fpu_top__DOT__mant_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b 
        = vlSelfRef.u_fpu_top__DOT__exp_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b 
        = vlSelfRef.u_fpu_top__DOT__exp_b;
    vlSelfRef.u_alu_top__DOT__mul_result = vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__mul_res;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a 
        = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
            << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a) 
                                << 0x00000017U) | (0x007fffffU 
                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a)));
    vlSelfRef.u_fpu_top__DOT__mant_a = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp = vlSelfRef.u_fpu_top__DOT__exp_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a 
        = vlSelfRef.u_fpu_top__DOT__exp_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a 
        = vlSelfRef.u_fpu_top__DOT__exp_a;
    vlSelfRef.u_alu_top__DOT__addsub_result = vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__result;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff 
        = (1U & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op)
                  ? (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b))
                  : (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b)));
    vlSelfRef.u_fpu_top__DOT__flushed_operand_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b 
        = vlSelfRef.u_fpu_top__DOT__mant_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b 
        = vlSelfRef.u_fpu_top__DOT__mant_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a) 
           ^ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b));
    if ((8U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((4U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0xfafafafaU;
        } else if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0xfafafafaU;
        } else if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0xfafafafaU;
        } else {
            if ((0U != vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
                if ((0U != vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                }
                vlSelfRef.u_fpu_top__DOT__spec_vld 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
                vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)))) {
                        if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)))) {
                            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                        }
                    }
                }
                vlSelfRef.u_fpu_top__DOT__spec_vld 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
                vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                            ? 0U : 0xffffffffU);
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)))) {
                        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                        ? 0x80000000U : 0x7fffffffU);
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                                          | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                            }
                        }
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                 & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                        & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                       << 0x0000001fU);
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                     & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = (0x7f800000U | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                           & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                          << 0x0000001fU));
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                            ? vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b
                            : 0x7f800000U);
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)
                            ? vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a
                            : 0x7f800000U);
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                                          | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                            }
                        }
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                 & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                       << 0x0000001fU);
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                     & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = (0x7f800000U | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                           | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                          << 0x0000001fU));
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                            ? 0xff800000U : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b);
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)
                            ? 0xff800000U : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a);
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                          | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
                if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                              | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                  | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                 | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))
                        ? 0x7fc00000U : (0x7f800000U 
                                         | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                             ^ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                            << 0x0000001fU)));
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                        ^ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                       << 0x0000001fU);
            }
        }
    } else if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                              | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                  & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                        }
                    }
                }
            }
        }
        vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
        vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
        if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
             | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU)));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)
                    ? (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU))
                    : (0x7f800000U | ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                      << 0x0000001fU)));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? 0U : ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                            << 0x0000001fU));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)
                    ? (((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                        << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b) 
                                            << 0x00000017U) 
                                           | (0x007fffffU 
                                              & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b)))
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a);
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                              | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                  & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                        }
                    }
                }
            }
        }
        vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
        vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
        if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
             | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU))
                    : 0x7fc00000U);
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)
                    ? (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU))
                    : (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b) 
                                      << 0x0000001fU)));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                       << 0x0000001fU) : 0U);
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)
                    ? vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a);
        }
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant 
        = vlSelfRef.u_fpu_top__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a 
        = vlSelfRef.u_fpu_top__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a 
        = vlSelfRef.u_fpu_top__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true 
        = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp) 
                          - (IData)(0x7fU)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp 
        = (0x000003ffU & (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b) 
                           + (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a)) 
                          - (IData)(0x007fU)));
    if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a) 
         >= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta 
            = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a) 
                              - (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext 
            = (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b 
               << 2U);
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
            = ((0x1aU <= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta))
                ? 0U : VL_SHIFTR_III(26,26,8, vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted 
            = (0x00ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
                              >> 2U));
        vlSelfRef.__Vfunc_get_grs__17__mant_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted;
        vlSelfRef.__Vfunc_get_grs__17__mant = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b;
        vlSelfRef.__Vfunc_get_grs__17__exp_delta = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta;
        vlSelfRef.__Vfunc_get_grs__17__sticky_mask 
            = ((2U >= (IData)(vlSelfRef.__Vfunc_get_grs__17__exp_delta))
                ? 0U : ((0x1aU <= (IData)(vlSelfRef.__Vfunc_get_grs__17__exp_delta))
                         ? 0x00ffffffU : VL_SHIFTR_III(24,24,32, 0x00ffffffU, 
                                                       ((IData)(0x0000001aU) 
                                                        - (IData)(vlSelfRef.__Vfunc_get_grs__17__exp_delta)))));
        vlSelfRef.__Vfunc_get_grs__17__s_vec = (vlSelfRef.__Vfunc_get_grs__17__mant 
                                                & vlSelfRef.__Vfunc_get_grs__17__sticky_mask);
        vlSelfRef.__Vfunc_get_grs__17__result = ((0x06000000U 
                                                  & (vlSelfRef.__Vfunc_get_grs__17__mant_shifted 
                                                     << 0x00000019U)) 
                                                 | (((0U 
                                                      != vlSelfRef.__Vfunc_get_grs__17__s_vec) 
                                                     << 0x00000018U) 
                                                    | vlSelfRef.__Vfunc_get_grs__17__s_vec));
        vlSelfRef.__Vfunc_get_grs__17__Vfuncout = vlSelfRef.__Vfunc_get_grs__17__result;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__flags 
            = vlSelfRef.__Vfunc_get_grs__17__Vfuncout;
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta 
            = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b) 
                              - (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext 
            = (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a 
               << 2U);
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
            = ((0x1aU <= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta))
                ? 0U : VL_SHIFTR_III(26,26,8, vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted 
            = (0x00ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
                              >> 2U));
        vlSelfRef.__Vfunc_get_grs__18__mant_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted;
        vlSelfRef.__Vfunc_get_grs__18__mant = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a;
        vlSelfRef.__Vfunc_get_grs__18__exp_delta = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta;
        vlSelfRef.__Vfunc_get_grs__18__sticky_mask 
            = ((2U >= (IData)(vlSelfRef.__Vfunc_get_grs__18__exp_delta))
                ? 0U : ((0x1aU <= (IData)(vlSelfRef.__Vfunc_get_grs__18__exp_delta))
                         ? 0x00ffffffU : VL_SHIFTR_III(24,24,32, 0x00ffffffU, 
                                                       ((IData)(0x0000001aU) 
                                                        - (IData)(vlSelfRef.__Vfunc_get_grs__18__exp_delta)))));
        vlSelfRef.__Vfunc_get_grs__18__s_vec = (vlSelfRef.__Vfunc_get_grs__18__mant 
                                                & vlSelfRef.__Vfunc_get_grs__18__sticky_mask);
        vlSelfRef.__Vfunc_get_grs__18__result = ((0x06000000U 
                                                  & (vlSelfRef.__Vfunc_get_grs__18__mant_shifted 
                                                     << 0x00000019U)) 
                                                 | (((0U 
                                                      != vlSelfRef.__Vfunc_get_grs__18__s_vec) 
                                                     << 0x00000018U) 
                                                    | vlSelfRef.__Vfunc_get_grs__18__s_vec));
        vlSelfRef.__Vfunc_get_grs__18__Vfuncout = vlSelfRef.__Vfunc_get_grs__18__result;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__flags 
            = vlSelfRef.__Vfunc_get_grs__18__Vfuncout;
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a) 
           < (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b));
    vlSelfRef.u_alu_top__DOT__result = ((8U & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                         ? ((4U & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                             ? (vlSelfRef.u_alu_top__DOT__compare_result 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.u_alu_top__DOT__alu_op) 
                                                                  >> 1U))))))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                 ? vlSelfRef.u_alu_top__DOT__shift_result
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                  ? vlSelfRef.u_alu_top__DOT__shift_result
                                                  : vlSelfRef.u_alu_top__DOT__logic_result)))
                                         : ((4U & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                 ? vlSelfRef.u_alu_top__DOT__logic_result
                                                 : vlSelfRef.u_alu_top__DOT__mul_result)
                                             : ((2U 
                                                 & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                 ? vlSelfRef.u_alu_top__DOT__mul_result
                                                 : vlSelfRef.u_alu_top__DOT__addsub_result)));
    vlSelfRef.u_fpu_top__DOT__sign_res_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res;
    vlSelfRef.u_fpu_top__DOT__spec_out = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp 
        = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
        = (0x0000ffffffffffffULL & ((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b)) 
                                    * (QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a))));
    vlSelfRef.u_fpu_top__DOT__exp_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted;
    vlSelfRef.u_fpu_top__DOT__shifted = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted;
    vlSelfRef.result_alu = vlSelfRef.u_alu_top__DOT__result;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op) 
                  >> 1U)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft 
            = ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))
                ? (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)))
                    ? 0U : ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                             & VL_GTES_III(32, 0x00000017U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                             ? VL_SHIFTR_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                             ((IData)(0x00000017U) 
                                              - VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                             : ((VL_LTS_III(32, 0x00000017U, 
                                            VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                                 & VL_GTES_III(32, 0x0000001fU, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                                 ? VL_SHIFTL_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                                 (VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)) 
                                                  - (IData)(0x00000017U)))
                                 : 0xffffffffU))) : 
               (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)))
                 ? 0U : ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                          & VL_GTES_III(32, 0x00000017U, 
                                        VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                          ? VL_SHIFTR_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                          ((IData)(0x00000017U) 
                                           - VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                          : ((VL_LTS_III(32, 0x00000017U, 
                                         VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                              & VL_GTES_III(32, 0x0000001eU, 
                                            VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                              ? VL_SHIFTL_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                              (VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)) 
                                               - (IData)(0x00000017U)))
                              : 0x7fffffffU))));
    }
    if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))) {
        if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))) {
            if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a)) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp = 0U;
            } else {
                vlSelfRef.__Vfunc_lzd32_23__15__val 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a;
                vlSelfRef.__Vfunc_lzd32_23__15__Vfuncout 
                    = (((((((((0x80000000U == (0x80000000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val)) 
                              | (0x40000000U == (0xc0000000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                             | (0x20000000U == (0xe0000000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                            | (0x10000000U == (0xf0000000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                           | (0x08000000U == (0xf8000000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                          | (0x04000000U == (0xfc000000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                         | (0x02000000U == (0xfe000000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                        | (0x01000000U == (0xff000000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__15__val)))
                        ? ((0x80000000U == (0x80000000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__15__val))
                            ? 8U : ((0x40000000U == 
                                     (0xc0000000U & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                     ? 7U : ((0x20000000U 
                                              == (0xe0000000U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                              ? 6U : 
                                             ((0x10000000U 
                                               == (0xf0000000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                               ? 5U
                                               : ((0x08000000U 
                                                   == 
                                                   (0xf8000000U 
                                                    & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                   ? 4U
                                                   : 
                                                  ((0x04000000U 
                                                    == 
                                                    (0xfc000000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                    ? 3U
                                                    : 
                                                   ((0x02000000U 
                                                     == 
                                                     (0xfe000000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                     ? 2U
                                                     : 1U)))))))
                        : (((((((((0x00800000U == (0xff800000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__15__val)) 
                                  | (0x00400000U == 
                                     (0xffc00000U & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                 | (0x00200000U == 
                                    (0xffe00000U & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                | (0x00100000U == (0xfff00000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                               | (0x00080000U == (0xfff80000U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                              | (0x00040000U == (0xfffc0000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                             | (0x00020000U == (0xfffe0000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                            | (0x00010000U == (0xffff0000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val)))
                            ? ((0x00800000U == (0xff800000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                ? 0U : ((0x00400000U 
                                         == (0xffc00000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                         ? 0x21U : 
                                        ((0x00200000U 
                                          == (0xffe00000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                          ? 0x22U : 
                                         ((0x00100000U 
                                           == (0xfff00000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                           ? 0x23U : 
                                          ((0x00080000U 
                                            == (0xfff80000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                            ? 0x24U
                                            : ((0x00040000U 
                                                == 
                                                (0xfffc0000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                ? 0x25U
                                                : (
                                                   (0x00020000U 
                                                    == 
                                                    (0xfffe0000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                    ? 0x26U
                                                    : 0x27U)))))))
                            : (((((((((0x00008000U 
                                       == (0xffff8000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__15__val)) 
                                      | (0x00004000U 
                                         == (0xffffc000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                     | (0x00002000U 
                                        == (0xffffe000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                    | (0x00001000U 
                                       == (0xfffff000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                   | (0x00000800U == 
                                      (0xfffff800U 
                                       & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                  | (0x00000400U == 
                                     (0xfffffc00U & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                 | (0x00000200U == 
                                    (0xfffffe00U & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                | (0x00000100U == (0xffffff00U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__15__val)))
                                ? ((0x00008000U == 
                                    (0xffff8000U & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                    ? 0x28U : ((0x00004000U 
                                                == 
                                                (0xffffc000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                ? 0x29U
                                                : (
                                                   (0x00002000U 
                                                    == 
                                                    (0xffffe000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                    ? 0x2aU
                                                    : 
                                                   ((0x00001000U 
                                                     == 
                                                     (0xfffff000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                     ? 0x2bU
                                                     : 
                                                    ((0x00000800U 
                                                      == 
                                                      (0xfffff800U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                      ? 0x2cU
                                                      : 
                                                     ((0x00000400U 
                                                       == 
                                                       (0xfffffc00U 
                                                        & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                       ? 0x2dU
                                                       : 
                                                      ((0x00000200U 
                                                        == 
                                                        (0xfffffe00U 
                                                         & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                        ? 0x2eU
                                                        : 0x2fU)))))))
                                : (((((((((0x00000080U 
                                           == (0xffffff80U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val)) 
                                          | (0x00000040U 
                                             == (0xffffffc0U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                         | (0x00000020U 
                                            == (0xffffffe0U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                        | (0x00000010U 
                                           == (0xfffffff0U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                       | (8U == (0xfffffff8U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                      | (4U == (0xfffffffcU 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                     | (2U == (0xfffffffeU 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                    | (1U == vlSelfRef.__Vfunc_lzd32_23__15__val))
                                    ? ((0x00000080U 
                                        == (0xffffff80U 
                                            & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                        ? 0x30U : (
                                                   (0x00000040U 
                                                    == 
                                                    (0xffffffc0U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                    ? 0x31U
                                                    : 
                                                   ((0x00000020U 
                                                     == 
                                                     (0xffffffe0U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                     ? 0x32U
                                                     : 
                                                    ((0x00000010U 
                                                      == 
                                                      (0xfffffff0U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                      ? 0x33U
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0xfffffff8U 
                                                        & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                       ? 0x34U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0xfffffffcU 
                                                         & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                        ? 0x35U
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0xfffffffeU 
                                                          & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                         ? 0x36U
                                                         : 0x37U)))))))
                                    : 0U))));
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt 
                    = vlSelfRef.__Vfunc_lzd32_23__15__Vfuncout;
                if ((0x00000020U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                        = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
                           << (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                        = (0x000000ffU & ((IData)(0x96U) 
                                          - (0x0000001fU 
                                             & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
                } else {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                        = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
                           >> (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                        = (0x000000ffU & ((IData)(0x96U) 
                                          + (0x0000001fU 
                                             & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
                }
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt 
                    = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp);
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt) 
                        << 0x00000017U) | vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt);
            }
        } else if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a)) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp = 0U;
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt 
                = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
                   >> 0x1fU);
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt)
                    ? (- vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a)
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a);
            vlSelfRef.__Vfunc_lzd32_23__16__val = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec;
            vlSelfRef.__Vfunc_lzd32_23__16__Vfuncout 
                = (((((((((0x80000000U == (0x80000000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val)) 
                          | (0x40000000U == (0xc0000000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                         | (0x20000000U == (0xe0000000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                        | (0x10000000U == (0xf0000000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                       | (0x08000000U == (0xf8000000U 
                                          & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                      | (0x04000000U == (0xfc000000U 
                                         & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                     | (0x02000000U == (0xfe000000U 
                                        & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                    | (0x01000000U == (0xff000000U 
                                       & vlSelfRef.__Vfunc_lzd32_23__16__val)))
                    ? ((0x80000000U == (0x80000000U 
                                        & vlSelfRef.__Vfunc_lzd32_23__16__val))
                        ? 8U : ((0x40000000U == (0xc0000000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                 ? 7U : ((0x20000000U 
                                          == (0xe0000000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                          ? 6U : ((0x10000000U 
                                                   == 
                                                   (0xf0000000U 
                                                    & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                   ? 5U
                                                   : 
                                                  ((0x08000000U 
                                                    == 
                                                    (0xf8000000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                    ? 4U
                                                    : 
                                                   ((0x04000000U 
                                                     == 
                                                     (0xfc000000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                     ? 3U
                                                     : 
                                                    ((0x02000000U 
                                                      == 
                                                      (0xfe000000U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                      ? 2U
                                                      : 1U)))))))
                    : (((((((((0x00800000U == (0xff800000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__16__val)) 
                              | (0x00400000U == (0xffc00000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                             | (0x00200000U == (0xffe00000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                            | (0x00100000U == (0xfff00000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                           | (0x00080000U == (0xfff80000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                          | (0x00040000U == (0xfffc0000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                         | (0x00020000U == (0xfffe0000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                        | (0x00010000U == (0xffff0000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val)))
                        ? ((0x00800000U == (0xff800000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))
                            ? 0U : ((0x00400000U == 
                                     (0xffc00000U & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                     ? 0x21U : ((0x00200000U 
                                                 == 
                                                 (0xffe00000U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                 ? 0x22U
                                                 : 
                                                ((0x00100000U 
                                                  == 
                                                  (0xfff00000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                  ? 0x23U
                                                  : 
                                                 ((0x00080000U 
                                                   == 
                                                   (0xfff80000U 
                                                    & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                   ? 0x24U
                                                   : 
                                                  ((0x00040000U 
                                                    == 
                                                    (0xfffc0000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                    ? 0x25U
                                                    : 
                                                   ((0x00020000U 
                                                     == 
                                                     (0xfffe0000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                     ? 0x26U
                                                     : 0x27U)))))))
                        : (((((((((0x00008000U == (0xffff8000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__16__val)) 
                                  | (0x00004000U == 
                                     (0xffffc000U & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                 | (0x00002000U == 
                                    (0xffffe000U & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                | (0x00001000U == (0xfffff000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                               | (0x00000800U == (0xfffff800U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                              | (0x00000400U == (0xfffffc00U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                             | (0x00000200U == (0xfffffe00U 
                                                & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                            | (0x00000100U == (0xffffff00U 
                                               & vlSelfRef.__Vfunc_lzd32_23__16__val)))
                            ? ((0x00008000U == (0xffff8000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                ? 0x28U : ((0x00004000U 
                                            == (0xffffc000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                            ? 0x29U
                                            : ((0x00002000U 
                                                == 
                                                (0xffffe000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                ? 0x2aU
                                                : (
                                                   (0x00001000U 
                                                    == 
                                                    (0xfffff000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                    ? 0x2bU
                                                    : 
                                                   ((0x00000800U 
                                                     == 
                                                     (0xfffff800U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                     ? 0x2cU
                                                     : 
                                                    ((0x00000400U 
                                                      == 
                                                      (0xfffffc00U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                      ? 0x2dU
                                                      : 
                                                     ((0x00000200U 
                                                       == 
                                                       (0xfffffe00U 
                                                        & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                       ? 0x2eU
                                                       : 0x2fU)))))))
                            : (((((((((0x00000080U 
                                       == (0xffffff80U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val)) 
                                      | (0x00000040U 
                                         == (0xffffffc0U 
                                             & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                     | (0x00000020U 
                                        == (0xffffffe0U 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                    | (0x00000010U 
                                       == (0xfffffff0U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                   | (8U == (0xfffffff8U 
                                             & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                  | (4U == (0xfffffffcU 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                 | (2U == (0xfffffffeU 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                | (1U == vlSelfRef.__Vfunc_lzd32_23__16__val))
                                ? ((0x00000080U == 
                                    (0xffffff80U & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                    ? 0x30U : ((0x00000040U 
                                                == 
                                                (0xffffffc0U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                ? 0x31U
                                                : (
                                                   (0x00000020U 
                                                    == 
                                                    (0xffffffe0U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                    ? 0x32U
                                                    : 
                                                   ((0x00000010U 
                                                     == 
                                                     (0xfffffff0U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                     ? 0x33U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfffffff8U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                      ? 0x34U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffffffcU 
                                                        & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                       ? 0x35U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffffffeU 
                                                         & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                        ? 0x36U
                                                        : 0x37U)))))))
                                : 0U))));
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt 
                = vlSelfRef.__Vfunc_lzd32_23__16__Vfuncout;
            if ((0x00000020U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                    = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec 
                       << (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                    = (0x000000ffU & ((IData)(0x96U) 
                                      - (0x0000001fU 
                                         & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
            } else {
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                    = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec 
                       >> (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                    = (0x000000ffU & ((IData)(0x96U) 
                                      + (0x0000001fU 
                                         & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
            }
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt 
                = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp);
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt) 
                    << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt) 
                                        << 0x00000017U) 
                                       | vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt));
        }
        vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__result 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp;
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__result 
            = ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))
                ? (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign))))))
                : ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign)
                    ? (VL_LTS_III(32, 0x0000001eU, 
                                  VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)))
                        ? 0x80000000U : (- vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft))
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft));
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm 
        = (0x000003ffU & ((1U & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                         >> 0x0000002fU)))
                           ? ((IData)(1U) + VL_EXTENDS_II(10,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp)))
                           : VL_EXTENDS_II(10,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp))));
    vlSelfRef.u_fpu_top__DOT__mant_a_shifted = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted;
    vlSelfRef.u_fpu_top__DOT__mant_b_shifted = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted;
    vlSelfRef.u_fpu_top__DOT__flags_out_shifter = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__flags;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted 
        = vlSelfRef.u_fpu_top__DOT__exp_addsub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted 
        = vlSelfRef.u_fpu_top__DOT__shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted 
        = vlSelfRef.u_fpu_top__DOT__shifted;
    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul = 0U;
    } else if (VL_LTES_III(32, 0x000000ffU, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res = 0x000000ffU;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul = 0U;
    } else if ((1U & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                              >> 0x2fU)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res 
            = (0x000000ffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (((6U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                   >> 0x00000016U)) 
                          << 1U)) | (0U != (0x003fffffU 
                                            & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)))) 
                  << 0x00000018U));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (0x003fffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul 
            = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                      >> 0x18U)));
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res 
            = (0x000000ffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (((6U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                   >> 0x00000015U)) 
                          << 1U)) | (0U != (0x001fffffU 
                                            & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)))) 
                  << 0x00000018U));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (0x001fffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul 
            = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                      >> 0x17U)));
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_a_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_a_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_b_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_b_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
        = vlSelfRef.u_fpu_top__DOT__flags_out_shifter;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
        = vlSelfRef.u_fpu_top__DOT__flags_out_shifter;
    vlSelfRef.u_fpu_top__DOT__cvt_res = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__result;
    vlSelfRef.u_fpu_top__DOT__exp_res_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res;
    vlSelfRef.u_fpu_top__DOT__flags_out_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out;
    vlSelfRef.u_fpu_top__DOT__mant_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul;
    if (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp 
            = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted)
                ? ((((QData)((IData)(((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted 
                                       << 1U) | (1U 
                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                    >> 0x0000001aU))))) 
                     << 0x00000019U) | (QData)((IData)(
                                                       ((0x01000000U 
                                                         & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                            >> 1U)) 
                                                        | (0x00ffffffU 
                                                           & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in))))) 
                   > ((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted)) 
                      << 0x0000001aU)) : (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted)) 
                                           << 0x0000001aU) 
                                          > (((QData)((IData)(
                                                              ((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted 
                                                                << 1U) 
                                                               | (1U 
                                                                  & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                     >> 0x0000001aU))))) 
                                              << 0x00000019U) 
                                             | (QData)((IData)(
                                                               ((0x01000000U 
                                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in)))))));
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res 
            = (1U & ((1U & ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                            & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))))
                      ? (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp)
                      : ((~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a) 
                             & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b)))) 
                         & (((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                             & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b)) 
                            | (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp))))));
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp 
            = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted)
                ? ((((QData)((IData)(((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted 
                                       << 1U) | (1U 
                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                    >> 0x0000001aU))))) 
                     << 0x00000019U) | (QData)((IData)(
                                                       ((0x01000000U 
                                                         & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                            >> 1U)) 
                                                        | (0x00ffffffU 
                                                           & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in))))) 
                   < ((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted)) 
                      << 0x0000001aU)) : (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted)) 
                                           << 0x0000001aU) 
                                          < (((QData)((IData)(
                                                              ((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted 
                                                                << 1U) 
                                                               | (1U 
                                                                  & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                     >> 0x0000001aU))))) 
                                              << 0x00000019U) 
                                             | (QData)((IData)(
                                                               ((0x01000000U 
                                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in)))))));
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res 
            = (1U & ((1U & ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                            & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))))
                      ? (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp)
                      : (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a) 
                          & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))) 
                         | ((~ ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                                & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))) 
                            & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp))))));
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
        = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp = 0ULL;
    if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a) 
         == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
            = (0x01ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                              + vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted));
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a;
    } else if ((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                >= vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted)) {
        if (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x01ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                                  - vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted));
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                = (0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted)) 
                                             << 0x0000001aU) 
                                            - (((QData)((IData)(
                                                                ((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                       >> 0x0000001aU))))) 
                                                << 0x00000019U) 
                                               | (QData)((IData)(
                                                                 ((0x01000000U 
                                                                   & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                      >> 1U)) 
                                                                  | (0x00ffffffU 
                                                                     & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in)))))));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                          >> 0x1aU)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x01ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (0x06000000U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                              >> 0x00000018U)) 
                                     << 0x00000019U)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x06000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (((0U != (0x00ffffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))) 
                       << 0x00000018U) | (0x00ffffffU 
                                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))));
        }
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result 
            = ((~ (IData)(((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum) 
                           & (0U == (0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out))))) 
               & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a));
    } else {
        if (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                = (0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted)) 
                                             << 0x0000001aU) 
                                            - (((QData)((IData)(
                                                                ((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                       >> 0x0000001aU))))) 
                                                << 0x00000019U) 
                                               | (QData)((IData)(
                                                                 ((0x01000000U 
                                                                   & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                      >> 1U)) 
                                                                  | (0x00ffffffU 
                                                                     & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in)))))));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                          >> 0x1aU)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x01ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (0x06000000U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                              >> 0x00000018U)) 
                                     << 0x00000019U)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x06000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (((0U != (0x00ffffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))) 
                       << 0x00000018U) | (0x00ffffffU 
                                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))));
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x01ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted 
                                  - vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted));
        }
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff;
    }
    vlSelfRef.u_fpu_top__DOT__cmp_res = vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res;
    vlSelfRef.u_fpu_top__DOT__sign_result_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result;
    vlSelfRef.u_fpu_top__DOT__flags_out_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out;
    vlSelfRef.u_fpu_top__DOT__mant_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in 
        = vlSelfRef.u_fpu_top__DOT__flags_out_addsub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum 
        = vlSelfRef.u_fpu_top__DOT__mant_addsub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
        = ((0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out) 
           | (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in));
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp = 0ULL;
    if ((IData)(((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum) 
                 & (0U == (0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in))))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
            = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out);
    } else if ((0x01000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum)) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted)));
        if ((0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out);
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized 
                = (0x00ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum 
                                  >> 1U));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out) 
                   | (((4U & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum 
                              << 2U)) | ((2U & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in 
                                                >> 0x00000019U)) 
                                         | (IData)(
                                                   (0U 
                                                    != 
                                                    (0x03000000U 
                                                     & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in))))) 
                      << 0x00000018U));
        }
    } else if ((0x00800000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum)) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized 
            = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum);
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted;
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in;
    } else {
        vlSelfRef.__Vfunc_lzd24__19__val = (0x00ffffffU 
                                            & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum);
        vlSelfRef.__Vfunc_lzd24__19__Vfuncout = (((
                                                   ((((((0x00800000U 
                                                         == 
                                                         (0x00800000U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val)) 
                                                        | (0x00400000U 
                                                           == 
                                                           (0x00c00000U 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                       | (0x00200000U 
                                                          == 
                                                          (0x00e00000U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                      | (0x00100000U 
                                                         == 
                                                         (0x00f00000U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                     | (0x00080000U 
                                                        == 
                                                        (0x00f80000U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                    | (0x00040000U 
                                                       == 
                                                       (0x00fc0000U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                   | (0x00020000U 
                                                      == 
                                                      (0x00fe0000U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                  | (0x00010000U 
                                                     == 
                                                     (0x00ff0000U 
                                                      & vlSelfRef.__Vfunc_lzd24__19__val)))
                                                  ? 
                                                 ((0x00800000U 
                                                   == 
                                                   (0x00800000U 
                                                    & vlSelfRef.__Vfunc_lzd24__19__val))
                                                   ? 0U
                                                   : 
                                                  ((0x00400000U 
                                                    == 
                                                    (0x00c00000U 
                                                     & vlSelfRef.__Vfunc_lzd24__19__val))
                                                    ? 1U
                                                    : 
                                                   ((0x00200000U 
                                                     == 
                                                     (0x00e00000U 
                                                      & vlSelfRef.__Vfunc_lzd24__19__val))
                                                     ? 2U
                                                     : 
                                                    ((0x00100000U 
                                                      == 
                                                      (0x00f00000U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val))
                                                      ? 3U
                                                      : 
                                                     ((0x00080000U 
                                                       == 
                                                       (0x00f80000U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))
                                                       ? 4U
                                                       : 
                                                      ((0x00040000U 
                                                        == 
                                                        (0x00fc0000U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))
                                                        ? 5U
                                                        : 
                                                       ((0x00020000U 
                                                         == 
                                                         (0x00fe0000U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 (((((((((0x00008000U 
                                                          == 
                                                          (0x00ff8000U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val)) 
                                                         | (0x00004000U 
                                                            == 
                                                            (0x00ffc000U 
                                                             & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                        | (0x00002000U 
                                                           == 
                                                           (0x00ffe000U 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                       | (0x00001000U 
                                                          == 
                                                          (0x00fff000U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                      | (0x00000800U 
                                                         == 
                                                         (0x00fff800U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                     | (0x00000400U 
                                                        == 
                                                        (0x00fffc00U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                    | (0x00000200U 
                                                       == 
                                                       (0x00fffe00U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                   | (0x00000100U 
                                                      == 
                                                      (0x00ffff00U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val)))
                                                   ? 
                                                  ((0x00008000U 
                                                    == 
                                                    (0x00ff8000U 
                                                     & vlSelfRef.__Vfunc_lzd24__19__val))
                                                    ? 8U
                                                    : 
                                                   ((0x00004000U 
                                                     == 
                                                     (0x00ffc000U 
                                                      & vlSelfRef.__Vfunc_lzd24__19__val))
                                                     ? 9U
                                                     : 
                                                    ((0x00002000U 
                                                      == 
                                                      (0x00ffe000U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val))
                                                      ? 0x0aU
                                                      : 
                                                     ((0x00001000U 
                                                       == 
                                                       (0x00fff000U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))
                                                       ? 0x0bU
                                                       : 
                                                      ((0x00000800U 
                                                        == 
                                                        (0x00fff800U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))
                                                        ? 0x0cU
                                                        : 
                                                       ((0x00000400U 
                                                         == 
                                                         (0x00fffc00U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))
                                                         ? 0x0dU
                                                         : 
                                                        ((0x00000200U 
                                                          == 
                                                          (0x00fffe00U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))
                                                          ? 0x0eU
                                                          : 0x0fU)))))))
                                                   : 
                                                  (((((((((0x00000080U 
                                                           == 
                                                           (0x00ffff80U 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val)) 
                                                          | (0x00000040U 
                                                             == 
                                                             (0x00ffffc0U 
                                                              & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                         | (0x00000020U 
                                                            == 
                                                            (0x00ffffe0U 
                                                             & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                        | (0x00000010U 
                                                           == 
                                                           (0x00fffff0U 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                       | (8U 
                                                          == 
                                                          (0x00fffff8U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                      | (4U 
                                                         == 
                                                         (0x00fffffcU 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                     | (2U 
                                                        == 
                                                        (0x00fffffeU 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                    | (1U 
                                                       == vlSelfRef.__Vfunc_lzd24__19__val))
                                                    ? 
                                                   ((0x00000080U 
                                                     == 
                                                     (0x00ffff80U 
                                                      & vlSelfRef.__Vfunc_lzd24__19__val))
                                                     ? 0x10U
                                                     : 
                                                    ((0x00000040U 
                                                      == 
                                                      (0x00ffffc0U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val))
                                                      ? 0x11U
                                                      : 
                                                     ((0x00000020U 
                                                       == 
                                                       (0x00ffffe0U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))
                                                       ? 0x12U
                                                       : 
                                                      ((0x00000010U 
                                                        == 
                                                        (0x00fffff0U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))
                                                        ? 0x13U
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x00fffff8U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))
                                                         ? 0x14U
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x00fffffcU 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))
                                                          ? 0x15U
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x00fffffeU 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val))
                                                           ? 0x16U
                                                           : 0x17U)))))))
                                                    : 0x18U)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero 
            = vlSelfRef.__Vfunc_lzd24__19__Vfuncout;
        if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero) 
             >= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out);
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp 
                = ((0x03000000U & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in 
                                   >> 1U)) | (0x00ffffffU 
                                              & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp 
                = (0x0003ffffffffffffULL & ((((QData)((IData)(
                                                              (0x00ffffffU 
                                                               & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum))) 
                                              << 0x0000001aU) 
                                             | (QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp))) 
                                            << (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized 
                = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp 
                                          >> 0x1aU)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized 
                = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted) 
                                  - (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out) 
                   | (((6U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp 
                                       >> 0x00000018U)) 
                              << 1U)) | (0U != (0x00ffffffU 
                                                & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp)))) 
                      << 0x00000018U));
        }
    }
    vlSelfRef.u_fpu_top__DOT__exp_add_norm = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized;
    vlSelfRef.u_fpu_top__DOT__flags_out_norm = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out;
    vlSelfRef.u_fpu_top__DOT__mant_add_norm = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized;
    if (((0U == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
         || (1U == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)))) {
        vlSelfRef.u_fpu_top__DOT__sign_result = vlSelfRef.u_fpu_top__DOT__sign_result_addsub;
        vlSelfRef.u_fpu_top__DOT__exp_normalized = vlSelfRef.u_fpu_top__DOT__exp_add_norm;
        vlSelfRef.u_fpu_top__DOT__flag_rounding = vlSelfRef.u_fpu_top__DOT__flags_out_norm;
        vlSelfRef.u_fpu_top__DOT__mant_normalized = vlSelfRef.u_fpu_top__DOT__mant_add_norm;
    } else {
        vlSelfRef.u_fpu_top__DOT__sign_result = ((2U 
                                                  == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                 && (IData)(vlSelfRef.u_fpu_top__DOT__sign_res_mul));
        if ((2U == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__exp_normalized 
                = vlSelfRef.u_fpu_top__DOT__exp_res_mul;
            vlSelfRef.u_fpu_top__DOT__flag_rounding 
                = vlSelfRef.u_fpu_top__DOT__flags_out_mul;
            vlSelfRef.u_fpu_top__DOT__mant_normalized 
                = vlSelfRef.u_fpu_top__DOT__mant_mul;
        } else {
            vlSelfRef.u_fpu_top__DOT__exp_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__flag_rounding = 0U;
            vlSelfRef.u_fpu_top__DOT__mant_normalized = 0U;
        }
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized 
        = vlSelfRef.u_fpu_top__DOT__exp_normalized;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__flags 
        = vlSelfRef.u_fpu_top__DOT__flag_rounding;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized 
        = vlSelfRef.u_fpu_top__DOT__mant_normalized;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up 
        = (IData)(((vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__flags 
                    >> 0x0000001aU) & (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized 
                                       | (0U != (3U 
                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__flags 
                                                    >> 0x00000018U))))));
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final = 0U;
    if (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp 
            = (0x01ffffffU & ((IData)(1U) + vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized));
        if ((0x01000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp)) {
            if ((0xfeU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final = 0U;
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final = 0xffU;
            } else {
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final 
                    = (0x007fffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp 
                                      >> 1U));
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized)));
            }
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final 
                = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp);
            vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized;
        }
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final 
            = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized);
        vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized;
    }
    vlSelfRef.u_fpu_top__DOT__mant_final = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final;
    vlSelfRef.u_fpu_top__DOT__exp_final = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final;
    vlSelfRef.u_fpu_top__DOT__fpu_result = ((IData)(vlSelfRef.u_fpu_top__DOT__spec_vld)
                                             ? vlSelfRef.u_fpu_top__DOT__spec_out
                                             : (((3U 
                                                  == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                 | (4U 
                                                    == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)))
                                                 ? 
                                                ((IData)(vlSelfRef.u_fpu_top__DOT__cmp_res)
                                                  ? vlSelfRef.u_fpu_top__DOT__flushed_operand_a
                                                  : vlSelfRef.u_fpu_top__DOT__flushed_operand_b)
                                                 : 
                                                (((5U 
                                                   == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                  | ((6U 
                                                      == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                     | ((7U 
                                                         == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                        | (8U 
                                                           == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)))))
                                                  ? vlSelfRef.u_fpu_top__DOT__cvt_res
                                                  : 
                                                 (((IData)(vlSelfRef.u_fpu_top__DOT__sign_result) 
                                                   << 0x0000001fU) 
                                                  | (((IData)(vlSelfRef.u_fpu_top__DOT__exp_final) 
                                                      << 0x00000017U) 
                                                     | vlSelfRef.u_fpu_top__DOT__mant_final)))));
    vlSelfRef.result_fpu = vlSelfRef.u_fpu_top__DOT__fpu_result;
    vlSelfRef.result = ((IData)(vlSelfRef.fu_sel) ? vlSelfRef.result_fpu
                         : vlSelfRef.result_alu);
}

void Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.fu_sel = vlSymsp->TOP.gpu__DOT__fu_sel;
    vlSelfRef.alu_op = vlSymsp->TOP.gpu__DOT__alu_op;
    vlSelfRef.fpu_op = vlSymsp->TOP.gpu__DOT__fpu_op;
    vlSelfRef.u_alu_top__DOT__alu_op = vlSelfRef.alu_op;
    vlSelfRef.u_fpu_top__DOT__fpu_op = vlSelfRef.fpu_op;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op 
        = vlSelfRef.u_alu_top__DOT__alu_op;
    __Vtableidx8 = vlSelfRef.u_alu_top__DOT__alu_op;
    vlSelfRef.u_alu_top__DOT__sub = Vtop__ConstPool__TABLE_haa2ba6c8_0
        [__Vtableidx8];
    vlSelfRef.u_alu_top__DOT__cmp_op = Vtop__ConstPool__TABLE_hf0ca261b_0
        [__Vtableidx8];
    vlSelfRef.u_alu_top__DOT__logic_op = Vtop__ConstPool__TABLE_h743c250b_0
        [__Vtableidx8];
    vlSelfRef.u_alu_top__DOT__shift_op = Vtop__ConstPool__TABLE_hc5fa8ef7_0
        [__Vtableidx8];
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op 
        = vlSelfRef.u_fpu_top__DOT__fpu_op;
    __Vtableidx7 = vlSelfRef.u_fpu_top__DOT__fpu_op;
    vlSelfRef.u_fpu_top__DOT__add_op = Vtop__ConstPool__TABLE_haa2ba6c8_0
        [__Vtableidx7];
    vlSelfRef.u_fpu_top__DOT__cmp_op = Vtop__ConstPool__TABLE_hc079a40c_0
        [__Vtableidx7];
    vlSelfRef.u_fpu_top__DOT__cvt_op = Vtop__ConstPool__TABLE_hf339a501_0
        [__Vtableidx7];
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op 
        = vlSelfRef.u_alu_top__DOT__cmp_op;
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op 
        = vlSelfRef.u_alu_top__DOT__logic_op;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op 
        = vlSelfRef.u_alu_top__DOT__shift_op;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__sub 
        = vlSelfRef.u_alu_top__DOT__sub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op 
        = vlSelfRef.u_fpu_top__DOT__cmp_op;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op 
        = vlSelfRef.u_fpu_top__DOT__cvt_op;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op 
        = vlSelfRef.u_fpu_top__DOT__add_op;
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)) 
                                << 1U) | (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: alu_logic_integer.sv:9: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"gpu.lane[3].u_fu_top.u_alu_top.u_logic_module", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op));
                VL_STOP_MT("rtl/execute/FU/Integer/alu_logic_integer.sv", 9, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)) 
                                << 1U) | (0U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: alu_shift_integer.sv:13: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"gpu.lane[3].u_fu_top.u_alu_top.u_shift_module", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op));
                VL_STOP_MT("rtl/execute/FU/Integer/alu_shift_integer.sv", 13, "");
            }
        }
    }
}

void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.op_b = vlSymsp->TOP.gpu__DOT__op_b[3U];
    vlSelfRef.u_alu_top__DOT__op_b = vlSelfRef.op_b;
    vlSelfRef.u_fpu_top__DOT__operand_b = vlSelfRef.op_b;
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b 
        = vlSelfRef.u_alu_top__DOT__op_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b 
        = vlSelfRef.u_fpu_top__DOT__operand_b;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range 
        = (0x0000001fU & vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__b);
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b_buf 
        = ((IData)(vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__sub)
            ? (~ vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b)
            : vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b);
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero 
        = (0U == (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b 
        = (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b 
           >> 0x0000001fU);
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b 
        = (0x000000ffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b 
                          >> 0x00000017U));
    vlSelfRef.u_fpu_top__DOT__sign_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b 
        = (0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b 
        = ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero)) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b 
        = (0x00800000U | (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b));
    if ((0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b = 0U;
    }
    vlSelfRef.u_fpu_top__DOT__exp_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b 
        = vlSelfRef.u_fpu_top__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b 
        = vlSelfRef.u_fpu_top__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b 
        = vlSelfRef.u_fpu_top__DOT__sign_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b 
        = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b) 
            << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b) 
                                << 0x00000017U) | (0x007fffffU 
                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b)));
    vlSelfRef.u_fpu_top__DOT__mant_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b 
        = vlSelfRef.u_fpu_top__DOT__exp_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b 
        = vlSelfRef.u_fpu_top__DOT__exp_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff 
        = (1U & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op)
                  ? (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b))
                  : (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b)));
    vlSelfRef.u_fpu_top__DOT__flushed_operand_b = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b 
        = vlSelfRef.u_fpu_top__DOT__mant_b;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b 
        = vlSelfRef.u_fpu_top__DOT__mant_b;
}

void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__1(Vtop_fu_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.op_a = vlSymsp->TOP.gpu__DOT__op_a[3U];
    vlSelfRef.u_alu_top__DOT__op_a = vlSelfRef.op_a;
    vlSelfRef.u_fpu_top__DOT__operand_a = vlSelfRef.op_a;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a 
        = vlSelfRef.u_alu_top__DOT__op_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
        = vlSelfRef.u_fpu_top__DOT__operand_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a 
        = vlSelfRef.u_fpu_top__DOT__operand_a;
    vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__result 
        = (vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__a 
           + (vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__b_buf 
              + (IData)(vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__sub)));
    vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__result 
        = ((2U & (IData)(vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op))
            ? ((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op))
                ? (vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
                   != vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b)
                : (vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
                   < vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b))
            : ((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__cmp_op))
                ? VL_LTS_III(32, vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a, vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b)
                : (vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__a 
                   == vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__b)));
    vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__result 
        = ((0U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op))
            ? (vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
               & vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b)
            : ((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op))
                ? (vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
                   | vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b)
                : ((vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__a 
                    ^ vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__b) 
                   & (- (IData)((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__logic_op)))))));
    vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__result 
        = ((0U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op))
            ? (vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a 
               << (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range))
            : ((1U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op))
                ? (vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a 
                   >> (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range))
                : (VL_SHIFTRS_III(32,32,5, vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__a, (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_range)) 
                   & (- (IData)((2U == (IData)(vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__shift_op)))))));
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_ss 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b));
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_su 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, (((QData)((IData)(
                                                                 (vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a 
                                                                  >> 0x0000001fU))) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a)))), 
                      VL_EXTENDS_QQ(64,33, (QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b))));
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_uu 
        = ((QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_b)) 
           * (QData)((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__op_a)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero 
        = (0U == (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a 
        = (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a 
           >> 0x0000001fU);
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a 
        = (0x000000ffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a 
                          >> 0x00000017U));
    vlSelfRef.u_alu_top__DOT__addsub_result = vlSelfRef.u_alu_top__DOT__u_addsub_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__compare_result = vlSelfRef.u_alu_top__DOT__u_compare_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__logic_result = vlSelfRef.u_alu_top__DOT__u_logic_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__shift_result = vlSelfRef.u_alu_top__DOT__u_shift_module__DOT__result;
    vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__mul_res 
        = (((4U & (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op))
             ? (((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op))
                  ? (IData)((vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_uu 
                             >> 0x00000020U)) : (IData)(
                                                        (vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_su 
                                                         >> 0x00000020U))) 
                & (- (IData)((1U & (~ ((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op) 
                                       >> 1U)))))) : 
            (((1U & (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op))
               ? (IData)((vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_ss 
                          >> 0x00000020U)) : (IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__multi_ss)) 
             & (- (IData)((1U & ((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op) 
                                 >> 1U)))))) & (- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__alu_op) 
                                                               >> 3U))))));
    vlSelfRef.u_fpu_top__DOT__sign_a = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a 
        = (0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a 
        = ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero)) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero) 
           & (0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a 
        = (0x00800000U | (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a));
    if ((0U == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a = 0U;
    }
    vlSelfRef.u_fpu_top__DOT__exp_a = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a;
    vlSelfRef.u_alu_top__DOT__mul_result = vlSelfRef.u_alu_top__DOT__u_alu_mul__DOT__mul_res;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a 
        = vlSelfRef.u_fpu_top__DOT__sign_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a 
        = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
            << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a) 
                                << 0x00000017U) | (0x007fffffU 
                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a)));
    vlSelfRef.u_fpu_top__DOT__mant_a = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp = vlSelfRef.u_fpu_top__DOT__exp_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a 
        = vlSelfRef.u_fpu_top__DOT__exp_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a 
        = vlSelfRef.u_fpu_top__DOT__exp_a;
    vlSelfRef.u_alu_top__DOT__result = ((8U & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                         ? ((4U & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                             ? (vlSelfRef.u_alu_top__DOT__compare_result 
                                                & (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.u_alu_top__DOT__alu_op) 
                                                                  >> 1U))))))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                 ? vlSelfRef.u_alu_top__DOT__shift_result
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                  ? vlSelfRef.u_alu_top__DOT__shift_result
                                                  : vlSelfRef.u_alu_top__DOT__logic_result)))
                                         : ((4U & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                 ? vlSelfRef.u_alu_top__DOT__logic_result
                                                 : vlSelfRef.u_alu_top__DOT__mul_result)
                                             : ((2U 
                                                 & (IData)(vlSelfRef.u_alu_top__DOT__alu_op))
                                                 ? vlSelfRef.u_alu_top__DOT__mul_result
                                                 : vlSelfRef.u_alu_top__DOT__addsub_result)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a) 
           ^ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b));
    if ((8U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((4U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0xfafafafaU;
        } else if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0xfafafafaU;
        } else if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 1U;
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0xfafafafaU;
        } else {
            if ((0U != vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
                if ((0U != vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                }
                vlSelfRef.u_fpu_top__DOT__spec_vld 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
                vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a)) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)))) {
                        if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)))) {
                            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                        }
                    }
                }
                vlSelfRef.u_fpu_top__DOT__spec_vld 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
                vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                            ? 0U : 0xffffffffU);
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)))) {
                        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                        ? 0x80000000U : 0x7fffffffU);
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                                          | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                            }
                        }
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                 & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                        & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                       << 0x0000001fU);
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                     & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = (0x7f800000U | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                           & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                          << 0x0000001fU));
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                            ? vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b
                            : 0x7f800000U);
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)
                            ? vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a
                            : 0x7f800000U);
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
                if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a)))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                                          | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                            }
                        }
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                 & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b;
            } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                       << 0x0000001fU);
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                     & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = (0x7f800000U | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                           | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                          << 0x0000001fU));
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a)
                            ? 0xff800000U : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b);
                } else if (vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)
                            ? 0xff800000U : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a);
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                          | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
                if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                              | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                  | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                    }
                }
            }
            vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
            vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
            if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                 | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))
                        ? 0x7fc00000U : (0x7f800000U 
                                         | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                             ^ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                            << 0x0000001fU)));
            } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                        | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                        ^ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                       << 0x0000001fU);
            }
        }
    } else if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op))) {
        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                              | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                  & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                        }
                    }
                }
            }
        }
        vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
        vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
        if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
             | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU)));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)
                    ? (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU))
                    : (0x7f800000U | ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                                      << 0x0000001fU)));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? 0U : ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                            << 0x0000001fU));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)
                    ? (((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b)) 
                        << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b) 
                                            << 0x00000017U) 
                                           | (0x007fffffU 
                                              & vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b)))
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a);
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))))) {
            if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                              | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))))) {
                    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                  & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                        if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                                      | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))))) {
                            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld = 0U;
                        }
                    }
                }
            }
        }
        vlSelfRef.u_fpu_top__DOT__spec_vld = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld;
        vlSelfRef.u_fpu_top__DOT__flushed_operand_a 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0U;
        if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a) 
             | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out = 0x7fc00000U;
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU))
                    : 0x7fc00000U);
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a)
                    ? (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                                      << 0x0000001fU))
                    : (0x7f800000U | ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b) 
                                      << 0x0000001fU)));
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                    == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b))
                    ? ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a) 
                       << 0x0000001fU) : 0U);
        } else if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a) 
                    | (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a)
                    ? vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a);
        }
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant 
        = vlSelfRef.u_fpu_top__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a 
        = vlSelfRef.u_fpu_top__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a 
        = vlSelfRef.u_fpu_top__DOT__mant_a;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true 
        = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp) 
                          - (IData)(0x7fU)));
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp 
        = (0x000003ffU & (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b) 
                           + (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a)) 
                          - (IData)(0x007fU)));
    if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a) 
         >= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta 
            = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a) 
                              - (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext 
            = (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b 
               << 2U);
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
            = ((0x1aU <= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta))
                ? 0U : VL_SHIFTR_III(26,26,8, vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted 
            = (0x00ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
                              >> 2U));
        vlSelfRef.__Vfunc_get_grs__17__mant_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted;
        vlSelfRef.__Vfunc_get_grs__17__mant = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b;
        vlSelfRef.__Vfunc_get_grs__17__exp_delta = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta;
        vlSelfRef.__Vfunc_get_grs__17__sticky_mask 
            = ((2U >= (IData)(vlSelfRef.__Vfunc_get_grs__17__exp_delta))
                ? 0U : ((0x1aU <= (IData)(vlSelfRef.__Vfunc_get_grs__17__exp_delta))
                         ? 0x00ffffffU : VL_SHIFTR_III(24,24,32, 0x00ffffffU, 
                                                       ((IData)(0x0000001aU) 
                                                        - (IData)(vlSelfRef.__Vfunc_get_grs__17__exp_delta)))));
        vlSelfRef.__Vfunc_get_grs__17__s_vec = (vlSelfRef.__Vfunc_get_grs__17__mant 
                                                & vlSelfRef.__Vfunc_get_grs__17__sticky_mask);
        vlSelfRef.__Vfunc_get_grs__17__result = ((0x06000000U 
                                                  & (vlSelfRef.__Vfunc_get_grs__17__mant_shifted 
                                                     << 0x00000019U)) 
                                                 | (((0U 
                                                      != vlSelfRef.__Vfunc_get_grs__17__s_vec) 
                                                     << 0x00000018U) 
                                                    | vlSelfRef.__Vfunc_get_grs__17__s_vec));
        vlSelfRef.__Vfunc_get_grs__17__Vfuncout = vlSelfRef.__Vfunc_get_grs__17__result;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__flags 
            = vlSelfRef.__Vfunc_get_grs__17__Vfuncout;
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta 
            = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b) 
                              - (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext 
            = (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a 
               << 2U);
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
            = ((0x1aU <= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta))
                ? 0U : VL_SHIFTR_III(26,26,8, vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted 
            = (0x00ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted 
                              >> 2U));
        vlSelfRef.__Vfunc_get_grs__18__mant_shifted 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted;
        vlSelfRef.__Vfunc_get_grs__18__mant = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a;
        vlSelfRef.__Vfunc_get_grs__18__exp_delta = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta;
        vlSelfRef.__Vfunc_get_grs__18__sticky_mask 
            = ((2U >= (IData)(vlSelfRef.__Vfunc_get_grs__18__exp_delta))
                ? 0U : ((0x1aU <= (IData)(vlSelfRef.__Vfunc_get_grs__18__exp_delta))
                         ? 0x00ffffffU : VL_SHIFTR_III(24,24,32, 0x00ffffffU, 
                                                       ((IData)(0x0000001aU) 
                                                        - (IData)(vlSelfRef.__Vfunc_get_grs__18__exp_delta)))));
        vlSelfRef.__Vfunc_get_grs__18__s_vec = (vlSelfRef.__Vfunc_get_grs__18__mant 
                                                & vlSelfRef.__Vfunc_get_grs__18__sticky_mask);
        vlSelfRef.__Vfunc_get_grs__18__result = ((0x06000000U 
                                                  & (vlSelfRef.__Vfunc_get_grs__18__mant_shifted 
                                                     << 0x00000019U)) 
                                                 | (((0U 
                                                      != vlSelfRef.__Vfunc_get_grs__18__s_vec) 
                                                     << 0x00000018U) 
                                                    | vlSelfRef.__Vfunc_get_grs__18__s_vec));
        vlSelfRef.__Vfunc_get_grs__18__Vfuncout = vlSelfRef.__Vfunc_get_grs__18__result;
        vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__flags 
            = vlSelfRef.__Vfunc_get_grs__18__Vfuncout;
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted 
        = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a) 
           < (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b));
    vlSelfRef.result_alu = vlSelfRef.u_alu_top__DOT__result;
    vlSelfRef.u_fpu_top__DOT__sign_res_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res;
    vlSelfRef.u_fpu_top__DOT__spec_out = vlSelfRef.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp 
        = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant;
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
        = (0x0000ffffffffffffULL & ((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b)) 
                                    * (QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a))));
    vlSelfRef.u_fpu_top__DOT__exp_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted;
    vlSelfRef.u_fpu_top__DOT__shifted = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op) 
                  >> 1U)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft 
            = ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))
                ? (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)))
                    ? 0U : ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                             & VL_GTES_III(32, 0x00000017U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                             ? VL_SHIFTR_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                             ((IData)(0x00000017U) 
                                              - VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                             : ((VL_LTS_III(32, 0x00000017U, 
                                            VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                                 & VL_GTES_III(32, 0x0000001fU, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                                 ? VL_SHIFTL_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                                 (VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)) 
                                                  - (IData)(0x00000017U)))
                                 : 0xffffffffU))) : 
               (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)))
                 ? 0U : ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                          & VL_GTES_III(32, 0x00000017U, 
                                        VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                          ? VL_SHIFTR_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                          ((IData)(0x00000017U) 
                                           - VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                          : ((VL_LTS_III(32, 0x00000017U, 
                                         VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))) 
                              & VL_GTES_III(32, 0x0000001eU, 
                                            VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true))))
                              ? VL_SHIFTL_III(32,32,32, vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp, 
                                              (VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)) 
                                               - (IData)(0x00000017U)))
                              : 0x7fffffffU))));
    }
    if ((2U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))) {
        if ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))) {
            if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a)) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp = 0U;
            } else {
                vlSelfRef.__Vfunc_lzd32_23__15__val 
                    = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a;
                vlSelfRef.__Vfunc_lzd32_23__15__Vfuncout 
                    = (((((((((0x80000000U == (0x80000000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val)) 
                              | (0x40000000U == (0xc0000000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                             | (0x20000000U == (0xe0000000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                            | (0x10000000U == (0xf0000000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                           | (0x08000000U == (0xf8000000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                          | (0x04000000U == (0xfc000000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                         | (0x02000000U == (0xfe000000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                        | (0x01000000U == (0xff000000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__15__val)))
                        ? ((0x80000000U == (0x80000000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__15__val))
                            ? 8U : ((0x40000000U == 
                                     (0xc0000000U & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                     ? 7U : ((0x20000000U 
                                              == (0xe0000000U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                              ? 6U : 
                                             ((0x10000000U 
                                               == (0xf0000000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                               ? 5U
                                               : ((0x08000000U 
                                                   == 
                                                   (0xf8000000U 
                                                    & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                   ? 4U
                                                   : 
                                                  ((0x04000000U 
                                                    == 
                                                    (0xfc000000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                    ? 3U
                                                    : 
                                                   ((0x02000000U 
                                                     == 
                                                     (0xfe000000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                     ? 2U
                                                     : 1U)))))))
                        : (((((((((0x00800000U == (0xff800000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__15__val)) 
                                  | (0x00400000U == 
                                     (0xffc00000U & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                 | (0x00200000U == 
                                    (0xffe00000U & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                | (0x00100000U == (0xfff00000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                               | (0x00080000U == (0xfff80000U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                              | (0x00040000U == (0xfffc0000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                             | (0x00020000U == (0xfffe0000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                            | (0x00010000U == (0xffff0000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val)))
                            ? ((0x00800000U == (0xff800000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                ? 0U : ((0x00400000U 
                                         == (0xffc00000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                         ? 0x21U : 
                                        ((0x00200000U 
                                          == (0xffe00000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                          ? 0x22U : 
                                         ((0x00100000U 
                                           == (0xfff00000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                           ? 0x23U : 
                                          ((0x00080000U 
                                            == (0xfff80000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                            ? 0x24U
                                            : ((0x00040000U 
                                                == 
                                                (0xfffc0000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                ? 0x25U
                                                : (
                                                   (0x00020000U 
                                                    == 
                                                    (0xfffe0000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                    ? 0x26U
                                                    : 0x27U)))))))
                            : (((((((((0x00008000U 
                                       == (0xffff8000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__15__val)) 
                                      | (0x00004000U 
                                         == (0xffffc000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                     | (0x00002000U 
                                        == (0xffffe000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                    | (0x00001000U 
                                       == (0xfffff000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                   | (0x00000800U == 
                                      (0xfffff800U 
                                       & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                  | (0x00000400U == 
                                     (0xfffffc00U & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                 | (0x00000200U == 
                                    (0xfffffe00U & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                | (0x00000100U == (0xffffff00U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__15__val)))
                                ? ((0x00008000U == 
                                    (0xffff8000U & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                    ? 0x28U : ((0x00004000U 
                                                == 
                                                (0xffffc000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                ? 0x29U
                                                : (
                                                   (0x00002000U 
                                                    == 
                                                    (0xffffe000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                    ? 0x2aU
                                                    : 
                                                   ((0x00001000U 
                                                     == 
                                                     (0xfffff000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                     ? 0x2bU
                                                     : 
                                                    ((0x00000800U 
                                                      == 
                                                      (0xfffff800U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                      ? 0x2cU
                                                      : 
                                                     ((0x00000400U 
                                                       == 
                                                       (0xfffffc00U 
                                                        & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                       ? 0x2dU
                                                       : 
                                                      ((0x00000200U 
                                                        == 
                                                        (0xfffffe00U 
                                                         & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                        ? 0x2eU
                                                        : 0x2fU)))))))
                                : (((((((((0x00000080U 
                                           == (0xffffff80U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val)) 
                                          | (0x00000040U 
                                             == (0xffffffc0U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                         | (0x00000020U 
                                            == (0xffffffe0U 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                        | (0x00000010U 
                                           == (0xfffffff0U 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                       | (8U == (0xfffffff8U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                      | (4U == (0xfffffffcU 
                                                & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                     | (2U == (0xfffffffeU 
                                               & vlSelfRef.__Vfunc_lzd32_23__15__val))) 
                                    | (1U == vlSelfRef.__Vfunc_lzd32_23__15__val))
                                    ? ((0x00000080U 
                                        == (0xffffff80U 
                                            & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                        ? 0x30U : (
                                                   (0x00000040U 
                                                    == 
                                                    (0xffffffc0U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                    ? 0x31U
                                                    : 
                                                   ((0x00000020U 
                                                     == 
                                                     (0xffffffe0U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                     ? 0x32U
                                                     : 
                                                    ((0x00000010U 
                                                      == 
                                                      (0xfffffff0U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                      ? 0x33U
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0xfffffff8U 
                                                        & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                       ? 0x34U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0xfffffffcU 
                                                         & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                        ? 0x35U
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (0xfffffffeU 
                                                          & vlSelfRef.__Vfunc_lzd32_23__15__val))
                                                         ? 0x36U
                                                         : 0x37U)))))))
                                    : 0U))));
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt 
                    = vlSelfRef.__Vfunc_lzd32_23__15__Vfuncout;
                if ((0x00000020U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))) {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                        = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
                           << (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                        = (0x000000ffU & ((IData)(0x96U) 
                                          - (0x0000001fU 
                                             & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
                } else {
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                        = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
                           >> (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                    vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                        = (0x000000ffU & ((IData)(0x96U) 
                                          + (0x0000001fU 
                                             & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
                }
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt 
                    = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp);
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp 
                    = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt) 
                        << 0x00000017U) | vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt);
            }
        } else if ((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a)) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp = 0U;
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt 
                = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a 
                   >> 0x1fU);
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec 
                = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt)
                    ? (- vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a)
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a);
            vlSelfRef.__Vfunc_lzd32_23__16__val = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec;
            vlSelfRef.__Vfunc_lzd32_23__16__Vfuncout 
                = (((((((((0x80000000U == (0x80000000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val)) 
                          | (0x40000000U == (0xc0000000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                         | (0x20000000U == (0xe0000000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                        | (0x10000000U == (0xf0000000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                       | (0x08000000U == (0xf8000000U 
                                          & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                      | (0x04000000U == (0xfc000000U 
                                         & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                     | (0x02000000U == (0xfe000000U 
                                        & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                    | (0x01000000U == (0xff000000U 
                                       & vlSelfRef.__Vfunc_lzd32_23__16__val)))
                    ? ((0x80000000U == (0x80000000U 
                                        & vlSelfRef.__Vfunc_lzd32_23__16__val))
                        ? 8U : ((0x40000000U == (0xc0000000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                 ? 7U : ((0x20000000U 
                                          == (0xe0000000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                          ? 6U : ((0x10000000U 
                                                   == 
                                                   (0xf0000000U 
                                                    & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                   ? 5U
                                                   : 
                                                  ((0x08000000U 
                                                    == 
                                                    (0xf8000000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                    ? 4U
                                                    : 
                                                   ((0x04000000U 
                                                     == 
                                                     (0xfc000000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                     ? 3U
                                                     : 
                                                    ((0x02000000U 
                                                      == 
                                                      (0xfe000000U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                      ? 2U
                                                      : 1U)))))))
                    : (((((((((0x00800000U == (0xff800000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__16__val)) 
                              | (0x00400000U == (0xffc00000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                             | (0x00200000U == (0xffe00000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                            | (0x00100000U == (0xfff00000U 
                                               & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                           | (0x00080000U == (0xfff80000U 
                                              & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                          | (0x00040000U == (0xfffc0000U 
                                             & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                         | (0x00020000U == (0xfffe0000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                        | (0x00010000U == (0xffff0000U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val)))
                        ? ((0x00800000U == (0xff800000U 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))
                            ? 0U : ((0x00400000U == 
                                     (0xffc00000U & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                     ? 0x21U : ((0x00200000U 
                                                 == 
                                                 (0xffe00000U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                 ? 0x22U
                                                 : 
                                                ((0x00100000U 
                                                  == 
                                                  (0xfff00000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                  ? 0x23U
                                                  : 
                                                 ((0x00080000U 
                                                   == 
                                                   (0xfff80000U 
                                                    & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                   ? 0x24U
                                                   : 
                                                  ((0x00040000U 
                                                    == 
                                                    (0xfffc0000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                    ? 0x25U
                                                    : 
                                                   ((0x00020000U 
                                                     == 
                                                     (0xfffe0000U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                     ? 0x26U
                                                     : 0x27U)))))))
                        : (((((((((0x00008000U == (0xffff8000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__16__val)) 
                                  | (0x00004000U == 
                                     (0xffffc000U & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                 | (0x00002000U == 
                                    (0xffffe000U & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                | (0x00001000U == (0xfffff000U 
                                                   & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                               | (0x00000800U == (0xfffff800U 
                                                  & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                              | (0x00000400U == (0xfffffc00U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                             | (0x00000200U == (0xfffffe00U 
                                                & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                            | (0x00000100U == (0xffffff00U 
                                               & vlSelfRef.__Vfunc_lzd32_23__16__val)))
                            ? ((0x00008000U == (0xffff8000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                ? 0x28U : ((0x00004000U 
                                            == (0xffffc000U 
                                                & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                            ? 0x29U
                                            : ((0x00002000U 
                                                == 
                                                (0xffffe000U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                ? 0x2aU
                                                : (
                                                   (0x00001000U 
                                                    == 
                                                    (0xfffff000U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                    ? 0x2bU
                                                    : 
                                                   ((0x00000800U 
                                                     == 
                                                     (0xfffff800U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                     ? 0x2cU
                                                     : 
                                                    ((0x00000400U 
                                                      == 
                                                      (0xfffffc00U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                      ? 0x2dU
                                                      : 
                                                     ((0x00000200U 
                                                       == 
                                                       (0xfffffe00U 
                                                        & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                       ? 0x2eU
                                                       : 0x2fU)))))))
                            : (((((((((0x00000080U 
                                       == (0xffffff80U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val)) 
                                      | (0x00000040U 
                                         == (0xffffffc0U 
                                             & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                     | (0x00000020U 
                                        == (0xffffffe0U 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                    | (0x00000010U 
                                       == (0xfffffff0U 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                   | (8U == (0xfffffff8U 
                                             & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                  | (4U == (0xfffffffcU 
                                            & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                 | (2U == (0xfffffffeU 
                                           & vlSelfRef.__Vfunc_lzd32_23__16__val))) 
                                | (1U == vlSelfRef.__Vfunc_lzd32_23__16__val))
                                ? ((0x00000080U == 
                                    (0xffffff80U & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                    ? 0x30U : ((0x00000040U 
                                                == 
                                                (0xffffffc0U 
                                                 & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                ? 0x31U
                                                : (
                                                   (0x00000020U 
                                                    == 
                                                    (0xffffffe0U 
                                                     & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                    ? 0x32U
                                                    : 
                                                   ((0x00000010U 
                                                     == 
                                                     (0xfffffff0U 
                                                      & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                     ? 0x33U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfffffff8U 
                                                       & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                      ? 0x34U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffffffcU 
                                                        & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                       ? 0x35U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffffffeU 
                                                         & vlSelfRef.__Vfunc_lzd32_23__16__val))
                                                        ? 0x36U
                                                        : 0x37U)))))))
                                : 0U))));
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt 
                = vlSelfRef.__Vfunc_lzd32_23__16__Vfuncout;
            if ((0x00000020U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                    = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec 
                       << (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                    = (0x000000ffU & ((IData)(0x96U) 
                                      - (0x0000001fU 
                                         & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
            } else {
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp 
                    = (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec 
                       >> (0x0000001fU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt)));
                vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt 
                    = (0x000000ffU & ((IData)(0x96U) 
                                      + (0x0000001fU 
                                         & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt))));
            }
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt 
                = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp);
            vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp 
                = (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt) 
                    << 0x0000001fU) | (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt) 
                                        << 0x00000017U) 
                                       | vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt));
        }
        vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__result 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp;
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__result 
            = ((1U & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op))
                ? (vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign))))))
                : ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__sign)
                    ? (VL_LTS_III(32, 0x0000001eU, 
                                  VL_EXTENDS_II(32,8, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true)))
                        ? 0x80000000U : (- vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft))
                    : vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft));
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm 
        = (0x000003ffU & ((1U & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                         >> 0x0000002fU)))
                           ? ((IData)(1U) + VL_EXTENDS_II(10,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp)))
                           : VL_EXTENDS_II(10,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp))));
    vlSelfRef.u_fpu_top__DOT__mant_a_shifted = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted;
    vlSelfRef.u_fpu_top__DOT__mant_b_shifted = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted;
    vlSelfRef.u_fpu_top__DOT__flags_out_shifter = vlSelfRef.u_fpu_top__DOT__u_fpu_shifter__DOT__flags;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted 
        = vlSelfRef.u_fpu_top__DOT__exp_addsub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted 
        = vlSelfRef.u_fpu_top__DOT__shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted 
        = vlSelfRef.u_fpu_top__DOT__shifted;
    if (VL_GTES_III(32, 0U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul = 0U;
    } else if (VL_LTES_III(32, 0x000000ffU, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res = 0x000000ffU;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul = 0U;
    } else if ((1U & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                              >> 0x2fU)))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res 
            = (0x000000ffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (((6U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                   >> 0x00000016U)) 
                          << 1U)) | (0U != (0x003fffffU 
                                            & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)))) 
                  << 0x00000018U));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (0x003fffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul 
            = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                      >> 0x18U)));
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res 
            = (0x000000ffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (((6U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                   >> 0x00000015U)) 
                          << 1U)) | (0U != (0x001fffffU 
                                            & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)))) 
                  << 0x00000018U));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out 
            = ((0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out) 
               | (0x001fffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul 
            = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp 
                                      >> 0x17U)));
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_a_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_a_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_b_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted 
        = vlSelfRef.u_fpu_top__DOT__mant_b_shifted;
    vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
        = vlSelfRef.u_fpu_top__DOT__flags_out_shifter;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
        = vlSelfRef.u_fpu_top__DOT__flags_out_shifter;
    vlSelfRef.u_fpu_top__DOT__cvt_res = vlSelfRef.u_fpu_top__DOT__u_fpu_cvt__DOT__result;
    vlSelfRef.u_fpu_top__DOT__exp_res_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res;
    vlSelfRef.u_fpu_top__DOT__flags_out_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out;
    vlSelfRef.u_fpu_top__DOT__mant_mul = vlSelfRef.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul;
    if (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp 
            = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted)
                ? ((((QData)((IData)(((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted 
                                       << 1U) | (1U 
                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                    >> 0x0000001aU))))) 
                     << 0x00000019U) | (QData)((IData)(
                                                       ((0x01000000U 
                                                         & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                            >> 1U)) 
                                                        | (0x00ffffffU 
                                                           & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in))))) 
                   > ((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted)) 
                      << 0x0000001aU)) : (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted)) 
                                           << 0x0000001aU) 
                                          > (((QData)((IData)(
                                                              ((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted 
                                                                << 1U) 
                                                               | (1U 
                                                                  & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                     >> 0x0000001aU))))) 
                                              << 0x00000019U) 
                                             | (QData)((IData)(
                                                               ((0x01000000U 
                                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in)))))));
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res 
            = (1U & ((1U & ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                            & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))))
                      ? (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp)
                      : ((~ ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a) 
                             & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b)))) 
                         & (((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                             & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b)) 
                            | (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp))))));
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp 
            = ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted)
                ? ((((QData)((IData)(((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted 
                                       << 1U) | (1U 
                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                    >> 0x0000001aU))))) 
                     << 0x00000019U) | (QData)((IData)(
                                                       ((0x01000000U 
                                                         & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                            >> 1U)) 
                                                        | (0x00ffffffU 
                                                           & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in))))) 
                   < ((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted)) 
                      << 0x0000001aU)) : (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted)) 
                                           << 0x0000001aU) 
                                          < (((QData)((IData)(
                                                              ((vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted 
                                                                << 1U) 
                                                               | (1U 
                                                                  & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                     >> 0x0000001aU))))) 
                                              << 0x00000019U) 
                                             | (QData)((IData)(
                                                               ((0x01000000U 
                                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in 
                                                                    >> 1U)) 
                                                                | (0x00ffffffU 
                                                                   & vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in)))))));
        vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res 
            = (1U & ((1U & ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                            & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))))
                      ? (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp)
                      : (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a) 
                          & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))) 
                         | ((~ ((~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a)) 
                                & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b))) 
                            & (~ (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp))))));
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
        = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in;
    vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp = 0ULL;
    if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a) 
         == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
            = (0x01ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                              + vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted));
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a;
    } else if ((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                >= vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted)) {
        if (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x01ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                                  - vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted));
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                = (0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted)) 
                                             << 0x0000001aU) 
                                            - (((QData)((IData)(
                                                                ((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                       >> 0x0000001aU))))) 
                                                << 0x00000019U) 
                                               | (QData)((IData)(
                                                                 ((0x01000000U 
                                                                   & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                      >> 1U)) 
                                                                  | (0x00ffffffU 
                                                                     & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in)))))));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                          >> 0x1aU)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x01ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (0x06000000U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                              >> 0x00000018U)) 
                                     << 0x00000019U)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x06000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (((0U != (0x00ffffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))) 
                       << 0x00000018U) | (0x00ffffffU 
                                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))));
        }
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result 
            = ((~ (IData)(((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum) 
                           & (0U == (0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out))))) 
               & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a));
    } else {
        if (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                = (0x0003ffffffffffffULL & (((QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted)) 
                                             << 0x0000001aU) 
                                            - (((QData)((IData)(
                                                                ((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                       >> 0x0000001aU))))) 
                                                << 0x00000019U) 
                                               | (QData)((IData)(
                                                                 ((0x01000000U 
                                                                   & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in 
                                                                      >> 1U)) 
                                                                  | (0x00ffffffU 
                                                                     & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in)))))));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                          >> 0x1aU)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x01ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (0x06000000U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp 
                                              >> 0x00000018U)) 
                                     << 0x00000019U)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out 
                = ((0x06000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out) 
                   | (((0U != (0x00ffffffU & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))) 
                       << 0x00000018U) | (0x00ffffffU 
                                          & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp))));
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum 
                = (0x01ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted 
                                  - vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted));
        }
        vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff;
    }
    vlSelfRef.u_fpu_top__DOT__cmp_res = vlSelfRef.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res;
    vlSelfRef.u_fpu_top__DOT__sign_result_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result;
    vlSelfRef.u_fpu_top__DOT__flags_out_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out;
    vlSelfRef.u_fpu_top__DOT__mant_addsub = vlSelfRef.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in 
        = vlSelfRef.u_fpu_top__DOT__flags_out_addsub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum 
        = vlSelfRef.u_fpu_top__DOT__mant_addsub;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
        = ((0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out) 
           | (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in));
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp = 0ULL;
    if ((IData)(((0U == vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum) 
                 & (0U == (0x07000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in))))) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized = 0U;
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
            = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out);
    } else if ((0x01000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum)) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized 
            = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted)));
        if ((0xffU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out);
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized 
                = (0x00ffffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum 
                                  >> 1U));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out) 
                   | (((4U & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum 
                              << 2U)) | ((2U & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in 
                                                >> 0x00000019U)) 
                                         | (IData)(
                                                   (0U 
                                                    != 
                                                    (0x03000000U 
                                                     & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in))))) 
                      << 0x00000018U));
        }
    } else if ((0x00800000U & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum)) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized 
            = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum);
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted;
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in;
    } else {
        vlSelfRef.__Vfunc_lzd24__19__val = (0x00ffffffU 
                                            & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum);
        vlSelfRef.__Vfunc_lzd24__19__Vfuncout = (((
                                                   ((((((0x00800000U 
                                                         == 
                                                         (0x00800000U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val)) 
                                                        | (0x00400000U 
                                                           == 
                                                           (0x00c00000U 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                       | (0x00200000U 
                                                          == 
                                                          (0x00e00000U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                      | (0x00100000U 
                                                         == 
                                                         (0x00f00000U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                     | (0x00080000U 
                                                        == 
                                                        (0x00f80000U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                    | (0x00040000U 
                                                       == 
                                                       (0x00fc0000U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                   | (0x00020000U 
                                                      == 
                                                      (0x00fe0000U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                  | (0x00010000U 
                                                     == 
                                                     (0x00ff0000U 
                                                      & vlSelfRef.__Vfunc_lzd24__19__val)))
                                                  ? 
                                                 ((0x00800000U 
                                                   == 
                                                   (0x00800000U 
                                                    & vlSelfRef.__Vfunc_lzd24__19__val))
                                                   ? 0U
                                                   : 
                                                  ((0x00400000U 
                                                    == 
                                                    (0x00c00000U 
                                                     & vlSelfRef.__Vfunc_lzd24__19__val))
                                                    ? 1U
                                                    : 
                                                   ((0x00200000U 
                                                     == 
                                                     (0x00e00000U 
                                                      & vlSelfRef.__Vfunc_lzd24__19__val))
                                                     ? 2U
                                                     : 
                                                    ((0x00100000U 
                                                      == 
                                                      (0x00f00000U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val))
                                                      ? 3U
                                                      : 
                                                     ((0x00080000U 
                                                       == 
                                                       (0x00f80000U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))
                                                       ? 4U
                                                       : 
                                                      ((0x00040000U 
                                                        == 
                                                        (0x00fc0000U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))
                                                        ? 5U
                                                        : 
                                                       ((0x00020000U 
                                                         == 
                                                         (0x00fe0000U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))
                                                         ? 6U
                                                         : 7U)))))))
                                                  : 
                                                 (((((((((0x00008000U 
                                                          == 
                                                          (0x00ff8000U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val)) 
                                                         | (0x00004000U 
                                                            == 
                                                            (0x00ffc000U 
                                                             & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                        | (0x00002000U 
                                                           == 
                                                           (0x00ffe000U 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                       | (0x00001000U 
                                                          == 
                                                          (0x00fff000U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                      | (0x00000800U 
                                                         == 
                                                         (0x00fff800U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                     | (0x00000400U 
                                                        == 
                                                        (0x00fffc00U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                    | (0x00000200U 
                                                       == 
                                                       (0x00fffe00U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                   | (0x00000100U 
                                                      == 
                                                      (0x00ffff00U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val)))
                                                   ? 
                                                  ((0x00008000U 
                                                    == 
                                                    (0x00ff8000U 
                                                     & vlSelfRef.__Vfunc_lzd24__19__val))
                                                    ? 8U
                                                    : 
                                                   ((0x00004000U 
                                                     == 
                                                     (0x00ffc000U 
                                                      & vlSelfRef.__Vfunc_lzd24__19__val))
                                                     ? 9U
                                                     : 
                                                    ((0x00002000U 
                                                      == 
                                                      (0x00ffe000U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val))
                                                      ? 0x0aU
                                                      : 
                                                     ((0x00001000U 
                                                       == 
                                                       (0x00fff000U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))
                                                       ? 0x0bU
                                                       : 
                                                      ((0x00000800U 
                                                        == 
                                                        (0x00fff800U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))
                                                        ? 0x0cU
                                                        : 
                                                       ((0x00000400U 
                                                         == 
                                                         (0x00fffc00U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))
                                                         ? 0x0dU
                                                         : 
                                                        ((0x00000200U 
                                                          == 
                                                          (0x00fffe00U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))
                                                          ? 0x0eU
                                                          : 0x0fU)))))))
                                                   : 
                                                  (((((((((0x00000080U 
                                                           == 
                                                           (0x00ffff80U 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val)) 
                                                          | (0x00000040U 
                                                             == 
                                                             (0x00ffffc0U 
                                                              & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                         | (0x00000020U 
                                                            == 
                                                            (0x00ffffe0U 
                                                             & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                        | (0x00000010U 
                                                           == 
                                                           (0x00fffff0U 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                       | (8U 
                                                          == 
                                                          (0x00fffff8U 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                      | (4U 
                                                         == 
                                                         (0x00fffffcU 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                     | (2U 
                                                        == 
                                                        (0x00fffffeU 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))) 
                                                    | (1U 
                                                       == vlSelfRef.__Vfunc_lzd24__19__val))
                                                    ? 
                                                   ((0x00000080U 
                                                     == 
                                                     (0x00ffff80U 
                                                      & vlSelfRef.__Vfunc_lzd24__19__val))
                                                     ? 0x10U
                                                     : 
                                                    ((0x00000040U 
                                                      == 
                                                      (0x00ffffc0U 
                                                       & vlSelfRef.__Vfunc_lzd24__19__val))
                                                      ? 0x11U
                                                      : 
                                                     ((0x00000020U 
                                                       == 
                                                       (0x00ffffe0U 
                                                        & vlSelfRef.__Vfunc_lzd24__19__val))
                                                       ? 0x12U
                                                       : 
                                                      ((0x00000010U 
                                                        == 
                                                        (0x00fffff0U 
                                                         & vlSelfRef.__Vfunc_lzd24__19__val))
                                                        ? 0x13U
                                                        : 
                                                       ((8U 
                                                         == 
                                                         (0x00fffff8U 
                                                          & vlSelfRef.__Vfunc_lzd24__19__val))
                                                         ? 0x14U
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x00fffffcU 
                                                           & vlSelfRef.__Vfunc_lzd24__19__val))
                                                          ? 0x15U
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x00fffffeU 
                                                            & vlSelfRef.__Vfunc_lzd24__19__val))
                                                           ? 0x16U
                                                           : 0x17U)))))))
                                                    : 0x18U)));
        vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero 
            = vlSelfRef.__Vfunc_lzd24__19__Vfuncout;
        if (((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero) 
             >= (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted))) {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = (0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out);
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp 
                = ((0x03000000U & (vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in 
                                   >> 1U)) | (0x00ffffffU 
                                              & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp 
                = (0x0003ffffffffffffULL & ((((QData)((IData)(
                                                              (0x00ffffffU 
                                                               & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum))) 
                                              << 0x0000001aU) 
                                             | (QData)((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp))) 
                                            << (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized 
                = (0x00ffffffU & (IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp 
                                          >> 0x1aU)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized 
                = (0x000000ffU & ((IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted) 
                                  - (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero)));
            vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out 
                = ((0x00ffffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out) 
                   | (((6U & ((IData)((vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp 
                                       >> 0x00000018U)) 
                              << 1U)) | (0U != (0x00ffffffU 
                                                & (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp)))) 
                      << 0x00000018U));
        }
    }
    vlSelfRef.u_fpu_top__DOT__exp_add_norm = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized;
    vlSelfRef.u_fpu_top__DOT__flags_out_norm = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out;
    vlSelfRef.u_fpu_top__DOT__mant_add_norm = vlSelfRef.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized;
    if (((0U == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
         || (1U == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)))) {
        vlSelfRef.u_fpu_top__DOT__sign_result = vlSelfRef.u_fpu_top__DOT__sign_result_addsub;
        vlSelfRef.u_fpu_top__DOT__exp_normalized = vlSelfRef.u_fpu_top__DOT__exp_add_norm;
        vlSelfRef.u_fpu_top__DOT__flag_rounding = vlSelfRef.u_fpu_top__DOT__flags_out_norm;
        vlSelfRef.u_fpu_top__DOT__mant_normalized = vlSelfRef.u_fpu_top__DOT__mant_add_norm;
    } else {
        vlSelfRef.u_fpu_top__DOT__sign_result = ((2U 
                                                  == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                 && (IData)(vlSelfRef.u_fpu_top__DOT__sign_res_mul));
        if ((2U == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op))) {
            vlSelfRef.u_fpu_top__DOT__exp_normalized 
                = vlSelfRef.u_fpu_top__DOT__exp_res_mul;
            vlSelfRef.u_fpu_top__DOT__flag_rounding 
                = vlSelfRef.u_fpu_top__DOT__flags_out_mul;
            vlSelfRef.u_fpu_top__DOT__mant_normalized 
                = vlSelfRef.u_fpu_top__DOT__mant_mul;
        } else {
            vlSelfRef.u_fpu_top__DOT__exp_normalized = 0U;
            vlSelfRef.u_fpu_top__DOT__flag_rounding = 0U;
            vlSelfRef.u_fpu_top__DOT__mant_normalized = 0U;
        }
    }
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized 
        = vlSelfRef.u_fpu_top__DOT__exp_normalized;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__flags 
        = vlSelfRef.u_fpu_top__DOT__flag_rounding;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized 
        = vlSelfRef.u_fpu_top__DOT__mant_normalized;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up 
        = (IData)(((vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__flags 
                    >> 0x0000001aU) & (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized 
                                       | (0U != (3U 
                                                 & (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__flags 
                                                    >> 0x00000018U))))));
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final = 0U;
    vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final = 0U;
    if (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up) {
        vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp 
            = (0x01ffffffU & ((IData)(1U) + vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized));
        if ((0x01000000U & vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp)) {
            if ((0xfeU == (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized))) {
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final = 0U;
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final = 0xffU;
            } else {
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final 
                    = (0x007fffffU & (vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp 
                                      >> 1U));
                vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized)));
            }
        } else {
            vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final 
                = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp);
            vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final 
                = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized;
        }
    } else {
        vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final 
            = (0x007fffffU & vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized);
        vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final 
            = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized;
    }
    vlSelfRef.u_fpu_top__DOT__mant_final = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final;
    vlSelfRef.u_fpu_top__DOT__exp_final = vlSelfRef.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final;
    vlSelfRef.u_fpu_top__DOT__fpu_result = ((IData)(vlSelfRef.u_fpu_top__DOT__spec_vld)
                                             ? vlSelfRef.u_fpu_top__DOT__spec_out
                                             : (((3U 
                                                  == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                 | (4U 
                                                    == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)))
                                                 ? 
                                                ((IData)(vlSelfRef.u_fpu_top__DOT__cmp_res)
                                                  ? vlSelfRef.u_fpu_top__DOT__flushed_operand_a
                                                  : vlSelfRef.u_fpu_top__DOT__flushed_operand_b)
                                                 : 
                                                (((5U 
                                                   == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                  | ((6U 
                                                      == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                     | ((7U 
                                                         == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)) 
                                                        | (8U 
                                                           == (IData)(vlSelfRef.u_fpu_top__DOT__fpu_op)))))
                                                  ? vlSelfRef.u_fpu_top__DOT__cvt_res
                                                  : 
                                                 (((IData)(vlSelfRef.u_fpu_top__DOT__sign_result) 
                                                   << 0x0000001fU) 
                                                  | (((IData)(vlSelfRef.u_fpu_top__DOT__exp_final) 
                                                      << 0x00000017U) 
                                                     | vlSelfRef.u_fpu_top__DOT__mant_final)))));
    vlSelfRef.result_fpu = vlSelfRef.u_fpu_top__DOT__fpu_result;
    vlSelfRef.result = ((IData)(vlSelfRef.fu_sel) ? vlSelfRef.result_fpu
                         : vlSelfRef.result_alu);
}
