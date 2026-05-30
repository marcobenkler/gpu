// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtb_sfu_sign_expo__Syms.h"


VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_init_sub__TOP__0(Vtb_sfu_sign_expo___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root__trace_init_sub__TOP__0\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_sfu_sign_expo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"op",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"sign_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"exp_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"mant_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"is_normal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"POS_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"NEG_ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"POS_INF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"NEG_INF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"QNAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"SNAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"POS_ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"NEG_ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"SMALLEST_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"LARGEST_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"SMALLEST_DN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_sfu_sign_expo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"op",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"sign_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"exp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"mant_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"sign_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"exp_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"mant_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"is_normal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_sfu_sign_expo_props", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"op",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"sign_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"exp_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"mant_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"sign_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"exp_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"mant_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"is_normal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"is_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"is_nan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_init_top(Vtb_sfu_sign_expo___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root__trace_init_top\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_sfu_sign_expo___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_sfu_sign_expo___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_sfu_sign_expo___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_register(Vtb_sfu_sign_expo___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root__trace_register\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_sfu_sign_expo___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_sfu_sign_expo___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_sfu_sign_expo___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_sfu_sign_expo___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_const_0_sub_0(Vtb_sfu_sign_expo___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root__trace_const_0\n"); );
    // Body
    Vtb_sfu_sign_expo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sfu_sign_expo___024root*>(voidSelf);
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_sfu_sign_expo___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_const_0_sub_0(Vtb_sfu_sign_expo___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root__trace_const_0_sub_0\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+11,(0U),32);
    bufp->fullIData(oldp+12,(0x80000000U),32);
    bufp->fullIData(oldp+13,(0x7f800000U),32);
    bufp->fullIData(oldp+14,(0xff800000U),32);
    bufp->fullIData(oldp+15,(0x7fc00000U),32);
    bufp->fullIData(oldp+16,(0x7f800001U),32);
    bufp->fullIData(oldp+17,(0x3f800000U),32);
    bufp->fullIData(oldp+18,(0xbf800000U),32);
    bufp->fullIData(oldp+19,(0x00800000U),32);
    bufp->fullIData(oldp+20,(0x7f7fffffU),32);
    bufp->fullIData(oldp+21,(1U),32);
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_full_0_sub_0(Vtb_sfu_sign_expo___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root__trace_full_0\n"); );
    // Body
    Vtb_sfu_sign_expo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_sfu_sign_expo___024root*>(voidSelf);
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_sfu_sign_expo___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_sfu_sign_expo___024root__trace_full_0_sub_0(Vtb_sfu_sign_expo___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_sfu_sign_expo___024root__trace_full_0_sub_0\n"); );
    Vtb_sfu_sign_expo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.tb_sfu_sign_expo__DOT__op),3);
    bufp->fullIData(oldp+1,(vlSelfRef.tb_sfu_sign_expo__DOT__operand),32);
    bufp->fullBit(oldp+2,((vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                           >> 0x0000001fU)));
    bufp->fullCData(oldp+3,((0x000000ffU & (vlSelfRef.tb_sfu_sign_expo__DOT__operand 
                                            >> 0x00000017U))),8);
    bufp->fullIData(oldp+4,((0x007fffffU & vlSelfRef.tb_sfu_sign_expo__DOT__operand)),23);
    bufp->fullBit(oldp+5,((IData)((0U == (0x7fffffffU 
                                          & vlSelfRef.tb_sfu_sign_expo__DOT__operand)))));
    bufp->fullBit(oldp+6,((IData)(((0x7f800000U == 
                                    (0x7f800000U & vlSelfRef.tb_sfu_sign_expo__DOT__operand)) 
                                   & (0U != (0x007fffffU 
                                             & vlSelfRef.tb_sfu_sign_expo__DOT__operand))))));
    bufp->fullBit(oldp+7,(vlSelfRef.tb_sfu_sign_expo__DOT__sign_out));
    bufp->fullCData(oldp+8,(vlSelfRef.tb_sfu_sign_expo__DOT__exp_out),8);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_sfu_sign_expo__DOT__mant_out),23);
    bufp->fullBit(oldp+10,(vlSelfRef.tb_sfu_sign_expo__DOT__is_normal));
}
