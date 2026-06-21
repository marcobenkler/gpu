// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_fu_top.h"
#include "Vtop_gpu_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_fu_top                    TOP__gpu__DOT__lane__BRA__0__KET____DOT__u_fu_top;
    Vtop_fu_top                    TOP__gpu__DOT__lane__BRA__1__KET____DOT__u_fu_top;
    Vtop_fu_top                    TOP__gpu__DOT__lane__BRA__2__KET____DOT__u_fu_top;
    Vtop_fu_top                    TOP__gpu__DOT__lane__BRA__3__KET____DOT__u_fu_top;
    Vtop_gpu_pkg                   TOP__gpu_pkg;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_gpu;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET__;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_alu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_alu_top__u_addsub_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_alu_top__u_alu_mul;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_alu_top__u_compare_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_alu_top__u_logic_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_alu_top__u_shift_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_fpu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_fpu_top__u_fpu_add_sub;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_fpu_top__u_fpu_cmp;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_fpu_top__u_fpu_cvt;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_fpu_top__u_fpu_mul;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_fpu_top__u_fpu_normalize;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_fpu_top__u_fpu_rounding;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_fpu_top__u_fpu_shifter;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_fu_top__u_fpu_top__u_fpu_unpack;
    VerilatedScope* __Vscopep_gpu__lane__BRA__0__KET____u_op_sel;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET__;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_alu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_alu_top__u_addsub_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_alu_top__u_alu_mul;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_alu_top__u_compare_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_alu_top__u_logic_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_alu_top__u_shift_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_fpu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_fpu_top__u_fpu_add_sub;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_fpu_top__u_fpu_cmp;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_fpu_top__u_fpu_cvt;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_fpu_top__u_fpu_mul;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_fpu_top__u_fpu_normalize;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_fpu_top__u_fpu_rounding;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_fpu_top__u_fpu_shifter;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_fu_top__u_fpu_top__u_fpu_unpack;
    VerilatedScope* __Vscopep_gpu__lane__BRA__1__KET____u_op_sel;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET__;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_alu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_alu_top__u_addsub_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_alu_top__u_alu_mul;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_alu_top__u_compare_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_alu_top__u_logic_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_alu_top__u_shift_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_fpu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_fpu_top__u_fpu_add_sub;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_fpu_top__u_fpu_cmp;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_fpu_top__u_fpu_cvt;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_fpu_top__u_fpu_mul;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_fpu_top__u_fpu_normalize;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_fpu_top__u_fpu_rounding;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_fpu_top__u_fpu_shifter;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_fu_top__u_fpu_top__u_fpu_unpack;
    VerilatedScope* __Vscopep_gpu__lane__BRA__2__KET____u_op_sel;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET__;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_alu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_alu_top__u_addsub_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_alu_top__u_alu_mul;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_alu_top__u_compare_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_alu_top__u_logic_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_alu_top__u_shift_module;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_fpu_top;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_fpu_top__u_fpu_add_sub;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_fpu_top__u_fpu_cmp;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_fpu_top__u_fpu_cvt;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_fpu_top__u_fpu_mul;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_fpu_top__u_fpu_normalize;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_fpu_top__u_fpu_rounding;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_fpu_top__u_fpu_shifter;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_fu_top__u_fpu_top__u_fpu_unpack;
    VerilatedScope* __Vscopep_gpu__lane__BRA__3__KET____u_op_sel;
    VerilatedScope* __Vscopep_gpu__u_decoder;
    VerilatedScope* __Vscopep_gpu__u_gpr;
    VerilatedScope* __Vscopep_gpu__u_gpr__gpr_reg;
    VerilatedScope* __Vscopep_gpu__u_gpr__gpr_reg__unnamedblk1;
    VerilatedScope* __Vscopep_gpu__u_imm_gen;
    VerilatedScope* __Vscopep_gpu__u_instr_mem;
    VerilatedScope* __Vscopep_gpu__u_pc;
    VerilatedScope* __Vscopep_gpu__u_wb;
    VerilatedScope* __Vscopep_gpu__u_wb__unnamedblk1;
    VerilatedScope* __Vscopep_gpu__u_wctx;
    VerilatedScope* __Vscopep_gpu__u_wctx__unnamedblk1;
    VerilatedScope* __Vscopep_gpu__u_wctx__unnamedblk2;
    VerilatedScope* __Vscopep_gpu__u_wsched;
    VerilatedScope* __Vscopep_gpu__u_wsched__unnamedblk1;
    VerilatedScope* __Vscopep_gpu__u_wstate_ctrl;
    VerilatedScope* __Vscopep_gpu__u_wstate_ctrl__unnamedblk1;
    VerilatedScope* __Vscopep_gpu__u_wstate_ctrl__unnamedblk2;
    VerilatedScope* __Vscopep_gpu__u_wstate_ctrl__unnamedblk3;
    VerilatedScope* __Vscopep_gpu_pkg;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
