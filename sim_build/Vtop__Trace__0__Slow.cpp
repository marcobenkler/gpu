// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_dtype____2(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(Vtop___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____10(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____11(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____12(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____13(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____16(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_dtype____20(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu_pkg__0(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gpu", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"warp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_QUAD(tracep,c+5,0,"ctx_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_PUSH_PREFIX(tracep, "ctx_tbl", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_QUAD(tracep,c+7,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+9,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+11,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+13,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"warp_bar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"pc_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"issue_fired",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"wspawn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "wsched_entry", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);

    Vtop___024root__trace_init_dtype____2(vlSelf, tracep, "scoreboard", 0, c+23, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"imm_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"pc_def",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+31,0,"reg_wrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+32,0,"mem_wrt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"pc_src",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"fu_sel",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"alu_op",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"fpu_op",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"exec_src_a",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"exec_src_b",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"res_src",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "rdata1", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+40+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rdata2", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+44+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "op_a", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+48+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "op_b", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+52+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "fu_res", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+56+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "wb_res", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+60+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_op_sel", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"rdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"rdata2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"pc_cur",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"exec_src_a",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"exec_src_b",6, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"op_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"op_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_op_sel", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"rdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"rdata2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"pc_cur",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"exec_src_a",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"exec_src_b",6, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"op_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"op_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_op_sel", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"rdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"rdata2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"pc_cur",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"exec_src_a",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"exec_src_b",6, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"op_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"op_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "lane[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_op_sel", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"rdata1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"rdata2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"pc_cur",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"exec_src_a",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"exec_src_b",6, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"op_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"op_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_decoder", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"reg_wrt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+98,0,"mem_wrt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"pc_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"fu_sel",2, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"alu_op",3, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"fpu_op",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"exec_src_a",5, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"exec_src_b",6, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"res_src",7, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"warp_bar",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"pc_init",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"wspawn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"op_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_gpr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+114,0,"id_warp_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"id_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"id_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"wb_warp_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"wb_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_PUSH_PREFIX(tracep, "wb_res", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+119+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"wb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);

    Vtop___024root__trace_init_dtype____10(vlSelf, tracep, "rdata1", 0, c+124, VerilatedTraceSigDirection::OUTPUT);

    Vtop___024root__trace_init_dtype____11(vlSelf, tracep, "rdata2", 0, c+128, VerilatedTraceSigDirection::OUTPUT);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_imm_gen", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"op_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_instr_mem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+135,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vtop___024root__trace_init_dtype____12(vlSelf, tracep, "instr_mem", 0, c+138, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_pc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"pc_src",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"imm_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"exec_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"pc_cur",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"pc_nxt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"pc_def",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_wb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"res_src",7, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"imm_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vtop___024root__trace_init_dtype____13(vlSelf, tracep, "mem_res", 0, c+180, VerilatedTraceSigDirection::INPUT);
    VL_TRACE_PUSH_PREFIX(tracep, "fu_res", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+184+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"pc_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "wb_res", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+189+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_wctx", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"warp_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"pc_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"pc_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"pc_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+199,0,"ctx_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);

    Vtop___024root__trace_init_dtype____16(vlSelf, tracep, "ctx_tbl", 0, c+201, VerilatedTraceSigDirection::OUTPUT);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_wsched", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+209,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "wsched_entry", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"issue_fired",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"warp_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"last_issued",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"pick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"best_rank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_wstate_ctrl", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+222,0,"warp_bar",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "scoreboard", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+223+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+227,0,"fetch_warp_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+228,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+229,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+1044,0,"mem_stl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"mem_warp_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "warp_ctx", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_QUAD(tracep,c+231,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+233,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+235,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+237,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"warp_activate_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+240,0,"wspawn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vtop___024root__trace_init_dtype____20(vlSelf, tracep, "wsched_entry", 0, c+241, VerilatedTraceSigDirection::OUTPUT);
    VL_TRACE_PUSH_PREFIX(tracep, "wsched_nxt", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+245,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+247,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+248,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"all_at_bar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"bar_msk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"active_msk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "gpu_pkg", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    Vtop___024root__trace_init_sub__TOP__gpu_pkg__0(vlSelf, tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____0(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_QUAD(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+4,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____1(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____1(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____1(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____2(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____2(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____2(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____2(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____3(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____3(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____3(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____3(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____4(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____4(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____4(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____4(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____5(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____5(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____5(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____5(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____6(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____6(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____6(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____6(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____7(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____7(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____7(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____7(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____8(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____8(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____8(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____8(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____9(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____9(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____9(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____9(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____10(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____10(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____10(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____10(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____11(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____11(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____11(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____11(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____12(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____12(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____12(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____12(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____13(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____13(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____13(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____13(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____14(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____14(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____14(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____14(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____15(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____15(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____15(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____15(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____16(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____16(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____16(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____16(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_QUAD(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+4,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____17(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____17(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____17(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____17(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____18(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____18(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____18(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____18(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____19(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____19(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____19(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____19(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_QUAD(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+2,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+4,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+6,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____20(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____20(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____20(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____20(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____21(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____21(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____21(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____21(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[3]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+252,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+255,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"fu_sel",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"result_fpu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"result_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+262,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"addsub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"compare_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"shift_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+267,0,"logic_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+269,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+270,0,"cmp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"logic_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+272,0,"shift_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_addsub_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+273,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+275,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+276,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+277,0,"b_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu_mul", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+278,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+280,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"mul_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+282,0,"multi_ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+284,0,"multi_su",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+286,0,"multi_uu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_compare_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+288,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+290,0,"cmp_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+291,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_logic_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+292,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+293,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+294,0,"logic_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+295,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_shift_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+296,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+297,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+298,0,"shift_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+299,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"shift_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+301,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+302,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+303,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+304,0,"fpu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+306,0,"cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+307,0,"cvt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+309,0,"add_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+310,0,"cmp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"cvt_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+312,0,"sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+313,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"exp_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"exp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"mant_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"mant_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+318,0,"spec_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+319,0,"spec_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"flushed_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"flushed_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"exp_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+325,0,"flags_out_shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+326,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+327,0,"mant_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+328,0,"sign_result_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+329,0,"flags_out_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"exp_add_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+331,0,"mant_add_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+332,0,"mant_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+333,0,"sign_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+334,0,"cmp_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+335,0,"sign_res_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+336,0,"mant_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+337,0,"exp_res_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"flags_out_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+339,0,"flag_rounding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+340,0,"cvt_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"exp_normalized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"mant_normalized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"flags_out_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"mant_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"exp_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_add_sub", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+346,0,"add_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+347,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+348,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+352,0,"shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+353,0,"mant_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+354,0,"sign_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+355,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_QUAD(tracep,c+356,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_DECL_BIT(tracep,c+358,0,"sign_b_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_cmp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+359,0,"cmp_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+360,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+361,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+364,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+365,0,"shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+366,0,"cmp_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+367,0,"cmp_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_cvt", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"cvt_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+369,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"exp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"mant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+373,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"exp_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"mant_shft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+376,0,"mant_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"res_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+378,0,"op_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"shft_amt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+380,0,"shft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+381,0,"shft_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"exp_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"mant_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BIT(tracep,c+384,0,"sign_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_mul", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+385,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+386,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+387,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+391,0,"sign_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"mant_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"exp_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+395,0,"exp_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+396,0,"exp_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+397,0,"mant_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_normalize", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"exp_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"mant_sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"exp_normalized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+403,0,"mant_normalized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+404,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+405,0,"lead_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+406,0,"flags_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_QUAD(tracep,c+407,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_rounding", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"mant_normalized",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"exp_normalized",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"mant_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"exp_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+414,0,"round_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+415,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_shifter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+418,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"exp_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+422,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+424,0,"shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"mant_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"sticky_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"exp_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"mant_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_unpack", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+432,0,"sign_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+433,0,"sign_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+434,0,"exp_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+435,0,"exp_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"mant_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"mant_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+438,0,"spec_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+439,0,"spec_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"flushed_operand_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+441,0,"flushed_operand_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+442,0,"mant_a_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+443,0,"mant_b_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+444,0,"is_nan_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+445,0,"is_nan_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+446,0,"is_inf_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+447,0,"is_inf_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+448,0,"is_zero_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+449,0,"is_zero_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+450,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+451,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+452,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+453,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+454,0,"fu_sel",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+455,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+456,0,"result_fpu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"result_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+461,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"addsub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"compare_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"shift_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+465,0,"logic_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+466,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+467,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+468,0,"cmp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+469,0,"logic_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+470,0,"shift_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_addsub_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+471,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+472,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+473,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+474,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+475,0,"b_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu_mul", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+476,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+477,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+478,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+479,0,"mul_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+480,0,"multi_ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+482,0,"multi_su",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+484,0,"multi_uu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_compare_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+486,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+487,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+488,0,"cmp_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+489,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_logic_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+490,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+491,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+492,0,"logic_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+493,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_shift_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+494,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+495,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+496,0,"shift_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+497,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+498,0,"shift_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+499,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+500,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+501,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+502,0,"fpu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+503,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+504,0,"cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+505,0,"cvt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+506,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+507,0,"add_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+508,0,"cmp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+509,0,"cvt_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+510,0,"sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+511,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+512,0,"exp_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+513,0,"exp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+514,0,"mant_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+515,0,"mant_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+516,0,"spec_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+517,0,"spec_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+518,0,"flushed_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+519,0,"flushed_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+520,0,"exp_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+521,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+522,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+523,0,"flags_out_shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+524,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+525,0,"mant_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+526,0,"sign_result_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+527,0,"flags_out_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+528,0,"exp_add_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+529,0,"mant_add_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+530,0,"mant_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+531,0,"sign_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+532,0,"cmp_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+533,0,"sign_res_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+534,0,"mant_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+535,0,"exp_res_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+536,0,"flags_out_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+537,0,"flag_rounding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+538,0,"cvt_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+539,0,"exp_normalized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+540,0,"mant_normalized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+541,0,"flags_out_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+542,0,"mant_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BUS(tracep,c+543,0,"exp_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_add_sub", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+544,0,"add_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+545,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+546,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+547,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+548,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+549,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+550,0,"shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+551,0,"mant_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+552,0,"sign_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+553,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_QUAD(tracep,c+554,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_DECL_BIT(tracep,c+556,0,"sign_b_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_cmp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+557,0,"cmp_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+558,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+559,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+560,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+561,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+562,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+563,0,"shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+564,0,"cmp_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+565,0,"cmp_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_cvt", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+566,0,"cvt_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+567,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+568,0,"exp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+569,0,"mant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+570,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+571,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+572,0,"exp_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+573,0,"mant_shft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+574,0,"mant_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+575,0,"res_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+576,0,"op_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+577,0,"shft_amt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+578,0,"shft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+579,0,"shft_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+580,0,"exp_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+581,0,"mant_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BIT(tracep,c+582,0,"sign_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_mul", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+583,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+584,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+585,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+586,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+587,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+588,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+589,0,"sign_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+590,0,"mant_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+591,0,"exp_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+592,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+593,0,"exp_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+594,0,"exp_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+595,0,"mant_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_normalize", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+597,0,"exp_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+598,0,"mant_sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+599,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+600,0,"exp_normalized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+601,0,"mant_normalized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+602,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+603,0,"lead_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+604,0,"flags_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_QUAD(tracep,c+605,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_rounding", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+607,0,"mant_normalized",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+608,0,"exp_normalized",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+609,0,"flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+610,0,"mant_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BUS(tracep,c+611,0,"exp_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+612,0,"round_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+613,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_shifter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+614,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+615,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+616,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+617,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+618,0,"exp_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+619,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+620,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+621,0,"flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+622,0,"shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+623,0,"mant_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+624,0,"sticky_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+625,0,"exp_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+626,0,"mant_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_unpack", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+627,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+628,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+629,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+630,0,"sign_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+631,0,"sign_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+632,0,"exp_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+633,0,"exp_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+634,0,"mant_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+635,0,"mant_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+636,0,"spec_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+637,0,"spec_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+638,0,"flushed_operand_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+639,0,"flushed_operand_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+640,0,"mant_a_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+641,0,"mant_b_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+642,0,"is_nan_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+643,0,"is_nan_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+644,0,"is_inf_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+645,0,"is_inf_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+646,0,"is_zero_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+647,0,"is_zero_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+648,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+649,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+650,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+651,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+652,0,"fu_sel",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+653,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+654,0,"result_fpu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+655,0,"result_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+656,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+657,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+658,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+659,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+660,0,"addsub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+661,0,"compare_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+662,0,"shift_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+663,0,"logic_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+664,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+665,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+666,0,"cmp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+667,0,"logic_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+668,0,"shift_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_addsub_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+669,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+670,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+671,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+672,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+673,0,"b_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu_mul", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+674,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+675,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+676,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+677,0,"mul_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+678,0,"multi_ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+680,0,"multi_su",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+682,0,"multi_uu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_compare_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+684,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+685,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+686,0,"cmp_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+687,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_logic_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+688,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+689,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+690,0,"logic_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+691,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_shift_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+692,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+693,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+694,0,"shift_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+695,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+696,0,"shift_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+697,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+698,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+699,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+700,0,"fpu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+701,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+702,0,"cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+703,0,"cvt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+704,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+705,0,"add_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+706,0,"cmp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+707,0,"cvt_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+708,0,"sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+709,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+710,0,"exp_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+711,0,"exp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+712,0,"mant_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+713,0,"mant_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+714,0,"spec_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+715,0,"spec_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+716,0,"flushed_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+717,0,"flushed_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+718,0,"exp_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+719,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+720,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+721,0,"flags_out_shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+722,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+723,0,"mant_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+724,0,"sign_result_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+725,0,"flags_out_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+726,0,"exp_add_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+727,0,"mant_add_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+728,0,"mant_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+729,0,"sign_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+730,0,"cmp_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+731,0,"sign_res_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+732,0,"mant_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+733,0,"exp_res_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+734,0,"flags_out_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+735,0,"flag_rounding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+736,0,"cvt_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+737,0,"exp_normalized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+738,0,"mant_normalized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+739,0,"flags_out_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+740,0,"mant_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BUS(tracep,c+741,0,"exp_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_add_sub", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+742,0,"add_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+743,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+744,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+745,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+746,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+747,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+748,0,"shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+749,0,"mant_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+750,0,"sign_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+751,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_QUAD(tracep,c+752,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_DECL_BIT(tracep,c+754,0,"sign_b_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_cmp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+755,0,"cmp_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+756,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+757,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+758,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+759,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+760,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+761,0,"shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+762,0,"cmp_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+763,0,"cmp_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_cvt", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+764,0,"cvt_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+765,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+766,0,"exp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+767,0,"mant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+768,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+769,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+770,0,"exp_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+771,0,"mant_shft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+772,0,"mant_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+773,0,"res_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+774,0,"op_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+775,0,"shft_amt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+776,0,"shft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+777,0,"shft_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+778,0,"exp_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+779,0,"mant_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BIT(tracep,c+780,0,"sign_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_mul", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+781,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+782,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+783,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+784,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+785,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+786,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+787,0,"sign_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+788,0,"mant_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+789,0,"exp_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+790,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+791,0,"exp_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+792,0,"exp_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+793,0,"mant_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_normalize", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+795,0,"exp_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+796,0,"mant_sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+797,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+798,0,"exp_normalized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+799,0,"mant_normalized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+800,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+801,0,"lead_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+802,0,"flags_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_QUAD(tracep,c+803,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_rounding", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+805,0,"mant_normalized",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+806,0,"exp_normalized",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+807,0,"flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+808,0,"mant_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BUS(tracep,c+809,0,"exp_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+810,0,"round_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+811,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_shifter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+812,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+813,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+814,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+815,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+816,0,"exp_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+817,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+818,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+819,0,"flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+820,0,"shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+821,0,"mant_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+822,0,"sticky_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+823,0,"exp_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+824,0,"mant_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_unpack", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+825,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+826,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+827,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+828,0,"sign_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+829,0,"sign_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+830,0,"exp_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+831,0,"exp_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+832,0,"mant_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+833,0,"mant_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+834,0,"spec_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+835,0,"spec_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+836,0,"flushed_operand_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+837,0,"flushed_operand_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+838,0,"mant_a_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+839,0,"mant_b_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+840,0,"is_nan_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+841,0,"is_nan_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+842,0,"is_inf_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+843,0,"is_inf_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+844,0,"is_zero_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+845,0,"is_zero_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+846,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+847,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+848,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+849,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+850,0,"fu_sel",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BUS(tracep,c+851,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+852,0,"result_fpu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+853,0,"result_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+854,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+855,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+856,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+857,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+858,0,"addsub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+859,0,"compare_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+860,0,"shift_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+861,0,"logic_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+862,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+863,0,"sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+864,0,"cmp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+865,0,"logic_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+866,0,"shift_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_addsub_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+867,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+868,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+869,0,"sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+870,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+871,0,"b_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_alu_mul", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+872,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+873,0,"op_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+874,0,"alu_op",3, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+875,0,"mul_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_QUAD(tracep,c+876,0,"multi_ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+878,0,"multi_su",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+880,0,"multi_uu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_compare_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+882,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+883,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+884,0,"cmp_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+885,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_logic_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+886,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+887,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+888,0,"logic_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+889,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_shift_module", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+890,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+891,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+892,0,"shift_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+893,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+894,0,"shift_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+895,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+896,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+897,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+898,0,"fpu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+899,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+900,0,"cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+901,0,"cvt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+902,0,"mul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+903,0,"add_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+904,0,"cmp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+905,0,"cvt_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+906,0,"sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+907,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+908,0,"exp_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+909,0,"exp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+910,0,"mant_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+911,0,"mant_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+912,0,"spec_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+913,0,"spec_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+914,0,"flushed_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+915,0,"flushed_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+916,0,"exp_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+917,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+918,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+919,0,"flags_out_shifter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+920,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+921,0,"mant_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+922,0,"sign_result_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+923,0,"flags_out_addsub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+924,0,"exp_add_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+925,0,"mant_add_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+926,0,"mant_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+927,0,"sign_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+928,0,"cmp_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+929,0,"sign_res_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+930,0,"mant_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+931,0,"exp_res_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+932,0,"flags_out_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+933,0,"flag_rounding",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+934,0,"cvt_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+935,0,"exp_normalized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+936,0,"mant_normalized",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+937,0,"flags_out_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+938,0,"mant_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BUS(tracep,c+939,0,"exp_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_add_sub", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+940,0,"add_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+941,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+942,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+943,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+944,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+945,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+946,0,"shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+947,0,"mant_sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+948,0,"sign_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+949,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_QUAD(tracep,c+950,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_DECL_BIT(tracep,c+952,0,"sign_b_eff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_cmp", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+953,0,"cmp_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+954,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+955,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+956,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+957,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+958,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+959,0,"shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+960,0,"cmp_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+961,0,"cmp_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_cvt", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+962,0,"cvt_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+963,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+964,0,"exp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+965,0,"mant",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+966,0,"op_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+967,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+968,0,"exp_true",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+969,0,"mant_shft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+970,0,"mant_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+971,0,"res_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+972,0,"op_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+973,0,"shft_amt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+974,0,"shft",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+975,0,"shft_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+976,0,"exp_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+977,0,"mant_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BIT(tracep,c+978,0,"sign_cvt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_mul", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+979,0,"sign_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+980,0,"sign_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+981,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+982,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+983,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+984,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+985,0,"sign_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+986,0,"mant_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+987,0,"exp_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+988,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+989,0,"exp_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+990,0,"exp_norm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_QUAD(tracep,c+991,0,"mant_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 47,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_normalize", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+993,0,"exp_shifted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+994,0,"mant_sum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+995,0,"flags_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+996,0,"exp_normalized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+997,0,"mant_normalized",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+998,0,"flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+999,0,"lead_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+1000,0,"flags_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_QUAD(tracep,c+1001,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 49,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_rounding", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1003,0,"mant_normalized",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1004,0,"exp_normalized",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1005,0,"flags",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BUS(tracep,c+1006,0,"mant_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 22,0);
    VL_TRACE_DECL_BUS(tracep,c+1007,0,"exp_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+1008,0,"round_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1009,0,"mant_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_shifter", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1010,0,"exp_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1011,0,"exp_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1012,0,"mant_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1013,0,"mant_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1014,0,"exp_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1015,0,"mant_a_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1016,0,"mant_b_shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1017,0,"flags",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 26,0);
    VL_TRACE_DECL_BIT(tracep,c+1018,0,"shifted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1019,0,"mant_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_DECL_BUS(tracep,c+1020,0,"sticky_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1021,0,"exp_delta",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1022,0,"mant_shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 25,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_fpu_unpack", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+1023,0,"operand_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1024,0,"operand_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1025,0,"fpu_op",4, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+1026,0,"sign_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1027,0,"sign_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1028,0,"exp_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1029,0,"exp_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+1030,0,"mant_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1031,0,"mant_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BUS(tracep,c+1032,0,"spec_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1033,0,"spec_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1034,0,"flushed_operand_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1035,0,"flushed_operand_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1036,0,"mant_a_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1037,0,"mant_b_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1038,0,"is_nan_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1039,0,"is_nan_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1040,0,"is_inf_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1041,0,"is_inf_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1042,0,"is_zero_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1043,0,"is_zero_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__gpu_pkg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__gpu_pkg__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+1045,0,"warp_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1045,0,"lane_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"reg_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+1046,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1044,(0U));
    bufp->fullIData(oldp+1045,(4U),32);
    bufp->fullIData(oldp+1046,(0x00000020U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____1(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____2(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____3(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____4(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____5(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*35:0*/, 4>& __VdtypeVar);
VL_ATTR_COLD void Vtop___024root__trace_full_dtype____6(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*4:0*/, 4>& __VdtypeVar);

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.clk));
    bufp->fullBit(oldp+1,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.gpu__DOT__clk));
    bufp->fullBit(oldp+3,(vlSelfRef.gpu__DOT__rst_n));
    bufp->fullCData(oldp+4,(vlSelfRef.gpu__DOT__warp_id),2);
    bufp->fullQData(oldp+5,(vlSelfRef.gpu__DOT__ctx_in),36);
    bufp->fullQData(oldp+7,(vlSelfRef.gpu__DOT__ctx_tbl[0U]),36);
    bufp->fullQData(oldp+9,(vlSelfRef.gpu__DOT__ctx_tbl[1U]),36);
    bufp->fullQData(oldp+11,(vlSelfRef.gpu__DOT__ctx_tbl[2U]),36);
    bufp->fullQData(oldp+13,(vlSelfRef.gpu__DOT__ctx_tbl[3U]),36);
    bufp->fullBit(oldp+15,(vlSelfRef.gpu__DOT__warp_bar));
    bufp->fullBit(oldp+16,(vlSelfRef.gpu__DOT__pc_init));
    bufp->fullBit(oldp+17,(vlSelfRef.gpu__DOT__issue_fired));
    bufp->fullBit(oldp+18,(vlSelfRef.gpu__DOT__wspawn));
    bufp->fullCData(oldp+19,(vlSelfRef.gpu__DOT__wsched_entry[0U]),5);
    bufp->fullCData(oldp+20,(vlSelfRef.gpu__DOT__wsched_entry[1U]),5);
    bufp->fullCData(oldp+21,(vlSelfRef.gpu__DOT__wsched_entry[2U]),5);
    bufp->fullCData(oldp+22,(vlSelfRef.gpu__DOT__wsched_entry[3U]),5);
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 23, vlSelfRef.gpu__DOT__scoreboard);
    bufp->fullIData(oldp+27,(vlSelfRef.gpu__DOT__imm_res),32);
    bufp->fullIData(oldp+28,(vlSelfRef.gpu__DOT__pc_def),32);
    bufp->fullIData(oldp+29,(vlSelfRef.gpu__DOT__instr),32);
    bufp->fullIData(oldp+30,(vlSelfRef.gpu__DOT__imm),32);
    bufp->fullBit(oldp+31,(vlSelfRef.gpu__DOT__reg_wrt));
    bufp->fullBit(oldp+32,(vlSelfRef.gpu__DOT__mem_wrt));
    bufp->fullCData(oldp+33,(vlSelfRef.gpu__DOT__pc_src),2);
    bufp->fullBit(oldp+34,(vlSelfRef.gpu__DOT__fu_sel));
    bufp->fullCData(oldp+35,(vlSelfRef.gpu__DOT__alu_op),4);
    bufp->fullCData(oldp+36,(vlSelfRef.gpu__DOT__fpu_op),4);
    bufp->fullBit(oldp+37,(vlSelfRef.gpu__DOT__exec_src_a));
    bufp->fullBit(oldp+38,(vlSelfRef.gpu__DOT__exec_src_b));
    bufp->fullCData(oldp+39,(vlSelfRef.gpu__DOT__res_src),2);
    bufp->fullIData(oldp+40,(vlSelfRef.gpu__DOT__rdata1[0]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.gpu__DOT__rdata1[1]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.gpu__DOT__rdata1[2]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.gpu__DOT__rdata1[3]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.gpu__DOT__rdata2[0]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.gpu__DOT__rdata2[1]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.gpu__DOT__rdata2[2]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.gpu__DOT__rdata2[3]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.gpu__DOT__op_a[0]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.gpu__DOT__op_a[1]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.gpu__DOT__op_a[2]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.gpu__DOT__op_a[3]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.gpu__DOT__op_b[0]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.gpu__DOT__op_b[1]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.gpu__DOT__op_b[2]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.gpu__DOT__op_b[3]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.gpu__DOT__fu_res[0]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.gpu__DOT__fu_res[1]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.gpu__DOT__fu_res[2]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.gpu__DOT__fu_res[3]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.gpu__DOT__wb_res[0]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.gpu__DOT__wb_res[1]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.gpu__DOT__wb_res[2]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.gpu__DOT__wb_res[3]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata1),32);
    bufp->fullIData(oldp+65,(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__rdata2),32);
    bufp->fullIData(oldp+66,(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__pc_cur),32);
    bufp->fullIData(oldp+67,(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__imm),32);
    bufp->fullBit(oldp+68,(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_a));
    bufp->fullBit(oldp+69,(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__exec_src_b));
    bufp->fullIData(oldp+70,(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_a),32);
    bufp->fullIData(oldp+71,(vlSelfRef.gpu__DOT__lane__BRA__0__KET____DOT__u_op_sel__DOT__op_b),32);
    bufp->fullIData(oldp+72,(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata1),32);
    bufp->fullIData(oldp+73,(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__rdata2),32);
    bufp->fullIData(oldp+74,(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__pc_cur),32);
    bufp->fullIData(oldp+75,(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__imm),32);
    bufp->fullBit(oldp+76,(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_a));
    bufp->fullBit(oldp+77,(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__exec_src_b));
    bufp->fullIData(oldp+78,(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_a),32);
    bufp->fullIData(oldp+79,(vlSelfRef.gpu__DOT__lane__BRA__1__KET____DOT__u_op_sel__DOT__op_b),32);
    bufp->fullIData(oldp+80,(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata1),32);
    bufp->fullIData(oldp+81,(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__rdata2),32);
    bufp->fullIData(oldp+82,(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__pc_cur),32);
    bufp->fullIData(oldp+83,(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__imm),32);
    bufp->fullBit(oldp+84,(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_a));
    bufp->fullBit(oldp+85,(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__exec_src_b));
    bufp->fullIData(oldp+86,(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_a),32);
    bufp->fullIData(oldp+87,(vlSelfRef.gpu__DOT__lane__BRA__2__KET____DOT__u_op_sel__DOT__op_b),32);
    bufp->fullIData(oldp+88,(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata1),32);
    bufp->fullIData(oldp+89,(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__rdata2),32);
    bufp->fullIData(oldp+90,(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__pc_cur),32);
    bufp->fullIData(oldp+91,(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__imm),32);
    bufp->fullBit(oldp+92,(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_a));
    bufp->fullBit(oldp+93,(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__exec_src_b));
    bufp->fullIData(oldp+94,(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_a),32);
    bufp->fullIData(oldp+95,(vlSelfRef.gpu__DOT__lane__BRA__3__KET____DOT__u_op_sel__DOT__op_b),32);
    bufp->fullIData(oldp+96,(vlSelfRef.gpu__DOT__u_decoder__DOT__instr),32);
    bufp->fullBit(oldp+97,(vlSelfRef.gpu__DOT__u_decoder__DOT__reg_wrt));
    bufp->fullBit(oldp+98,(vlSelfRef.gpu__DOT__u_decoder__DOT__mem_wrt));
    bufp->fullCData(oldp+99,(vlSelfRef.gpu__DOT__u_decoder__DOT__pc_src),2);
    bufp->fullBit(oldp+100,(vlSelfRef.gpu__DOT__u_decoder__DOT__fu_sel));
    bufp->fullCData(oldp+101,(vlSelfRef.gpu__DOT__u_decoder__DOT__alu_op),4);
    bufp->fullCData(oldp+102,(vlSelfRef.gpu__DOT__u_decoder__DOT__fpu_op),4);
    bufp->fullBit(oldp+103,(vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_a));
    bufp->fullBit(oldp+104,(vlSelfRef.gpu__DOT__u_decoder__DOT__exec_src_b));
    bufp->fullCData(oldp+105,(vlSelfRef.gpu__DOT__u_decoder__DOT__res_src),2);
    bufp->fullBit(oldp+106,(vlSelfRef.gpu__DOT__u_decoder__DOT__warp_bar));
    bufp->fullBit(oldp+107,(vlSelfRef.gpu__DOT__u_decoder__DOT__pc_init));
    bufp->fullBit(oldp+108,(vlSelfRef.gpu__DOT__u_decoder__DOT__wspawn));
    bufp->fullCData(oldp+109,(vlSelfRef.gpu__DOT__u_decoder__DOT__op_code),5);
    bufp->fullCData(oldp+110,(vlSelfRef.gpu__DOT__u_decoder__DOT__funct3),3);
    bufp->fullCData(oldp+111,(vlSelfRef.gpu__DOT__u_decoder__DOT__funct7),7);
    bufp->fullCData(oldp+112,(vlSelfRef.gpu__DOT__u_decoder__DOT__rs2),5);
    bufp->fullBit(oldp+113,(vlSelfRef.gpu__DOT__u_gpr__DOT__clk));
    bufp->fullCData(oldp+114,(vlSelfRef.gpu__DOT__u_gpr__DOT__id_warp_id),2);
    bufp->fullCData(oldp+115,(vlSelfRef.gpu__DOT__u_gpr__DOT__id_rs1),5);
    bufp->fullCData(oldp+116,(vlSelfRef.gpu__DOT__u_gpr__DOT__id_rs2),5);
    bufp->fullCData(oldp+117,(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_warp_id),2);
    bufp->fullCData(oldp+118,(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_rd),5);
    bufp->fullIData(oldp+119,(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_res[0]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_res[1]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_res[2]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_res[3]),32);
    bufp->fullCData(oldp+123,(vlSelfRef.gpu__DOT__u_gpr__DOT__wb_en),4);
    Vtop___024root__trace_full_dtype____1(vlSelf, bufp, 124, vlSelfRef.gpu__DOT__u_gpr__DOT__rdata1);
    Vtop___024root__trace_full_dtype____2(vlSelf, bufp, 128, vlSelfRef.gpu__DOT__u_gpr__DOT__rdata2);
    bufp->fullIData(oldp+132,(vlSelfRef.gpu__DOT__u_imm_gen__DOT__instr),32);
    bufp->fullIData(oldp+133,(vlSelfRef.gpu__DOT__u_imm_gen__DOT__imm),32);
    bufp->fullCData(oldp+134,(vlSelfRef.gpu__DOT__u_imm_gen__DOT__op_code),5);
    bufp->fullBit(oldp+135,(vlSelfRef.gpu__DOT__u_instr_mem__DOT__clk));
    bufp->fullIData(oldp+136,(vlSelfRef.gpu__DOT__u_instr_mem__DOT__pc),32);
    bufp->fullIData(oldp+137,(vlSelfRef.gpu__DOT__u_instr_mem__DOT__instr),32);
    Vtop___024root__trace_full_dtype____3(vlSelf, bufp, 138, vlSelfRef.gpu__DOT__u_instr_mem__DOT__instr_mem);
    bufp->fullBit(oldp+170,(vlSelfRef.gpu__DOT__u_pc__DOT__clk));
    bufp->fullBit(oldp+171,(vlSelfRef.gpu__DOT__u_pc__DOT__rst_n));
    bufp->fullCData(oldp+172,(vlSelfRef.gpu__DOT__u_pc__DOT__pc_src),2);
    bufp->fullIData(oldp+173,(vlSelfRef.gpu__DOT__u_pc__DOT__imm_res),32);
    bufp->fullIData(oldp+174,(vlSelfRef.gpu__DOT__u_pc__DOT__exec_res),32);
    bufp->fullIData(oldp+175,(vlSelfRef.gpu__DOT__u_pc__DOT__pc_cur),32);
    bufp->fullIData(oldp+176,(vlSelfRef.gpu__DOT__u_pc__DOT__pc_nxt),32);
    bufp->fullIData(oldp+177,(vlSelfRef.gpu__DOT__u_pc__DOT__pc_def),32);
    bufp->fullCData(oldp+178,(vlSelfRef.gpu__DOT__u_wb__DOT__res_src),2);
    bufp->fullIData(oldp+179,(vlSelfRef.gpu__DOT__u_wb__DOT__imm_res),32);
    Vtop___024root__trace_full_dtype____4(vlSelf, bufp, 180, vlSelfRef.gpu__DOT__u_wb__DOT__mem_res);
    bufp->fullIData(oldp+184,(vlSelfRef.gpu__DOT__u_wb__DOT__fu_res[0]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.gpu__DOT__u_wb__DOT__fu_res[1]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.gpu__DOT__u_wb__DOT__fu_res[2]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.gpu__DOT__u_wb__DOT__fu_res[3]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.gpu__DOT__u_wb__DOT__pc_res),32);
    bufp->fullIData(oldp+189,(vlSelfRef.gpu__DOT__u_wb__DOT__wb_res[0]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.gpu__DOT__u_wb__DOT__wb_res[1]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.gpu__DOT__u_wb__DOT__wb_res[2]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.gpu__DOT__u_wb__DOT__wb_res[3]),32);
    bufp->fullBit(oldp+193,(vlSelfRef.gpu__DOT__u_wctx__DOT__clk));
    bufp->fullBit(oldp+194,(vlSelfRef.gpu__DOT__u_wctx__DOT__rst_n));
    bufp->fullCData(oldp+195,(vlSelfRef.gpu__DOT__u_wctx__DOT__warp_id),2);
    bufp->fullBit(oldp+196,(vlSelfRef.gpu__DOT__u_wctx__DOT__pc_en));
    bufp->fullIData(oldp+197,(vlSelfRef.gpu__DOT__u_wctx__DOT__pc_start),32);
    bufp->fullBit(oldp+198,(vlSelfRef.gpu__DOT__u_wctx__DOT__pc_init));
    bufp->fullQData(oldp+199,(vlSelfRef.gpu__DOT__u_wctx__DOT__ctx_in),36);
    Vtop___024root__trace_full_dtype____5(vlSelf, bufp, 201, vlSelfRef.gpu__DOT__u_wctx__DOT__ctx_tbl);
    bufp->fullBit(oldp+209,(vlSelfRef.gpu__DOT__u_wsched__DOT__clk));
    bufp->fullBit(oldp+210,(vlSelfRef.gpu__DOT__u_wsched__DOT__rst_n));
    bufp->fullCData(oldp+211,(vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry[0U]),5);
    bufp->fullCData(oldp+212,(vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry[1U]),5);
    bufp->fullCData(oldp+213,(vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry[2U]),5);
    bufp->fullCData(oldp+214,(vlSelfRef.gpu__DOT__u_wsched__DOT__wsched_entry[3U]),5);
    bufp->fullBit(oldp+215,(vlSelfRef.gpu__DOT__u_wsched__DOT__issue_fired));
    bufp->fullCData(oldp+216,(vlSelfRef.gpu__DOT__u_wsched__DOT__warp_id),2);
    bufp->fullCData(oldp+217,(vlSelfRef.gpu__DOT__u_wsched__DOT__last_issued),2);
    bufp->fullCData(oldp+218,(vlSelfRef.gpu__DOT__u_wsched__DOT__pick),2);
    bufp->fullCData(oldp+219,(vlSelfRef.gpu__DOT__u_wsched__DOT__best_rank),2);
    bufp->fullBit(oldp+220,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__clk));
    bufp->fullBit(oldp+221,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rst_n));
    bufp->fullBit(oldp+222,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_bar));
    bufp->fullIData(oldp+223,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__scoreboard[0]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__scoreboard[1]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__scoreboard[2]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__scoreboard[3]),32);
    bufp->fullCData(oldp+227,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__fetch_warp_id),2);
    bufp->fullCData(oldp+228,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rs1),5);
    bufp->fullCData(oldp+229,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__rs2),5);
    bufp->fullCData(oldp+230,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__mem_warp_id),2);
    bufp->fullQData(oldp+231,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_ctx[0U]),36);
    bufp->fullQData(oldp+233,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_ctx[1U]),36);
    bufp->fullQData(oldp+235,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_ctx[2U]),36);
    bufp->fullQData(oldp+237,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_ctx[3U]),36);
    bufp->fullIData(oldp+239,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__warp_activate_cnt),32);
    bufp->fullBit(oldp+240,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wspawn));
    Vtop___024root__trace_full_dtype____6(vlSelf, bufp, 241, vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_entry);
    bufp->fullCData(oldp+245,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[0U]),5);
    bufp->fullCData(oldp+246,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[1U]),5);
    bufp->fullCData(oldp+247,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[2U]),5);
    bufp->fullCData(oldp+248,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__wsched_nxt[3U]),5);
    bufp->fullBit(oldp+249,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__all_at_bar));
    bufp->fullCData(oldp+250,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__bar_msk),4);
    bufp->fullCData(oldp+251,(vlSelfRef.gpu__DOT__u_wstate_ctrl__DOT__active_msk),4);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.op_a),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.op_b),32);
    bufp->fullCData(oldp+254,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.alu_op),4);
    bufp->fullCData(oldp+255,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.fpu_op),4);
    bufp->fullBit(oldp+256,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.fu_sel));
    bufp->fullIData(oldp+257,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.result),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.result_fpu),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.result_alu),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__op_a),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__op_b),32);
    bufp->fullCData(oldp+262,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__alu_op),4);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__result),32);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__addsub_result),32);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__compare_result),32);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__shift_result),32);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__logic_result),32);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__mul_result),32);
    bufp->fullBit(oldp+269,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__sub));
    bufp->fullCData(oldp+270,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__cmp_op),2);
    bufp->fullCData(oldp+271,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__logic_op),2);
    bufp->fullCData(oldp+272,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__shift_op),2);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__a),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__b),32);
    bufp->fullBit(oldp+275,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__sub));
    bufp->fullIData(oldp+276,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__result),32);
    bufp->fullIData(oldp+277,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__b_buf),32);
    bufp->fullIData(oldp+278,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__op_a),32);
    bufp->fullIData(oldp+279,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__op_b),32);
    bufp->fullCData(oldp+280,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__alu_op),4);
    bufp->fullIData(oldp+281,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__mul_res),32);
    bufp->fullQData(oldp+282,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_ss),64);
    bufp->fullQData(oldp+284,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_su),64);
    bufp->fullQData(oldp+286,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_uu),64);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__a),32);
    bufp->fullIData(oldp+289,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__b),32);
    bufp->fullCData(oldp+290,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__cmp_op),2);
    bufp->fullIData(oldp+291,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__result),32);
    bufp->fullIData(oldp+292,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__a),32);
    bufp->fullIData(oldp+293,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__b),32);
    bufp->fullCData(oldp+294,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__logic_op),2);
    bufp->fullIData(oldp+295,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__result),32);
    bufp->fullIData(oldp+296,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__a),32);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__b),32);
    bufp->fullCData(oldp+298,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__shift_op),2);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__result),32);
    bufp->fullCData(oldp+300,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__shift_range),5);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__operand_a),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__operand_b),32);
    bufp->fullCData(oldp+303,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__fpu_op),4);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__fpu_result),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__add_sub_result),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_result),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_result),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mul_result),32);
    bufp->fullBit(oldp+309,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__add_op));
    bufp->fullBit(oldp+310,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_op));
    bufp->fullCData(oldp+311,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_op),2);
    bufp->fullBit(oldp+312,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_a));
    bufp->fullBit(oldp+313,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_b));
    bufp->fullCData(oldp+314,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_a),8);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_b),8);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_a),24);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_b),24);
    bufp->fullIData(oldp+318,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__spec_out),32);
    bufp->fullBit(oldp+319,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__spec_vld));
    bufp->fullIData(oldp+320,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__flushed_operand_a),32);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__flushed_operand_b),32);
    bufp->fullCData(oldp+322,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_addsub),8);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_shifter),27);
    bufp->fullBit(oldp+326,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__shifted));
    bufp->fullIData(oldp+327,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_addsub),25);
    bufp->fullBit(oldp+328,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_result_addsub));
    bufp->fullIData(oldp+329,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_addsub),27);
    bufp->fullCData(oldp+330,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_add_norm),8);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_add_norm),24);
    bufp->fullIData(oldp+332,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_sum),25);
    bufp->fullBit(oldp+333,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_result));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_res));
    bufp->fullBit(oldp+335,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_res_mul));
    bufp->fullIData(oldp+336,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_mul),24);
    bufp->fullCData(oldp+337,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_res_mul),8);
    bufp->fullIData(oldp+338,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_mul),27);
    bufp->fullIData(oldp+339,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__flag_rounding),27);
    bufp->fullIData(oldp+340,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_res),32);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_normalized),8);
    bufp->fullIData(oldp+342,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_normalized),24);
    bufp->fullIData(oldp+343,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_norm),27);
    bufp->fullIData(oldp+344,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_final),23);
    bufp->fullCData(oldp+345,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_final),8);
    bufp->fullBit(oldp+346,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op));
    bufp->fullBit(oldp+347,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a));
    bufp->fullBit(oldp+348,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b));
    bufp->fullIData(oldp+349,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+350,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+351,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in),27);
    bufp->fullBit(oldp+352,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted));
    bufp->fullIData(oldp+353,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum),25);
    bufp->fullBit(oldp+354,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result));
    bufp->fullIData(oldp+355,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out),27);
    bufp->fullQData(oldp+356,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp),50);
    bufp->fullBit(oldp+358,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff));
    bufp->fullBit(oldp+359,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op));
    bufp->fullBit(oldp+360,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a));
    bufp->fullBit(oldp+361,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b));
    bufp->fullIData(oldp+362,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in),27);
    bufp->fullIData(oldp+363,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+364,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted),24);
    bufp->fullBit(oldp+365,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted));
    bufp->fullBit(oldp+366,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res));
    bufp->fullBit(oldp+367,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp));
    bufp->fullCData(oldp+368,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op),2);
    bufp->fullBit(oldp+369,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__sign));
    bufp->fullCData(oldp+370,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp),8);
    bufp->fullIData(oldp+371,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant),24);
    bufp->fullIData(oldp+372,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a),32);
    bufp->fullIData(oldp+373,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__result),32);
    bufp->fullCData(oldp+374,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true),8);
    bufp->fullIData(oldp+375,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft),32);
    bufp->fullIData(oldp+376,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp),32);
    bufp->fullIData(oldp+377,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp),32);
    bufp->fullIData(oldp+378,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec),32);
    bufp->fullCData(oldp+379,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt),6);
    bufp->fullCData(oldp+380,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft),6);
    bufp->fullIData(oldp+381,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp),32);
    bufp->fullCData(oldp+382,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt),8);
    bufp->fullIData(oldp+383,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt),23);
    bufp->fullBit(oldp+384,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt));
    bufp->fullBit(oldp+385,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a));
    bufp->fullBit(oldp+386,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b));
    bufp->fullCData(oldp+387,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a),8);
    bufp->fullCData(oldp+388,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b),8);
    bufp->fullIData(oldp+389,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a),24);
    bufp->fullIData(oldp+390,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b),24);
    bufp->fullBit(oldp+391,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res));
    bufp->fullIData(oldp+392,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul),24);
    bufp->fullCData(oldp+393,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res),8);
    bufp->fullIData(oldp+394,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out),27);
    bufp->fullSData(oldp+395,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp),10);
    bufp->fullSData(oldp+396,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm),10);
    bufp->fullQData(oldp+397,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp),48);
    bufp->fullCData(oldp+399,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted),8);
    bufp->fullIData(oldp+400,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum),25);
    bufp->fullIData(oldp+401,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in),27);
    bufp->fullCData(oldp+402,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized),8);
    bufp->fullIData(oldp+403,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized),24);
    bufp->fullIData(oldp+404,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out),27);
    bufp->fullCData(oldp+405,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero),5);
    bufp->fullIData(oldp+406,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp),26);
    bufp->fullQData(oldp+407,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp),50);
    bufp->fullIData(oldp+409,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized),24);
    bufp->fullCData(oldp+410,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized),8);
    bufp->fullIData(oldp+411,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__flags),27);
    bufp->fullIData(oldp+412,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final),23);
    bufp->fullCData(oldp+413,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final),8);
    bufp->fullBit(oldp+414,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up));
    bufp->fullIData(oldp+415,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp),25);
    bufp->fullCData(oldp+416,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a),8);
    bufp->fullCData(oldp+417,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b),8);
    bufp->fullIData(oldp+418,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a),24);
    bufp->fullIData(oldp+419,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b),24);
    bufp->fullCData(oldp+420,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted),8);
    bufp->fullIData(oldp+421,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+422,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+423,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__flags),27);
    bufp->fullBit(oldp+424,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted));
    bufp->fullIData(oldp+425,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext),26);
    bufp->fullIData(oldp+426,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__sticky_mask),24);
    bufp->fullCData(oldp+427,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta),8);
    bufp->fullIData(oldp+428,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted),26);
    bufp->fullIData(oldp+429,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a),32);
    bufp->fullIData(oldp+430,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b),32);
    bufp->fullCData(oldp+431,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op),4);
    bufp->fullBit(oldp+432,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a));
    bufp->fullBit(oldp+433,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b));
    bufp->fullCData(oldp+434,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a),8);
    bufp->fullCData(oldp+435,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b),8);
    bufp->fullIData(oldp+436,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a),24);
    bufp->fullIData(oldp+437,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b),24);
    bufp->fullIData(oldp+438,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out),32);
    bufp->fullBit(oldp+439,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld));
    bufp->fullIData(oldp+440,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a),32);
    bufp->fullIData(oldp+441,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b),32);
    bufp->fullBit(oldp+442,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero));
    bufp->fullBit(oldp+443,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero));
    bufp->fullBit(oldp+444,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a));
    bufp->fullBit(oldp+445,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b));
    bufp->fullBit(oldp+446,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a));
    bufp->fullBit(oldp+447,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b));
    bufp->fullBit(oldp+448,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a));
    bufp->fullBit(oldp+449,(vlSymsp->TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b));
    bufp->fullIData(oldp+450,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.op_a),32);
    bufp->fullIData(oldp+451,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.op_b),32);
    bufp->fullCData(oldp+452,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.alu_op),4);
    bufp->fullCData(oldp+453,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.fpu_op),4);
    bufp->fullBit(oldp+454,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.fu_sel));
    bufp->fullIData(oldp+455,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.result),32);
    bufp->fullIData(oldp+456,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.result_fpu),32);
    bufp->fullIData(oldp+457,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.result_alu),32);
    bufp->fullIData(oldp+458,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__op_a),32);
    bufp->fullIData(oldp+459,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__op_b),32);
    bufp->fullCData(oldp+460,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__alu_op),4);
    bufp->fullIData(oldp+461,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__result),32);
    bufp->fullIData(oldp+462,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__addsub_result),32);
    bufp->fullIData(oldp+463,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__compare_result),32);
    bufp->fullIData(oldp+464,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__shift_result),32);
    bufp->fullIData(oldp+465,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__logic_result),32);
    bufp->fullIData(oldp+466,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__mul_result),32);
    bufp->fullBit(oldp+467,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__sub));
    bufp->fullCData(oldp+468,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__cmp_op),2);
    bufp->fullCData(oldp+469,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__logic_op),2);
    bufp->fullCData(oldp+470,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__shift_op),2);
    bufp->fullIData(oldp+471,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__a),32);
    bufp->fullIData(oldp+472,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__b),32);
    bufp->fullBit(oldp+473,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__sub));
    bufp->fullIData(oldp+474,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__result),32);
    bufp->fullIData(oldp+475,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__b_buf),32);
    bufp->fullIData(oldp+476,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__op_a),32);
    bufp->fullIData(oldp+477,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__op_b),32);
    bufp->fullCData(oldp+478,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__alu_op),4);
    bufp->fullIData(oldp+479,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__mul_res),32);
    bufp->fullQData(oldp+480,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_ss),64);
    bufp->fullQData(oldp+482,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_su),64);
    bufp->fullQData(oldp+484,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_uu),64);
    bufp->fullIData(oldp+486,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__a),32);
    bufp->fullIData(oldp+487,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__b),32);
    bufp->fullCData(oldp+488,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__cmp_op),2);
    bufp->fullIData(oldp+489,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__result),32);
    bufp->fullIData(oldp+490,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__a),32);
    bufp->fullIData(oldp+491,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__b),32);
    bufp->fullCData(oldp+492,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__logic_op),2);
    bufp->fullIData(oldp+493,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__result),32);
    bufp->fullIData(oldp+494,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__a),32);
    bufp->fullIData(oldp+495,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__b),32);
    bufp->fullCData(oldp+496,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__shift_op),2);
    bufp->fullIData(oldp+497,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__result),32);
    bufp->fullCData(oldp+498,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__shift_range),5);
    bufp->fullIData(oldp+499,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__operand_a),32);
    bufp->fullIData(oldp+500,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__operand_b),32);
    bufp->fullCData(oldp+501,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__fpu_op),4);
    bufp->fullIData(oldp+502,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__fpu_result),32);
    bufp->fullIData(oldp+503,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__add_sub_result),32);
    bufp->fullIData(oldp+504,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_result),32);
    bufp->fullIData(oldp+505,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_result),32);
    bufp->fullIData(oldp+506,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mul_result),32);
    bufp->fullBit(oldp+507,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__add_op));
    bufp->fullBit(oldp+508,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_op));
    bufp->fullCData(oldp+509,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_op),2);
    bufp->fullBit(oldp+510,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_a));
    bufp->fullBit(oldp+511,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_b));
    bufp->fullCData(oldp+512,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_a),8);
    bufp->fullCData(oldp+513,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_b),8);
    bufp->fullIData(oldp+514,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_a),24);
    bufp->fullIData(oldp+515,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_b),24);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__spec_out),32);
    bufp->fullBit(oldp+517,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__spec_vld));
    bufp->fullIData(oldp+518,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__flushed_operand_a),32);
    bufp->fullIData(oldp+519,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__flushed_operand_b),32);
    bufp->fullCData(oldp+520,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_addsub),8);
    bufp->fullIData(oldp+521,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+522,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+523,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_shifter),27);
    bufp->fullBit(oldp+524,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__shifted));
    bufp->fullIData(oldp+525,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_addsub),25);
    bufp->fullBit(oldp+526,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_result_addsub));
    bufp->fullIData(oldp+527,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_addsub),27);
    bufp->fullCData(oldp+528,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_add_norm),8);
    bufp->fullIData(oldp+529,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_add_norm),24);
    bufp->fullIData(oldp+530,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_sum),25);
    bufp->fullBit(oldp+531,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_result));
    bufp->fullBit(oldp+532,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_res));
    bufp->fullBit(oldp+533,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_res_mul));
    bufp->fullIData(oldp+534,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_mul),24);
    bufp->fullCData(oldp+535,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_res_mul),8);
    bufp->fullIData(oldp+536,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_mul),27);
    bufp->fullIData(oldp+537,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__flag_rounding),27);
    bufp->fullIData(oldp+538,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_res),32);
    bufp->fullCData(oldp+539,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_normalized),8);
    bufp->fullIData(oldp+540,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_normalized),24);
    bufp->fullIData(oldp+541,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_norm),27);
    bufp->fullIData(oldp+542,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_final),23);
    bufp->fullCData(oldp+543,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_final),8);
    bufp->fullBit(oldp+544,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op));
    bufp->fullBit(oldp+545,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a));
    bufp->fullBit(oldp+546,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b));
    bufp->fullIData(oldp+547,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+548,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+549,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in),27);
    bufp->fullBit(oldp+550,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted));
    bufp->fullIData(oldp+551,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum),25);
    bufp->fullBit(oldp+552,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result));
    bufp->fullIData(oldp+553,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out),27);
    bufp->fullQData(oldp+554,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp),50);
    bufp->fullBit(oldp+556,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff));
    bufp->fullBit(oldp+557,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op));
    bufp->fullBit(oldp+558,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a));
    bufp->fullBit(oldp+559,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b));
    bufp->fullIData(oldp+560,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in),27);
    bufp->fullIData(oldp+561,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+562,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted),24);
    bufp->fullBit(oldp+563,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted));
    bufp->fullBit(oldp+564,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res));
    bufp->fullBit(oldp+565,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp));
    bufp->fullCData(oldp+566,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op),2);
    bufp->fullBit(oldp+567,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__sign));
    bufp->fullCData(oldp+568,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp),8);
    bufp->fullIData(oldp+569,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant),24);
    bufp->fullIData(oldp+570,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a),32);
    bufp->fullIData(oldp+571,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__result),32);
    bufp->fullCData(oldp+572,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true),8);
    bufp->fullIData(oldp+573,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft),32);
    bufp->fullIData(oldp+574,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp),32);
    bufp->fullIData(oldp+575,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp),32);
    bufp->fullIData(oldp+576,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec),32);
    bufp->fullCData(oldp+577,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt),6);
    bufp->fullCData(oldp+578,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft),6);
    bufp->fullIData(oldp+579,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp),32);
    bufp->fullCData(oldp+580,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt),8);
    bufp->fullIData(oldp+581,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt),23);
    bufp->fullBit(oldp+582,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt));
    bufp->fullBit(oldp+583,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a));
    bufp->fullBit(oldp+584,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b));
    bufp->fullCData(oldp+585,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a),8);
    bufp->fullCData(oldp+586,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b),8);
    bufp->fullIData(oldp+587,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a),24);
    bufp->fullIData(oldp+588,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b),24);
    bufp->fullBit(oldp+589,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res));
    bufp->fullIData(oldp+590,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul),24);
    bufp->fullCData(oldp+591,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res),8);
    bufp->fullIData(oldp+592,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out),27);
    bufp->fullSData(oldp+593,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp),10);
    bufp->fullSData(oldp+594,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm),10);
    bufp->fullQData(oldp+595,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp),48);
    bufp->fullCData(oldp+597,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted),8);
    bufp->fullIData(oldp+598,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum),25);
    bufp->fullIData(oldp+599,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in),27);
    bufp->fullCData(oldp+600,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized),8);
    bufp->fullIData(oldp+601,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized),24);
    bufp->fullIData(oldp+602,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out),27);
    bufp->fullCData(oldp+603,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero),5);
    bufp->fullIData(oldp+604,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp),26);
    bufp->fullQData(oldp+605,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp),50);
    bufp->fullIData(oldp+607,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized),24);
    bufp->fullCData(oldp+608,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized),8);
    bufp->fullIData(oldp+609,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__flags),27);
    bufp->fullIData(oldp+610,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final),23);
    bufp->fullCData(oldp+611,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final),8);
    bufp->fullBit(oldp+612,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up));
    bufp->fullIData(oldp+613,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp),25);
    bufp->fullCData(oldp+614,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a),8);
    bufp->fullCData(oldp+615,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b),8);
    bufp->fullIData(oldp+616,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a),24);
    bufp->fullIData(oldp+617,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b),24);
    bufp->fullCData(oldp+618,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted),8);
    bufp->fullIData(oldp+619,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+620,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+621,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__flags),27);
    bufp->fullBit(oldp+622,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted));
    bufp->fullIData(oldp+623,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext),26);
    bufp->fullIData(oldp+624,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__sticky_mask),24);
    bufp->fullCData(oldp+625,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta),8);
    bufp->fullIData(oldp+626,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted),26);
    bufp->fullIData(oldp+627,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a),32);
    bufp->fullIData(oldp+628,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b),32);
    bufp->fullCData(oldp+629,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op),4);
    bufp->fullBit(oldp+630,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a));
    bufp->fullBit(oldp+631,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b));
    bufp->fullCData(oldp+632,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a),8);
    bufp->fullCData(oldp+633,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b),8);
    bufp->fullIData(oldp+634,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a),24);
    bufp->fullIData(oldp+635,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b),24);
    bufp->fullIData(oldp+636,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out),32);
    bufp->fullBit(oldp+637,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld));
    bufp->fullIData(oldp+638,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a),32);
    bufp->fullIData(oldp+639,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b),32);
    bufp->fullBit(oldp+640,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero));
    bufp->fullBit(oldp+641,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero));
    bufp->fullBit(oldp+642,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a));
    bufp->fullBit(oldp+643,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b));
    bufp->fullBit(oldp+644,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a));
    bufp->fullBit(oldp+645,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b));
    bufp->fullBit(oldp+646,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a));
    bufp->fullBit(oldp+647,(vlSymsp->TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b));
    bufp->fullIData(oldp+648,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.op_a),32);
    bufp->fullIData(oldp+649,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.op_b),32);
    bufp->fullCData(oldp+650,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.alu_op),4);
    bufp->fullCData(oldp+651,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.fpu_op),4);
    bufp->fullBit(oldp+652,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.fu_sel));
    bufp->fullIData(oldp+653,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.result),32);
    bufp->fullIData(oldp+654,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.result_fpu),32);
    bufp->fullIData(oldp+655,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.result_alu),32);
    bufp->fullIData(oldp+656,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__op_a),32);
    bufp->fullIData(oldp+657,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__op_b),32);
    bufp->fullCData(oldp+658,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__alu_op),4);
    bufp->fullIData(oldp+659,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__result),32);
    bufp->fullIData(oldp+660,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__addsub_result),32);
    bufp->fullIData(oldp+661,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__compare_result),32);
    bufp->fullIData(oldp+662,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__shift_result),32);
    bufp->fullIData(oldp+663,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__logic_result),32);
    bufp->fullIData(oldp+664,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__mul_result),32);
    bufp->fullBit(oldp+665,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__sub));
    bufp->fullCData(oldp+666,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__cmp_op),2);
    bufp->fullCData(oldp+667,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__logic_op),2);
    bufp->fullCData(oldp+668,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__shift_op),2);
    bufp->fullIData(oldp+669,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__a),32);
    bufp->fullIData(oldp+670,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__b),32);
    bufp->fullBit(oldp+671,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__sub));
    bufp->fullIData(oldp+672,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__result),32);
    bufp->fullIData(oldp+673,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__b_buf),32);
    bufp->fullIData(oldp+674,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__op_a),32);
    bufp->fullIData(oldp+675,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__op_b),32);
    bufp->fullCData(oldp+676,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__alu_op),4);
    bufp->fullIData(oldp+677,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__mul_res),32);
    bufp->fullQData(oldp+678,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_ss),64);
    bufp->fullQData(oldp+680,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_su),64);
    bufp->fullQData(oldp+682,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_uu),64);
    bufp->fullIData(oldp+684,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__a),32);
    bufp->fullIData(oldp+685,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__b),32);
    bufp->fullCData(oldp+686,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__cmp_op),2);
    bufp->fullIData(oldp+687,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__result),32);
    bufp->fullIData(oldp+688,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__a),32);
    bufp->fullIData(oldp+689,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__b),32);
    bufp->fullCData(oldp+690,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__logic_op),2);
    bufp->fullIData(oldp+691,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__result),32);
    bufp->fullIData(oldp+692,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__a),32);
    bufp->fullIData(oldp+693,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__b),32);
    bufp->fullCData(oldp+694,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__shift_op),2);
    bufp->fullIData(oldp+695,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__result),32);
    bufp->fullCData(oldp+696,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__shift_range),5);
    bufp->fullIData(oldp+697,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__operand_a),32);
    bufp->fullIData(oldp+698,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__operand_b),32);
    bufp->fullCData(oldp+699,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__fpu_op),4);
    bufp->fullIData(oldp+700,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__fpu_result),32);
    bufp->fullIData(oldp+701,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__add_sub_result),32);
    bufp->fullIData(oldp+702,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_result),32);
    bufp->fullIData(oldp+703,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_result),32);
    bufp->fullIData(oldp+704,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mul_result),32);
    bufp->fullBit(oldp+705,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__add_op));
    bufp->fullBit(oldp+706,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_op));
    bufp->fullCData(oldp+707,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_op),2);
    bufp->fullBit(oldp+708,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_a));
    bufp->fullBit(oldp+709,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_b));
    bufp->fullCData(oldp+710,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_a),8);
    bufp->fullCData(oldp+711,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_b),8);
    bufp->fullIData(oldp+712,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_a),24);
    bufp->fullIData(oldp+713,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_b),24);
    bufp->fullIData(oldp+714,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__spec_out),32);
    bufp->fullBit(oldp+715,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__spec_vld));
    bufp->fullIData(oldp+716,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__flushed_operand_a),32);
    bufp->fullIData(oldp+717,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__flushed_operand_b),32);
    bufp->fullCData(oldp+718,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_addsub),8);
    bufp->fullIData(oldp+719,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+720,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+721,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_shifter),27);
    bufp->fullBit(oldp+722,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__shifted));
    bufp->fullIData(oldp+723,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_addsub),25);
    bufp->fullBit(oldp+724,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_result_addsub));
    bufp->fullIData(oldp+725,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_addsub),27);
    bufp->fullCData(oldp+726,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_add_norm),8);
    bufp->fullIData(oldp+727,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_add_norm),24);
    bufp->fullIData(oldp+728,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_sum),25);
    bufp->fullBit(oldp+729,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_result));
    bufp->fullBit(oldp+730,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_res));
    bufp->fullBit(oldp+731,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_res_mul));
    bufp->fullIData(oldp+732,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_mul),24);
    bufp->fullCData(oldp+733,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_res_mul),8);
    bufp->fullIData(oldp+734,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_mul),27);
    bufp->fullIData(oldp+735,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__flag_rounding),27);
    bufp->fullIData(oldp+736,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_res),32);
    bufp->fullCData(oldp+737,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_normalized),8);
    bufp->fullIData(oldp+738,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_normalized),24);
    bufp->fullIData(oldp+739,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_norm),27);
    bufp->fullIData(oldp+740,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_final),23);
    bufp->fullCData(oldp+741,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_final),8);
    bufp->fullBit(oldp+742,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op));
    bufp->fullBit(oldp+743,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a));
    bufp->fullBit(oldp+744,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b));
    bufp->fullIData(oldp+745,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+746,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+747,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in),27);
    bufp->fullBit(oldp+748,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted));
    bufp->fullIData(oldp+749,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum),25);
    bufp->fullBit(oldp+750,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result));
    bufp->fullIData(oldp+751,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out),27);
    bufp->fullQData(oldp+752,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp),50);
    bufp->fullBit(oldp+754,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff));
    bufp->fullBit(oldp+755,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op));
    bufp->fullBit(oldp+756,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a));
    bufp->fullBit(oldp+757,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b));
    bufp->fullIData(oldp+758,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in),27);
    bufp->fullIData(oldp+759,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+760,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted),24);
    bufp->fullBit(oldp+761,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted));
    bufp->fullBit(oldp+762,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res));
    bufp->fullBit(oldp+763,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp));
    bufp->fullCData(oldp+764,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op),2);
    bufp->fullBit(oldp+765,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__sign));
    bufp->fullCData(oldp+766,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp),8);
    bufp->fullIData(oldp+767,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant),24);
    bufp->fullIData(oldp+768,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a),32);
    bufp->fullIData(oldp+769,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__result),32);
    bufp->fullCData(oldp+770,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true),8);
    bufp->fullIData(oldp+771,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft),32);
    bufp->fullIData(oldp+772,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp),32);
    bufp->fullIData(oldp+773,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp),32);
    bufp->fullIData(oldp+774,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec),32);
    bufp->fullCData(oldp+775,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt),6);
    bufp->fullCData(oldp+776,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft),6);
    bufp->fullIData(oldp+777,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp),32);
    bufp->fullCData(oldp+778,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt),8);
    bufp->fullIData(oldp+779,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt),23);
    bufp->fullBit(oldp+780,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt));
    bufp->fullBit(oldp+781,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a));
    bufp->fullBit(oldp+782,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b));
    bufp->fullCData(oldp+783,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a),8);
    bufp->fullCData(oldp+784,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b),8);
    bufp->fullIData(oldp+785,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a),24);
    bufp->fullIData(oldp+786,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b),24);
    bufp->fullBit(oldp+787,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res));
    bufp->fullIData(oldp+788,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul),24);
    bufp->fullCData(oldp+789,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res),8);
    bufp->fullIData(oldp+790,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out),27);
    bufp->fullSData(oldp+791,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp),10);
    bufp->fullSData(oldp+792,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm),10);
    bufp->fullQData(oldp+793,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp),48);
    bufp->fullCData(oldp+795,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted),8);
    bufp->fullIData(oldp+796,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum),25);
    bufp->fullIData(oldp+797,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in),27);
    bufp->fullCData(oldp+798,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized),8);
    bufp->fullIData(oldp+799,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized),24);
    bufp->fullIData(oldp+800,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out),27);
    bufp->fullCData(oldp+801,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero),5);
    bufp->fullIData(oldp+802,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp),26);
    bufp->fullQData(oldp+803,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp),50);
    bufp->fullIData(oldp+805,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized),24);
    bufp->fullCData(oldp+806,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized),8);
    bufp->fullIData(oldp+807,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__flags),27);
    bufp->fullIData(oldp+808,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final),23);
    bufp->fullCData(oldp+809,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final),8);
    bufp->fullBit(oldp+810,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up));
    bufp->fullIData(oldp+811,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp),25);
    bufp->fullCData(oldp+812,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a),8);
    bufp->fullCData(oldp+813,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b),8);
    bufp->fullIData(oldp+814,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a),24);
    bufp->fullIData(oldp+815,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b),24);
    bufp->fullCData(oldp+816,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted),8);
    bufp->fullIData(oldp+817,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+818,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+819,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__flags),27);
    bufp->fullBit(oldp+820,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted));
    bufp->fullIData(oldp+821,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext),26);
    bufp->fullIData(oldp+822,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__sticky_mask),24);
    bufp->fullCData(oldp+823,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta),8);
    bufp->fullIData(oldp+824,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted),26);
    bufp->fullIData(oldp+825,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a),32);
    bufp->fullIData(oldp+826,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b),32);
    bufp->fullCData(oldp+827,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op),4);
    bufp->fullBit(oldp+828,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a));
    bufp->fullBit(oldp+829,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b));
    bufp->fullCData(oldp+830,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a),8);
    bufp->fullCData(oldp+831,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b),8);
    bufp->fullIData(oldp+832,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a),24);
    bufp->fullIData(oldp+833,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b),24);
    bufp->fullIData(oldp+834,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out),32);
    bufp->fullBit(oldp+835,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld));
    bufp->fullIData(oldp+836,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a),32);
    bufp->fullIData(oldp+837,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b),32);
    bufp->fullBit(oldp+838,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero));
    bufp->fullBit(oldp+839,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero));
    bufp->fullBit(oldp+840,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a));
    bufp->fullBit(oldp+841,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b));
    bufp->fullBit(oldp+842,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a));
    bufp->fullBit(oldp+843,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b));
    bufp->fullBit(oldp+844,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a));
    bufp->fullBit(oldp+845,(vlSymsp->TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b));
    bufp->fullIData(oldp+846,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.op_a),32);
    bufp->fullIData(oldp+847,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.op_b),32);
    bufp->fullCData(oldp+848,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.alu_op),4);
    bufp->fullCData(oldp+849,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.fpu_op),4);
    bufp->fullBit(oldp+850,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.fu_sel));
    bufp->fullIData(oldp+851,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.result),32);
    bufp->fullIData(oldp+852,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.result_fpu),32);
    bufp->fullIData(oldp+853,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.result_alu),32);
    bufp->fullIData(oldp+854,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__op_a),32);
    bufp->fullIData(oldp+855,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__op_b),32);
    bufp->fullCData(oldp+856,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__alu_op),4);
    bufp->fullIData(oldp+857,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__result),32);
    bufp->fullIData(oldp+858,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__addsub_result),32);
    bufp->fullIData(oldp+859,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__compare_result),32);
    bufp->fullIData(oldp+860,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__shift_result),32);
    bufp->fullIData(oldp+861,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__logic_result),32);
    bufp->fullIData(oldp+862,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__mul_result),32);
    bufp->fullBit(oldp+863,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__sub));
    bufp->fullCData(oldp+864,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__cmp_op),2);
    bufp->fullCData(oldp+865,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__logic_op),2);
    bufp->fullCData(oldp+866,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__shift_op),2);
    bufp->fullIData(oldp+867,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__a),32);
    bufp->fullIData(oldp+868,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__b),32);
    bufp->fullBit(oldp+869,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__sub));
    bufp->fullIData(oldp+870,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__result),32);
    bufp->fullIData(oldp+871,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_addsub_module__DOT__b_buf),32);
    bufp->fullIData(oldp+872,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__op_a),32);
    bufp->fullIData(oldp+873,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__op_b),32);
    bufp->fullCData(oldp+874,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__alu_op),4);
    bufp->fullIData(oldp+875,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__mul_res),32);
    bufp->fullQData(oldp+876,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_ss),64);
    bufp->fullQData(oldp+878,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_su),64);
    bufp->fullQData(oldp+880,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_alu_mul__DOT__multi_uu),64);
    bufp->fullIData(oldp+882,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__a),32);
    bufp->fullIData(oldp+883,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__b),32);
    bufp->fullCData(oldp+884,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__cmp_op),2);
    bufp->fullIData(oldp+885,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_compare_module__DOT__result),32);
    bufp->fullIData(oldp+886,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__a),32);
    bufp->fullIData(oldp+887,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__b),32);
    bufp->fullCData(oldp+888,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__logic_op),2);
    bufp->fullIData(oldp+889,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_logic_module__DOT__result),32);
    bufp->fullIData(oldp+890,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__a),32);
    bufp->fullIData(oldp+891,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__b),32);
    bufp->fullCData(oldp+892,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__shift_op),2);
    bufp->fullIData(oldp+893,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__result),32);
    bufp->fullCData(oldp+894,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_alu_top__DOT__u_shift_module__DOT__shift_range),5);
    bufp->fullIData(oldp+895,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__operand_a),32);
    bufp->fullIData(oldp+896,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__operand_b),32);
    bufp->fullCData(oldp+897,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__fpu_op),4);
    bufp->fullIData(oldp+898,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__fpu_result),32);
    bufp->fullIData(oldp+899,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__add_sub_result),32);
    bufp->fullIData(oldp+900,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_result),32);
    bufp->fullIData(oldp+901,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_result),32);
    bufp->fullIData(oldp+902,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mul_result),32);
    bufp->fullBit(oldp+903,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__add_op));
    bufp->fullBit(oldp+904,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_op));
    bufp->fullCData(oldp+905,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_op),2);
    bufp->fullBit(oldp+906,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_a));
    bufp->fullBit(oldp+907,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_b));
    bufp->fullCData(oldp+908,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_a),8);
    bufp->fullCData(oldp+909,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_b),8);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_a),24);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_b),24);
    bufp->fullIData(oldp+912,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__spec_out),32);
    bufp->fullBit(oldp+913,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__spec_vld));
    bufp->fullIData(oldp+914,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__flushed_operand_a),32);
    bufp->fullIData(oldp+915,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__flushed_operand_b),32);
    bufp->fullCData(oldp+916,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_addsub),8);
    bufp->fullIData(oldp+917,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+918,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+919,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_shifter),27);
    bufp->fullBit(oldp+920,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__shifted));
    bufp->fullIData(oldp+921,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_addsub),25);
    bufp->fullBit(oldp+922,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_result_addsub));
    bufp->fullIData(oldp+923,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_addsub),27);
    bufp->fullCData(oldp+924,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_add_norm),8);
    bufp->fullIData(oldp+925,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_add_norm),24);
    bufp->fullIData(oldp+926,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_sum),25);
    bufp->fullBit(oldp+927,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_result));
    bufp->fullBit(oldp+928,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__cmp_res));
    bufp->fullBit(oldp+929,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__sign_res_mul));
    bufp->fullIData(oldp+930,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_mul),24);
    bufp->fullCData(oldp+931,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_res_mul),8);
    bufp->fullIData(oldp+932,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_mul),27);
    bufp->fullIData(oldp+933,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__flag_rounding),27);
    bufp->fullIData(oldp+934,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__cvt_res),32);
    bufp->fullCData(oldp+935,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_normalized),8);
    bufp->fullIData(oldp+936,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_normalized),24);
    bufp->fullIData(oldp+937,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__flags_out_norm),27);
    bufp->fullIData(oldp+938,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__mant_final),23);
    bufp->fullCData(oldp+939,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__exp_final),8);
    bufp->fullBit(oldp+940,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__add_op));
    bufp->fullBit(oldp+941,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_a));
    bufp->fullBit(oldp+942,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b));
    bufp->fullIData(oldp+943,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+944,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+945,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_in),27);
    bufp->fullBit(oldp+946,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__shifted));
    bufp->fullIData(oldp+947,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_sum),25);
    bufp->fullBit(oldp+948,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_result));
    bufp->fullIData(oldp+949,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__flags_out),27);
    bufp->fullQData(oldp+950,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__mant_temp),50);
    bufp->fullBit(oldp+952,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_add_sub__DOT__sign_b_eff));
    bufp->fullBit(oldp+953,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_op));
    bufp->fullBit(oldp+954,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_a));
    bufp->fullBit(oldp+955,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__sign_b));
    bufp->fullIData(oldp+956,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__flags_in),27);
    bufp->fullIData(oldp+957,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+958,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__mant_b_shifted),24);
    bufp->fullBit(oldp+959,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__shifted));
    bufp->fullBit(oldp+960,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_res));
    bufp->fullBit(oldp+961,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cmp__DOT__cmp_tmp));
    bufp->fullCData(oldp+962,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__cvt_op),2);
    bufp->fullBit(oldp+963,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__sign));
    bufp->fullCData(oldp+964,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp),8);
    bufp->fullIData(oldp+965,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant),24);
    bufp->fullIData(oldp+966,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__op_a),32);
    bufp->fullIData(oldp+967,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__result),32);
    bufp->fullCData(oldp+968,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_true),8);
    bufp->fullIData(oldp+969,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_shft),32);
    bufp->fullIData(oldp+970,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_tmp),32);
    bufp->fullIData(oldp+971,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__res_tmp),32);
    bufp->fullIData(oldp+972,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__op_vec),32);
    bufp->fullCData(oldp+973,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_amt),6);
    bufp->fullCData(oldp+974,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft),6);
    bufp->fullIData(oldp+975,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__shft_tmp),32);
    bufp->fullCData(oldp+976,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__exp_cvt),8);
    bufp->fullIData(oldp+977,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__mant_cvt),23);
    bufp->fullBit(oldp+978,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_cvt__DOT__sign_cvt));
    bufp->fullBit(oldp+979,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_a));
    bufp->fullBit(oldp+980,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_b));
    bufp->fullCData(oldp+981,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_a),8);
    bufp->fullCData(oldp+982,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_b),8);
    bufp->fullIData(oldp+983,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_a),24);
    bufp->fullIData(oldp+984,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_b),24);
    bufp->fullBit(oldp+985,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__sign_res));
    bufp->fullIData(oldp+986,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_mul),24);
    bufp->fullCData(oldp+987,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_res),8);
    bufp->fullIData(oldp+988,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__flags_out),27);
    bufp->fullSData(oldp+989,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_tmp),10);
    bufp->fullSData(oldp+990,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__exp_norm),10);
    bufp->fullQData(oldp+991,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_mul__DOT__mant_tmp),48);
    bufp->fullCData(oldp+993,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_shifted),8);
    bufp->fullIData(oldp+994,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_sum),25);
    bufp->fullIData(oldp+995,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_in),27);
    bufp->fullCData(oldp+996,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__exp_normalized),8);
    bufp->fullIData(oldp+997,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_normalized),24);
    bufp->fullIData(oldp+998,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_out),27);
    bufp->fullCData(oldp+999,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__lead_zero),5);
    bufp->fullIData(oldp+1000,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__flags_temp),26);
    bufp->fullQData(oldp+1001,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_normalize__DOT__mant_temp),50);
    bufp->fullIData(oldp+1003,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_normalized),24);
    bufp->fullCData(oldp+1004,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_normalized),8);
    bufp->fullIData(oldp+1005,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__flags),27);
    bufp->fullIData(oldp+1006,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_final),23);
    bufp->fullCData(oldp+1007,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__exp_final),8);
    bufp->fullBit(oldp+1008,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__round_up));
    bufp->fullIData(oldp+1009,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_rounding__DOT__mant_temp),25);
    bufp->fullCData(oldp+1010,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_a),8);
    bufp->fullCData(oldp+1011,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_b),8);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a),24);
    bufp->fullIData(oldp+1013,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b),24);
    bufp->fullCData(oldp+1014,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_shifted),8);
    bufp->fullIData(oldp+1015,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_a_shifted),24);
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_b_shifted),24);
    bufp->fullIData(oldp+1017,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__flags),27);
    bufp->fullBit(oldp+1018,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__shifted));
    bufp->fullIData(oldp+1019,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_ext),26);
    bufp->fullIData(oldp+1020,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__sticky_mask),24);
    bufp->fullCData(oldp+1021,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__exp_delta),8);
    bufp->fullIData(oldp+1022,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_shifter__DOT__mant_shifted),26);
    bufp->fullIData(oldp+1023,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_a),32);
    bufp->fullIData(oldp+1024,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__operand_b),32);
    bufp->fullCData(oldp+1025,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__fpu_op),4);
    bufp->fullBit(oldp+1026,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_a));
    bufp->fullBit(oldp+1027,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__sign_b));
    bufp->fullCData(oldp+1028,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_a),8);
    bufp->fullCData(oldp+1029,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__exp_b),8);
    bufp->fullIData(oldp+1030,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a),24);
    bufp->fullIData(oldp+1031,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b),24);
    bufp->fullIData(oldp+1032,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_out),32);
    bufp->fullBit(oldp+1033,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__spec_vld));
    bufp->fullIData(oldp+1034,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_a),32);
    bufp->fullIData(oldp+1035,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__flushed_operand_b),32);
    bufp->fullBit(oldp+1036,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_a_zero));
    bufp->fullBit(oldp+1037,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__mant_b_zero));
    bufp->fullBit(oldp+1038,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_a));
    bufp->fullBit(oldp+1039,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_nan_b));
    bufp->fullBit(oldp+1040,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_a));
    bufp->fullBit(oldp+1041,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_inf_b));
    bufp->fullBit(oldp+1042,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_a));
    bufp->fullBit(oldp+1043,(vlSymsp->TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top.u_fpu_top__DOT__u_fpu_unpack__DOT__is_zero_b));
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____1(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____2(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____3(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->fullIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->fullIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->fullIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->fullIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->fullIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->fullIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->fullIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->fullIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->fullIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->fullIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->fullIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->fullIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->fullIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->fullIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->fullIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->fullIData(oldp+31,(__VdtypeVar[31]),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____4(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____5(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*35:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullQData(oldp+0,(__VdtypeVar[0U]),36);
    bufp->fullQData(oldp+2,(__VdtypeVar[1U]),36);
    bufp->fullQData(oldp+4,(__VdtypeVar[2U]),36);
    bufp->fullQData(oldp+6,(__VdtypeVar[3U]),36);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____6(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*4:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0U]),5);
    bufp->fullCData(oldp+1,(__VdtypeVar[1U]),5);
    bufp->fullCData(oldp+2,(__VdtypeVar[2U]),5);
    bufp->fullCData(oldp+3,(__VdtypeVar[3U]),5);
}
