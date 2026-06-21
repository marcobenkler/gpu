// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wctx__DOT__clk__0 
        = vlSelfRef.gpu__DOT__u_wctx__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wctx__DOT__rst_n__0 
        = vlSelfRef.gpu__DOT__u_wctx__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wsched__DOT__clk__0 
        = vlSelfRef.gpu__DOT__u_wsched__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wstate_ctrl__DOT__clk__0 
        = vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wstate_ctrl__DOT__rst_n__0 
        = vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_instr_mem__DOT__clk__0 
        = vlSelfRef.gpu__DOT__u_instr_mem__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_gpr__DOT__clk__0 
        = vlSelfRef.gpu__DOT__u_gpr__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop_fu_top___eval_initial__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top(Vtop_fu_top* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop_fu_top___eval_initial__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top((&vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top));
    Vtop_fu_top___eval_initial__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top((&vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top));
    Vtop_fu_top___eval_initial__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top((&vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top));
    Vtop_fu_top___eval_initial__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top((&vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top));
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT____Vcellinp__u_wb__mem_res[0U] = 0U;
    vlSelfRef.gpu__DOT____Vcellinp__u_wb__mem_res[1U] = 0U;
    vlSelfRef.gpu__DOT____Vcellinp__u_wb__mem_res[2U] = 0U;
    vlSelfRef.gpu__DOT____Vcellinp__u_wb__mem_res[3U] = 0U;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__mem_stl = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/gpu.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__scoreboard 
        = vlSelfRef.gpu__DOT__scoreboard;
    vlSelfRef.gpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.gpu__DOT__wsched_entry = vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry;
    vlSelfRef.gpu__DOT__u_wb__DOT__mem_res = vlSelfRef.gpu__DOT____Vcellinp__u_wb__mem_res;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__bar_msk 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i))) 
                & (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__bar_msk)) 
               | (0x0fU & ((3U == (7U & (vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry
                                         [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i)] 
                                         >> 2U))) << 
                           (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i))));
        vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__active_msk 
            = (((~ ((IData)(1U) << (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i))) 
                & (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__active_msk)) 
               | (0x0fU & (((5U != (7U & (vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry
                                          [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i)] 
                                          >> 2U))) 
                            & (6U != (7U & (vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry
                                            [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i)] 
                                            >> 2U)))) 
                           << (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i))));
        vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.gpu__DOT__rdata2 = vlSelfRef.gpu__DOT__u_gpr__DOT__rdata2;
    vlSelfRef.gpu__DOT__rdata1 = vlSelfRef.gpu__DOT__u_gpr__DOT__rdata1;
    vlSelfRef.gpu__DOT__ctx_tbl = vlSelfRef.gpu__DOT__u_wctx__DOT__ctx_tbl;
    vlSelfRef.gpu__DOT__warp_id = vlSelfRef.gpu__DOT__u_wsched__DOT__warp_id;
    vlSelfRef.gpu__DOT__instr = vlSelfRef.gpu__DOT__u_instr_mem__DOT__instr;
    vlSelfRef.gpu__DOT__u_wctx__DOT__rst_n = vlSelfRef.gpu__DOT__rst_n;
    vlSelfRef.gpu__DOT__u_wsched__DOT__rst_n = vlSelfRef.gpu__DOT__rst_n;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rst_n = vlSelfRef.gpu__DOT__rst_n;
    vlSelfRef.gpu__DOT__u_pc__DOT__rst_n = vlSelfRef.gpu__DOT__rst_n;
    vlSelfRef.gpu__DOT__u_wctx__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_wsched__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_pc__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_instr_mem__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_gpr__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry 
        = vlSelfRef.gpu__DOT__wsched_entry;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__all_at_bar 
        = ((0U != (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__active_msk)) 
           & ((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__active_msk) 
              == ((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__bar_msk) 
                  & (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__active_msk))));
    vlSelfRef.gpu__DOT__u_wctx__DOT__pc_start = vlSelfRef.gpu__DOT__rdata2[0U];
    vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata2 
        = vlSelfRef.gpu__DOT__rdata2[0U];
    vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata2 
        = vlSelfRef.gpu__DOT__rdata2[1U];
    vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata2 
        = vlSelfRef.gpu__DOT__rdata2[2U];
    vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata2 
        = vlSelfRef.gpu__DOT__rdata2[3U];
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_activate_cnt 
        = vlSelfRef.gpu__DOT__rdata1[0U];
    vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata1 
        = vlSelfRef.gpu__DOT__rdata1[0U];
    vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata1 
        = vlSelfRef.gpu__DOT__rdata1[1U];
    vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata1 
        = vlSelfRef.gpu__DOT__rdata1[2U];
    vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata1 
        = vlSelfRef.gpu__DOT__rdata1[3U];
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_ctx 
        = vlSelfRef.gpu__DOT__ctx_tbl;
    vlSelfRef.gpu__DOT__u_wctx__DOT__warp_id = vlSelfRef.gpu__DOT__warp_id;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__mem_warp_id 
        = vlSelfRef.gpu__DOT__warp_id;
    vlSelfRef.gpu__DOT__u_gpr__DOT__id_warp_id = vlSelfRef.gpu__DOT__warp_id;
    vlSelfRef.gpu__DOT__u_gpr__DOT__wb_warp_id = vlSelfRef.gpu__DOT__warp_id;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id 
        = vlSelfRef.gpu__DOT__warp_id;
    vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur = (IData)(
                                                           (vlSelfRef.gpu__DOT__ctx_tbl
                                                            [vlSelfRef.gpu__DOT__warp_id] 
                                                            >> 4U));
    vlSelfRef.gpu__DOT__u_gpr__DOT__id_rs1 = (0x0000001fU 
                                              & (vlSelfRef.gpu__DOT__instr 
                                                 >> 0x0000000fU));
    vlSelfRef.gpu__DOT__u_gpr__DOT__id_rs2 = (0x0000001fU 
                                              & (vlSelfRef.gpu__DOT__instr 
                                                 >> 0x00000014U));
    vlSelfRef.gpu__DOT__u_gpr__DOT__wb_rd = (0x0000001fU 
                                             & (vlSelfRef.gpu__DOT__instr 
                                                >> 7U));
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rs1 = (0x0000001fU 
                                                   & (vlSelfRef.gpu__DOT__instr 
                                                      >> 0x0000000fU));
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rs2 = (0x0000001fU 
                                                   & (vlSelfRef.gpu__DOT__instr 
                                                      >> 0x00000014U));
    vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr = vlSelfRef.gpu__DOT__instr;
    vlSelfRef.gpu__DOT__u_decoder__DOT__instr = vlSelfRef.gpu__DOT__instr;
    vlSelfRef.gpu__DOT__u_wsched__DOT__issue_fired = 0U;
    vlSelfRef.gpu__DOT__u_wsched__DOT__pick = 0U;
    vlSelfRef.gpu__DOT__u_wsched__DOT__best_rank = 3U;
    if ((0U == (7U & (vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry
                      [vlSelfRef.gpu__DOT__u_wsched__DOT__last_issued] 
                      >> 2U)))) {
        vlSelfRef.gpu__DOT__u_wsched__DOT__pick = vlSelfRef.gpu__DOT__u_wsched__DOT__last_issued;
        vlSelfRef.gpu__DOT__u_wsched__DOT__issue_fired = 1U;
    } else {
        vlSelfRef.gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i)) {
                if (((0U == (7U & (vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry
                                   [(3U & vlSelfRef.gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i)] 
                                   >> 2U))) & ((3U 
                                                & vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry
                                                [(3U 
                                                  & vlSelfRef.gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i)]) 
                                               < (IData)(vlSelfRef.gpu__DOT__u_wsched__DOT__best_rank)))) {
                    vlSelfRef.gpu__DOT__u_wsched__DOT__best_rank 
                        = (3U & vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry
                           [(3U & vlSelfRef.gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i)]);
                    vlSelfRef.gpu__DOT__u_wsched__DOT__pick 
                        = (3U & vlSelfRef.gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i);
                    vlSelfRef.gpu__DOT__u_wsched__DOT__issue_fired = 1U;
                    goto __Vlabel0;
                }
                vlSelfRef.gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelfRef.gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i);
            }
            __Vlabel0: ;
        }
    }
    vlSelfRef.gpu__DOT__u_instr_mem__DOT__pc = vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur;
    vlSelfRef.gpu__DOT__u_pc__DOT__pc_cur = vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur;
    vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__pc_cur 
        = vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur;
    vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__pc_cur 
        = vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur;
    vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__pc_cur 
        = vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur;
    vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__pc_cur 
        = vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur;
    vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code = (0x0000001fU 
                                                   & (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                                      >> 2U));
    vlSelfRef.gpu__DOT__u_decoder__DOT__rs2 = (0x0000001fU 
                                               & (vlSelfRef.gpu__DOT__u_decoder__DOT__instr 
                                                  >> 0x00000014U));
    vlSelfRef.gpu__DOT__u_decoder__DOT__funct7 = (vlSelfRef.gpu__DOT__u_decoder__DOT__instr 
                                                  >> 0x00000019U);
    vlSelfRef.gpu__DOT__u_decoder__DOT__funct3 = (7U 
                                                  & (vlSelfRef.gpu__DOT__u_decoder__DOT__instr 
                                                     >> 0x0000000cU));
    vlSelfRef.gpu__DOT__u_decoder__DOT__op_code = (0x0000001fU 
                                                   & (vlSelfRef.gpu__DOT__u_decoder__DOT__instr 
                                                      >> 2U));
    vlSelfRef.gpu__DOT__issue_fired = vlSelfRef.gpu__DOT__u_wsched__DOT__issue_fired;
    vlSelfRef.gpu__DOT__u_pc__DOT__pc_def = ((IData)(4U) 
                                             + vlSelfRef.gpu__DOT__u_pc__DOT__pc_cur);
    vlSelfRef.gpu__DOT__u_imm_gen__DOT__imm = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))) {
        if ((8U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))) {
                        vlSelfRef.gpu__DOT__u_imm_gen__DOT__imm 
                            = ((((0x00000ffeU & ((- (IData)(
                                                            (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                                             >> 0x1fU))) 
                                                 << 1U)) 
                                 | (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                    >> 0x1fU)) << 0x00000014U) 
                               | ((((0x000001feU & 
                                     (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                             >> 0x14U))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                      >> 0x00000014U))));
                    }
                } else {
                    vlSelfRef.gpu__DOT__u_imm_gen__DOT__imm 
                        = ((1U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))
                            ? (((- (IData)((vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                                   >> 0x14U))
                            : (((- (IData)((vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                            >> 0x1fU))) 
                                << 0x0000000dU) | (
                                                   (((2U 
                                                      & (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                                         >> 0x0000001eU)) 
                                                     | (1U 
                                                        & (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                                           >> 7U))) 
                                                    << 0x0000000bU) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                                            >> 7U))))));
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))) {
        if ((4U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))) {
                    vlSelfRef.gpu__DOT__u_imm_gen__DOT__imm 
                        = (0xfffff000U & vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr);
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code)))) {
                vlSelfRef.gpu__DOT__u_imm_gen__DOT__imm 
                    = (((- (IData)((vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | ((0x00000fe0U & (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                          >> 0x00000014U)) 
                          | (0x0000001fU & (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                            >> 7U))));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))) {
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code) 
                      >> 1U)))) {
            vlSelfRef.gpu__DOT__u_imm_gen__DOT__imm 
                = ((1U & (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code))
                    ? (0xfffff000U & vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr)
                    : (((- (IData)((vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                    >> 0x1fU))) << 0x0000000cU) 
                       | (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                          >> 0x14U)));
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code)))) {
            vlSelfRef.gpu__DOT__u_imm_gen__DOT__imm 
                = (((- (IData)((vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                                >> 0x1fU))) << 0x0000000cU) 
                   | (vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr 
                      >> 0x14U));
        }
    }
    vlSelfRef.gpu__DOT__u_decoder__DOT__mem_wrt = 0U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__pc_init = 0U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__reg_wrt = 1U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__pc_src = 0U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__warp_bar = 0U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__wspawn = 0U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__res_src = 0U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__fu_sel = 0U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 0U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 0U;
    vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_b = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
        if ((8U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code)))) {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__reg_wrt = 0U;
                        if ((4U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op 
                                = ((2U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))
                                    ? 0x0dU : 0x0cU);
                        } else if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3) 
                                             >> 1U)))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 1U;
                        }
                    }
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_b = 1U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__pc_src = 1U;
                        vlSelfRef.gpu__DOT__u_decoder__DOT__res_src = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                    vlSelfRef.gpu__DOT__u_decoder__DOT__pc_src = 2U;
                    vlSelfRef.gpu__DOT__u_decoder__DOT__res_src = 3U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code)))) {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__fu_sel = 1U;
                        if ((0x00000040U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                            if ((0x00000020U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7)))) {
                                                    if (
                                                        (0U 
                                                         == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__rs2))) {
                                                        vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 7U;
                                                    } else if (
                                                               (1U 
                                                                == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__rs2))) {
                                                        vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 8U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                                    >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__rs2))) {
                                                    vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 5U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__rs2))) {
                                                    vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 6U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                             >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7)))) {
                                                if (
                                                    (0U 
                                                     == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                                                    vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 3U;
                                                } else if (
                                                           (1U 
                                                            == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                                                    vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 4U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7)))) {
                                            vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 2U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7)))) {
                                        vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7) 
                                                 >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7)))) {
                                    vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code)))) {
                    vlSelfRef.gpu__DOT__u_decoder__DOT__reg_wrt = 0U;
                    vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_b = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                    vlSelfRef.gpu__DOT__u_decoder__DOT__res_src = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code)))) {
                    if ((4U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                        if ((2U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                            if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                                if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                    vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 6U;
                                }
                            } else if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 7U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                            if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 0x0aU;
                            } else if ((0x20U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 0x0bU;
                            }
                        } else if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 8U;
                        }
                    } else if ((2U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                        if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                            if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 0x0dU;
                            } else if ((1U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 5U;
                            }
                        } else if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 0x0cU;
                        } else if ((1U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 4U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                        if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 9U;
                        } else if ((1U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 3U;
                        }
                    } else if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 0U;
                    } else if ((0x20U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 1U;
                    } else if ((1U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 2U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code)))) {
                    if ((0U != (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                        if ((4U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__reg_wrt = 0U;
                        }
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code)))) {
                    if ((4U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                        if ((2U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op 
                                = ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))
                                    ? 6U : 7U);
                        } else if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                            if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 0x0aU;
                            } else if ((0x20U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7))) {
                                vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 0x0bU;
                            }
                        } else {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op = 8U;
                        }
                    } else {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op 
                            = ((2U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))
                                ? ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))
                                    ? 0x0dU : 0x0cU)
                                : ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))
                                    ? 9U : 0U));
                    }
                }
                vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_b = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code)))) {
                vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_b = 1U;
            }
        }
    }
    vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_a = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code)))) {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__mem_wrt = 1U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                    if ((1U & (~ (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code)))) {
                        if ((0U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                            vlSelfRef.gpu__DOT__u_decoder__DOT__pc_init = 1U;
                            vlSelfRef.gpu__DOT__u_decoder__DOT__wspawn = 1U;
                        }
                        if ((0U != (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                            if ((4U == (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3))) {
                                vlSelfRef.gpu__DOT__u_decoder__DOT__warp_bar = 1U;
                            }
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                if ((1U & (~ ((IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code))) {
                        vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_a = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.gpu__DOT__u_wctx__DOT__pc_en = vlSelfRef.gpu__DOT__issue_fired;
    vlSelfRef.gpu__DOT__pc_def = vlSelfRef.gpu__DOT__u_pc__DOT__pc_def;
    vlSelfRef.gpu__DOT__imm = vlSelfRef.gpu__DOT__u_imm_gen__DOT__imm;
    vlSelfRef.gpu__DOT__mem_wrt = vlSelfRef.gpu__DOT__u_decoder__DOT__mem_wrt;
    vlSelfRef.gpu__DOT__pc_init = vlSelfRef.gpu__DOT__u_decoder__DOT__pc_init;
    vlSelfRef.gpu__DOT__reg_wrt = vlSelfRef.gpu__DOT__u_decoder__DOT__reg_wrt;
    vlSelfRef.gpu__DOT__pc_src = vlSelfRef.gpu__DOT__u_decoder__DOT__pc_src;
    vlSelfRef.gpu__DOT__warp_bar = vlSelfRef.gpu__DOT__u_decoder__DOT__warp_bar;
    vlSelfRef.gpu__DOT__wspawn = vlSelfRef.gpu__DOT__u_decoder__DOT__wspawn;
    vlSelfRef.gpu__DOT__res_src = vlSelfRef.gpu__DOT__u_decoder__DOT__res_src;
    vlSelfRef.gpu__DOT__fu_sel = vlSelfRef.gpu__DOT__u_decoder__DOT__fu_sel;
    vlSelfRef.gpu__DOT__alu_op = vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op;
    vlSelfRef.gpu__DOT__fpu_op = vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op;
    vlSelfRef.gpu__DOT__exec_src_b = vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_b;
    vlSelfRef.gpu__DOT__exec_src_a = vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_a;
    vlSelfRef.gpu__DOT__u_wb__DOT__pc_res = vlSelfRef.gpu__DOT__pc_def;
    vlSelfRef.gpu__DOT__imm_res = (vlSelfRef.gpu__DOT__imm 
                                   + vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur);
    vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__imm 
        = vlSelfRef.gpu__DOT__imm;
    vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__imm 
        = vlSelfRef.gpu__DOT__imm;
    vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__imm 
        = vlSelfRef.gpu__DOT__imm;
    vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__imm 
        = vlSelfRef.gpu__DOT__imm;
    vlSelfRef.gpu__DOT__u_wctx__DOT__pc_init = vlSelfRef.gpu__DOT__pc_init;
    vlSelfRef.gpu__DOT__u_gpr__DOT__wb_en = (0x0000000fU 
                                             & ((- (IData)((IData)(vlSelfRef.gpu__DOT__reg_wrt))) 
                                                & (IData)(vlSelfRef.gpu__DOT__ctx_tbl
                                                          [vlSelfRef.gpu__DOT__warp_id])));
    vlSelfRef.gpu__DOT__u_pc__DOT__pc_src = vlSelfRef.gpu__DOT__pc_src;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_bar 
        = vlSelfRef.gpu__DOT__warp_bar;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wspawn 
        = vlSelfRef.gpu__DOT__wspawn;
    vlSelfRef.gpu__DOT__u_wb__DOT__res_src = vlSelfRef.gpu__DOT__res_src;
    vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_b 
        = vlSelfRef.gpu__DOT__exec_src_b;
    vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_b 
        = vlSelfRef.gpu__DOT__exec_src_b;
    vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_b 
        = vlSelfRef.gpu__DOT__exec_src_b;
    vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_b 
        = vlSelfRef.gpu__DOT__exec_src_b;
    vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_a 
        = vlSelfRef.gpu__DOT__exec_src_a;
    vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_a 
        = vlSelfRef.gpu__DOT__exec_src_a;
    vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_a 
        = vlSelfRef.gpu__DOT__exec_src_a;
    vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_a 
        = vlSelfRef.gpu__DOT__exec_src_a;
    vlSelfRef.gpu__DOT__u_pc__DOT__imm_res = vlSelfRef.gpu__DOT__imm_res;
    vlSelfRef.gpu__DOT__u_wb__DOT__imm_res = vlSelfRef.gpu__DOT__imm_res;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[(3U 
                                                            & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)] 
            = vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry
            [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)];
        if (((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__all_at_bar) 
             & ((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__bar_msk) 
                >> (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)))) {
            vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[(3U 
                                                                & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)] 
                = (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt
                   [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)]);
        } else if ((((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wspawn) 
                     & (5U == (7U & (vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry[0U] 
                                     >> 2U)))) & (vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i 
                                                  < vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_activate_cnt))) {
            vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[(3U 
                                                                & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)] 
                = (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt
                   [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)]);
        } else if (((0U == (0x0000000fU & (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_ctx
                                                  [
                                                  (3U 
                                                   & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)]))) 
                    & (5U != (7U & (vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry
                                    [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)] 
                                    >> 2U))))) {
            vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[(3U 
                                                                & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)] 
                = (0x18U | (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt
                            [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)]));
        } else if (((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_bar) 
                    & ((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id) 
                       == (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)))) {
            vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id] 
                = (0x0cU | (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt
                            [vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id]));
        } else if (((1U == (7U & (vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry
                                  [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)] 
                                  >> 2U))) & (0U != vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__scoreboard
                                              [(3U 
                                                & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)]))) {
            vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[(3U 
                                                                & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)] 
                = (4U | (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt
                         [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)]));
        } else if ((((vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__scoreboard
                      [vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id] 
                      >> (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rs1)) 
                     | (vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__scoreboard
                        [vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id] 
                        >> (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rs2))) 
                    & ((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id) 
                       == (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)))) {
            vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id] 
                = (4U | (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt
                         [vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id]));
        } else {
            vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[(3U 
                                                                & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)] 
                = (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt
                   [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i)]);
        }
        vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i);
    }
    vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_b 
        = ((IData)(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_b)
            ? vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__imm
            : vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata2);
    vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_b 
        = ((IData)(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_b)
            ? vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__imm
            : vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata2);
    vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_b 
        = ((IData)(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_b)
            ? vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__imm
            : vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata2);
    vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_b 
        = ((IData)(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_b)
            ? vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__imm
            : vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata2);
    vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_a 
        = ((IData)(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_a)
            ? vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__pc_cur
            : vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata1);
    vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_a 
        = ((IData)(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_a)
            ? vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__pc_cur
            : vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata1);
    vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_a 
        = ((IData)(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_a)
            ? vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__pc_cur
            : vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata1);
    vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_a 
        = ((IData)(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_a)
            ? vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__pc_cur
            : vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata1);
    vlSelfRef.gpu__DOT__op_b[0U] = vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_b;
    vlSelfRef.gpu__DOT__op_b[1U] = vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_b;
    vlSelfRef.gpu__DOT__op_b[2U] = vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_b;
    vlSelfRef.gpu__DOT__op_b[3U] = vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_b;
    vlSelfRef.gpu__DOT__op_a[0U] = vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_a;
    vlSelfRef.gpu__DOT__op_a[1U] = vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_a;
    vlSelfRef.gpu__DOT__op_a[2U] = vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_a;
    vlSelfRef.gpu__DOT__op_a[3U] = vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_a;
}

void Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top));
        Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top));
        Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top));
        Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge gpu.u_wctx.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge gpu.u_wctx.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge gpu.u_wsched.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge gpu.u_wstate_ctrl.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge gpu.u_wstate_ctrl.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge gpu.u_instr_mem.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge gpu.u_gpr.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->gpu__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17251962039244364519ull);
    vlSelf->gpu__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8933724378779284313ull);
    vlSelf->gpu__DOT__warp_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11573147187377767563ull);
    vlSelf->gpu__DOT__ctx_in = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 10885411946483232318ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__ctx_tbl[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 4240703631379387026ull);
    }
    vlSelf->gpu__DOT__warp_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4991693027160352554ull);
    vlSelf->gpu__DOT__pc_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3065304692392194459ull);
    vlSelf->gpu__DOT__issue_fired = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7657864198408115852ull);
    vlSelf->gpu__DOT__wspawn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11834883593929122765ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__wsched_entry[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16261047325120064229ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__scoreboard[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17495637969755683041ull);
    }
    vlSelf->gpu__DOT__imm_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9323909464793390956ull);
    vlSelf->gpu__DOT__pc_def = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17815610109369190227ull);
    vlSelf->gpu__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15436702902731625349ull);
    vlSelf->gpu__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10147854199157691916ull);
    vlSelf->gpu__DOT__reg_wrt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15778805148208254080ull);
    vlSelf->gpu__DOT__mem_wrt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12003302419434623633ull);
    vlSelf->gpu__DOT__pc_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14203957367083202235ull);
    vlSelf->gpu__DOT__fu_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4076107756918417479ull);
    vlSelf->gpu__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18195163440283273233ull);
    vlSelf->gpu__DOT__fpu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5368168925807695002ull);
    vlSelf->gpu__DOT__exec_src_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11650336689285126208ull);
    vlSelf->gpu__DOT__exec_src_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12735280856034628035ull);
    vlSelf->gpu__DOT__res_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 829087552619575019ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__rdata1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13912608368283888438ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__rdata2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10227539526025985405ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__op_a[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4651369455800870562ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__op_b[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11899701651228511316ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__fu_res[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9471511453948007931ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__wb_res[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 585772914388918765ull);
    }
    vlSelf->gpu__DOT____Vcellinp__u_pc__pc_cur = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT____Vcellinp__u_wb__mem_res[__Vi0] = 0;
    }
    vlSelf->gpu__DOT__u_wctx__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1568203809433580774ull);
    vlSelf->gpu__DOT__u_wctx__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9739543545104628579ull);
    vlSelf->gpu__DOT__u_wctx__DOT__warp_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18154489307171969384ull);
    vlSelf->gpu__DOT__u_wctx__DOT__pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17454209400040096923ull);
    vlSelf->gpu__DOT__u_wctx__DOT__pc_start = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18296288876268102590ull);
    vlSelf->gpu__DOT__u_wctx__DOT__pc_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4054542291607397312ull);
    vlSelf->gpu__DOT__u_wctx__DOT__ctx_in = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 5728162602658382495ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_wctx__DOT__ctx_tbl[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 1408090780648416456ull);
    }
    vlSelf->gpu__DOT__u_wctx__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__u_wctx__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__u_wsched__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18365493252856193858ull);
    vlSelf->gpu__DOT__u_wsched__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2863154685599893515ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_wsched__DOT__wsched_entry[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9951244845770468583ull);
    }
    vlSelf->gpu__DOT__u_wsched__DOT__issue_fired = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 265426688766380241ull);
    vlSelf->gpu__DOT__u_wsched__DOT__warp_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15232354391246848457ull);
    vlSelf->gpu__DOT__u_wsched__DOT__last_issued = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1805708688762798932ull);
    vlSelf->gpu__DOT__u_wsched__DOT__pick = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17438160336819935621ull);
    vlSelf->gpu__DOT__u_wsched__DOT__best_rank = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10864428100765332057ull);
    vlSelf->gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2932006077432042883ull);
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9335858789263633308ull);
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__warp_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13916249312735920774ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_wstate_ctrl__DOT__scoreboard[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8361058007666526701ull);
    }
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17729646879811451760ull);
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12367646031277147319ull);
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1342773594370014759ull);
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__mem_stl = 0U;
    ;
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__mem_warp_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5626815006247539382ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_wstate_ctrl__DOT__warp_ctx[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 5945346984609221301ull);
    }
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__warp_activate_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17904778225235408881ull);
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__wspawn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7732397097075945053ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_wstate_ctrl__DOT__wsched_entry[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2059619244932332015ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6183619553348202849ull);
    }
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__all_at_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12814843678425164231ull);
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__bar_msk = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12456161084352961635ull);
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__active_msk = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3360145469626650568ull);
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->gpu__DOT__u_pc__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6358575369211201519ull);
    vlSelf->gpu__DOT__u_pc__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1080113975003030566ull);
    vlSelf->gpu__DOT__u_pc__DOT__pc_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 642310869259984256ull);
    vlSelf->gpu__DOT__u_pc__DOT__imm_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11227262178488245211ull);
    vlSelf->gpu__DOT__u_pc__DOT__exec_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2931808058640823131ull);
    vlSelf->gpu__DOT__u_pc__DOT__pc_cur = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10590974017100917299ull);
    vlSelf->gpu__DOT__u_pc__DOT__pc_nxt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3652245434386227503ull);
    vlSelf->gpu__DOT__u_pc__DOT__pc_def = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3935460332681595032ull);
    vlSelf->gpu__DOT__u_instr_mem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1433105509608880493ull);
    vlSelf->gpu__DOT__u_instr_mem__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15197649057491216789ull);
    vlSelf->gpu__DOT__u_instr_mem__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13921945280554486695ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->gpu__DOT__u_instr_mem__DOT__instr_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11643140309932753340ull);
    }
    vlSelf->gpu__DOT__u_imm_gen__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2182271377618378181ull);
    vlSelf->gpu__DOT__u_imm_gen__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6512050716227701150ull);
    vlSelf->gpu__DOT__u_imm_gen__DOT__op_code = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17841638364525789824ull);
    vlSelf->gpu__DOT__u_decoder__DOT__instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8904426518762259477ull);
    vlSelf->gpu__DOT__u_decoder__DOT__reg_wrt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4599505706633897404ull);
    vlSelf->gpu__DOT__u_decoder__DOT__mem_wrt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7096115711572233098ull);
    vlSelf->gpu__DOT__u_decoder__DOT__pc_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18226148937674989507ull);
    vlSelf->gpu__DOT__u_decoder__DOT__fu_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2703834266225453123ull);
    vlSelf->gpu__DOT__u_decoder__DOT__alu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10477104875521771813ull);
    vlSelf->gpu__DOT__u_decoder__DOT__fpu_op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4937144754006430334ull);
    vlSelf->gpu__DOT__u_decoder__DOT__exec_src_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16784577395449712114ull);
    vlSelf->gpu__DOT__u_decoder__DOT__exec_src_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11795676920513448624ull);
    vlSelf->gpu__DOT__u_decoder__DOT__res_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12262702292315269348ull);
    vlSelf->gpu__DOT__u_decoder__DOT__warp_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 480001464423766305ull);
    vlSelf->gpu__DOT__u_decoder__DOT__pc_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15379551947292100424ull);
    vlSelf->gpu__DOT__u_decoder__DOT__wspawn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10176322015051505407ull);
    vlSelf->gpu__DOT__u_decoder__DOT__op_code = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10411019397497978442ull);
    vlSelf->gpu__DOT__u_decoder__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14862691893542264765ull);
    vlSelf->gpu__DOT__u_decoder__DOT__funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 651640433205075387ull);
    vlSelf->gpu__DOT__u_decoder__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13672338052330349340ull);
    vlSelf->gpu__DOT__u_gpr__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9461690912698221598ull);
    vlSelf->gpu__DOT__u_gpr__DOT__id_warp_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 556507248695055711ull);
    vlSelf->gpu__DOT__u_gpr__DOT__id_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5403539168162138952ull);
    vlSelf->gpu__DOT__u_gpr__DOT__id_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3097506859438994223ull);
    vlSelf->gpu__DOT__u_gpr__DOT__wb_warp_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15123956292543904663ull);
    vlSelf->gpu__DOT__u_gpr__DOT__wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4798736245730887995ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_gpr__DOT__wb_res[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10313304427569109731ull);
    }
    vlSelf->gpu__DOT__u_gpr__DOT__wb_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9721181428666804790ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_gpr__DOT__rdata1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1233912702960965841ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_gpr__DOT__rdata2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15515777452858822187ull);
    }
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->gpu__DOT__u_gpr__DOT__reg_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 684781495483176991ull);
    }
    vlSelf->gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__u_wb__DOT__res_src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11629678338252808971ull);
    vlSelf->gpu__DOT__u_wb__DOT__imm_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9566165868070204226ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_wb__DOT__mem_res[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8400998935657114096ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_wb__DOT__fu_res[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12831475925008282027ull);
    }
    vlSelf->gpu__DOT__u_wb__DOT__pc_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7130029638945757666ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu__DOT__u_wb__DOT__wb_res[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13584894621396235349ull);
    }
    vlSelf->gpu__DOT__u_wb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9935642641153260836ull);
    vlSelf->gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13104397317656397788ull);
    vlSelf->gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__pc_cur = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18013762000648341207ull);
    vlSelf->gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15127630354420603076ull);
    vlSelf->gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3260583967902856493ull);
    vlSelf->gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6759131743854319666ull);
    vlSelf->gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16770488287347036680ull);
    vlSelf->gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14565873241319441766ull);
    vlSelf->gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11606837810795781090ull);
    vlSelf->gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10665262767809261815ull);
    vlSelf->gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__pc_cur = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7379027224566971906ull);
    vlSelf->gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3345013987459838226ull);
    vlSelf->gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5116810183691374102ull);
    vlSelf->gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4648397802142971269ull);
    vlSelf->gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16462045544930389797ull);
    vlSelf->gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2537412804662771886ull);
    vlSelf->gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9752023269411191133ull);
    vlSelf->gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2330461311972028817ull);
    vlSelf->gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__pc_cur = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 635250283907612313ull);
    vlSelf->gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4427919057815915049ull);
    vlSelf->gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2319745540839324609ull);
    vlSelf->gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14137424201156496797ull);
    vlSelf->gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2923441628482143028ull);
    vlSelf->gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18234470850349902031ull);
    vlSelf->gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9483964591950514559ull);
    vlSelf->gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5799170033892492164ull);
    vlSelf->gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__pc_cur = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12554858546627494503ull);
    vlSelf->gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16973923496140810365ull);
    vlSelf->gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16475166147776096867ull);
    vlSelf->gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5827950965556272660ull);
    vlSelf->gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7029662424011531611ull);
    vlSelf->gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4593635092137104421ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__gpu__DOT__u_wctx__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__gpu__DOT__u_wctx__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__gpu__DOT__u_wsched__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__gpu__DOT__u_wstate_ctrl__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__gpu__DOT__u_wstate_ctrl__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__gpu__DOT__u_instr_mem__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__gpu__DOT__u_gpr__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
