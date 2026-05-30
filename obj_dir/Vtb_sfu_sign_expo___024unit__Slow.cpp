// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_sfu_sign_expo.h for the primary calling header

#include "Vtb_sfu_sign_expo__pch.h"
VlUnpacked<std::string, 8> Vtb_sfu_sign_expo___024unit::__Venumtab_enum_name15;

void Vtb_sfu_sign_expo___024unit___ctor_var_reset(Vtb_sfu_sign_expo___024unit* vlSelf);

Vtb_sfu_sign_expo___024unit::Vtb_sfu_sign_expo___024unit() = default;
Vtb_sfu_sign_expo___024unit::~Vtb_sfu_sign_expo___024unit() = default;

void Vtb_sfu_sign_expo___024unit::ctor(Vtb_sfu_sign_expo__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_sfu_sign_expo___024unit___ctor_var_reset(this);
}

void Vtb_sfu_sign_expo___024unit___configure_coverage(Vtb_sfu_sign_expo___024unit* vlSelf, bool first);

void Vtb_sfu_sign_expo___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtb_sfu_sign_expo___024unit___configure_coverage(this, first);
}

void Vtb_sfu_sign_expo___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

// Coverage
void Vtb_sfu_sign_expo___024unit::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp,
    const char* fsmVarp, const char* fsmFromp, const char* fsmTop, const char* fsmTagp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{vlNamep} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), vlNamep, count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier.c_str(),  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp,  (fsmVarp[0] ? "fsm_var" : ""), fsmVarp,  (fsmFromp[0] ? "fsm_from" : ""), fsmFromp,  (fsmTop[0] ? "fsm_to" : ""), fsmTop,  (fsmTagp[0] ? "fsm_tag" : ""), fsmTagp);
}

// Toggle Coverage
void Vtb_sfu_sign_expo___024unit::__vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    int step = (end >= begin) ? 1 : -1;
    for (int i = begin; i != end + step; i += step) {
        for (int j = 0; j < 2; j++) {
            uint32_t* count32p = countp;
            static uint32_t fake_zero_count = 0;
            std::string fullhier = std::string{vlNamep} + hierp;
            if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
            std::string commentWithIndex = commentp;
            if (ranged) commentWithIndex += '[' + std::to_string(i) + ']';
            commentWithIndex += j ? ":0->1" : ":1->0";
            if (!enable) count32p = &fake_zero_count;
            *count32p = 0;
            VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), vlNamep, count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
                "hier",fullhier.c_str(),  "page",pagep,  "comment",commentWithIndex.c_str(),  "", "");
            ++countp;
        }
    }
}
