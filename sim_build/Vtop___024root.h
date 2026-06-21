// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_fu_top;
class Vtop_gpu_pkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop_gpu_pkg* __PVT__gpu_pkg;
    Vtop_fu_top* __PVT__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top;
    Vtop_fu_top* __PVT__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top;
    Vtop_fu_top* __PVT__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top;
    Vtop_fu_top* __PVT__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ gpu__DOT__clk;
        CData/*0:0*/ gpu__DOT__rst_n;
        CData/*1:0*/ gpu__DOT__warp_id;
        CData/*0:0*/ gpu__DOT__warp_bar;
        CData/*0:0*/ gpu__DOT__pc_init;
        CData/*0:0*/ gpu__DOT__issue_fired;
        CData/*0:0*/ gpu__DOT__wspawn;
        CData/*0:0*/ gpu__DOT__reg_wrt;
        CData/*0:0*/ gpu__DOT__mem_wrt;
        CData/*1:0*/ gpu__DOT__pc_src;
        CData/*0:0*/ gpu__DOT__fu_sel;
        CData/*3:0*/ gpu__DOT__alu_op;
        CData/*3:0*/ gpu__DOT__fpu_op;
        CData/*0:0*/ gpu__DOT__exec_src_a;
        CData/*0:0*/ gpu__DOT__exec_src_b;
        CData/*1:0*/ gpu__DOT__res_src;
        CData/*0:0*/ gpu__DOT__u_wctx__DOT__clk;
        CData/*0:0*/ gpu__DOT__u_wctx__DOT__rst_n;
        CData/*1:0*/ gpu__DOT__u_wctx__DOT__warp_id;
        CData/*0:0*/ gpu__DOT__u_wctx__DOT__pc_en;
        CData/*0:0*/ gpu__DOT__u_wctx__DOT__pc_init;
        CData/*0:0*/ gpu__DOT__u_wsched__DOT__clk;
        CData/*0:0*/ gpu__DOT__u_wsched__DOT__rst_n;
        CData/*0:0*/ gpu__DOT__u_wsched__DOT__issue_fired;
        CData/*1:0*/ gpu__DOT__u_wsched__DOT__warp_id;
        CData/*1:0*/ gpu__DOT__u_wsched__DOT__last_issued;
        CData/*1:0*/ gpu__DOT__u_wsched__DOT__pick;
        CData/*1:0*/ gpu__DOT__u_wsched__DOT__best_rank;
        CData/*0:0*/ gpu__DOT__u_wstate_ctrl__DOT__clk;
        CData/*0:0*/ gpu__DOT__u_wstate_ctrl__DOT__rst_n;
        CData/*0:0*/ gpu__DOT__u_wstate_ctrl__DOT__warp_bar;
        CData/*1:0*/ gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id;
        CData/*4:0*/ gpu__DOT__u_wstate_ctrl__DOT__rs1;
        CData/*4:0*/ gpu__DOT__u_wstate_ctrl__DOT__rs2;
        CData/*0:0*/ gpu__DOT__u_wstate_ctrl__DOT__mem_stl;
        CData/*1:0*/ gpu__DOT__u_wstate_ctrl__DOT__mem_warp_id;
        CData/*0:0*/ gpu__DOT__u_wstate_ctrl__DOT__wspawn;
        CData/*0:0*/ gpu__DOT__u_wstate_ctrl__DOT__all_at_bar;
        CData/*3:0*/ gpu__DOT__u_wstate_ctrl__DOT__bar_msk;
        CData/*3:0*/ gpu__DOT__u_wstate_ctrl__DOT__active_msk;
        CData/*0:0*/ gpu__DOT__u_pc__DOT__clk;
        CData/*0:0*/ gpu__DOT__u_pc__DOT__rst_n;
        CData/*1:0*/ gpu__DOT__u_pc__DOT__pc_src;
        CData/*0:0*/ gpu__DOT__u_instr_mem__DOT__clk;
        CData/*4:0*/ gpu__DOT__u_imm_gen__DOT__op_code;
        CData/*0:0*/ gpu__DOT__u_decoder__DOT__reg_wrt;
        CData/*0:0*/ gpu__DOT__u_decoder__DOT__mem_wrt;
        CData/*1:0*/ gpu__DOT__u_decoder__DOT__pc_src;
        CData/*0:0*/ gpu__DOT__u_decoder__DOT__fu_sel;
        CData/*3:0*/ gpu__DOT__u_decoder__DOT__alu_op;
        CData/*3:0*/ gpu__DOT__u_decoder__DOT__fpu_op;
        CData/*0:0*/ gpu__DOT__u_decoder__DOT__exec_src_a;
        CData/*0:0*/ gpu__DOT__u_decoder__DOT__exec_src_b;
        CData/*1:0*/ gpu__DOT__u_decoder__DOT__res_src;
        CData/*0:0*/ gpu__DOT__u_decoder__DOT__warp_bar;
        CData/*0:0*/ gpu__DOT__u_decoder__DOT__pc_init;
        CData/*0:0*/ gpu__DOT__u_decoder__DOT__wspawn;
        CData/*4:0*/ gpu__DOT__u_decoder__DOT__op_code;
        CData/*2:0*/ gpu__DOT__u_decoder__DOT__funct3;
        CData/*6:0*/ gpu__DOT__u_decoder__DOT__funct7;
        CData/*4:0*/ gpu__DOT__u_decoder__DOT__rs2;
        CData/*0:0*/ gpu__DOT__u_gpr__DOT__clk;
    };
    struct {
        CData/*1:0*/ gpu__DOT__u_gpr__DOT__id_warp_id;
        CData/*4:0*/ gpu__DOT__u_gpr__DOT__id_rs1;
        CData/*4:0*/ gpu__DOT__u_gpr__DOT__id_rs2;
        CData/*1:0*/ gpu__DOT__u_gpr__DOT__wb_warp_id;
        CData/*4:0*/ gpu__DOT__u_gpr__DOT__wb_rd;
        CData/*3:0*/ gpu__DOT__u_gpr__DOT__wb_en;
        CData/*1:0*/ gpu__DOT__u_wb__DOT__res_src;
        CData/*0:0*/ gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_a;
        CData/*0:0*/ gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_b;
        CData/*0:0*/ gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_a;
        CData/*0:0*/ gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_b;
        CData/*0:0*/ gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_a;
        CData/*0:0*/ gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_b;
        CData/*0:0*/ gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_a;
        CData/*0:0*/ gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_b;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu__DOT__u_wctx__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu__DOT__u_wctx__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu__DOT__u_wsched__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu__DOT__u_wstate_ctrl__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu__DOT__u_wstate_ctrl__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu__DOT__u_instr_mem__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu__DOT__u_gpr__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ gpu__DOT__imm_res;
        IData/*31:0*/ gpu__DOT__pc_def;
        IData/*31:0*/ gpu__DOT__instr;
        IData/*31:0*/ gpu__DOT__imm;
        IData/*31:0*/ gpu__DOT____Vcellinp__u_pc__pc_cur;
        IData/*31:0*/ gpu__DOT__u_wctx__DOT__pc_start;
        IData/*31:0*/ gpu__DOT__u_wctx__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ gpu__DOT__u_wctx__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ gpu__DOT__u_wsched__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ gpu__DOT__u_wstate_ctrl__DOT__warp_activate_cnt;
        IData/*31:0*/ gpu__DOT__u_wstate_ctrl__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ gpu__DOT__u_wstate_ctrl__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ gpu__DOT__u_wstate_ctrl__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ gpu__DOT__u_pc__DOT__imm_res;
        IData/*31:0*/ gpu__DOT__u_pc__DOT__exec_res;
        IData/*31:0*/ gpu__DOT__u_pc__DOT__pc_cur;
        IData/*31:0*/ gpu__DOT__u_pc__DOT__pc_nxt;
        IData/*31:0*/ gpu__DOT__u_pc__DOT__pc_def;
        IData/*31:0*/ gpu__DOT__u_instr_mem__DOT__pc;
        IData/*31:0*/ gpu__DOT__u_instr_mem__DOT__instr;
        IData/*31:0*/ gpu__DOT__u_imm_gen__DOT__instr;
        IData/*31:0*/ gpu__DOT__u_imm_gen__DOT__imm;
        IData/*31:0*/ gpu__DOT__u_decoder__DOT__instr;
        IData/*31:0*/ gpu__DOT__u_gpr__DOT__gpr_reg__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ gpu__DOT__u_wb__DOT__imm_res;
        IData/*31:0*/ gpu__DOT__u_wb__DOT__pc_res;
        IData/*31:0*/ gpu__DOT__u_wb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata1;
        IData/*31:0*/ gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata2;
        IData/*31:0*/ gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__pc_cur;
        IData/*31:0*/ gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__imm;
        IData/*31:0*/ gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_a;
        IData/*31:0*/ gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_b;
        IData/*31:0*/ gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata1;
        IData/*31:0*/ gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata2;
        IData/*31:0*/ gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__pc_cur;
    };
    struct {
        IData/*31:0*/ gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__imm;
        IData/*31:0*/ gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_a;
        IData/*31:0*/ gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_b;
        IData/*31:0*/ gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata1;
        IData/*31:0*/ gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata2;
        IData/*31:0*/ gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__pc_cur;
        IData/*31:0*/ gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__imm;
        IData/*31:0*/ gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_a;
        IData/*31:0*/ gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_b;
        IData/*31:0*/ gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata1;
        IData/*31:0*/ gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata2;
        IData/*31:0*/ gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__pc_cur;
        IData/*31:0*/ gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__imm;
        IData/*31:0*/ gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_a;
        IData/*31:0*/ gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_b;
        IData/*31:0*/ __VactIterCount;
        QData/*35:0*/ gpu__DOT__ctx_in;
        QData/*35:0*/ gpu__DOT__u_wctx__DOT__ctx_in;
        VlUnpacked<QData/*35:0*/, 4> gpu__DOT__ctx_tbl;
        VlUnpacked<CData/*4:0*/, 4> gpu__DOT__wsched_entry;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__scoreboard;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__rdata1;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__rdata2;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__op_a;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__op_b;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__fu_res;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__wb_res;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT____Vcellinp__u_wb__mem_res;
        VlUnpacked<QData/*35:0*/, 4> gpu__DOT__u_wctx__DOT__ctx_tbl;
        VlUnpacked<CData/*4:0*/, 4> gpu__DOT__u_wsched__DOT__wsched_entry;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__u_wstate_ctrl__DOT__scoreboard;
        VlUnpacked<QData/*35:0*/, 4> gpu__DOT__u_wstate_ctrl__DOT__warp_ctx;
        VlUnpacked<CData/*4:0*/, 4> gpu__DOT__u_wstate_ctrl__DOT__wsched_entry;
        VlUnpacked<CData/*4:0*/, 4> gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt;
        VlUnpacked<IData/*31:0*/, 32> gpu__DOT__u_instr_mem__DOT__instr_mem;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__u_gpr__DOT__wb_res;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__u_gpr__DOT__rdata1;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__u_gpr__DOT__rdata2;
        VlUnpacked<IData/*31:0*/, 512> gpu__DOT__u_gpr__DOT__reg_mem;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__u_wb__DOT__mem_res;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__u_wb__DOT__fu_res;
        VlUnpacked<IData/*31:0*/, 4> gpu__DOT__u_wb__DOT__wb_res;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlNBACommitQueue<VlUnpacked<QData/*35:0*/, 4>, true, QData/*35:0*/, 1> __VdlyCommitQueuegpu__DOT__u_wctx__DOT__ctx_tbl;
    VlNBACommitQueue<VlUnpacked<CData/*4:0*/, 4>, true, CData/*4:0*/, 1> __VdlyCommitQueuegpu__DOT__u_wstate_ctrl__DOT__wsched_entry;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 4>, false, IData/*31:0*/, 1> __VdlyCommitQueuegpu__DOT__u_gpr__DOT__rdata1;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 4>, false, IData/*31:0*/, 1> __VdlyCommitQueuegpu__DOT__u_gpr__DOT__rdata2;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 512>, false, IData/*31:0*/, 1> __VdlyCommitQueuegpu__DOT__u_gpr__DOT__reg_mem;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
