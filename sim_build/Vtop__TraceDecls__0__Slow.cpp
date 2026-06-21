// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations

#include "verilated_fst_c.h"


void Vtop___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"PC_4", "PC_IMM", "PC_FU"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "exec_pkg::pc_src_e", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FU_ALU", "FU_FPU"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "exec_pkg::fu_sel_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"INT_ADD", "INT_SUB", "INT_MUL", "INT_MULH", 
                                "INT_MULHSU", "INT_MULHU", 
                                "INT_AND", "INT_OR", 
                                "INT_XOR", "INT_SLL", 
                                "INT_SRL", "INT_SRA", 
                                "INT_SLT", "INT_SLTU"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101"};
        tracep->declDTypeEnum(3, "exec_pkg::int_alu_op_e", 14, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"FPU_ADD", "FPU_SUB", "FPU_MUL", "FPU_MIN", 
                                "FPU_MAX", "FPU_CVT_F2I_S", 
                                "FPU_CVT_F2I_U", "FPU_CVT_I2F_S", 
                                "FPU_CVT_I2F_U"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(4, "exec_pkg::fpu_op_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SRC_REG_A", "SRC_PC"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(5, "exec_pkg::exec_src_a_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"SRC_REG_B", "SRC_IMM"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(6, "exec_pkg::exec_src_b_e", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"RES_FU", "RES_MEM", "RES_IMM", "RES_PC4"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(7, "exec_pkg::res_src_e", 4, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vtop___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtop___024root__traceDeclTypesSub0(tracep);
}
