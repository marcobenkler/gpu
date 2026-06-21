// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__scoreboard 
        = vlSelfRef.gpu__DOT__scoreboard;
    vlSelfRef.gpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.gpu__DOT__wsched_entry = vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry;
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
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rst_n = vlSelfRef.gpu__DOT__rst_n;
    vlSelfRef.gpu__DOT__u_wsched__DOT__rst_n = vlSelfRef.gpu__DOT__rst_n;
    vlSelfRef.gpu__DOT__u_pc__DOT__rst_n = vlSelfRef.gpu__DOT__rst_n;
    vlSelfRef.gpu__DOT__u_wctx__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_wsched__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_instr_mem__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_gpr__DOT__clk = vlSelfRef.gpu__DOT__clk;
    vlSelfRef.gpu__DOT__u_pc__DOT__clk = vlSelfRef.gpu__DOT__clk;
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

void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__fu_res[0U] = vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.result;
    vlSelfRef.gpu__DOT__fu_res[1U] = vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.result;
    vlSelfRef.gpu__DOT__fu_res[2U] = vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.result;
    vlSelfRef.gpu__DOT__fu_res[3U] = vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.result;
    vlSelfRef.gpu__DOT__u_wb__DOT__fu_res = vlSelfRef.gpu__DOT__fu_res;
    vlSelfRef.gpu__DOT__u_wb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__u_wb__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.gpu__DOT__u_wb__DOT__wb_res[(3U & vlSelfRef.gpu__DOT__u_wb__DOT__unnamedblk1__DOT__i)] 
            = ((2U & (IData)(vlSelfRef.gpu__DOT__u_wb__DOT__res_src))
                ? ((1U & (IData)(vlSelfRef.gpu__DOT__u_wb__DOT__res_src))
                    ? vlSelfRef.gpu__DOT__u_wb__DOT__pc_res
                    : vlSelfRef.gpu__DOT__u_wb__DOT__imm_res)
                : ((1U & (IData)(vlSelfRef.gpu__DOT__u_wb__DOT__res_src))
                    ? vlSelfRef.gpu__DOT__u_wb__DOT__mem_res
                   [(3U & vlSelfRef.gpu__DOT__u_wb__DOT__unnamedblk1__DOT__i)]
                    : vlSelfRef.gpu__DOT__u_wb__DOT__fu_res
                   [(3U & vlSelfRef.gpu__DOT__u_wb__DOT__unnamedblk1__DOT__i)]));
        vlSelfRef.gpu__DOT__u_wb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.gpu__DOT__u_wb__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.gpu__DOT__wb_res = vlSelfRef.gpu__DOT__u_wb__DOT__wb_res;
    vlSelfRef.gpu__DOT__u_gpr__DOT__wb_res = vlSelfRef.gpu__DOT__wb_res;
    vlSelfRef.gpu__DOT__u_pc__DOT__exec_res = vlSelfRef.gpu__DOT__wb_res[0U];
    vlSelfRef.gpu__DOT__u_pc__DOT__pc_nxt = ((0U == (IData)(vlSelfRef.gpu__DOT__u_pc__DOT__pc_src))
                                              ? vlSelfRef.gpu__DOT__u_pc__DOT__pc_def
                                              : ((1U 
                                                  == (IData)(vlSelfRef.gpu__DOT__u_pc__DOT__pc_src))
                                                  ? vlSelfRef.gpu__DOT__u_pc__DOT__imm_res
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.gpu__DOT__u_pc__DOT__pc_src))
                                                   ? vlSelfRef.gpu__DOT__u_pc__DOT__exec_res
                                                   : vlSelfRef.gpu__DOT__u_pc__DOT__pc_def)));
    vlSelfRef.gpu__DOT__ctx_in = (0x000000000000000fULL 
                                  | ((QData)((IData)(vlSelfRef.gpu__DOT__u_pc__DOT__pc_nxt)) 
                                     << 4U));
    vlSelfRef.gpu__DOT__u_wctx__DOT__ctx_in = vlSelfRef.gpu__DOT__ctx_in;
}

void Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top));
        Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top));
        Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top));
        Vtop_fu_top___ico_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.gpu__DOT__u_gpr__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_gpr__DOT__clk__0))) 
                                                       << 6U) 
                                                      | ((((IData)(vlSelfRef.gpu__DOT__u_instr_mem__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_instr_mem__DOT__clk__0))) 
                                                          << 5U) 
                                                         | (((~ (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wstate_ctrl__DOT__rst_n__0)) 
                                                            << 4U))) 
                                                     | (((((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wstate_ctrl__DOT__clk__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.gpu__DOT__u_wsched__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wsched__DOT__clk__0))) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(vlSelfRef.gpu__DOT__u_wctx__DOT__rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wctx__DOT__rst_n__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.gpu__DOT__u_wctx__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu__DOT__u_wctx__DOT__clk__0))))))));
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

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.gpu__DOT__u_wsched__DOT__rst_n) {
        vlSelfRef.gpu__DOT__u_wsched__DOT__last_issued 
            = vlSelfRef.gpu__DOT__u_wsched__DOT__pick;
        vlSelfRef.gpu__DOT__u_wsched__DOT__warp_id 
            = vlSelfRef.gpu__DOT__u_wsched__DOT__pick;
    } else {
        vlSelfRef.gpu__DOT__u_wsched__DOT__last_issued = 0U;
        vlSelfRef.gpu__DOT__u_wsched__DOT__warp_id = 0U;
    }
    vlSelfRef.gpu__DOT__warp_id = vlSelfRef.gpu__DOT__u_wsched__DOT__warp_id;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__mem_warp_id 
        = vlSelfRef.gpu__DOT__warp_id;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id 
        = vlSelfRef.gpu__DOT__warp_id;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __VdlyVal__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v0;
    __VdlyVal__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v0 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v0;
    __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v0 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v1;
    __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v1 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v2;
    __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v2 = 0;
    CData/*1:0*/ __VdlyVal__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3;
    __VdlyVal__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3;
    __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3 = 0;
    CData/*4:0*/ __VdlyElem__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3;
    __VdlyElem__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3 = 0;
    // Body
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i)) {
        if (vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rst_n) {
            __VdlyVal__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v0 
                = vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt
                [(3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i)];
            __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v0 
                = (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuegpu__DOT__u_wstate_ctrl__DOT__wsched_entry.enqueue(__VdlyVal__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v0, 0x1fU, (IData)(__VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v0));
        } else {
            __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v1 
                = (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuegpu__DOT__u_wstate_ctrl__DOT__wsched_entry.enqueue(0U, 0x1fU, (IData)(__VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v1));
            __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v2 
                = (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuegpu__DOT__u_wstate_ctrl__DOT__wsched_entry.enqueue(0x14U, 0x1cU, (IData)(__VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v2));
            __VdlyVal__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3 
                = (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i);
            __VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3 
                = (3U & vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i);
            __VdlyElem__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3 = 0U;
            __VdlyElem__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3 
                = ((0x1cU & (IData)(__VdlyElem__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3)) 
                   | (IData)(__VdlyVal__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3));
            vlSelfRef.__VdlyCommitQueuegpu__DOT__u_wstate_ctrl__DOT__wsched_entry.enqueue(__VdlyElem__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3, 3U, (IData)(__VdlyDim0__gpu__DOT__u_wstate_ctrl__DOT__wsched_entry__v3));
        }
        vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.__VdlyCommitQueuegpu__DOT__u_wstate_ctrl__DOT__wsched_entry.commit(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry);
    vlSelfRef.gpu__DOT__wsched_entry = vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry;
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
    vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry 
        = vlSelfRef.gpu__DOT__wsched_entry;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__all_at_bar 
        = ((0U != (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__active_msk)) 
           & ((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__active_msk) 
              == ((IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__bar_msk) 
                  & (IData)(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__active_msk))));
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__gpu__DOT__u_wctx__DOT__ctx_tbl__v0;
    __VdlyVal__gpu__DOT__u_wctx__DOT__ctx_tbl__v0 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v0;
    __VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v0 = 0;
    QData/*35:0*/ __VdlyElem__gpu__DOT__u_wctx__DOT__ctx_tbl__v0;
    __VdlyElem__gpu__DOT__u_wctx__DOT__ctx_tbl__v0 = 0;
    QData/*35:0*/ __VdlyVal__gpu__DOT__u_wctx__DOT__ctx_tbl__v1;
    __VdlyVal__gpu__DOT__u_wctx__DOT__ctx_tbl__v1 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v1;
    __VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v1 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v2;
    __VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v2 = 0;
    // Body
    if (vlSelfRef.gpu__DOT__u_wctx__DOT__rst_n) {
        if (vlSelfRef.gpu__DOT__u_wctx__DOT__pc_init) {
            vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk2__DOT__i = 0U;
            while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk2__DOT__i)) {
                __VdlyVal__gpu__DOT__u_wctx__DOT__ctx_tbl__v0 
                    = vlSelfRef.gpu__DOT__u_wctx__DOT__pc_start;
                __VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v0 
                    = (3U & vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk2__DOT__i);
                __VdlyElem__gpu__DOT__u_wctx__DOT__ctx_tbl__v0 = 0ULL;
                __VdlyElem__gpu__DOT__u_wctx__DOT__ctx_tbl__v0 
                    = ((0x000000000000000fULL & __VdlyElem__gpu__DOT__u_wctx__DOT__ctx_tbl__v0) 
                       | ((QData)((IData)(__VdlyVal__gpu__DOT__u_wctx__DOT__ctx_tbl__v0)) 
                          << 4U));
                vlSelfRef.__VdlyCommitQueuegpu__DOT__u_wctx__DOT__ctx_tbl.enqueue(__VdlyElem__gpu__DOT__u_wctx__DOT__ctx_tbl__v0, 0x0000000ffffffff0ULL, (IData)(__VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v0));
                vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk2__DOT__i);
            }
        } else if (vlSelfRef.gpu__DOT__u_wctx__DOT__pc_en) {
            __VdlyVal__gpu__DOT__u_wctx__DOT__ctx_tbl__v1 
                = vlSelfRef.gpu__DOT__u_wctx__DOT__ctx_in;
            __VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v1 
                = vlSelfRef.gpu__DOT__u_wctx__DOT__warp_id;
            vlSelfRef.__VdlyCommitQueuegpu__DOT__u_wctx__DOT__ctx_tbl.enqueue(__VdlyVal__gpu__DOT__u_wctx__DOT__ctx_tbl__v1, 0x0000000fffffffffULL, (IData)(__VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v1));
        }
    } else {
        vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v2 
                = (3U & vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuegpu__DOT__u_wctx__DOT__ctx_tbl.enqueue(0ULL, 0x0000000fffffffffULL, (IData)(__VdlyDim0__gpu__DOT__u_wctx__DOT__ctx_tbl__v2));
            vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.gpu__DOT__u_wctx__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.__VdlyCommitQueuegpu__DOT__u_wctx__DOT__ctx_tbl.commit(vlSelfRef.gpu__DOT__u_wctx__DOT__ctx_tbl);
    vlSelfRef.gpu__DOT__ctx_tbl = vlSelfRef.gpu__DOT__u_wctx__DOT__ctx_tbl;
    vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_ctx 
        = vlSelfRef.gpu__DOT__ctx_tbl;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__gpu__DOT__u_gpr__DOT__rdata1__v0;
    __VdlyVal__gpu__DOT__u_gpr__DOT__rdata1__v0 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__u_gpr__DOT__rdata1__v0;
    __VdlyDim0__gpu__DOT__u_gpr__DOT__rdata1__v0 = 0;
    IData/*31:0*/ __VdlyVal__gpu__DOT__u_gpr__DOT__rdata2__v0;
    __VdlyVal__gpu__DOT__u_gpr__DOT__rdata2__v0 = 0;
    CData/*1:0*/ __VdlyDim0__gpu__DOT__u_gpr__DOT__rdata2__v0;
    __VdlyDim0__gpu__DOT__u_gpr__DOT__rdata2__v0 = 0;
    IData/*31:0*/ __VdlyVal__gpu__DOT__u_gpr__DOT__reg_mem__v0;
    __VdlyVal__gpu__DOT__u_gpr__DOT__reg_mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__gpu__DOT__u_gpr__DOT__reg_mem__v0;
    __VdlyDim0__gpu__DOT__u_gpr__DOT__reg_mem__v0 = 0;
    // Body
    vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 4U, vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i)) {
        __VdlyVal__gpu__DOT__u_gpr__DOT__rdata1__v0 
            = vlSelfRef.gpu__DOT__u_gpr__DOT__reg_mem
            [(0x000001ffU & (((IData)(vlSelfRef.gpu__DOT__u_gpr__DOT__id_rs1) 
                              + VL_SHIFTL_III(9,32,32, vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i, 5U)) 
                             + VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.gpu__DOT__u_gpr__DOT__id_warp_id), 7U)))];
        __VdlyDim0__gpu__DOT__u_gpr__DOT__rdata1__v0 
            = (3U & vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__u_gpr__DOT__rdata1.enqueue(__VdlyVal__gpu__DOT__u_gpr__DOT__rdata1__v0, (IData)(__VdlyDim0__gpu__DOT__u_gpr__DOT__rdata1__v0));
        __VdlyVal__gpu__DOT__u_gpr__DOT__rdata2__v0 
            = vlSelfRef.gpu__DOT__u_gpr__DOT__reg_mem
            [(0x000001ffU & (((IData)(vlSelfRef.gpu__DOT__u_gpr__DOT__id_rs2) 
                              + VL_SHIFTL_III(9,32,32, vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i, 5U)) 
                             + VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.gpu__DOT__u_gpr__DOT__id_warp_id), 7U)))];
        __VdlyDim0__gpu__DOT__u_gpr__DOT__rdata2__v0 
            = (3U & vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i);
        vlSelfRef.__VdlyCommitQueuegpu__DOT__u_gpr__DOT__rdata2.enqueue(__VdlyVal__gpu__DOT__u_gpr__DOT__rdata2__v0, (IData)(__VdlyDim0__gpu__DOT__u_gpr__DOT__rdata2__v0));
        if ((((IData)(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_en) 
              >> (3U & vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i)) 
             & (0U != (IData)(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_rd)))) {
            __VdlyVal__gpu__DOT__u_gpr__DOT__reg_mem__v0 
                = vlSelfRef.gpu__DOT__u_gpr__DOT__wb_res
                [(3U & vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i)];
            __VdlyDim0__gpu__DOT__u_gpr__DOT__reg_mem__v0 
                = (0x000001ffU & (((IData)(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_rd) 
                                   + VL_SHIFTL_III(9,32,32, vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i, 5U)) 
                                  + VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_warp_id), 7U)));
            vlSelfRef.__VdlyCommitQueuegpu__DOT__u_gpr__DOT__reg_mem.enqueue(__VdlyVal__gpu__DOT__u_gpr__DOT__reg_mem__v0, (IData)(__VdlyDim0__gpu__DOT__u_gpr__DOT__reg_mem__v0));
        }
        vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.__VdlyCommitQueuegpu__DOT__u_gpr__DOT__reg_mem.commit(vlSelfRef.gpu__DOT__u_gpr__DOT__reg_mem);
    vlSelfRef.__VdlyCommitQueuegpu__DOT__u_gpr__DOT__rdata2.commit(vlSelfRef.gpu__DOT__u_gpr__DOT__rdata2);
    vlSelfRef.__VdlyCommitQueuegpu__DOT__u_gpr__DOT__rdata1.commit(vlSelfRef.gpu__DOT__u_gpr__DOT__rdata1);
    vlSelfRef.gpu__DOT__rdata2 = vlSelfRef.gpu__DOT__u_gpr__DOT__rdata2;
    vlSelfRef.gpu__DOT__rdata1 = vlSelfRef.gpu__DOT__u_gpr__DOT__rdata1;
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
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__u_instr_mem__DOT__instr = vlSelfRef.gpu__DOT__u_instr_mem__DOT__instr_mem
        [(0x0000001fU & vlSelfRef.gpu__DOT__u_instr_mem__DOT__pc)];
    vlSelfRef.gpu__DOT__instr = vlSelfRef.gpu__DOT__u_instr_mem__DOT__instr;
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
    vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__imm 
        = vlSelfRef.gpu__DOT__imm;
    vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__imm 
        = vlSelfRef.gpu__DOT__imm;
    vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__imm 
        = vlSelfRef.gpu__DOT__imm;
    vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__imm 
        = vlSelfRef.gpu__DOT__imm;
    vlSelfRef.gpu__DOT__u_wctx__DOT__pc_init = vlSelfRef.gpu__DOT__pc_init;
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
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.gpu__DOT__issue_fired = vlSelfRef.gpu__DOT__u_wsched__DOT__issue_fired;
    vlSelfRef.gpu__DOT__u_wctx__DOT__pc_en = vlSelfRef.gpu__DOT__issue_fired;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__u_wctx__DOT__warp_id = vlSelfRef.gpu__DOT__warp_id;
    vlSelfRef.gpu__DOT__u_gpr__DOT__id_warp_id = vlSelfRef.gpu__DOT__warp_id;
    vlSelfRef.gpu__DOT__u_gpr__DOT__wb_warp_id = vlSelfRef.gpu__DOT__warp_id;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur = (IData)(
                                                           (vlSelfRef.gpu__DOT__ctx_tbl
                                                            [vlSelfRef.gpu__DOT__warp_id] 
                                                            >> 4U));
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
    vlSelfRef.gpu__DOT__u_pc__DOT__pc_def = ((IData)(4U) 
                                             + vlSelfRef.gpu__DOT__u_pc__DOT__pc_cur);
    vlSelfRef.gpu__DOT__pc_def = vlSelfRef.gpu__DOT__u_pc__DOT__pc_def;
    vlSelfRef.gpu__DOT__u_wb__DOT__pc_res = vlSelfRef.gpu__DOT__pc_def;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu__DOT__u_gpr__DOT__wb_en = (0x0000000fU 
                                             & ((- (IData)((IData)(vlSelfRef.gpu__DOT__reg_wrt))) 
                                                & (IData)(vlSelfRef.gpu__DOT__ctx_tbl
                                                          [vlSelfRef.gpu__DOT__warp_id])));
    vlSelfRef.gpu__DOT__imm_res = (vlSelfRef.gpu__DOT__imm 
                                   + vlSelfRef.gpu__DOT____Vcellinp__u_pc__pc_cur);
    vlSelfRef.gpu__DOT__u_pc__DOT__imm_res = vlSelfRef.gpu__DOT__imm_res;
    vlSelfRef.gpu__DOT__u_wb__DOT__imm_res = vlSelfRef.gpu__DOT__imm_res;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.gpu__DOT__op_b[0U] = vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_b;
    vlSelfRef.gpu__DOT__op_b[1U] = vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_b;
    vlSelfRef.gpu__DOT__op_b[2U] = vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_b;
    vlSelfRef.gpu__DOT__op_b[3U] = vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_b;
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.gpu__DOT__op_a[0U] = vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_a;
    vlSelfRef.gpu__DOT__op_a[1U] = vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_a;
    vlSelfRef.gpu__DOT__op_a[2U] = vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_a;
    vlSelfRef.gpu__DOT__op_a[3U] = vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_a;
}

void Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__1(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__1(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__1(Vtop_fu_top* vlSelf);
void Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__1(Vtop_fu_top* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
        Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top));
        Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top));
        Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top));
        Vtop_fu_top___nba_sequent__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top));
    }
    if ((0x000000000000001cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000000027ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x000000000000007fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top));
        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top));
        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top));
        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0((&vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top));
    }
    if ((0x0000000000000067ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__1((&vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top));
        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__1((&vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top));
        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__1((&vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top));
        Vtop_fu_top___nba_comb__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__1((&vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/gpu.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/gpu.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/gpu.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
