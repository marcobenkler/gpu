// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations

#include "verilated_fst_c.h"


void Vtb_sfu_sign_expo___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"SFU_RCP", "SFU_RSQRT", "SFU_LG2", "SFU_EX2", 
                                "SFU_SIN", "SFU_COS"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(1, "sfu_pkg::sfu_op_t", 6, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb_sfu_sign_expo___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb_sfu_sign_expo___024root__traceDeclTypesSub0(tracep);
}
