// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop__Syms.h"
#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__5(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__5\n"); );
    // Body
    vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i 
        = ((IData)(vlSelf->io_Isposit) ? ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                             ? (vlSymsp->TOP__PvuTop__DOT__decode2.io_Exp 
                                                >> 0x18U)
                                             : 0U) 
                                           << 0x18U) 
                                          | ((((2U 
                                                < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                ? (0xffU 
                                                   & (vlSymsp->TOP__PvuTop__DOT__decode2.io_Exp 
                                                      >> 0x10U))
                                                : 0U) 
                                              << 0x10U) 
                                             | ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__PvuTop__DOT__decode2.io_Exp 
                                                      >> 8U))
                                                   : 0U) 
                                                 << 8U) 
                                                | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                    ? 
                                                   (0xffU 
                                                    & vlSymsp->TOP__PvuTop__DOT__decode2.io_Exp)
                                                    : 0U))))
            : ((((IData)(vlSelf->PvuTop__DOT___GEN_36)
                  ? 0U : ((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))
                           ? 0x82U : ((0xffU == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0))
                                       ? 0U : (0xffU 
                                               & ((IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8aa26e89__0) 
                                                  - (IData)(0x7fU)))))) 
                << 0x18U) | ((((IData)(vlSelf->PvuTop__DOT___GEN_28)
                                ? 0U : ((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))
                                         ? 0x82U : 
                                        ((0xffU == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0))
                                          ? 0U : (0xffU 
                                                  & ((IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a58f023__0) 
                                                     - (IData)(0x7fU)))))) 
                              << 0x10U) | ((((IData)(vlSelf->PvuTop__DOT___GEN_20)
                                              ? 0U : 
                                             ((0U == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))
                                               ? 0x82U
                                               : ((0xffU 
                                                   == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h89ab41bc__0) 
                                                      - (IData)(0x7fU)))))) 
                                            << 8U) 
                                           | ((IData)(vlSelf->PvuTop__DOT___GEN_12)
                                               ? 0U
                                               : ((0U 
                                                   == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))
                                                   ? 0x82U
                                                   : 
                                                  ((0xffU 
                                                    == (IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0))
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8929cb16__0) 
                                                       - (IData)(0x7fU))))))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__6(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__6\n"); );
    // Body
    if (vlSelf->io_Isposit) {
        vlSelf->PvuTop__DOT____VdfgTmp_h1b581970__0 
            = (QData)((IData)((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__decode2.io_Frac[3U] 
                                              << 0xcU) 
                                             | (vlSymsp->TOP__PvuTop__DOT__decode2.io_Frac[2U] 
                                                >> 0x14U)))));
        vlSelf->PvuTop__DOT____VdfgTmp_hf3890887__0 
            = (QData)((IData)((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__decode2.io_Frac[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__PvuTop__DOT__decode2.io_Frac[1U] 
                                                >> 0x18U)))));
        vlSelf->PvuTop__DOT____VdfgTmp_h4a52317c__0 
            = (QData)((IData)((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__decode2.io_Frac[1U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__PvuTop__DOT__decode2.io_Frac[0U] 
                                                >> 0x1cU)))));
        vlSelf->PvuTop__DOT____VdfgTmp_h0b0f880c__0 
            = (QData)((IData)((0xfffffffU & vlSymsp->TOP__PvuTop__DOT__decode2.io_Frac[0U])));
    } else {
        vlSelf->PvuTop__DOT____VdfgTmp_h1b581970__0 
            = (QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_36)
                                ? 0U : vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8a383c23__0)));
        vlSelf->PvuTop__DOT____VdfgTmp_hf3890887__0 
            = (QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_28)
                                ? 0U : vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h898ddcf9__0)));
        vlSelf->PvuTop__DOT____VdfgTmp_h4a52317c__0 
            = (QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_20)
                                ? 0U : vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h8933512e__0)));
        vlSelf->PvuTop__DOT____VdfgTmp_h0b0f880c__0 
            = (QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_12)
                                ? 0U : vlSelf->PvuTop__DOT__floatDecode2__DOT____VdfgTmp_h88bc2594__0)));
    }
    if (vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0 
            = vlSelf->PvuTop__DOT____VdfgTmp_h1b581970__0;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b 
            = (0xfffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h1b581970__0));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0 = 0ULL;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b = 0U;
    }
    if ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0 
            = vlSelf->PvuTop__DOT____VdfgTmp_hf3890887__0;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b 
            = (0xfffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_hf3890887__0));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0 = 0ULL;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b = 0U;
    }
    if (vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0 
            = vlSelf->PvuTop__DOT____VdfgTmp_h4a52317c__0;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b 
            = (0xfffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h4a52317c__0));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0 = 0ULL;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b = 0U;
    }
    if (vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0 
            = vlSelf->PvuTop__DOT____VdfgTmp_h0b0f880c__0;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b 
            = (0xfffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h0b0f880c__0));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0 = 0ULL;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b = 0U;
    }
    vlSelf->PvuTop__DOT__greater__DOT__is_zero2_3 = 
        ((0x80000000U != vlSelf->io_posit_i2_3) & (0ULL 
                                                   == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0));
    vlSelf->PvuTop__DOT__greater__DOT__is_zero2_2 = 
        ((0x80000000U != vlSelf->io_posit_i2_2) & (0ULL 
                                                   == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0));
    vlSelf->PvuTop__DOT__greater__DOT__is_zero2_1 = 
        ((0x80000000U != vlSelf->io_posit_i2_1) & (0ULL 
                                                   == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0));
    vlSelf->PvuTop__DOT__greater__DOT__is_zero2 = (
                                                   (0x80000000U 
                                                    != vlSelf->io_posit_i2_0) 
                                                   & (0ULL 
                                                      == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__7(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__7\n"); );
    // Init
    CData/*7:0*/ PvuTop__DOT___GEN_5;
    PvuTop__DOT___GEN_5 = 0;
    CData/*7:0*/ PvuTop__DOT___GEN_7;
    PvuTop__DOT___GEN_7 = 0;
    CData/*7:0*/ PvuTop__DOT___GEN_9;
    PvuTop__DOT___GEN_9 = 0;
    CData/*7:0*/ PvuTop__DOT___GEN_11;
    PvuTop__DOT___GEN_11 = 0;
    // Body
    PvuTop__DOT___GEN_11 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                             ? (vlSymsp->TOP__PvuTop__DOT__decode1.io_Exp 
                                >> 0x18U) : 0U);
    vlSelf->__VdfgTmp_h1adcbe2e__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (IData)(PvuTop__DOT___GEN_11)
                                       : (IData)(vlSelf->PvuTop__DOT___GEN_42));
    vlSelf->__VdfgTmp_h798f78b9__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                       ? (IData)(vlSelf->__VdfgTmp_h1adcbe2e__0)
                                       : 0U);
    PvuTop__DOT___GEN_5 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                            ? (0xffU & vlSymsp->TOP__PvuTop__DOT__decode1.io_Exp)
                            : 0U);
    vlSelf->__VdfgTmp_hc02f9133__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (IData)(PvuTop__DOT___GEN_5)
                                       : (IData)(vlSelf->PvuTop__DOT___GEN_17));
    vlSelf->__VdfgTmp_h28585180__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                       ? (IData)(vlSelf->__VdfgTmp_hc02f9133__0)
                                       : 0U);
    PvuTop__DOT___GEN_7 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                            ? (0xffU & (vlSymsp->TOP__PvuTop__DOT__decode1.io_Exp 
                                        >> 8U)) : 0U);
    vlSelf->__VdfgTmp_hab03c7d6__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (IData)(PvuTop__DOT___GEN_7)
                                       : (IData)(vlSelf->PvuTop__DOT___GEN_25));
    vlSelf->__VdfgTmp_hda0d4db2__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                       ? (IData)(vlSelf->__VdfgTmp_hab03c7d6__0)
                                       : 0U);
    PvuTop__DOT___GEN_9 = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                            ? (0xffU & (vlSymsp->TOP__PvuTop__DOT__decode1.io_Exp 
                                        >> 0x10U)) : 0U);
    vlSelf->__VdfgTmp_h013556c5__0 = ((IData)(vlSelf->io_Isposit)
                                       ? (IData)(PvuTop__DOT___GEN_9)
                                       : (IData)(vlSelf->PvuTop__DOT___GEN_33));
    vlSelf->__VdfgTmp_hacc2eacc__0 = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                       ? (IData)(vlSelf->__VdfgTmp_h013556c5__0)
                                       : 0U);
    vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
        = ((IData)(vlSelf->io_Isposit) ? (((IData)(PvuTop__DOT___GEN_11) 
                                           << 0x18U) 
                                          | (((IData)(PvuTop__DOT___GEN_9) 
                                              << 0x10U) 
                                             | (((IData)(PvuTop__DOT___GEN_7) 
                                                 << 8U) 
                                                | (IData)(PvuTop__DOT___GEN_5))))
            : (((IData)(vlSelf->PvuTop__DOT___GEN_42) 
                << 0x18U) | (((IData)(vlSelf->PvuTop__DOT___GEN_33) 
                              << 0x10U) | (((IData)(vlSelf->PvuTop__DOT___GEN_25) 
                                            << 8U) 
                                           | (IData)(vlSelf->PvuTop__DOT___GEN_17)))));
    vlSelf->__VdfgTmp_hc98d8ba6__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                      & ((IData)(vlSelf->__VdfgTmp_h1adcbe2e__0) 
                                         >> 7U));
    vlSelf->__VdfgTmp_h5b9a6abb__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                      & ((IData)(vlSelf->__VdfgTmp_hc02f9133__0) 
                                         >> 7U));
    vlSelf->__VdfgTmp_hf81c5ee3__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                      & ((IData)(vlSelf->__VdfgTmp_hab03c7d6__0) 
                                         >> 7U));
    vlSelf->__VdfgTmp_h1d5e1b94__0 = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                      & ((IData)(vlSelf->__VdfgTmp_h013556c5__0) 
                                         >> 7U));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i)))
            ? (0x3fU & ((IData)(0x1eU) - vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i))
            : 0U);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hf936d8b2__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i))) 
                 & (((IData)(0x1eU) - vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i) 
                    >> 5U)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_1 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                             >> 8U))))
            ? (0x3fU & ((IData)(0x1eU) - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                          >> 8U))) : 0U);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hd092db84__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                   >> 8U)))) 
                 & (((IData)(0x1eU) - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                       >> 8U)) >> 5U)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_2 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                             >> 0x10U))))
            ? (0x3fU & ((IData)(0x1eU) - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                          >> 0x10U)))
            : 0U);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h75cc7c16__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                   >> 0x10U)))) 
                 & (((IData)(0x1eU) - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                       >> 0x10U)) >> 5U)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__shiftVal_3 
        = (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                          - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                             >> 0x18U))))
            ? (0x3fU & ((IData)(0x1eU) - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                          >> 0x18U)))
            : 0U);
    vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hebc2a567__0 
        = (7U & (VL_LTS_III(8, 0xffU, (0xffU & ((IData)(0x1eU) 
                                                - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                                   >> 0x18U)))) 
                 & (((IData)(0x1eU) - (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                       >> 0x18U)) >> 5U)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__8(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__8\n"); );
    // Init
    IData/*26:0*/ __VdfgTmp_h48131351__0;
    __VdfgTmp_h48131351__0 = 0;
    IData/*26:0*/ __VdfgTmp_hcb051756__0;
    __VdfgTmp_hcb051756__0 = 0;
    IData/*26:0*/ __VdfgTmp_h474faa01__0;
    __VdfgTmp_h474faa01__0 = 0;
    IData/*26:0*/ __VdfgTmp_h427b4839__0;
    __VdfgTmp_h427b4839__0 = 0;
    CData/*0:0*/ __VdfgTmp_h3bbc7875__0;
    __VdfgTmp_h3bbc7875__0 = 0;
    CData/*0:0*/ __VdfgTmp_h3cf55b03__0;
    __VdfgTmp_h3cf55b03__0 = 0;
    CData/*0:0*/ __VdfgTmp_he4fac16c__0;
    __VdfgTmp_he4fac16c__0 = 0;
    CData/*0:0*/ __VdfgTmp_he0581cd5__0;
    __VdfgTmp_he0581cd5__0 = 0;
    // Body
    if (vlSelf->io_Isposit) {
        vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0 
            = (QData)((IData)((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__decode1.io_Frac[3U] 
                                              << 0xcU) 
                                             | (vlSymsp->TOP__PvuTop__DOT__decode1.io_Frac[2U] 
                                                >> 0x14U)))));
        vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0 
            = (QData)((IData)((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__decode1.io_Frac[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__PvuTop__DOT__decode1.io_Frac[1U] 
                                                >> 0x18U)))));
        vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0 
            = (QData)((IData)((0xfffffffU & ((vlSymsp->TOP__PvuTop__DOT__decode1.io_Frac[1U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__PvuTop__DOT__decode1.io_Frac[0U] 
                                                >> 0x1cU)))));
        vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0 
            = (QData)((IData)((0xfffffffU & vlSymsp->TOP__PvuTop__DOT__decode1.io_Frac[0U])));
    } else {
        vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0 
            = (QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_36)
                                ? 0U : vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8a383c23__0)));
        vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0 
            = (QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_28)
                                ? 0U : vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h898ddcf9__0)));
        vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0 
            = (QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_20)
                                ? 0U : vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h8933512e__0)));
        vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0 
            = (QData)((IData)(((IData)(vlSelf->PvuTop__DOT___GEN_12)
                                ? 0U : vlSelf->PvuTop__DOT__floatDecode1__DOT____VdfgTmp_h88bc2594__0)));
    }
    vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_3 
        = (0xfU & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                     ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                         ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0 
                                    >> 0x18U)) : 0U)
                     : 0U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                              & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0 
                                          >> 0x18U)) 
                                 & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                    & (IData)((0ULL 
                                               != (0x2ffffffULL 
                                                   & vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0))))))));
    vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_3 
        = (0xfffU & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                       ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                           ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0 
                                      >> 0x10U)) : 0U)
                       : 0U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0 
                                            >> 0x10U)) 
                                   & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                      & (IData)((0ULL 
                                                 != 
                                                 (0x2ffffULL 
                                                  & vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0))))))));
    vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_3 
        = (0xfffffU & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                         ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                             ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0 
                                        >> 8U)) : 0U)
                         : 0U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                  & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0 
                                              >> 8U)) 
                                     & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                        & (IData)((0ULL 
                                                   != 
                                                   (0x802ffULL 
                                                    & vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0))))))));
    if (vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) {
        __VdfgTmp_h48131351__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                   ? (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0))
                                   : 0U);
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0 
            = vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a 
            = (0xfffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0));
        vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0 
            = vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a;
        vlSelf->__VdfgTmp_heb01027c__0 = (0U != (0xfffffffU 
                                                 & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_hc52b8dbf__0)));
    } else {
        __VdfgTmp_h48131351__0 = 0U;
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0 = 0ULL;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a = 0U;
        vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0 = 0U;
        vlSelf->__VdfgTmp_heb01027c__0 = 0U;
    }
    vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_2 
        = (0xfffU & (((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                       ? ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                           ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0 
                                      >> 0x10U)) : 0U)
                       : 0U) + ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0 
                                            >> 0x10U)) 
                                   & ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                      & (IData)((0ULL 
                                                 != 
                                                 (0x2ffffULL 
                                                  & vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0))))))));
    vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_2 
        = (0xfffffU & (((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                         ? ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                             ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0 
                                        >> 8U)) : 0U)
                         : 0U) + ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                  & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0 
                                              >> 8U)) 
                                     & ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                        & (IData)((0ULL 
                                                   != 
                                                   (0x802ffULL 
                                                    & vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0))))))));
    if ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))) {
        __VdfgTmp_hcb051756__0 = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                   ? (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0))
                                   : 0U);
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0 
            = vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a 
            = (0xfffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0));
        vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0 
            = vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a;
    } else {
        __VdfgTmp_hcb051756__0 = 0U;
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0 = 0ULL;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a = 0U;
        vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0 = 0U;
    }
    vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_2 
        = (0xfU & (((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                     ? ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                         ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0 
                                    >> 0x18U)) : 0U)
                     : 0U) + ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                              & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0 
                                          >> 0x18U)) 
                                 & ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                    & (IData)((0ULL 
                                               != (0x2ffffffULL 
                                                   & vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0))))))));
    vlSelf->__VdfgTmp_h1aaf6b7f__0 = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                      & (0U != (0xfffffffU 
                                                & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h20a4ccfd__0))));
    vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_1 
        = (0xfffU & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                       ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                           ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0 
                                      >> 0x10U)) : 0U)
                       : 0U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0 
                                            >> 0x10U)) 
                                   & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                      & (IData)((0ULL 
                                                 != 
                                                 (0x2ffffULL 
                                                  & vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0))))))));
    vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_1 
        = (0xfffffU & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                         ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                             ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0 
                                        >> 8U)) : 0U)
                         : 0U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                  & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0 
                                              >> 8U)) 
                                     & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                        & (IData)((0ULL 
                                                   != 
                                                   (0x802ffULL 
                                                    & vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0))))))));
    if (vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) {
        __VdfgTmp_h474faa01__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                   ? (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0))
                                   : 0U);
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0 
            = vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a 
            = (0xfffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0));
        vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0 
            = vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a;
    } else {
        __VdfgTmp_h474faa01__0 = 0U;
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0 = 0ULL;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a = 0U;
        vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0 = 0U;
    }
    vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_1 
        = (0xfU & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                     ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                         ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0 
                                    >> 0x18U)) : 0U)
                     : 0U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                              & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0 
                                          >> 0x18U)) 
                                 & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                    & (IData)((0ULL 
                                               != (0x2ffffffULL 
                                                   & vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0))))))));
    vlSelf->__VdfgTmp_h281bd980__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                      & (0U != (0xfffffffU 
                                                & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h1b512e34__0))));
    vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac 
        = (0xfffU & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                       ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                           ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0 
                                      >> 0x10U)) : 0U)
                       : 0U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0 
                                            >> 0x10U)) 
                                   & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                      & (IData)((0ULL 
                                                 != 
                                                 (0x2ffffULL 
                                                  & vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0))))))));
    vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac 
        = (0xfffffU & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                         ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                             ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0 
                                        >> 8U)) : 0U)
                         : 0U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                  & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0 
                                              >> 8U)) 
                                     & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                        & (IData)((0ULL 
                                                   != 
                                                   (0x802ffULL 
                                                    & vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0))))))));
    if (vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) {
        __VdfgTmp_h427b4839__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                   ? (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0))
                                   : 0U);
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0 
            = vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a 
            = (0xfffffffU & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0));
        vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0 
            = vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a;
    } else {
        __VdfgTmp_h427b4839__0 = 0U;
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0 = 0ULL;
        vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a = 0U;
        vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0 = 0U;
    }
    vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac 
        = (0xfU & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                     ? ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                         ? (IData)((vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0 
                                    >> 0x18U)) : 0U)
                     : 0U) + ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                              & ((IData)((vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0 
                                          >> 0x18U)) 
                                 & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                    & (IData)((0ULL 
                                               != (0x2ffffffULL 
                                                   & vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0))))))));
    vlSelf->__VdfgTmp_he2c4d402__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                      & (0U != (0xfffffffU 
                                                & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h8b489a1a__0))));
    __VdfgTmp_h3bbc7875__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                              & (IData)(vlSelf->__VdfgTmp_heb01027c__0));
    vlSelf->PvuTop__DOT__greater__DOT__is_zero1_3 = 
        ((0x80000000U != vlSelf->io_posit_i1_3) & (0ULL 
                                                   == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0));
    __VdfgTmp_h3cf55b03__0 = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                              & (IData)(vlSelf->__VdfgTmp_h1aaf6b7f__0));
    vlSelf->PvuTop__DOT__greater__DOT__is_zero1_2 = 
        ((0x80000000U != vlSelf->io_posit_i1_2) & (0ULL 
                                                   == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0));
    __VdfgTmp_he4fac16c__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                              & (IData)(vlSelf->__VdfgTmp_h281bd980__0));
    vlSelf->PvuTop__DOT__greater__DOT__is_zero1_1 = 
        ((0x80000000U != vlSelf->io_posit_i1_1) & (0ULL 
                                                   == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0));
    __VdfgTmp_he0581cd5__0 = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                              & (IData)(vlSelf->__VdfgTmp_he2c4d402__0));
    vlSelf->PvuTop__DOT__greater__DOT__is_zero1 = (
                                                   (0x80000000U 
                                                    != vlSelf->io_posit_i1_0) 
                                                   & (0ULL 
                                                      == vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0));
    vlSelf->__VdfgTmp_hcaf6f67e__0 = ((IData)(__VdfgTmp_h3bbc7875__0) 
                                      & (0U == (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_3)));
    vlSelf->__VdfgTmp_h3ff8bca2__0 = ((IData)(__VdfgTmp_h3bbc7875__0) 
                                      & (0U == (IData)(vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_3)));
    vlSelf->__VdfgTmp_haccc8abe__0 = ((IData)(__VdfgTmp_h3bbc7875__0) 
                                      & (0U == vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_3));
    if ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)) {
        vlSelf->__VdfgTmp_hcb91fd5c__0 = 0U;
        vlSelf->__VdfgTmp_h993f1e41__0 = 0ULL;
        vlSelf->__VdfgTmp_h02d7cec1__0 = 0ULL;
        vlSelf->__VdfgTmp_h17f08e87__0 = 0ULL;
        vlSelf->__VdfgTmp_ha55ccd73__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h9347f0fa__0 = 0U;
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h93197337__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h93bf770c__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h9049e073__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h90ebfe45__0 = 0ULL;
        vlSelf->__VdfgTmp_hc045d324__0 = 0U;
        vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91b408de__0 = 0U;
        vlSelf->__VdfgTmp_h96436379__0 = 0U;
        vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h960e95d4__0 = 0U;
        vlSelf->__VdfgTmp_hae4262d5__0 = 0U;
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96d0c790__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_hcb91fd5c__0 = vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0;
        vlSelf->__VdfgTmp_h993f1e41__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)) 
                                          << 8U);
        vlSelf->__VdfgTmp_h02d7cec1__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)) 
                                          << 0x10U);
        vlSelf->__VdfgTmp_h17f08e87__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)) 
                                          << 0x18U);
        vlSelf->__VdfgTmp_ha55ccd73__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)) 
                                          << 0x20U);
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h9347f0fa__0 
            = __VdfgTmp_h48131351__0;
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h93197337__0 
            = ((QData)((IData)(__VdfgTmp_h48131351__0)) 
               << 8U);
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h93bf770c__0 
            = ((QData)((IData)(__VdfgTmp_h48131351__0)) 
               << 0x10U);
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h9049e073__0 
            = ((QData)((IData)(__VdfgTmp_h48131351__0)) 
               << 0x18U);
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h90ebfe45__0 
            = ((QData)((IData)(__VdfgTmp_h48131351__0)) 
               << 0x20U);
        if (vlSelf->__VdfgTmp_hcaf6f67e__0) {
            vlSelf->__VdfgTmp_hc045d324__0 = 1U;
            vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91b408de__0 = 1U;
        } else {
            vlSelf->__VdfgTmp_hc045d324__0 = vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_3;
            vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91b408de__0 
                = (7U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_3));
        }
        if (vlSelf->__VdfgTmp_h3ff8bca2__0) {
            vlSelf->__VdfgTmp_h96436379__0 = 1U;
            vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h960e95d4__0 = 1U;
        } else {
            vlSelf->__VdfgTmp_h96436379__0 = vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_3;
            vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h960e95d4__0 
                = (0x7ffU & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_3));
        }
        if (vlSelf->__VdfgTmp_haccc8abe__0) {
            vlSelf->__VdfgTmp_hae4262d5__0 = 1U;
            vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96d0c790__0 = 1U;
        } else {
            vlSelf->__VdfgTmp_hae4262d5__0 = vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_3;
            vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96d0c790__0 
                = (0x7ffffU & vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_3);
        }
    }
    vlSelf->__VdfgTmp_h979bd11d__0 = ((IData)(__VdfgTmp_h3cf55b03__0) 
                                      & (0U == (IData)(vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_2)));
    vlSelf->__VdfgTmp_hedc01706__0 = ((IData)(__VdfgTmp_h3cf55b03__0) 
                                      & (0U == vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_2));
    vlSelf->__VdfgTmp_h6adeea81__0 = ((IData)(__VdfgTmp_h3cf55b03__0) 
                                      & (0U == (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_2)));
    if ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)) {
        vlSelf->__VdfgTmp_h5fe5af02__0 = 0U;
        vlSelf->__VdfgTmp_h5a3c8fc6__0 = 0ULL;
        vlSelf->__VdfgTmp_h02c83ba5__0 = 0ULL;
        vlSelf->__VdfgTmp_h1af56b93__0 = 0ULL;
        vlSelf->__VdfgTmp_h2fa307ab__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h96e1f5ff__0 = 0U;
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h92ae8ca8__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h937659f5__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h93292506__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h93e8e272__0 = 0ULL;
        vlSelf->__VdfgTmp_h81d13112__0 = 0U;
        vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h967f6972__0 = 0U;
        vlSelf->__VdfgTmp_h8f0709f5__0 = 0U;
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h963e3239__0 = 0U;
        vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h966b19bb__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_h5fe5af02__0 = vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0;
        vlSelf->__VdfgTmp_h5a3c8fc6__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)) 
                                          << 8U);
        vlSelf->__VdfgTmp_h02c83ba5__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)) 
                                          << 0x10U);
        vlSelf->__VdfgTmp_h1af56b93__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)) 
                                          << 0x18U);
        vlSelf->__VdfgTmp_h2fa307ab__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)) 
                                          << 0x20U);
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h96e1f5ff__0 
            = __VdfgTmp_hcb051756__0;
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h92ae8ca8__0 
            = ((QData)((IData)(__VdfgTmp_hcb051756__0)) 
               << 8U);
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h937659f5__0 
            = ((QData)((IData)(__VdfgTmp_hcb051756__0)) 
               << 0x10U);
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h93292506__0 
            = ((QData)((IData)(__VdfgTmp_hcb051756__0)) 
               << 0x18U);
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h93e8e272__0 
            = ((QData)((IData)(__VdfgTmp_hcb051756__0)) 
               << 0x20U);
        if (vlSelf->__VdfgTmp_h979bd11d__0) {
            vlSelf->__VdfgTmp_h81d13112__0 = 1U;
            vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h967f6972__0 = 1U;
        } else {
            vlSelf->__VdfgTmp_h81d13112__0 = vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_2;
            vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h967f6972__0 
                = (0x7ffU & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_2));
        }
        if (vlSelf->__VdfgTmp_hedc01706__0) {
            vlSelf->__VdfgTmp_h8f0709f5__0 = 1U;
            vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h963e3239__0 = 1U;
        } else {
            vlSelf->__VdfgTmp_h8f0709f5__0 = vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_2;
            vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h963e3239__0 
                = (0x7ffffU & vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_2);
        }
        vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h966b19bb__0 
            = ((IData)(vlSelf->__VdfgTmp_h6adeea81__0)
                ? 1U : (7U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_2)));
    }
    vlSelf->__VdfgTmp_h90c096ea__0 = ((IData)(__VdfgTmp_he4fac16c__0) 
                                      & (0U == (IData)(vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_1)));
    vlSelf->__VdfgTmp_hff4e111c__0 = ((IData)(__VdfgTmp_he4fac16c__0) 
                                      & (0U == vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_1));
    vlSelf->__VdfgTmp_heb2c469b__0 = ((IData)(__VdfgTmp_he4fac16c__0) 
                                      & (0U == (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_1)));
    if ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)) {
        vlSelf->__VdfgTmp_he37b1495__0 = 0U;
        vlSelf->__VdfgTmp_h95a8cfbd__0 = 0ULL;
        vlSelf->__VdfgTmp_h6a223de4__0 = 0ULL;
        vlSelf->__VdfgTmp_h1fec2fad__0 = 0ULL;
        vlSelf->__VdfgTmp_h31eb3eeb__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h962fac1b__0 = 0U;
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h960eafc6__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h96ee0a42__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h96f1aea5__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h96d11132__0 = 0ULL;
        vlSelf->__VdfgTmp_hca62b5d6__0 = 0U;
        vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h91b432c0__0 = 0U;
        vlSelf->__VdfgTmp_h7f01f14a__0 = 0U;
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96541997__0 = 0U;
        vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91952f50__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_he37b1495__0 = vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0;
        vlSelf->__VdfgTmp_h95a8cfbd__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)) 
                                          << 8U);
        vlSelf->__VdfgTmp_h6a223de4__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)) 
                                          << 0x10U);
        vlSelf->__VdfgTmp_h1fec2fad__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)) 
                                          << 0x18U);
        vlSelf->__VdfgTmp_h31eb3eeb__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)) 
                                          << 0x20U);
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h962fac1b__0 
            = __VdfgTmp_h474faa01__0;
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h960eafc6__0 
            = ((QData)((IData)(__VdfgTmp_h474faa01__0)) 
               << 8U);
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h96ee0a42__0 
            = ((QData)((IData)(__VdfgTmp_h474faa01__0)) 
               << 0x10U);
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h96f1aea5__0 
            = ((QData)((IData)(__VdfgTmp_h474faa01__0)) 
               << 0x18U);
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h96d11132__0 
            = ((QData)((IData)(__VdfgTmp_h474faa01__0)) 
               << 0x20U);
        if (vlSelf->__VdfgTmp_h90c096ea__0) {
            vlSelf->__VdfgTmp_hca62b5d6__0 = 1U;
            vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h91b432c0__0 = 1U;
        } else {
            vlSelf->__VdfgTmp_hca62b5d6__0 = vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_1;
            vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h91b432c0__0 
                = (0x7ffU & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac_1));
        }
        if (vlSelf->__VdfgTmp_hff4e111c__0) {
            vlSelf->__VdfgTmp_h7f01f14a__0 = 1U;
            vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96541997__0 = 1U;
        } else {
            vlSelf->__VdfgTmp_h7f01f14a__0 = vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_1;
            vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h96541997__0 
                = (0x7ffffU & vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac_1);
        }
        vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91952f50__0 
            = ((IData)(vlSelf->__VdfgTmp_heb2c469b__0)
                ? 1U : (7U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_1)));
    }
    vlSelf->__VdfgTmp_h3f45eb14__0 = ((IData)(__VdfgTmp_he0581cd5__0) 
                                      & (0U == (IData)(vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac)));
    vlSelf->__VdfgTmp_h81d0e9ec__0 = ((IData)(__VdfgTmp_he0581cd5__0) 
                                      & (0U == vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac));
    vlSelf->__VdfgTmp_h8c64243d__0 = ((IData)(__VdfgTmp_he0581cd5__0) 
                                      & (0U == (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac)));
    if ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)) {
        vlSelf->__VdfgTmp_h206c85da__0 = 0U;
        vlSelf->__VdfgTmp_heaad634b__0 = 0ULL;
        vlSelf->__VdfgTmp_h58d37c8c__0 = 0ULL;
        vlSelf->__VdfgTmp_hba1b9ba5__0 = 0ULL;
        vlSelf->__VdfgTmp_h483ce63c__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0 = 0U;
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h91c3a56d__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h91c3ab73__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h91c3a979__0 = 0ULL;
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h91c3ceaf__0 = 0ULL;
        vlSelf->__VdfgTmp_h6b6c5b42__0 = 0U;
        vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h91c3a32b__0 = 0U;
        vlSelf->__VdfgTmp_h7fb83447__0 = 0U;
        vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h91c3a121__0 = 0U;
        vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91c3bd35__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_h206c85da__0 = vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0;
        vlSelf->__VdfgTmp_heaad634b__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)) 
                                          << 8U);
        vlSelf->__VdfgTmp_h58d37c8c__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)) 
                                          << 0x10U);
        vlSelf->__VdfgTmp_hba1b9ba5__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)) 
                                          << 0x18U);
        vlSelf->__VdfgTmp_h483ce63c__0 = ((QData)((IData)(vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)) 
                                          << 0x20U);
        vlSelf->PvuTop__DOT__convert32__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0 
            = __VdfgTmp_h427b4839__0;
        vlSelf->PvuTop__DOT__convert40__DOT__posit_encoder__DOT____VdfgTmp_h91c3a56d__0 
            = ((QData)((IData)(__VdfgTmp_h427b4839__0)) 
               << 8U);
        vlSelf->PvuTop__DOT__convert48__DOT__posit_encoder__DOT____VdfgTmp_h91c3ab73__0 
            = ((QData)((IData)(__VdfgTmp_h427b4839__0)) 
               << 0x10U);
        vlSelf->PvuTop__DOT__convert56__DOT__posit_encoder__DOT____VdfgTmp_h91c3a979__0 
            = ((QData)((IData)(__VdfgTmp_h427b4839__0)) 
               << 0x18U);
        vlSelf->PvuTop__DOT__convert64__DOT__posit_encoder__DOT____VdfgTmp_h91c3ceaf__0 
            = ((QData)((IData)(__VdfgTmp_h427b4839__0)) 
               << 0x20U);
        if (vlSelf->__VdfgTmp_h3f45eb14__0) {
            vlSelf->__VdfgTmp_h6b6c5b42__0 = 1U;
            vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h91c3a32b__0 = 1U;
        } else {
            vlSelf->__VdfgTmp_h6b6c5b42__0 = vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac;
            vlSelf->PvuTop__DOT__convert16__DOT__posit_encoder__DOT____VdfgTmp_h91c3a32b__0 
                = (0x7ffU & (IData)(vlSelf->PvuTop__DOT__convert16__DOT__rounded_frac));
        }
        if (vlSelf->__VdfgTmp_h81d0e9ec__0) {
            vlSelf->__VdfgTmp_h7fb83447__0 = 1U;
            vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h91c3a121__0 = 1U;
        } else {
            vlSelf->__VdfgTmp_h7fb83447__0 = vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac;
            vlSelf->PvuTop__DOT__convert24__DOT__posit_encoder__DOT____VdfgTmp_h91c3a121__0 
                = (0x7ffffU & vlSelf->PvuTop__DOT__convert24__DOT__rounded_frac);
        }
        vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91c3bd35__0 
            = ((IData)(vlSelf->__VdfgTmp_h8c64243d__0)
                ? 1U : (7U & (IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac)));
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__9(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__9\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h266c97a1__0;
    VlWide<16>/*511:0*/ __Vtemp_h1a82d4d4__0;
    VlWide<3>/*95:0*/ __Vtemp_h0d3e3769__0;
    VlWide<10>/*319:0*/ __Vtemp_ha03a285d__0;
    VlWide<16>/*511:0*/ __Vtemp_h1fd4cc7b__0;
    VlWide<3>/*95:0*/ __Vtemp_h347ff95c__0;
    VlWide<10>/*319:0*/ __Vtemp_ha095b63b__0;
    VlWide<16>/*511:0*/ __Vtemp_h26774ce0__0;
    VlWide<3>/*95:0*/ __Vtemp_ha02cf3ea__0;
    VlWide<10>/*319:0*/ __Vtemp_h064edce0__0;
    VlWide<16>/*511:0*/ __Vtemp_h112780ca__0;
    // Body
    __Vtemp_h266c97a1__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Sign)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                              ? 0U
                                                              : 
                                                             ((1U 
                                                               & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                               ? 0x7ffU
                                                               : 
                                                              (((~ 
                                                                 ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)) 
                                                                  & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[0U] 
                                                                     >> 0x1bU))) 
                                                                & (0xc02U 
                                                                   == 
                                                                   ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)
                                                                     ? 0U
                                                                     : 
                                                                    ((0xf00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                                >> 7U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp)))))
                                                                ? 0U
                                                                : 
                                                               (0x7ffU 
                                                                & ((IData)(0x3ffU) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)
                                                                     ? 0U
                                                                     : 
                                                                    ((0x700U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                                >> 7U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp)))))))))) 
                                            << 0x34U) 
                                           | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                   ? 
                                                  ((0ULL 
                                                    == vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h96e1ed81__0)
                                                    ? 1ULL
                                                    : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h96e1ed81__0)
                                                   : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h96e1ed81__0)))));
    __Vtemp_h266c97a1__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Sign)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                               ? 0U
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                ? 0x7ffU
                                                                : 
                                                               (((~ 
                                                                  ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)) 
                                                                   & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[0U] 
                                                                      >> 0x1bU))) 
                                                                 & (0xc02U 
                                                                    == 
                                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)
                                                                      ? 0U
                                                                      : 
                                                                     ((0xf00U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                                >> 7U)))) 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp)))))
                                                                 ? 0U
                                                                 : 
                                                                (0x7ffU 
                                                                 & ((IData)(0x3ffU) 
                                                                    + 
                                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)
                                                                      ? 0U
                                                                      : 
                                                                     ((0x700U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                                >> 7U)))) 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp)))))))))) 
                                             << 0x34U) 
                                            | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                ? 0ULL
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                    ? 
                                                   ((0ULL 
                                                     == vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h96e1ed81__0)
                                                     ? 1ULL
                                                     : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h96e1ed81__0)
                                                    : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h96e1ed81__0)))) 
                                        >> 0x20U));
    __Vtemp_h1a82d4d4__0[0U] = (IData)((QData)((IData)(
                                                       ((8U 
                                                         & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)) 
                                                                & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                                   | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                      | ((~ 
                                                                          ((~ 
                                                                            ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_2)) 
                                                                             & ((IData)(vlSelf->__VdfgTmp_h40a686be__0) 
                                                                                >> 2U))) 
                                                                           & (1U 
                                                                              == 
                                                                              ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_2)
                                                                                ? 0U
                                                                                : (IData)(vlSelf->__VdfgTmp_h0a8ed410__0))))) 
                                                                         & ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_2)) 
                                                                            & (IData)(vlSelf->__VdfgTmp_h0a8ed410__0)))))) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                               ? 0U
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                ? 
                                                               ((0U 
                                                                 == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96e1e338__0))
                                                                 ? 1U
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96e1e338__0))
                                                                : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96e1e338__0))))))));
    __Vtemp_h1a82d4d4__0[1U] = (IData)(((QData)((IData)(
                                                        ((8U 
                                                          & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)) 
                                                                 & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                                    | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                       | ((~ 
                                                                           ((~ 
                                                                             ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_2)) 
                                                                              & ((IData)(vlSelf->__VdfgTmp_h40a686be__0) 
                                                                                >> 2U))) 
                                                                            & (1U 
                                                                               == 
                                                                               ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_2)
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->__VdfgTmp_h0a8ed410__0))))) 
                                                                          & ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_2)) 
                                                                             & (IData)(vlSelf->__VdfgTmp_h0a8ed410__0)))))) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                                | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                 ? 
                                                                ((0U 
                                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96e1e338__0))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96e1e338__0))
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96e1e338__0))))))) 
                                        >> 0x20U));
    __Vtemp_h1a82d4d4__0[2U] = (IData)((QData)((IData)(
                                                       ((0x80U 
                                                         & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
                                                            << 7U)) 
                                                        | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                              ? 0U
                                                              : 
                                                             ((1U 
                                                               & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                                  | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN)))
                                                               ? 0xfU
                                                               : 
                                                              (((~ 
                                                                 ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_1)) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h4f025f70__0) 
                                                                     >> 3U))) 
                                                                & (0x1aU 
                                                                   == 
                                                                   ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_1)
                                                                     ? 0U
                                                                     : (IData)(vlSelf->__VdfgTmp_haaab3f46__0))))
                                                                ? 0U
                                                                : 
                                                               (0xfU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_1)
                                                                     ? 0U
                                                                     : (IData)(vlSelf->__VdfgTmp_haaab3f46__0))))))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                               ? 0U
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                ? 
                                                               ((0U 
                                                                 == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96e1e07c__0))
                                                                 ? 1U
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96e1e07c__0))
                                                                : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96e1e07c__0))))))));
    __Vtemp_h1a82d4d4__0[3U] = (IData)(((QData)((IData)(
                                                        ((0x80U 
                                                          & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
                                                             << 7U)) 
                                                         | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                               ? 0U
                                                               : 
                                                              ((1U 
                                                                & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                                   | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN)))
                                                                ? 0xfU
                                                                : 
                                                               (((~ 
                                                                  ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_1)) 
                                                                   & ((IData)(vlSelf->__VdfgTmp_h4f025f70__0) 
                                                                      >> 3U))) 
                                                                 & (0x1aU 
                                                                    == 
                                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_1)
                                                                      ? 0U
                                                                      : (IData)(vlSelf->__VdfgTmp_haaab3f46__0))))
                                                                 ? 0U
                                                                 : 
                                                                (0xfU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_1)
                                                                      ? 0U
                                                                      : (IData)(vlSelf->__VdfgTmp_haaab3f46__0))))))) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                                | (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                 ? 
                                                                ((0U 
                                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96e1e07c__0))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96e1e07c__0))
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96e1e07c__0))))))) 
                                        >> 0x20U));
    __Vtemp_h1a82d4d4__0[4U] = (IData)((QData)((IData)(
                                                       ((0x8000U 
                                                         & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Sign) 
                                                            << 0xfU)) 
                                                        | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                              ? 0U
                                                              : 
                                                             ((1U 
                                                               & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                                  | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN)))
                                                               ? 0x1fU
                                                               : 
                                                              (((~ 
                                                                 ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_2)) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_he84adc79__0) 
                                                                     >> 0xaU))) 
                                                                & (0x32U 
                                                                   == 
                                                                   ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_2)
                                                                     ? 0U
                                                                     : (IData)(vlSelf->__VdfgTmp_h2a16531b__0))))
                                                                ? 0U
                                                                : 
                                                               (0x1fU 
                                                                & ((IData)(0xfU) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_2)
                                                                     ? 0U
                                                                     : (IData)(vlSelf->__VdfgTmp_h2a16531b__0))))))) 
                                                            << 0xaU) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                               ? 0U
                                                               : 
                                                              ((1U 
                                                                & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                ? 
                                                               ((0U 
                                                                 == (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96e1e122__0))
                                                                 ? 1U
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96e1e122__0))
                                                                : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96e1e122__0))))))));
    __Vtemp_h1a82d4d4__0[5U] = (IData)(((QData)((IData)(
                                                        ((0x8000U 
                                                          & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Sign) 
                                                             << 0xfU)) 
                                                         | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                               ? 0U
                                                               : 
                                                              ((1U 
                                                                & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                                   | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN)))
                                                                ? 0x1fU
                                                                : 
                                                               (((~ 
                                                                  ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_2)) 
                                                                   & ((IData)(vlSelf->__VdfgTmp_he84adc79__0) 
                                                                      >> 0xaU))) 
                                                                 & (0x32U 
                                                                    == 
                                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_2)
                                                                      ? 0U
                                                                      : (IData)(vlSelf->__VdfgTmp_h2a16531b__0))))
                                                                 ? 0U
                                                                 : 
                                                                (0x1fU 
                                                                 & ((IData)(0xfU) 
                                                                    + 
                                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_2)
                                                                      ? 0U
                                                                      : (IData)(vlSelf->__VdfgTmp_h2a16531b__0))))))) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                                | (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                 ? 
                                                                ((0U 
                                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96e1e122__0))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96e1e122__0))
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96e1e122__0))))))) 
                                        >> 0x20U));
    __Vtemp_h1a82d4d4__0[6U] = (((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
                                 << 0x1fU) | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                     | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN)))
                                                  ? 0xffU
                                                  : 
                                                 (((~ 
                                                    ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_2)) 
                                                     & (vlSelf->__VdfgTmp_h8592d4be__0 
                                                        >> 0x17U))) 
                                                   & (0x182U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_2)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h492a5605__0))))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x7fU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_2)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h492a5605__0))))))) 
                                               << 0x17U) 
                                              | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                    ? 1U
                                                    : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                   : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0))));
    __Vtemp_h1a82d4d4__0[7U] = 0U;
    __Vtemp_h1a82d4d4__0[8U] = __Vtemp_h266c97a1__0[0U];
    __Vtemp_h1a82d4d4__0[9U] = __Vtemp_h266c97a1__0[1U];
    __Vtemp_h1a82d4d4__0[0xaU] = 0U;
    __Vtemp_h1a82d4d4__0[0xbU] = 0U;
    __Vtemp_h1a82d4d4__0[0xcU] = 0U;
    __Vtemp_h1a82d4d4__0[0xdU] = 0U;
    __Vtemp_h1a82d4d4__0[0xeU] = 0U;
    __Vtemp_h1a82d4d4__0[0xfU] = 0U;
    vlSelf->PvuTop__DOT____VdfgTmp_hd471070e__0 = (
                                                   ((QData)((IData)(
                                                                    __Vtemp_h1a82d4d4__0[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(vlSelf->io_float_mode) 
                                                                          << 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_float_mode) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_float_mode) 
                                                          << 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->io_float_mode) 
                                                            << 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vtemp_h1a82d4d4__0[
                                                                        (((IData)(0x1fU) 
                                                                          + 
                                                                          (0x1ffU 
                                                                           & ((IData)(vlSelf->io_float_mode) 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_float_mode) 
                                                             << 6U))))) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_h1a82d4d4__0[
                                                                         (0xeU 
                                                                          & ((IData)(vlSelf->io_float_mode) 
                                                                             << 1U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_float_mode) 
                                                             << 6U)))));
    __Vtemp_h0d3e3769__0[0U] = (IData)((QData)((IData)(
                                                       ((8U 
                                                         & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
                                                            << 2U)) 
                                                        | ((4U 
                                                            & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)) 
                                                                << 2U) 
                                                               & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                                   << 2U) 
                                                                  | ((0xfffffffcU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                         << 1U)) 
                                                                     | (((~ 
                                                                          ((~ 
                                                                            ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_6)) 
                                                                             & ((IData)(vlSelf->__VdfgTmp_hb9ec287b__0) 
                                                                                >> 2U))) 
                                                                           & (1U 
                                                                              == 
                                                                              ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_6)
                                                                                ? 0U
                                                                                : (IData)(vlSelf->__VdfgTmp_hac6b94cd__0))))) 
                                                                         & ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_6)) 
                                                                            & (IData)(vlSelf->__VdfgTmp_hac6b94cd__0))) 
                                                                        << 2U))))) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                ? 
                                                               ((0U 
                                                                 == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96ba1187__0))
                                                                 ? 1U
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96ba1187__0))
                                                                : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96ba1187__0))))))));
    __Vtemp_h0d3e3769__0[1U] = (IData)(((QData)((IData)(
                                                        ((8U 
                                                          & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
                                                             << 2U)) 
                                                         | ((4U 
                                                             & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)) 
                                                                 << 2U) 
                                                                & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                                    << 2U) 
                                                                   | ((0xfffffffcU 
                                                                       & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                          << 1U)) 
                                                                      | (((~ 
                                                                           ((~ 
                                                                             ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_6)) 
                                                                              & ((IData)(vlSelf->__VdfgTmp_hb9ec287b__0) 
                                                                                >> 2U))) 
                                                                            & (1U 
                                                                               == 
                                                                               ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_6)
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->__VdfgTmp_hac6b94cd__0))))) 
                                                                          & ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_6)) 
                                                                             & (IData)(vlSelf->__VdfgTmp_hac6b94cd__0))) 
                                                                         << 2U))))) 
                                                            | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                                                | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                                                ? 0U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                 ? 
                                                                ((0U 
                                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96ba1187__0))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96ba1187__0))
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96ba1187__0))))))) 
                                        >> 0x20U));
    __Vtemp_ha03a285d__0[9U] = ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                   ? 0U : ((2U & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                            ? 0x7ffU
                                            : (((~ 
                                                 ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[1U] 
                                                     >> 0x17U))) 
                                                & (0xc02U 
                                                   == 
                                                   ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0)
                                                     ? 0U
                                                     : 
                                                    ((0xf00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                        >> 0xfU)))) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                           >> 8U))))))
                                                ? 0U
                                                : (0x7ffU 
                                                   & ((IData)(0x3ffU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0)
                                                        ? 0U
                                                        : 
                                                       ((0x700U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                           >> 0xfU)))) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                              >> 8U))))))))) 
                                 << 0x14U) | (IData)(
                                                     (((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                                        ? 0ULL
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                         ? 
                                                        ((0ULL 
                                                          == vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h97139b66__0)
                                                          ? 1ULL
                                                          : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h97139b66__0)
                                                         : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h97139b66__0)) 
                                                      >> 0x20U)));
    __Vtemp_h1fd4cc7b__0[0U] = __Vtemp_h0d3e3769__0[0U];
    __Vtemp_h1fd4cc7b__0[1U] = __Vtemp_h0d3e3769__0[1U];
    __Vtemp_h1fd4cc7b__0[2U] = ((0x80U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
                                          << 6U)) | 
                                ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                    ? 0U : ((1U & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                   | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                      >> 1U)))
                                             ? 0xfU
                                             : (((~ 
                                                  ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_4)) 
                                                   & ((IData)(vlSelf->__VdfgTmp_h8b0fae15__0) 
                                                      >> 3U))) 
                                                 & (0x1aU 
                                                    == 
                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_4)
                                                      ? 0U
                                                      : (IData)(vlSelf->__VdfgTmp_h4fb214a8__0))))
                                                 ? 0U
                                                 : 
                                                (0xfU 
                                                 & ((IData)(7U) 
                                                    + 
                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_4)
                                                      ? 0U
                                                      : (IData)(vlSelf->__VdfgTmp_h4fb214a8__0))))))) 
                                  << 3U) | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                             | (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                              ? ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96b7909b__0))
                                                  ? 1U
                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96b7909b__0))
                                              : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96b7909b__0)))));
    __Vtemp_h1fd4cc7b__0[3U] = 0U;
    __Vtemp_h1fd4cc7b__0[4U] = ((0x8000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Sign) 
                                            << 0xeU)) 
                                | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                      ? 0U : ((1U & 
                                               ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                   >> 1U)))
                                               ? 0x1fU
                                               : ((
                                                   (~ 
                                                    ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_6)) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h459491c7__0) 
                                                        >> 0xaU))) 
                                                   & (0x32U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_6)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h53ace542__0))))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_6)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h53ace542__0))))))) 
                                    << 0xaU) | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                                 | (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96daf448__0))
                                                   ? 1U
                                                   : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96daf448__0))
                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96daf448__0)))));
    __Vtemp_h1fd4cc7b__0[5U] = 0U;
    __Vtemp_h1fd4cc7b__0[6U] = ((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
                                                << 0x1eU)) 
                                | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                      ? 0U : ((1U & 
                                               ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                   >> 1U)))
                                               ? 0xffU
                                               : ((
                                                   (~ 
                                                    ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_6)) 
                                                     & (vlSelf->__VdfgTmp_h00901bc7__0 
                                                        >> 0x17U))) 
                                                   & (0x182U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_6)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_hf5799464__0))))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x7fU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_6)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_hf5799464__0))))))) 
                                    << 0x17U) | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                    ? 1U
                                                    : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                   : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0))));
    __Vtemp_h1fd4cc7b__0[7U] = 0U;
    __Vtemp_h1fd4cc7b__0[8U] = (IData)(((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                         ? 0ULL : (
                                                   (2U 
                                                    & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                    ? 
                                                   ((0ULL 
                                                     == vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h97139b66__0)
                                                     ? 1ULL
                                                     : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h97139b66__0)
                                                    : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h97139b66__0)));
    __Vtemp_h1fd4cc7b__0[9U] = ((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Sign) 
                                                << 0x1eU)) 
                                | __Vtemp_ha03a285d__0[9U]);
    __Vtemp_h1fd4cc7b__0[0xaU] = 0U;
    __Vtemp_h1fd4cc7b__0[0xbU] = 0U;
    __Vtemp_h1fd4cc7b__0[0xcU] = 0U;
    __Vtemp_h1fd4cc7b__0[0xdU] = 0U;
    __Vtemp_h1fd4cc7b__0[0xeU] = 0U;
    __Vtemp_h1fd4cc7b__0[0xfU] = 0U;
    vlSelf->PvuTop__DOT____VdfgTmp_h12086d12__0 = (
                                                   ((QData)((IData)(
                                                                    __Vtemp_h1fd4cc7b__0[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(vlSelf->io_float_mode) 
                                                                          << 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_float_mode) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_float_mode) 
                                                          << 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->io_float_mode) 
                                                            << 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vtemp_h1fd4cc7b__0[
                                                                        (((IData)(0x1fU) 
                                                                          + 
                                                                          (0x1ffU 
                                                                           & ((IData)(vlSelf->io_float_mode) 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_float_mode) 
                                                             << 6U))))) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_h1fd4cc7b__0[
                                                                         (0xeU 
                                                                          & ((IData)(vlSelf->io_float_mode) 
                                                                             << 1U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_float_mode) 
                                                             << 6U)))));
    __Vtemp_h347ff95c__0[0U] = (IData)((QData)((IData)(
                                                       ((8U 
                                                         & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
                                                            << 1U)) 
                                                        | ((4U 
                                                            & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)) 
                                                                << 2U) 
                                                               & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                                   << 2U) 
                                                                  | ((0xfffffffcU 
                                                                      & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN)) 
                                                                     | (((~ 
                                                                          ((~ 
                                                                            ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_10)) 
                                                                             & ((IData)(vlSelf->__VdfgTmp_hf52bdd2a__0) 
                                                                                >> 2U))) 
                                                                           & (1U 
                                                                              == 
                                                                              ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_10)
                                                                                ? 0U
                                                                                : (IData)(vlSelf->__VdfgTmp_h3ba1ecff__0))))) 
                                                                         & ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_10)) 
                                                                            & (IData)(vlSelf->__VdfgTmp_h3ba1ecff__0))) 
                                                                        << 2U))))) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0))
                                                               ? 0U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                ? 
                                                               ((0U 
                                                                 == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h968e33b0__0))
                                                                 ? 1U
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h968e33b0__0))
                                                                : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h968e33b0__0))))))));
    __Vtemp_h347ff95c__0[1U] = (IData)(((QData)((IData)(
                                                        ((8U 
                                                          & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
                                                             << 1U)) 
                                                         | ((4U 
                                                             & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)) 
                                                                 << 2U) 
                                                                & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                                    << 2U) 
                                                                   | ((0xfffffffcU 
                                                                       & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN)) 
                                                                      | (((~ 
                                                                           ((~ 
                                                                             ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_10)) 
                                                                              & ((IData)(vlSelf->__VdfgTmp_hf52bdd2a__0) 
                                                                                >> 2U))) 
                                                                            & (1U 
                                                                               == 
                                                                               ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_10)
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->__VdfgTmp_h3ba1ecff__0))))) 
                                                                          & ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_10)) 
                                                                             & (IData)(vlSelf->__VdfgTmp_h3ba1ecff__0))) 
                                                                         << 2U))))) 
                                                            | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
                                                                | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0))
                                                                ? 0U
                                                                : 
                                                               ((4U 
                                                                 & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                 ? 
                                                                ((0U 
                                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h968e33b0__0))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h968e33b0__0))
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h968e33b0__0))))))) 
                                        >> 0x20U));
    __Vtemp_ha095b63b__0[9U] = ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                   ? 0U : ((4U & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                            ? 0x7ffU
                                            : (((~ 
                                                 ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[2U] 
                                                     >> 0x13U))) 
                                                & (0xc02U 
                                                   == 
                                                   ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1)
                                                     ? 0U
                                                     : 
                                                    ((0xf00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                        >> 0x17U)))) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                           >> 0x10U))))))
                                                ? 0U
                                                : (0x7ffU 
                                                   & ((IData)(0x3ffU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_1)
                                                        ? 0U
                                                        : 
                                                       ((0x700U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                           >> 0x17U)))) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                              >> 0x10U))))))))) 
                                 << 0x14U) | (IData)(
                                                     (((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                                        ? 0ULL
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                         ? 
                                                        ((0ULL 
                                                          == vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h9005e3f6__0)
                                                          ? 1ULL
                                                          : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h9005e3f6__0)
                                                         : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h9005e3f6__0)) 
                                                      >> 0x20U)));
    __Vtemp_h26774ce0__0[0U] = __Vtemp_h347ff95c__0[0U];
    __Vtemp_h26774ce0__0[1U] = __Vtemp_h347ff95c__0[1U];
    __Vtemp_h26774ce0__0[2U] = ((0x80U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
                                          << 5U)) | 
                                ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                    ? 0U : ((1U & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                   | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                      >> 2U)))
                                             ? 0xfU
                                             : (((~ 
                                                  ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_7)) 
                                                   & ((IData)(vlSelf->__VdfgTmp_h9e39cbf9__0) 
                                                      >> 3U))) 
                                                 & (0x1aU 
                                                    == 
                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_7)
                                                      ? 0U
                                                      : (IData)(vlSelf->__VdfgTmp_h01f62327__0))))
                                                 ? 0U
                                                 : 
                                                (0xfU 
                                                 & ((IData)(7U) 
                                                    + 
                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_7)
                                                      ? 0U
                                                      : (IData)(vlSelf->__VdfgTmp_h01f62327__0))))))) 
                                  << 3U) | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
                                             | (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0))
                                             ? 0U : 
                                            ((4U & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                              ? ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h968546ec__0))
                                                  ? 1U
                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h968546ec__0))
                                              : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h968546ec__0)))));
    __Vtemp_h26774ce0__0[3U] = 0U;
    __Vtemp_h26774ce0__0[4U] = ((0x8000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Sign) 
                                            << 0xdU)) 
                                | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                      ? 0U : ((1U & 
                                               ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                   >> 2U)))
                                               ? 0x1fU
                                               : ((
                                                   (~ 
                                                    ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_10)) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h2da98235__0) 
                                                        >> 0xaU))) 
                                                   & (0x32U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_10)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h7ae519d9__0))))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_10)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h7ae519d9__0))))))) 
                                    << 0xaU) | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
                                                 | (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h974ef2fe__0))
                                                   ? 1U
                                                   : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h974ef2fe__0))
                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h974ef2fe__0)))));
    __Vtemp_h26774ce0__0[5U] = 0U;
    __Vtemp_h26774ce0__0[6U] = ((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
                                                << 0x1dU)) 
                                | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                      ? 0U : ((1U & 
                                               ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                   >> 2U)))
                                               ? 0xffU
                                               : ((
                                                   (~ 
                                                    ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_10)) 
                                                     & (vlSelf->__VdfgTmp_h6f085be2__0 
                                                        >> 0x17U))) 
                                                   & (0x182U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_10)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_hfc141949__0))))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x7fU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_10)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_hfc141949__0))))))) 
                                    << 0x17U) | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0)
                                                    ? 1U
                                                    : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0)
                                                   : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0))));
    __Vtemp_h26774ce0__0[7U] = 0U;
    __Vtemp_h26774ce0__0[8U] = (IData)(((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                         ? 0ULL : (
                                                   (4U 
                                                    & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                    ? 
                                                   ((0ULL 
                                                     == vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h9005e3f6__0)
                                                     ? 1ULL
                                                     : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h9005e3f6__0)
                                                    : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h9005e3f6__0)));
    __Vtemp_h26774ce0__0[9U] = ((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Sign) 
                                                << 0x1dU)) 
                                | __Vtemp_ha095b63b__0[9U]);
    __Vtemp_h26774ce0__0[0xaU] = 0U;
    __Vtemp_h26774ce0__0[0xbU] = 0U;
    __Vtemp_h26774ce0__0[0xcU] = 0U;
    __Vtemp_h26774ce0__0[0xdU] = 0U;
    __Vtemp_h26774ce0__0[0xeU] = 0U;
    __Vtemp_h26774ce0__0[0xfU] = 0U;
    vlSelf->PvuTop__DOT____VdfgTmp_h3d760f20__0 = (
                                                   ((QData)((IData)(
                                                                    __Vtemp_h26774ce0__0[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(vlSelf->io_float_mode) 
                                                                          << 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_float_mode) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_float_mode) 
                                                          << 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->io_float_mode) 
                                                            << 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vtemp_h26774ce0__0[
                                                                        (((IData)(0x1fU) 
                                                                          + 
                                                                          (0x1ffU 
                                                                           & ((IData)(vlSelf->io_float_mode) 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_float_mode) 
                                                             << 6U))))) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_h26774ce0__0[
                                                                         (0xeU 
                                                                          & ((IData)(vlSelf->io_float_mode) 
                                                                             << 1U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_float_mode) 
                                                             << 6U)))));
    __Vtemp_ha02cf3ea__0[0U] = (IData)((QData)((IData)(
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign)) 
                                                        | ((4U 
                                                            & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)) 
                                                                << 2U) 
                                                               & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                                                   << 2U) 
                                                                  | ((0x7ffffffcU 
                                                                      & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                         >> 1U)) 
                                                                     | (((~ 
                                                                          ((~ 
                                                                            ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_14)) 
                                                                             & ((IData)(vlSelf->__VdfgTmp_hbeca2c52__0) 
                                                                                >> 2U))) 
                                                                           & (1U 
                                                                              == 
                                                                              ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_14)
                                                                                ? 0U
                                                                                : (IData)(vlSelf->__VdfgTmp_h67c762b7__0))))) 
                                                                         & ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_14)) 
                                                                            & (IData)(vlSelf->__VdfgTmp_h67c762b7__0))) 
                                                                        << 2U))))) 
                                                           | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0))
                                                               ? 0U
                                                               : 
                                                              ((8U 
                                                                & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                ? 
                                                               ((0U 
                                                                 == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))
                                                                 ? 1U
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))
                                                                : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))))))));
    __Vtemp_ha02cf3ea__0[1U] = (IData)(((QData)((IData)(
                                                        ((8U 
                                                          & (IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign)) 
                                                         | ((4U 
                                                             & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)) 
                                                                 << 2U) 
                                                                & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                                                    << 2U) 
                                                                   | ((0x7ffffffcU 
                                                                       & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                          >> 1U)) 
                                                                      | (((~ 
                                                                           ((~ 
                                                                             ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_14)) 
                                                                              & ((IData)(vlSelf->__VdfgTmp_hbeca2c52__0) 
                                                                                >> 2U))) 
                                                                            & (1U 
                                                                               == 
                                                                               ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_14)
                                                                                 ? 0U
                                                                                 : (IData)(vlSelf->__VdfgTmp_h67c762b7__0))))) 
                                                                          & ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT___GEN_14)) 
                                                                             & (IData)(vlSelf->__VdfgTmp_h67c762b7__0))) 
                                                                         << 2U))))) 
                                                            | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                                                                | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0))
                                                                ? 0U
                                                                : 
                                                               ((8U 
                                                                 & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                 ? 
                                                                ((0U 
                                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))
                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))))))) 
                                        >> 0x20U));
    __Vtemp_h064edce0__0[9U] = ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                   ? 0U : ((8U & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                            ? 0x7ffU
                                            : (((~ 
                                                 ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)) 
                                                  & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac[3U] 
                                                     >> 0xfU))) 
                                                & (0xc02U 
                                                   == 
                                                   ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)
                                                     ? 0U
                                                     : 
                                                    ((0xf00U 
                                                      & ((- (IData)(
                                                                    (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                     >> 0x1fU))) 
                                                         << 8U)) 
                                                     | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                        >> 0x18U)))))
                                                ? 0U
                                                : (0x7ffU 
                                                   & ((IData)(0x3ffU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)
                                                        ? 0U
                                                        : 
                                                       ((0x700U 
                                                         & ((- (IData)(
                                                                       (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                        >> 0x1fU))) 
                                                            << 8U)) 
                                                        | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                           >> 0x18U)))))))) 
                                 << 0x14U) | (IData)(
                                                     (((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                                        ? 0ULL
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                         ? 
                                                        ((0ULL 
                                                          == vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h912770d6__0)
                                                          ? 1ULL
                                                          : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h912770d6__0)
                                                         : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h912770d6__0)) 
                                                      >> 0x20U)));
    __Vtemp_h112780ca__0[0U] = __Vtemp_ha02cf3ea__0[0U];
    __Vtemp_h112780ca__0[1U] = __Vtemp_ha02cf3ea__0[1U];
    __Vtemp_h112780ca__0[2U] = ((0x80U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
                                          << 4U)) | 
                                ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                    ? 0U : (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                             | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                >> 3U))
                                             ? 0xfU
                                             : (((~ 
                                                  ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_10)) 
                                                   & ((IData)(vlSelf->__VdfgTmp_hb7970779__0) 
                                                      >> 3U))) 
                                                 & (0x1aU 
                                                    == 
                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_10)
                                                      ? 0U
                                                      : (IData)(vlSelf->__VdfgTmp_h876083fa__0))))
                                                 ? 0U
                                                 : 
                                                (0xfU 
                                                 & ((IData)(7U) 
                                                    + 
                                                    ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT___GEN_10)
                                                      ? 0U
                                                      : (IData)(vlSelf->__VdfgTmp_h876083fa__0))))))) 
                                  << 3U) | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                                             | (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0))
                                             ? 0U : 
                                            ((8U & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                              ? ((0U 
                                                  == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96d5f417__0))
                                                  ? 1U
                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96d5f417__0))
                                              : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96d5f417__0)))));
    __Vtemp_h112780ca__0[3U] = 0U;
    __Vtemp_h112780ca__0[4U] = ((0x8000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Sign) 
                                            << 0xcU)) 
                                | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                      ? 0U : (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                               | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                  >> 3U))
                                               ? 0x1fU
                                               : ((
                                                   (~ 
                                                    ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_14)) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h8be48673__0) 
                                                        >> 0xaU))) 
                                                   & (0x32U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_14)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h00c4dd81__0))))
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & ((IData)(0xfU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT___GEN_14)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h00c4dd81__0))))))) 
                                    << 0xaU) | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                                                 | (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0))
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h972069b6__0))
                                                   ? 1U
                                                   : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h972069b6__0))
                                                  : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h972069b6__0)))));
    __Vtemp_h112780ca__0[5U] = 0U;
    __Vtemp_h112780ca__0[6U] = ((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
                                                << 0x1cU)) 
                                | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                      ? 0U : (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                               | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                  >> 3U))
                                               ? 0xffU
                                               : ((
                                                   (~ 
                                                    ((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_14)) 
                                                     & (vlSelf->__VdfgTmp_h8c68a7bd__0 
                                                        >> 0x17U))) 
                                                   & (0x182U 
                                                      == 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_14)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h88f0c350__0))))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x7fU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT___GEN_14)
                                                        ? 0U
                                                        : (IData)(vlSelf->__VdfgTmp_h88f0c350__0))))))) 
                                    << 0x17U) | (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0)
                                                    ? 1U
                                                    : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0)
                                                   : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0))));
    __Vtemp_h112780ca__0[7U] = 0U;
    __Vtemp_h112780ca__0[8U] = (IData)(((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                         ? 0ULL : (
                                                   (8U 
                                                    & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                    ? 
                                                   ((0ULL 
                                                     == vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h912770d6__0)
                                                     ? 1ULL
                                                     : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h912770d6__0)
                                                    : vlSelf->PvuTop__DOT__posit2float_fp64__DOT__floatEncoder__DOT____VdfgTmp_h912770d6__0)));
    __Vtemp_h112780ca__0[9U] = ((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Sign) 
                                                << 0x1cU)) 
                                | __Vtemp_h064edce0__0[9U]);
    __Vtemp_h112780ca__0[0xaU] = 0U;
    __Vtemp_h112780ca__0[0xbU] = 0U;
    __Vtemp_h112780ca__0[0xcU] = 0U;
    __Vtemp_h112780ca__0[0xdU] = 0U;
    __Vtemp_h112780ca__0[0xeU] = 0U;
    __Vtemp_h112780ca__0[0xfU] = 0U;
    vlSelf->PvuTop__DOT____VdfgTmp_h098a558a__0 = (
                                                   ((QData)((IData)(
                                                                    __Vtemp_h112780ca__0[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(vlSelf->io_float_mode) 
                                                                          << 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_float_mode) 
                                                          << 6U)))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_float_mode) 
                                                          << 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->io_float_mode) 
                                                            << 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vtemp_h112780ca__0[
                                                                        (((IData)(0x1fU) 
                                                                          + 
                                                                          (0x1ffU 
                                                                           & ((IData)(vlSelf->io_float_mode) 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_float_mode) 
                                                             << 6U))))) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_h112780ca__0[
                                                                         (0xeU 
                                                                          & ((IData)(vlSelf->io_float_mode) 
                                                                             << 1U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_float_mode) 
                                                             << 6U)))));
    if (vlSelf->PvuTop__DOT___GEN_73) {
        vlSelf->PvuTop__DOT___GEN_74 = 0ULL;
        vlSelf->PvuTop__DOT___GEN_75 = 0ULL;
        vlSelf->PvuTop__DOT___GEN_76 = 0ULL;
        vlSelf->PvuTop__DOT___GEN_77 = 0ULL;
    } else {
        vlSelf->PvuTop__DOT___GEN_74 = vlSelf->PvuTop__DOT____VdfgTmp_hd471070e__0;
        vlSelf->PvuTop__DOT___GEN_75 = vlSelf->PvuTop__DOT____VdfgTmp_h12086d12__0;
        vlSelf->PvuTop__DOT___GEN_76 = vlSelf->PvuTop__DOT____VdfgTmp_h3d760f20__0;
        vlSelf->PvuTop__DOT___GEN_77 = vlSelf->PvuTop__DOT____VdfgTmp_h098a558a__0;
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__38(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__38\n"); );
    // Init
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT___carryWire_T_4;
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT___carryWire_T_4 = 0;
    CData/*0:0*/ PvuTop__DOT__greater__DOT___GEN_2;
    PvuTop__DOT__greater__DOT___GEN_2 = 0;
    CData/*0:0*/ PvuTop__DOT__greater__DOT___GEN_7;
    PvuTop__DOT__greater__DOT___GEN_7 = 0;
    CData/*0:0*/ PvuTop__DOT__greater__DOT___GEN_12;
    PvuTop__DOT__greater__DOT___GEN_12 = 0;
    CData/*0:0*/ PvuTop__DOT__greater__DOT___GEN_17;
    PvuTop__DOT__greater__DOT___GEN_17 = 0;
    IData/*30:0*/ PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_0_T;
    PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_0_T = 0;
    IData/*30:0*/ PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_1_T;
    PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_1_T = 0;
    IData/*30:0*/ PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_2_T;
    PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_2_T = 0;
    IData/*30:0*/ PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_3_T;
    PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_3_T = 0;
    IData/*26:0*/ PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h9347f0fa__0 = 0;
    IData/*26:0*/ PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    IData/*26:0*/ PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h962fac1b__0 = 0;
    IData/*26:0*/ PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h91c3a767__0;
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h91c3a767__0 = 0;
    CData/*0:0*/ PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c349387__0 = 0;
    CData/*0:0*/ PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c547640__0 = 0;
    CData/*0:0*/ PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c07425a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    CData/*0:0*/ PvuTop__DOT__less__DOT___GEN_2;
    PvuTop__DOT__less__DOT___GEN_2 = 0;
    CData/*0:0*/ PvuTop__DOT__less__DOT___GEN_7;
    PvuTop__DOT__less__DOT___GEN_7 = 0;
    CData/*0:0*/ PvuTop__DOT__less__DOT___GEN_12;
    PvuTop__DOT__less__DOT___GEN_12 = 0;
    CData/*0:0*/ PvuTop__DOT__less__DOT___GEN_17;
    PvuTop__DOT__less__DOT___GEN_17 = 0;
    IData/*31:0*/ PvuTop__DOT__less__DOT____VdfgTmp_hc14b0578__0;
    PvuTop__DOT__less__DOT____VdfgTmp_hc14b0578__0 = 0;
    IData/*31:0*/ PvuTop__DOT__less__DOT____VdfgTmp_he68aee29__0;
    PvuTop__DOT__less__DOT____VdfgTmp_he68aee29__0 = 0;
    IData/*31:0*/ PvuTop__DOT__less__DOT____VdfgTmp_h897751e3__0;
    PvuTop__DOT__less__DOT____VdfgTmp_h897751e3__0 = 0;
    IData/*31:0*/ PvuTop__DOT__less__DOT____VdfgTmp_h972e8323__0;
    PvuTop__DOT__less__DOT____VdfgTmp_h972e8323__0 = 0;
    IData/*30:0*/ PvuTop__DOT__less__DOT__encode__DOT___value_after_round_0_T;
    PvuTop__DOT__less__DOT__encode__DOT___value_after_round_0_T = 0;
    IData/*30:0*/ PvuTop__DOT__less__DOT__encode__DOT___value_after_round_1_T;
    PvuTop__DOT__less__DOT__encode__DOT___value_after_round_1_T = 0;
    IData/*30:0*/ PvuTop__DOT__less__DOT__encode__DOT___value_after_round_2_T;
    PvuTop__DOT__less__DOT__encode__DOT___value_after_round_2_T = 0;
    IData/*30:0*/ PvuTop__DOT__less__DOT__encode__DOT___value_after_round_3_T;
    PvuTop__DOT__less__DOT__encode__DOT___value_after_round_3_T = 0;
    IData/*26:0*/ PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h9347f0fa__0;
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h9347f0fa__0 = 0;
    IData/*26:0*/ PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0;
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0 = 0;
    IData/*26:0*/ PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h962fac1b__0;
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h962fac1b__0 = 0;
    IData/*26:0*/ PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h91c3a767__0;
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h91c3a767__0 = 0;
    CData/*0:0*/ PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c349387__0 = 0;
    CData/*0:0*/ PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c547640__0;
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c547640__0 = 0;
    CData/*0:0*/ PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c07425a__0;
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c07425a__0 = 0;
    CData/*0:0*/ PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1ce7231a__0;
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1ce7231a__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2);
    CData/*0:0*/ PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0;
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 = 0;
    CData/*7:0*/ __VdfgTmp_h55b4dffa__0;
    __VdfgTmp_h55b4dffa__0 = 0;
    CData/*7:0*/ __VdfgTmp_h7ac7367c__0;
    __VdfgTmp_h7ac7367c__0 = 0;
    CData/*7:0*/ __VdfgTmp_hdf046a1b__0;
    __VdfgTmp_hdf046a1b__0 = 0;
    CData/*7:0*/ __VdfgTmp_hc5219626__0;
    __VdfgTmp_hc5219626__0 = 0;
    CData/*7:0*/ __VdfgTmp_ha33f4f0c__0;
    __VdfgTmp_ha33f4f0c__0 = 0;
    CData/*7:0*/ __VdfgTmp_hc69c61d7__0;
    __VdfgTmp_hc69c61d7__0 = 0;
    CData/*7:0*/ __VdfgTmp_hf0c63922__0;
    __VdfgTmp_hf0c63922__0 = 0;
    CData/*7:0*/ __VdfgTmp_h55726fbe__0;
    __VdfgTmp_h55726fbe__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha5172d5a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3c240063__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ae21378__0;
    VlWide<3>/*95:0*/ __Vtemp_h73044f8a__0;
    VlWide<3>/*95:0*/ __Vtemp_hf110e79f__0;
    VlWide<3>/*95:0*/ __Vtemp_h1f92b595__0;
    VlWide<3>/*95:0*/ __Vtemp_h4294c7ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h073d8f88__0;
    VlWide<3>/*95:0*/ __Vtemp_hc31c5211__0;
    VlWide<3>/*95:0*/ __Vtemp_ha4fbd0fb__0;
    VlWide<3>/*95:0*/ __Vtemp_h9d91c8df__0;
    VlWide<3>/*95:0*/ __Vtemp_h386357b4__0;
    VlWide<3>/*95:0*/ __Vtemp_h21e860d0__0;
    VlWide<3>/*95:0*/ __Vtemp_h4116a867__0;
    VlWide<3>/*95:0*/ __Vtemp_h1df77d71__0;
    VlWide<3>/*95:0*/ __Vtemp_h52b6fd46__0;
    VlWide<3>/*95:0*/ __Vtemp_h98f37af4__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ff979f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h9bf47469__0;
    VlWide<3>/*95:0*/ __Vtemp_h985b4e2a__0;
    VlWide<3>/*95:0*/ __Vtemp_h67e824e0__0;
    VlWide<3>/*95:0*/ __Vtemp_h9faf87d8__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c57dce0__0;
    VlWide<3>/*95:0*/ __Vtemp_hd92f374e__0;
    VlWide<3>/*95:0*/ __Vtemp_hf32c7e8b__0;
    VlWide<3>/*95:0*/ __Vtemp_h185cc3d7__0;
    VlWide<3>/*95:0*/ __Vtemp_h9dc01905__0;
    VlWide<3>/*95:0*/ __Vtemp_h34e7ebf0__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a067d98__0;
    VlWide<3>/*95:0*/ __Vtemp_h34ba6bc4__0;
    VlWide<3>/*95:0*/ __Vtemp_he70d4c7f__0;
    VlWide<3>/*95:0*/ __Vtemp_h12254092__0;
    VlWide<3>/*95:0*/ __Vtemp_hf0a0e871__0;
    VlWide<3>/*95:0*/ __Vtemp_hd4925eee__0;
    VlWide<3>/*95:0*/ __Vtemp_hc182b105__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e8ae069__0;
    VlWide<3>/*95:0*/ __Vtemp_h9490be78__0;
    VlWide<3>/*95:0*/ __Vtemp_h522645d5__0;
    VlWide<3>/*95:0*/ __Vtemp_he6c7014c__0;
    VlWide<3>/*95:0*/ __Vtemp_h5ba45d92__0;
    // Body
    PvuTop__DOT__greater__DOT___GEN_17 = (1U & ((~ 
                                                 ((0x80000000U 
                                                   == vlSelf->io_posit_i2_3) 
                                                  | ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14) 
                                                     | ((0x80000000U 
                                                         == vlSelf->io_posit_i1_3) 
                                                        | ((IData)(vlSelf->__VdfgTmp_ha768b880__0) 
                                                           | ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1_3)
                                                               ? 
                                                              ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                               >> 3U)
                                                               : 
                                                              ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2_3)
                                                                ? 
                                                               (~ 
                                                                ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                                 >> 3U))
                                                                : 
                                                               ((IData)(vlSelf->__VdfgTmp_h0ac2602d__0) 
                                                                | ((~ (IData)(vlSelf->__VdfgTmp_h7f9446f2__0)) 
                                                                   & ((IData)(vlSelf->__VdfgTmp_hb52a27cf__0)
                                                                       ? 
                                                                      ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_15)) 
                                                                       & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_16) 
                                                                          | (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0 
                                                                             <= vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0)))
                                                                       : 
                                                                      ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_15) 
                                                                       | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_16)) 
                                                                          & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0 
                                                                             >= vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0))))))))))))) 
                                                | (0x80000000U 
                                                   == vlSelf->io_posit_i1_3)));
    PvuTop__DOT__less__DOT___GEN_17 = (1U & ((~ ((0x80000000U 
                                                  == vlSelf->io_posit_i2_3) 
                                                 | ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14) 
                                                    | ((0x80000000U 
                                                        == vlSelf->io_posit_i1_3) 
                                                       | ((IData)(vlSelf->__VdfgTmp_ha768b880__0) 
                                                          | ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1_3)
                                                              ? 
                                                             (~ 
                                                              ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                               >> 3U))
                                                              : 
                                                             ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2_3)
                                                               ? 
                                                              ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                               >> 3U)
                                                               : 
                                                              ((IData)(vlSelf->__VdfgTmp_h7f9446f2__0) 
                                                               | ((~ (IData)(vlSelf->__VdfgTmp_h0ac2602d__0)) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_hb52a27cf__0)
                                                                      ? 
                                                                     ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_15) 
                                                                      | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_16)) 
                                                                         & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0 
                                                                            > vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0)))
                                                                      : 
                                                                     ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_16) 
                                                                      | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_15)) 
                                                                         & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0 
                                                                            < vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0))))))))))))) 
                                             | (0x80000000U 
                                                == vlSelf->io_posit_i1_3)));
    PvuTop__DOT__greater__DOT___GEN_12 = (1U & ((~ 
                                                 ((0x80000000U 
                                                   == vlSelf->io_posit_i2_2) 
                                                  | ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9) 
                                                     | ((0x80000000U 
                                                         == vlSelf->io_posit_i1_2) 
                                                        | ((IData)(vlSelf->__VdfgTmp_h431d52cc__0) 
                                                           | ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1_2)
                                                               ? 
                                                              ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                               >> 2U)
                                                               : 
                                                              ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2_2)
                                                                ? 
                                                               (~ 
                                                                ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                                 >> 2U))
                                                                : 
                                                               ((IData)(vlSelf->__VdfgTmp_h175b7e19__0) 
                                                                | ((~ (IData)(vlSelf->__VdfgTmp_h7300ed44__0)) 
                                                                   & ((IData)(vlSelf->__VdfgTmp_hb5d700b8__0)
                                                                       ? 
                                                                      ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_10)) 
                                                                       & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_11) 
                                                                          | (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0 
                                                                             <= vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0)))
                                                                       : 
                                                                      ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_10) 
                                                                       | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_11)) 
                                                                          & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0 
                                                                             >= vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0))))))))))))) 
                                                | (0x80000000U 
                                                   == vlSelf->io_posit_i1_2)));
    PvuTop__DOT__less__DOT___GEN_12 = (1U & ((~ ((0x80000000U 
                                                  == vlSelf->io_posit_i2_2) 
                                                 | ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9) 
                                                    | ((0x80000000U 
                                                        == vlSelf->io_posit_i1_2) 
                                                       | ((IData)(vlSelf->__VdfgTmp_h431d52cc__0) 
                                                          | ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1_2)
                                                              ? 
                                                             (~ 
                                                              ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                               >> 2U))
                                                              : 
                                                             ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2_2)
                                                               ? 
                                                              ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                               >> 2U)
                                                               : 
                                                              ((IData)(vlSelf->__VdfgTmp_h7300ed44__0) 
                                                               | ((~ (IData)(vlSelf->__VdfgTmp_h175b7e19__0)) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_hb5d700b8__0)
                                                                      ? 
                                                                     ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_10) 
                                                                      | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_11)) 
                                                                         & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0 
                                                                            > vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0)))
                                                                      : 
                                                                     ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_11) 
                                                                      | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_10)) 
                                                                         & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0 
                                                                            < vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0))))))))))))) 
                                             | (0x80000000U 
                                                == vlSelf->io_posit_i1_2)));
    PvuTop__DOT__greater__DOT___GEN_7 = (1U & ((~ (
                                                   (0x80000000U 
                                                    == vlSelf->io_posit_i2_1) 
                                                   | ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4) 
                                                      | ((0x80000000U 
                                                          == vlSelf->io_posit_i1_1) 
                                                         | ((IData)(vlSelf->__VdfgTmp_ha0210fbc__0) 
                                                            | ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1_1)
                                                                ? 
                                                               ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                                >> 1U)
                                                                : 
                                                               ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2_1)
                                                                 ? 
                                                                (~ 
                                                                 ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                                  >> 1U))
                                                                 : 
                                                                ((IData)(vlSelf->__VdfgTmp_h91b2e26a__0) 
                                                                 | ((~ (IData)(vlSelf->__VdfgTmp_hc465359f__0)) 
                                                                    & ((IData)(vlSelf->__VdfgTmp_hfe81dba1__0)
                                                                        ? 
                                                                       ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_5)) 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_6) 
                                                                           | (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0 
                                                                              <= vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0)))
                                                                        : 
                                                                       ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_5) 
                                                                        | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_6)) 
                                                                           & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0 
                                                                              >= vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0))))))))))))) 
                                               | (0x80000000U 
                                                  == vlSelf->io_posit_i1_1)));
    PvuTop__DOT__less__DOT___GEN_7 = (1U & ((~ ((0x80000000U 
                                                 == vlSelf->io_posit_i2_1) 
                                                | ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4) 
                                                   | ((0x80000000U 
                                                       == vlSelf->io_posit_i1_1) 
                                                      | ((IData)(vlSelf->__VdfgTmp_ha0210fbc__0) 
                                                         | ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1_1)
                                                             ? 
                                                            (~ 
                                                             ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                              >> 1U))
                                                             : 
                                                            ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2_1)
                                                              ? 
                                                             ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                              >> 1U)
                                                              : 
                                                             ((IData)(vlSelf->__VdfgTmp_hc465359f__0) 
                                                              | ((~ (IData)(vlSelf->__VdfgTmp_h91b2e26a__0)) 
                                                                 & ((IData)(vlSelf->__VdfgTmp_hfe81dba1__0)
                                                                     ? 
                                                                    ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_5) 
                                                                     | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_6)) 
                                                                        & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0 
                                                                           > vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0)))
                                                                     : 
                                                                    ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_6) 
                                                                     | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_5)) 
                                                                        & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0 
                                                                           < vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0))))))))))))) 
                                            | (0x80000000U 
                                               == vlSelf->io_posit_i1_1)));
    PvuTop__DOT__greater__DOT___GEN_2 = (1U & ((~ (
                                                   (0x80000000U 
                                                    == vlSelf->io_posit_i2_0) 
                                                   | ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN) 
                                                      | ((0x80000000U 
                                                          == vlSelf->io_posit_i1_0) 
                                                         | ((IData)(vlSelf->__VdfgTmp_h72d9ce31__0) 
                                                            | ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1)
                                                                ? (IData)(vlSelf->PvuTop__DOT___GEN_134)
                                                                : 
                                                               ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2)
                                                                 ? 
                                                                (~ (IData)(vlSelf->PvuTop__DOT___GEN_40))
                                                                 : 
                                                                ((IData)(vlSelf->__VdfgTmp_he53970bf__0) 
                                                                 | ((~ (IData)(vlSelf->__VdfgTmp_hf7267e6a__0)) 
                                                                    & ((IData)(vlSelf->__VdfgTmp_hffb5dbbb__0)
                                                                        ? 
                                                                       ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_0)) 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_1) 
                                                                           | (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0 
                                                                              <= vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0)))
                                                                        : 
                                                                       ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_0) 
                                                                        | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_1)) 
                                                                           & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0 
                                                                              >= vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0))))))))))))) 
                                               | (0x80000000U 
                                                  == vlSelf->io_posit_i1_0)));
    PvuTop__DOT__less__DOT___GEN_2 = (1U & ((~ ((0x80000000U 
                                                 == vlSelf->io_posit_i2_0) 
                                                | ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN) 
                                                   | ((0x80000000U 
                                                       == vlSelf->io_posit_i1_0) 
                                                      | ((IData)(vlSelf->__VdfgTmp_h72d9ce31__0) 
                                                         | ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero1)
                                                             ? 
                                                            (~ (IData)(vlSelf->PvuTop__DOT___GEN_134))
                                                             : 
                                                            ((IData)(vlSelf->PvuTop__DOT__greater__DOT__is_zero2)
                                                              ? (IData)(vlSelf->PvuTop__DOT___GEN_40)
                                                              : 
                                                             ((IData)(vlSelf->__VdfgTmp_hf7267e6a__0) 
                                                              | ((~ (IData)(vlSelf->__VdfgTmp_he53970bf__0)) 
                                                                 & ((IData)(vlSelf->__VdfgTmp_hffb5dbbb__0)
                                                                     ? 
                                                                    ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_0) 
                                                                     | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_1)) 
                                                                        & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0 
                                                                           > vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0)))
                                                                     : 
                                                                    ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_1) 
                                                                     | ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_0)) 
                                                                        & (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0 
                                                                           < vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0))))))))))))) 
                                            | (0x80000000U 
                                               == vlSelf->io_posit_i1_0)));
    vlSelf->__VdfgTmp_h55cd16c8__0 = (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164) 
                                       | (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165))
                                       ? 0U : (0xffU 
                                               & (((0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a) 
                                                   | (0U 
                                                      == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b))
                                                   ? (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T_6)
                                                   : 
                                                  ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T_6) 
                                                   - 
                                                   ((0xc0U 
                                                     & ((- (IData)(
                                                                   ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_214) 
                                                                    & ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_213 
                                                                        & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_212 
                                                                           & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_211 
                                                                              & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_210 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_209 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_208 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_207 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_206 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_205 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_204 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_203 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_202 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_201 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_200 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_199 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_198 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_197 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_196 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_195 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_194 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_193 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_192 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_191 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_190 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_189 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_188 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_187 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_186 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_185 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_184 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_183)))))))))))))))))))))))))))))) 
                                                                       >> 0x1cU)))) 
                                                        << 6U)) 
                                                    | (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_3))))));
    vlSelf->__VdfgTmp_h943bd71d__0 = (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109) 
                                       | (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110))
                                       ? 0U : (0xffU 
                                               & (((0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a) 
                                                   | (0U 
                                                      == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b))
                                                   ? (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T_4)
                                                   : 
                                                  ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T_4) 
                                                   - 
                                                   ((0xc0U 
                                                     & ((- (IData)(
                                                                   ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_160) 
                                                                    & ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_159 
                                                                        & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_158 
                                                                           & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_157 
                                                                              & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_156 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_155 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_154 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_153 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_152 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_151 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_150 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_149 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_148 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_147 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_146 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_145 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_144 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_143 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_142 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_141 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_140 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_139 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_138 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_137 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_136 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_135 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_134 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_133 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_132 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_131 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_130 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_129)))))))))))))))))))))))))))))) 
                                                                       >> 0x1cU)))) 
                                                        << 6U)) 
                                                    | (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_2))))));
    vlSelf->__VdfgTmp_h7d90114e__0 = (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54) 
                                       | (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55))
                                       ? 0U : (0xffU 
                                               & (((0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a) 
                                                   | (0U 
                                                      == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b))
                                                   ? (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T_2)
                                                   : 
                                                  ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T_2) 
                                                   - 
                                                   ((0xc0U 
                                                     & ((- (IData)(
                                                                   ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_106) 
                                                                    & ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_105 
                                                                        & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_104 
                                                                           & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_103 
                                                                              & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_102 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_101 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_100 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_99 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_98 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_97 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_96 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_95 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_94 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_93 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_92 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_91 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_90 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_89 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_88 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_87 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_86 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_85 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_84 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_83 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_82 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_81 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_80 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_79 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_78 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_77 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_76 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_75)))))))))))))))))))))))))))))) 
                                                                       >> 0x1cU)))) 
                                                        << 6U)) 
                                                    | (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_1))))));
    vlSelf->__VdfgTmp_h208688f8__0 = (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN) 
                                       | (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0))
                                       ? 0U : (0xffU 
                                               & (((0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a) 
                                                   | (0U 
                                                      == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b))
                                                   ? (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T)
                                                   : 
                                                  ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___exp_diff_T) 
                                                   - 
                                                   ((0xc0U 
                                                     & ((- (IData)(
                                                                   ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_52) 
                                                                    & ((vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_51 
                                                                        & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_50 
                                                                           & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_49 
                                                                              & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_48 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_47 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_46 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_45 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_44 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_43 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_42 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_41 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_40 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_39 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_38 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_37 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_36 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_35 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_34 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_33 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_32 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_31 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_30 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_29 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_28 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_27 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_26 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_25 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_24 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_23 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_22 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT__next_remainder_21)))))))))))))))))))))))))))))) 
                                                                       >> 0x1cU)))) 
                                                        << 6U)) 
                                                    | (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros))))));
    if (vlSelf->__VdfgTmp_hce76d41b__0) {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[0U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[1U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[0U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[1U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[0U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[1U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i[0U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i[1U] = 0U;
    } else {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[0U] 
            = (IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164)
                        ? 0ULL : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)
                                   ? 0x8000000ULL : 
                                  ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                    ? 0ULL : ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                               ? 0x7fffffffffffffULL
                                               : ((QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & (((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[1U] 
                                                                        << 5U) 
                                                                       | (vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[0U] 
                                                                          >> 0x1bU)) 
                                                                      + 
                                                                      (1U 
                                                                       & ((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[0U] 
                                                                           >> 0x1aU) 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xa000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                ((0x18U 
                                                                                >= (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_3))
                                                                                 ? 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc77c2139__0 
                                                                                << (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_3)))
                                                                                 : 0U)))))))))) 
                                                  << 0x1dU))))));
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[1U] 
            = (IData)((((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164)
                         ? 0ULL : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)
                                    ? 0x8000000ULL : 
                                   ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                     ? 0ULL : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                ? 0x7fffffffffffffULL
                                                : ((QData)((IData)(
                                                                   (0x7ffffffU 
                                                                    & (((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[1U] 
                                                                         << 5U) 
                                                                        | (vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[0U] 
                                                                           >> 0x1bU)) 
                                                                       + 
                                                                       (1U 
                                                                        & ((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[0U] 
                                                                            >> 0x1aU) 
                                                                           & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xa000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_3[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                ((0x18U 
                                                                                >= (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_3))
                                                                                 ? 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc77c2139__0 
                                                                                << (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_3)))
                                                                                 : 0U)))))))))) 
                                                   << 0x1dU))))) 
                       >> 0x20U));
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[0U] 
            = (IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109)
                        ? 0ULL : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)
                                   ? 0x8000000ULL : 
                                  ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                    ? 0ULL : ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                                               ? 0x7fffffffffffffULL
                                               : ((QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & (((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[1U] 
                                                                        << 5U) 
                                                                       | (vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[0U] 
                                                                          >> 0x1bU)) 
                                                                      + 
                                                                      (1U 
                                                                       & ((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[0U] 
                                                                           >> 0x1aU) 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xa000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                ((0x18U 
                                                                                >= (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_2))
                                                                                 ? 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h191d4ea2__0 
                                                                                << (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_2)))
                                                                                 : 0U)))))))))) 
                                                  << 0x1dU))))));
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[1U] 
            = (IData)((((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109)
                         ? 0ULL : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)
                                    ? 0x8000000ULL : 
                                   ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                     ? 0ULL : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                                                ? 0x7fffffffffffffULL
                                                : ((QData)((IData)(
                                                                   (0x7ffffffU 
                                                                    & (((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[1U] 
                                                                         << 5U) 
                                                                        | (vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[0U] 
                                                                           >> 0x1bU)) 
                                                                       + 
                                                                       (1U 
                                                                        & ((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[0U] 
                                                                            >> 0x1aU) 
                                                                           & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xa000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_2[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                ((0x18U 
                                                                                >= (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_2))
                                                                                 ? 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h191d4ea2__0 
                                                                                << (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_2)))
                                                                                 : 0U)))))))))) 
                                                   << 0x1dU))))) 
                       >> 0x20U));
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[0U] 
            = (IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54)
                        ? 0ULL : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)
                                   ? 0x8000000ULL : 
                                  ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                    ? 0ULL : ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                                               ? 0x7fffffffffffffULL
                                               : ((QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & (((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[1U] 
                                                                        << 5U) 
                                                                       | (vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[0U] 
                                                                          >> 0x1bU)) 
                                                                      + 
                                                                      (1U 
                                                                       & ((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[0U] 
                                                                           >> 0x1aU) 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xa000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                ((0x18U 
                                                                                >= (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_1))
                                                                                 ? 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc0233086__0 
                                                                                << (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_1)))
                                                                                 : 0U)))))))))) 
                                                  << 0x1dU))))));
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[1U] 
            = (IData)((((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54)
                         ? 0ULL : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)
                                    ? 0x8000000ULL : 
                                   ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                     ? 0ULL : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                                                ? 0x7fffffffffffffULL
                                                : ((QData)((IData)(
                                                                   (0x7ffffffU 
                                                                    & (((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[1U] 
                                                                         << 5U) 
                                                                        | (vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[0U] 
                                                                           >> 0x1bU)) 
                                                                       + 
                                                                       (1U 
                                                                        & ((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[0U] 
                                                                            >> 0x1aU) 
                                                                           & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xa000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T_1[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                ((0x18U 
                                                                                >= (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_1))
                                                                                 ? 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_hc0233086__0 
                                                                                << (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros_1)))
                                                                                 : 0U)))))))))) 
                                                   << 0x1dU))))) 
                       >> 0x20U));
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i[0U] 
            = (IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN)
                        ? 0ULL : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0)
                                   ? 0x8000000ULL : 
                                  ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                    ? 0ULL : ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                                               ? 0x7fffffffffffffULL
                                               : ((QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & (((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[1U] 
                                                                        << 5U) 
                                                                       | (vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[0U] 
                                                                          >> 0x1bU)) 
                                                                      + 
                                                                      (1U 
                                                                       & ((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[0U] 
                                                                           >> 0x1aU) 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xa000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                ((0x18U 
                                                                                >= (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros))
                                                                                 ? 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h40459468__0 
                                                                                << (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros)))
                                                                                 : 0U)))))))))) 
                                                  << 0x1dU))))));
        vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i[1U] 
            = (IData)((((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN)
                         ? 0ULL : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0)
                                    ? 0x8000000ULL : 
                                   ((0U == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                     ? 0ULL : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                                                ? 0x7fffffffffffffULL
                                                : ((QData)((IData)(
                                                                   (0x7ffffffU 
                                                                    & (((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[1U] 
                                                                         << 5U) 
                                                                        | (vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[0U] 
                                                                           >> 0x1bU)) 
                                                                       + 
                                                                       (1U 
                                                                        & ((vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[0U] 
                                                                            >> 0x1aU) 
                                                                           & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xa000000U 
                                                                                & vlSelf->PvuTop__DOT__div_inst__DOT___normalized_quotient_T[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                ((0x18U 
                                                                                >= (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros))
                                                                                 ? 
                                                                                (0x1ffffffU 
                                                                                & (vlSelf->PvuTop__DOT__div_inst__DOT____VdfgTmp_h40459468__0 
                                                                                << (IData)(vlSelf->PvuTop__DOT__div_inst__DOT__leading_zeros)))
                                                                                 : 0U)))))))))) 
                                                   << 0x1dU))))) 
                       >> 0x20U));
    }
    vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[2U] = 0U;
    vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[2U] = 0U;
    vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[2U] = 0U;
    vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter__io_operand_i[2U] = 0U;
    if (vlSelf->__VdfgTmp_h5f8b4dd4__0) {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i[0U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i[1U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i[0U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i[1U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i[0U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i[1U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i[0U] = 0U;
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i[1U] = 0U;
    } else {
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i[0U] 
            = (IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                        ? 0ULL : (0xffffffffffffffULL 
                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))));
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i[1U] 
            = (IData)((((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                         ? 0ULL : (0xffffffffffffffULL 
                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                      + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                       >> 0x20U));
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i[0U] 
            = (IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                        ? 0ULL : (0xffffffffffffffULL 
                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))));
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i[1U] 
            = (IData)((((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                         ? 0ULL : (0xffffffffffffffULL 
                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                      + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                       >> 0x20U));
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i[0U] 
            = (IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                        ? 0ULL : (0xffffffffffffffULL 
                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))));
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i[1U] 
            = (IData)((((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                         ? 0ULL : (0xffffffffffffffULL 
                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                      + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                       >> 0x20U));
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i[0U] 
            = (IData)(((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                        ? 0ULL : (0xffffffffffffffULL 
                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))));
        vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i[1U] 
            = (IData)((((0x100U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                         ? 0ULL : (0xffffffffffffffULL 
                                   & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                      + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                       >> 0x20U));
    }
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_3__io_operand_i[2U] = 0U;
    vlSelf->__VdfgTmp_h1a8c0352__0 = ((0x37U >= ((0x1eU 
                                                  < (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_3_T))
                                                  ? 0x1eU
                                                  : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_3_T)))
                                       ? (0xffffffffffffffULL 
                                          & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_2)
                                               ? 0ULL
                                               : ((0x100U 
                                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                                   ? 0ULL
                                                   : 
                                                  (0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                      + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                             >> ((0x1eU 
                                                  < (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_3_T))
                                                  ? 0x1eU
                                                  : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_3_T))))
                                       : 0ULL);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_2__io_operand_i[2U] = 0U;
    vlSelf->__VdfgTmp_h35a0e36b__0 = ((0x37U >= ((0x1eU 
                                                  < (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_2_T))
                                                  ? 0x1eU
                                                  : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_2_T)))
                                       ? (0xffffffffffffffULL 
                                          & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_1)
                                               ? 0ULL
                                               : ((0x100U 
                                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                   ? 0ULL
                                                   : 
                                                  (0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                      + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                             >> ((0x1eU 
                                                  < (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_2_T))
                                                  ? 0x1eU
                                                  : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_2_T))))
                                       : 0ULL);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter_1__io_operand_i[2U] = 0U;
    vlSelf->__VdfgTmp_h34eee576__0 = ((0x37U >= ((0x1eU 
                                                  < (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_1_T))
                                                  ? 0x1eU
                                                  : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_1_T)))
                                       ? (0xffffffffffffffULL 
                                          & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN_0)
                                               ? 0ULL
                                               : ((0x100U 
                                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                   ? 0ULL
                                                   : 
                                                  (0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                      + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                             >> ((0x1eU 
                                                  < (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_1_T))
                                                  ? 0x1eU
                                                  : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_1_T))))
                                       : 0ULL);
    vlSelf->PvuTop__DOT__frac_norm_mul__DOT____Vcellinp__shifter__io_operand_i[2U] = 0U;
    vlSelf->__VdfgTmp_h9c6aa78d__0 = ((0x37U >= ((0x1eU 
                                                  < (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_0_T))
                                                  ? 0x1eU
                                                  : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_0_T)))
                                       ? (0xffffffffffffffULL 
                                          & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT___GEN)
                                               ? 0ULL
                                               : ((0x100U 
                                                   & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                                   ? 0ULL
                                                   : 
                                                  (0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                      + vlSymsp->TOP__PvuTop__DOT__dotproduct__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                             >> ((0x1eU 
                                                  < (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_0_T))
                                                  ? 0x1eU
                                                  : (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__frac_compare__DOT___shift_amount_0_T))))
                                       : 0ULL);
    if (PvuTop__DOT__greater__DOT___GEN_17) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h459f37c1__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0;
        __VdfgTmp_hc5219626__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i 
                                           >> 0x18U));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h459f37c1__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0;
        __VdfgTmp_hc5219626__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                           >> 0x18U));
    }
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878add96__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14) 
                 | ((IData)(PvuTop__DOT__greater__DOT___GEN_17)
                     ? ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                        >> 3U) : ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                  >> 3U))));
    if (PvuTop__DOT__less__DOT___GEN_17) {
        vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_h0207e970__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2ad44887__0;
        __VdfgTmp_h55726fbe__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i 
                                           >> 0x18U));
    } else {
        vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_h0207e970__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7bc97152__0;
        __VdfgTmp_h55726fbe__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                           >> 0x18U));
    }
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878add96__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14) 
                 | ((IData)(PvuTop__DOT__less__DOT___GEN_17)
                     ? ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                        >> 3U) : ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                  >> 3U))));
    if (PvuTop__DOT__greater__DOT___GEN_12) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc3975437__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0;
        __VdfgTmp_hdf046a1b__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i 
                                           >> 0x10U));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc3975437__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0;
        __VdfgTmp_hdf046a1b__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                           >> 0x10U));
    }
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878e0f03__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9) 
                 | ((IData)(PvuTop__DOT__greater__DOT___GEN_12)
                     ? ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                        >> 2U) : ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                  >> 2U))));
    if (PvuTop__DOT__less__DOT___GEN_12) {
        vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc3b54484__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2a5eb3cf__0;
        __VdfgTmp_hf0c63922__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i 
                                           >> 0x10U));
    } else {
        vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc3b54484__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b53ba00__0;
        __VdfgTmp_hf0c63922__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                           >> 0x10U));
    }
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878e0f03__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9) 
                 | ((IData)(PvuTop__DOT__less__DOT___GEN_12)
                     ? ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                        >> 2U) : ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                  >> 2U))));
    if (PvuTop__DOT__greater__DOT___GEN_7) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h097c16a4__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0;
        __VdfgTmp_h7ac7367c__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i 
                                           >> 8U));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h097c16a4__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0;
        __VdfgTmp_h7ac7367c__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                           >> 8U));
    }
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f57e3c__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4) 
                 | ((IData)(PvuTop__DOT__greater__DOT___GEN_7)
                     ? ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                        >> 1U) : ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                  >> 1U))));
    if (PvuTop__DOT__less__DOT___GEN_7) {
        vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hda3bad21__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h29ad7f4e__0;
        __VdfgTmp_hc69c61d7__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i 
                                           >> 8U));
    } else {
        vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hda3bad21__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7ed67781__0;
        __VdfgTmp_hc69c61d7__0 = (0xffU & (vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i 
                                           >> 8U));
    }
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f57e3c__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4) 
                 | ((IData)(PvuTop__DOT__less__DOT___GEN_7)
                     ? ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                        >> 1U) : ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                  >> 1U))));
    if (PvuTop__DOT__greater__DOT___GEN_2) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b829ab6__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0;
        __VdfgTmp_h55b4dffa__0 = (0xffU & vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i);
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b829ab6__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0;
        __VdfgTmp_h55b4dffa__0 = (0xffU & vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i);
    }
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f12fa9__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN) 
                 | ((IData)(PvuTop__DOT__greater__DOT___GEN_2)
                     ? (IData)(vlSelf->PvuTop__DOT___GEN_134)
                     : (IData)(vlSelf->PvuTop__DOT___GEN_40))));
    if (PvuTop__DOT__less__DOT___GEN_2) {
        vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc528e02b__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h2894fb38__0;
        __VdfgTmp_ha33f4f0c__0 = (0xffU & vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i);
    } else {
        vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc528e02b__0 
            = vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h799ff3f5__0;
        __VdfgTmp_ha33f4f0c__0 = (0xffU & vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp1_i);
    }
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f12fa9__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN) 
                 | ((IData)(PvuTop__DOT__less__DOT___GEN_2)
                     ? (IData)(vlSelf->PvuTop__DOT___GEN_134)
                     : (IData)(vlSelf->PvuTop__DOT___GEN_40))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4 
        = (IData)(((vlSelf->__VdfgTmp_h9c6aa78d__0 
                    ^ vlSelf->__VdfgTmp_h34eee576__0) 
                   >> 0x37U));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT___carryWire_T_4 
        = (1U & ((IData)(vlSelf->__VdfgTmp_h9c6aa78d__0) 
                 ^ (IData)(vlSelf->__VdfgTmp_h34eee576__0)));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 1U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                             >> 1U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 2U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                             >> 2U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 3U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                             >> 3U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 4U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                             >> 4U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 5U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                             >> 5U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 6U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                             >> 6U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 7U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                             >> 7U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 8U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                             >> 8U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 9U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                             >> 9U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0xaU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                               >> 0xaU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0xbU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                               >> 0xbU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0xcU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                               >> 0xcU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0xdU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                               >> 0xdU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0xeU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                               >> 0xeU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0xfU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                               >> 0xfU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x10U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x10U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x11U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x11U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x12U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x12U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x13U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x13U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x14U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x14U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x15U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x15U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x16U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x16U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x17U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x17U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x18U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x18U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x19U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x19U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x1aU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x1aU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x1bU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x1bU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x1cU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x1cU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x1dU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x1dU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x1eU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x1eU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x1fU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x1fU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x20U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x20U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x21U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x21U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x22U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x22U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x23U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x23U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x24U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x24U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x25U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x25U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x26U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x26U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x27U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x27U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x28U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x28U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x29U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x29U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x2aU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x2aU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x2bU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x2bU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x2cU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x2cU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x2dU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x2dU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x2eU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x2eU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x2fU)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x2fU))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x30U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x30U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x31U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x31U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x32U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x32U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x33U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x33U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x34U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x34U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x35U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x35U))));
    PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT___carryWire_T_4 
        = (1U & ((IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                          >> 0x36U)) ^ (IData)((vlSelf->__VdfgTmp_h34eee576__0 
                                                >> 0x36U))));
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)) 
           & ((IData)(__VdfgTmp_hc5219626__0) >> 7U));
    if ((1U == (IData)(vlSelf->io_op))) {
        vlSelf->PvuTop__DOT___GEN_88 = (1U & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                              & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2) 
                                                  | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                  >> 3U)
                                                  : 
                                                 ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                  >> 3U))));
        vlSelf->PvuTop__DOT___GEN_87 = (1U & ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                              & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1) 
                                                  | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                  >> 2U)
                                                  : 
                                                 ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                  >> 2U))));
        vlSelf->PvuTop__DOT___GEN_86 = (1U & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                              & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1))
                                                  ? 
                                                 ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                  >> 1U)
                                                  : 
                                                 ((IData)(vlSelf->PvuTop__DOT___GEN_134) 
                                                  >> 1U))));
        vlSelf->PvuTop__DOT___GEN_85 = (1U & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                              & (((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN) 
                                                  | (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater))
                                                  ? (IData)(vlSelf->PvuTop__DOT___GEN_40)
                                                  : (IData)(vlSelf->PvuTop__DOT___GEN_134))));
    } else if ((2U == (IData)(vlSelf->io_op))) {
        vlSelf->PvuTop__DOT___GEN_88 = (1U & ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_2)
                                               ? ((vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h3a630f85__0 
                                                   != vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0b529d0d__0) 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_3)) 
                                                     ^ 
                                                     ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                      >> 3U)))
                                               : ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                  >> 3U)));
        vlSelf->PvuTop__DOT___GEN_87 = (1U & ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_1)
                                               ? ((vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39ddc1a5__0 
                                                   != vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e8cac5d__0) 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_2)) 
                                                     ^ 
                                                     ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                      >> 2U)))
                                               : ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                  >> 2U)));
        vlSelf->PvuTop__DOT___GEN_86 = (1U & ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN_0)
                                               ? ((vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h39412272__0 
                                                   != vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h0e3057ea__0) 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater_1)) 
                                                     ^ 
                                                     ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                      >> 1U)))
                                               : ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                  >> 1U)));
        vlSelf->PvuTop__DOT___GEN_85 = (1U & ((IData)(vlSelf->PvuTop__DOT__add__DOT___GEN)
                                               ? ((vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h38f0a4f9__0 
                                                   != vlSelf->PvuTop__DOT__add__DOT____VdfgTmp_h09a65a41__0) 
                                                  & ((~ (IData)(vlSelf->PvuTop__DOT__add__DOT__mant1_greater)) 
                                                     ^ (IData)(vlSelf->PvuTop__DOT___GEN_40)))
                                               : (IData)(vlSelf->PvuTop__DOT___GEN_40)));
    } else if ((3U == (IData)(vlSelf->io_op))) {
        vlSelf->PvuTop__DOT___GEN_88 = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__io_pir_sign_o) 
                                              >> 3U));
        vlSelf->PvuTop__DOT___GEN_87 = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__io_pir_sign_o) 
                                              >> 2U));
        vlSelf->PvuTop__DOT___GEN_86 = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__io_pir_sign_o) 
                                              >> 1U));
        vlSelf->PvuTop__DOT___GEN_85 = (1U & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__io_pir_sign_o));
    } else if ((4U == (IData)(vlSelf->io_op))) {
        vlSelf->PvuTop__DOT___GEN_88 = (1U & ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164) 
                                              | ((~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)) 
                                                 & (((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                     ^ (IData)(vlSelf->PvuTop__DOT___GEN_134)) 
                                                    >> 3U))));
        vlSelf->PvuTop__DOT___GEN_87 = (1U & ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109) 
                                              | ((~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)) 
                                                 & (((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                     ^ (IData)(vlSelf->PvuTop__DOT___GEN_134)) 
                                                    >> 2U))));
        vlSelf->PvuTop__DOT___GEN_86 = (1U & ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54) 
                                              | ((~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)) 
                                                 & (((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                     ^ (IData)(vlSelf->PvuTop__DOT___GEN_134)) 
                                                    >> 1U))));
        vlSelf->PvuTop__DOT___GEN_85 = (1U & ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN) 
                                              | ((~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0)) 
                                                 & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                    ^ (IData)(vlSelf->PvuTop__DOT___GEN_134)))));
    } else {
        vlSelf->PvuTop__DOT___GEN_88 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_84)) 
                                              & ((8U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878add96__0)
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->io_op)) 
                                                  & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878add96__0)))));
        vlSelf->PvuTop__DOT___GEN_87 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_84)) 
                                              & ((8U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878e0f03__0)
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->io_op)) 
                                                  & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878e0f03__0)))));
        vlSelf->PvuTop__DOT___GEN_86 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_84)) 
                                              & ((8U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->io_op)) 
                                                  & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)))));
        vlSelf->PvuTop__DOT___GEN_85 = (1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_84)) 
                                              & ((8U 
                                                  == (IData)(vlSelf->io_op))
                                                  ? (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)
                                                  : 
                                                 ((9U 
                                                   == (IData)(vlSelf->io_op)) 
                                                  & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)))));
    }
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1ce7231a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)) 
           & ((IData)(__VdfgTmp_h55726fbe__0) >> 7U));
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)) 
           & ((IData)(__VdfgTmp_hdf046a1b__0) >> 7U));
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c07425a__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)) 
           & ((IData)(__VdfgTmp_hf0c63922__0) >> 7U));
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)) 
           & ((IData)(__VdfgTmp_h7ac7367c__0) >> 7U));
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c547640__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)) 
           & ((IData)(__VdfgTmp_hc69c61d7__0) >> 7U));
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)) 
           & ((IData)(__VdfgTmp_h55b4dffa__0) >> 7U));
    PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c349387__0 
        = ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)) 
           & ((IData)(__VdfgTmp_ha33f4f0c__0) >> 7U));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0 
        = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4) 
           ^ (vlSelf->__VdfgTmp_h35a0e36b__0 >> 0x37U));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT___carryWire_T_4) 
                 ^ (IData)(vlSelf->__VdfgTmp_h35a0e36b__0)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT___carryWire_T_4) 
                  & (IData)(vlSelf->__VdfgTmp_h35a0e36b__0)) 
                 | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT___carryWire_T_4)) 
                    & (IData)(vlSelf->__VdfgTmp_h9c6aa78d__0))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 1U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT___carryWire_T_4)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                    >> 1U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 1U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 2U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT___carryWire_T_4)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                    >> 2U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 2U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 3U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT___carryWire_T_4)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                    >> 3U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 3U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 4U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT___carryWire_T_4)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                    >> 4U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 4U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 5U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT___carryWire_T_4)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                    >> 5U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 5U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 6U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT___carryWire_T_4)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                    >> 6U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 6U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 7U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT___carryWire_T_4)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                    >> 7U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 7U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 8U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT___carryWire_T_4)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                    >> 8U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 8U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 9U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT___carryWire_T_4)) 
                                         & (IData)(
                                                   (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                    >> 9U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 9U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0xaU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT___carryWire_T_4)) 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                      >> 0xaU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0xaU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0xbU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT___carryWire_T_4)) 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                      >> 0xbU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0xbU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0xcU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT___carryWire_T_4)) 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                      >> 0xcU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0xcU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0xdU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT___carryWire_T_4)) 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                      >> 0xdU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0xdU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0xeU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT___carryWire_T_4)) 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                      >> 0xeU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0xeU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0xfU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT___carryWire_T_4)) 
                                           & (IData)(
                                                     (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                      >> 0xfU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0xfU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x10U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x10U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x10U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x11U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x11U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x11U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x12U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x12U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x12U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x13U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x13U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x13U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x14U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x14U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x14U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x15U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x15U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x15U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x16U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x16U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x16U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x17U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x17U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x17U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x18U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x18U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x18U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x19U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x19U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x19U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x1aU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x1aU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x1aU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x1bU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x1bU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x1bU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x1cU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x1cU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x1cU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x1dU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x1dU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x1dU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x1eU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x1eU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x1eU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x1fU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x1fU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x1fU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x20U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x20U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x20U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x21U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x21U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x21U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x22U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x22U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x22U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x23U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x23U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x23U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x24U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x24U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x24U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x25U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x25U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x25U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x26U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x26U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x26U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x27U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x27U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x27U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x28U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x28U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x28U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x29U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x29U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x29U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x2aU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x2aU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x2aU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x2bU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x2bU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x2bU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x2cU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x2cU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x2cU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x2dU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x2dU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x2dU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x2eU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x2eU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x2eU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x2fU))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x2fU)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x2fU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x30U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x30U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x30U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x31U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x31U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x31U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x32U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x32U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x32U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x33U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x33U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x33U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x34U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x34U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x34U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x35U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x35U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x35U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout 
        = (1U & (((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT___carryWire_T_4) 
                  & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                             >> 0x36U))) | ((~ (IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT___carryWire_T_4)) 
                                            & (IData)(
                                                      (vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                       >> 0x36U)))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0 
        = (1U & ((IData)(PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT___carryWire_T_4) 
                 ^ (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                            >> 0x36U))));
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h9347f0fa__0 
        = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
            ? 0U : (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h459f37c1__0)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                      ? 0U : (3U & (IData)(__VdfgTmp_hc5219626__0))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(__VdfgTmp_hc5219626__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                         ? 0x1fU : 
                                        (~ ((IData)(__VdfgTmp_hc5219626__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                         ? 0U : ((IData)(__VdfgTmp_hc5219626__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
           & (IData)(vlSelf->PvuTop__DOT___GEN_88));
    if (vlSelf->PvuTop__DOT__greater__DOT___GEN_14) {
        vlSelf->__VdfgTmp_h87dd8442__0 = 0U;
        PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h9347f0fa__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_h87dd8442__0 = __VdfgTmp_hc5219626__0;
        PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h9347f0fa__0 
            = (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_h0207e970__0));
    }
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                      ? 0U : (3U & (IData)(__VdfgTmp_h55726fbe__0))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h9347f0fa__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(__VdfgTmp_h55726fbe__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h9347f0fa__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1ce7231a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                         ? 0x1fU : 
                                        (~ ((IData)(__VdfgTmp_h55726fbe__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                         ? 0U : ((IData)(__VdfgTmp_h55726fbe__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0 
        = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
            ? 0U : (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc3975437__0)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                      ? 0U : (3U & (IData)(__VdfgTmp_hdf046a1b__0))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(__VdfgTmp_hdf046a1b__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                         ? 0x1fU : 
                                        (~ ((IData)(__VdfgTmp_hdf046a1b__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                         ? 0U : ((IData)(__VdfgTmp_hdf046a1b__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0 
        = ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
           & (IData)(vlSelf->PvuTop__DOT___GEN_87));
    if (vlSelf->PvuTop__DOT__greater__DOT___GEN_9) {
        vlSelf->__VdfgTmp_h74bddf7d__0 = 0U;
        PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_h74bddf7d__0 = __VdfgTmp_hdf046a1b__0;
        PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0 
            = (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc3b54484__0));
    }
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                      ? 0U : (3U & (IData)(__VdfgTmp_hf0c63922__0))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(__VdfgTmp_hf0c63922__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c07425a__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                         ? 0x1fU : 
                                        (~ ((IData)(__VdfgTmp_hf0c63922__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                         ? 0U : ((IData)(__VdfgTmp_hf0c63922__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h962fac1b__0 
        = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
            ? 0U : (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h097c16a4__0)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                      ? 0U : (3U & (IData)(__VdfgTmp_h7ac7367c__0))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(__VdfgTmp_h7ac7367c__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                         ? 0x1fU : 
                                        (~ ((IData)(__VdfgTmp_h7ac7367c__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                         ? 0U : ((IData)(__VdfgTmp_h7ac7367c__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f57e3c__0 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
           & (IData)(vlSelf->PvuTop__DOT___GEN_86));
    if (vlSelf->PvuTop__DOT__greater__DOT___GEN_4) {
        vlSelf->__VdfgTmp_h858cd4b3__0 = 0U;
        PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h962fac1b__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_h858cd4b3__0 = __VdfgTmp_h7ac7367c__0;
        PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h962fac1b__0 
            = (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hda3bad21__0));
    }
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                      ? 0U : (3U & (IData)(__VdfgTmp_hc69c61d7__0))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h962fac1b__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c547640__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(__VdfgTmp_hc69c61d7__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h962fac1b__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c547640__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c547640__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                         ? 0x1fU : 
                                        (~ ((IData)(__VdfgTmp_hc69c61d7__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                         ? 0U : ((IData)(__VdfgTmp_hc69c61d7__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h91c3a767__0 
        = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
            ? 0U : (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b829ab6__0)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                      ? 0U : (3U & (IData)(__VdfgTmp_h55b4dffa__0))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(__VdfgTmp_h55b4dffa__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                         ? 0x1fU : 
                                        (~ ((IData)(__VdfgTmp_h55b4dffa__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                         ? 0U : ((IData)(__VdfgTmp_h55b4dffa__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f12fa9__0 
        = ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
           & (IData)(vlSelf->PvuTop__DOT___GEN_85));
    if (vlSelf->PvuTop__DOT__greater__DOT___GEN) {
        vlSelf->__VdfgTmp_hfeb2b7ac__0 = 0U;
        PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h91c3a767__0 = 0U;
    } else {
        vlSelf->__VdfgTmp_hfeb2b7ac__0 = __VdfgTmp_h55b4dffa__0;
        PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h91c3a767__0 
            = (0x7ffffffU & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc528e02b__0));
    }
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                      ? 0U : (3U & (IData)(__VdfgTmp_ha33f4f0c__0))))) 
                    << 0x39U) | ((QData)((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                                                           ? 0U
                                                                           : 
                                                                          (3U 
                                                                           & (IData)(__VdfgTmp_ha33f4f0c__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                         ? 0x1fU : 
                                        (~ ((IData)(__VdfgTmp_ha33f4f0c__0) 
                                            >> 2U))))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                         ? 0U : ((IData)(__VdfgTmp_ha33f4f0c__0) 
                                                 >> 2U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0 
        = ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0) 
           ^ (vlSelf->__VdfgTmp_h1a8c0352__0 >> 0x37U));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 1U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 2U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 3U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 4U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 5U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 6U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 7U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 8U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 9U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0xaU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0xbU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0xcU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0xdU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0xeU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0xfU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x10U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x11U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x12U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x13U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x14U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x15U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x16U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x17U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x18U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x19U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x1aU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x1bU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x1cU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x1dU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x1eU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x1fU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x20U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x21U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x22U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x23U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x24U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x25U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x26U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x27U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x28U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x29U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x2aU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x2bU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x2cU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x2dU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x2eU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x2fU))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x30U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x31U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x32U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x33U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x34U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x35U))));
    vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0 
        = (1U & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0) 
                 ^ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                            >> 0x36U))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_ha5172d5a__0, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_ha5172d5a__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_ha5172d5a__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_ha5172d5a__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h3c240063__0, vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h3c240063__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h3c240063__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h3c240063__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h2ae21378__0, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h2ae21378__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h2ae21378__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h2ae21378__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h73044f8a__0, vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h73044f8a__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h73044f8a__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h73044f8a__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf110e79f__0, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hf110e79f__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hf110e79f__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf110e79f__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h1f92b595__0, vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h1f92b595__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h1f92b595__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h1f92b595__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4294c7ca__0, vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h4294c7ca__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h4294c7ca__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4294c7ca__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h073d8f88__0, vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h073d8f88__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h073d8f88__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h073d8f88__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_sum_o 
        = (((QData)((IData)((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4) 
                                    & (IData)((vlSelf->__VdfgTmp_h35a0e36b__0 
                                               >> 0x37U))) 
                                   | ((~ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT___carryWire_T_4)) 
                                      & (IData)((vlSelf->__VdfgTmp_h9c6aa78d__0 
                                                 >> 0x37U))))))) 
            << 0x38U) | (((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                           ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout)))) 
                          << 0x37U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout)))) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout)))) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                                             ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout)))) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout)))) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                   ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout)))) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                      ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout)))) 
                                                     << 0x31U) 
                                                    | (((QData)((IData)(
                                                                        ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                         ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout)))) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(
                                                                           ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                            ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout)))) 
                                                           << 0x2fU) 
                                                          | (((QData)((IData)(
                                                                              ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                               ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout)))) 
                                                              << 0x2eU) 
                                                             | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout)))) 
                                                                 << 0x2dU) 
                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout)))) 
                                                                    << 0x2cU) 
                                                                   | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout)))) 
                                                                       << 0x2bU) 
                                                                      | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout)))) 
                                                                          << 0x2aU) 
                                                                         | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout)))) 
                                                                             << 0x29U) 
                                                                            | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout)))) 
                                                                                << 0x28U) 
                                                                               | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout)) 
                                                                                << 0x1fU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout)) 
                                                                                << 0x1eU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout)) 
                                                                                << 0x1dU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout)) 
                                                                                << 0x1cU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout)) 
                                                                                << 0x1bU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout)) 
                                                                                << 0x1aU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout)) 
                                                                                << 0x19U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout)) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout)) 
                                                                                << 0x17U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout)) 
                                                                                << 0x16U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout)) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout)) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout)) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout)) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout)) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout)) 
                                                                                << 0xfU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout)) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0) 
                                                                                ^ (IData)(vlSelf->__VdfgTmp_h1a8c0352__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_carry_o 
        = (((QData)((IData)((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_hdcc6bc88__0) 
                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_54_io_cout)) 
                                   | (((~ (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                                                   >> 0x37U))) 
                                       ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_55__DOT____VdfgTmp_h31758f64__0)) 
                                      & (IData)((vlSelf->__VdfgTmp_h1a8c0352__0 
                                                 >> 0x37U))))))) 
            << 0x38U) | (((QData)((IData)((1U & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_hdcc6bc88__0) 
                                                  & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_53_io_cout)) 
                                                 | (((~ (IData)(
                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_54__DOT____VdfgTmp_h31758f64__0)) 
                                                    & (IData)(
                                                              (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                               >> 0x36U))))))) 
                          << 0x37U) | (((QData)((IData)(
                                                        (1U 
                                                         & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_hdcc6bc88__0) 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_52_io_cout)) 
                                                            | (((~ (IData)(
                                                                           (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                            >> 0x35U))) 
                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_53__DOT____VdfgTmp_h31758f64__0)) 
                                                               & (IData)(
                                                                         (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                          >> 0x35U))))))) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_hdcc6bc88__0) 
                                                              & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_51_io_cout)) 
                                                             | (((~ (IData)(
                                                                            (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                             >> 0x34U))) 
                                                                 ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_52__DOT____VdfgTmp_h31758f64__0)) 
                                                                & (IData)(
                                                                          (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                           >> 0x34U))))))) 
                                         << 0x35U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                 & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_50_io_cout)) 
                                                                | (((~ (IData)(
                                                                               (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x33U))) 
                                                                    ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_51__DOT____VdfgTmp_h31758f64__0)) 
                                                                   & (IData)(
                                                                             (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                              >> 0x33U))))))) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                    & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_49_io_cout)) 
                                                                   | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x32U))) 
                                                                       ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_50__DOT____VdfgTmp_h31758f64__0)) 
                                                                      & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x32U))))))) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                       & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_48_io_cout)) 
                                                                      | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x31U))) 
                                                                          ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_49__DOT____VdfgTmp_h31758f64__0)) 
                                                                         & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x31U))))))) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                          & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_47_io_cout)) 
                                                                         | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x30U))) 
                                                                             ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_48__DOT____VdfgTmp_h31758f64__0)) 
                                                                            & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x30U))))))) 
                                                     << 0x31U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_46_io_cout)) 
                                                                            | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2fU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_47__DOT____VdfgTmp_h31758f64__0)) 
                                                                               & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2fU))))))) 
                                                        << 0x30U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_45_io_cout)) 
                                                                               | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2eU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_46__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2eU))))))) 
                                                           << 0x2fU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_44_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2dU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_45__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2dU))))))) 
                                                              << 0x2eU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_43_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2cU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_44__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2cU))))))) 
                                                                 << 0x2dU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_42_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2bU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_43__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2bU))))))) 
                                                                    << 0x2cU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_41_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2aU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_42__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x2aU))))))) 
                                                                       << 0x2bU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_40_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x29U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_41__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x29U))))))) 
                                                                          << 0x2aU) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_39_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x28U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_40__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x28U))))))) 
                                                                             << 0x29U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_38_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x27U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_39__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x27U))))))) 
                                                                                << 0x28U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_37_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x26U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_38__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x26U))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_36_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x25U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_37__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x25U))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_35_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x24U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_36__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x24U))))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_34_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x23U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_35__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x23U))))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_33_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x22U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_34__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x22U))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_32_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x21U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_33__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x21U))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_31_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x20U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_32__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x20U))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_30_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1fU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_31__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1fU))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_29_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1eU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_30__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1eU)))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_28_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1dU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_29__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1dU)))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_27_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1cU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_28__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1cU)))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_26_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1bU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_27__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1bU)))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_25_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1aU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_26__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x1aU)))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_24_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x19U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_25__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x19U)))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_23_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x18U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_24__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x18U)))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_22_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x17U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_23__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x17U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_21_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x16U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_22__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x16U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_20_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x15U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_21__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x15U)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_19_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x14U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_20__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x14U)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_18_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x13U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_19__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x13U)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_17_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x12U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_18__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x12U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_16_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x11U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_17__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x11U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_15_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x10U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_16__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0x10U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_14_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xfU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_15__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xfU)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_13_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xeU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_14__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xeU)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_12_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xdU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_13__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xdU)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_11_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xcU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_12__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xcU)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_10_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xbU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_11__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xbU)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_9_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xaU))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_10__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 0xaU)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_8_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 9U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_9__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 9U)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_7_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 8U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_8__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 8U)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_6_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 7U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_7__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 7U)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_5_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 6U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_6__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_4_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 5U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_5__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 5U)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_3_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 4U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_4__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 4U)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_2_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 3U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_3__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 3U)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_1_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 2U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_2__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 2U)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((((IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_hdcc6bc88__0) 
                                                                                & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT___counter_io_cout)) 
                                                                                | (((~ (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 1U))) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter_1__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(
                                                                                (vlSelf->__VdfgTmp_h1a8c0352__0 
                                                                                >> 1U)))) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & ((((~ (IData)(vlSelf->__VdfgTmp_h1a8c0352__0)) 
                                                                                ^ (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__csaTree__DOT__compressor__DOT__counter__DOT____VdfgTmp_h31758f64__0)) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h1a8c0352__0)) 
                                                                                << 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc31c5211__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hc31c5211__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hc31c5211__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hc31c5211__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_ha4fbd0fb__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_ha4fbd0fb__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_ha4fbd0fb__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_ha4fbd0fb__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9d91c8df__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h9d91c8df__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h9d91c8df__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h9d91c8df__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h386357b4__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h386357b4__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h386357b4__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h386357b4__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h21e860d0__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h21e860d0__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h21e860d0__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h21e860d0__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4116a867__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h4116a867__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h4116a867__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4116a867__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h1df77d71__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h1df77d71__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h1df77d71__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h1df77d71__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h52b6fd46__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h52b6fd46__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h52b6fd46__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h52b6fd46__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
        = ((IData)(vlSelf->PvuTop__DOT___GEN_52) ? 0ULL
            : (0x3ffffffffffffffULL & (vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_carry_o 
                                       + vlSelf->PvuTop__DOT__dotproduct__DOT___csaTree_io_sum_o)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h98f37af4__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h98f37af4__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h98f37af4__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h98f37af4__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h2ff979f4__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h2ff979f4__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h2ff979f4__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h2ff979f4__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9bf47469__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h9bf47469__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h9bf47469__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h9bf47469__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h985b4e2a__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h985b4e2a__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h985b4e2a__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h985b4e2a__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h67e824e0__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h67e824e0__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h67e824e0__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h67e824e0__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9faf87d8__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h9faf87d8__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h9faf87d8__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h9faf87d8__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h1c57dce0__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h1c57dce0__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h1c57dce0__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h1c57dce0__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd92f374e__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hd92f374e__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hd92f374e__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd92f374e__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x3aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffffeULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x39U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffffdULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 1U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x38U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffffbULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 2U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x37U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffff7ULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 3U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x36U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffffefULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 4U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x35U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffffdfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 5U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x34U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffffbfULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 6U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x33U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffff7fULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 7U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x32U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffeffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 8U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x31U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffdffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 9U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x30U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffffbffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0xaU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffff7ffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0xbU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffefffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0xcU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffdfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0xdU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffffbfffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0xeU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffff7fffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0xfU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x2aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffeffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x10U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x29U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffdffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x11U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x28U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffffbffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x12U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x27U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffff7ffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x13U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x26U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffefffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x14U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x25U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffdfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x15U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x24U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffffbfffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x16U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x23U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffff7fffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x17U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x22U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffeffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x18U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x21U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffdffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x19U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x20U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffffbffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x1aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1fU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffff7ffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x1bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1eU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffefffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x1cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1dU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x1dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1cU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbfffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x1eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1bU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7fffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x1fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x1aU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffeffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x20U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x19U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x21U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x18U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x22U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x17U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7ffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x23U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x16U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffefffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x24U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x15U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x25U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x14U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbfffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x26U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x13U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7fffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x27U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x12U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffeffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x28U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x11U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x29U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0x10U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x2aU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xfU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7ffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x2bU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xeU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffefffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x2cU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xdU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x2dU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xcU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbfffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x2eU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xbU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7fffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x2fU));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 0xaU)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7feffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x30U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 9U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x31U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 8U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x32U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 7U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7ffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x33U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 6U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7efffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x34U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 5U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x35U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 4U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bfffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x36U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 3U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77fffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x37U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 2U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6ffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x38U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)((vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i 
                         >> 1U)));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5ffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x39U));
    PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0 
        = (1U & (IData)(vlSelf->PvuTop__DOT____Vcellinp__frac_norm_dot__io_pir_frac_i));
    vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3ffffffffffffffULL & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__in_tmp) 
           | ((QData)((IData)(PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT____Vlvbound_h35d08307__0)) 
              << 0x3aU));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf32c7e8b__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hf32c7e8b__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hf32c7e8b__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hf32c7e8b__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h185cc3d7__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h185cc3d7__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h185cc3d7__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h185cc3d7__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9dc01905__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h9dc01905__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h9dc01905__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h9dc01905__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h34e7ebf0__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h34e7ebf0__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h34e7ebf0__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h34e7ebf0__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h3a067d98__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h3a067d98__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h3a067d98__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h3a067d98__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h34ba6bc4__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h34ba6bc4__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h34ba6bc4__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h34ba6bc4__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he70d4c7f__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_he70d4c7f__0[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_he70d4c7f__0[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_he70d4c7f__0[2U]);
    } else {
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h12254092__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h12254092__0[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h12254092__0[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h12254092__0[2U]);
    } else {
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hf0a0e871__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_hf0a0e871__0[0U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_hf0a0e871__0[1U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hf0a0e871__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd4925eee__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount))) {
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = __Vtemp_hd4925eee__0[0U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = __Vtemp_hd4925eee__0[1U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hd4925eee__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_3__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hc182b105__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_hc182b105__0[0U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_hc182b105__0[1U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_hc182b105__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5e8ae069__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount))) {
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = __Vtemp_h5e8ae069__0[0U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = __Vtemp_h5e8ae069__0[1U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h5e8ae069__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_2__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9490be78__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h9490be78__0[0U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h9490be78__0[1U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h9490be78__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h522645d5__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount))) {
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = __Vtemp_h522645d5__0[0U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = __Vtemp_h522645d5__0[1U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h522645d5__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter_1__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->__VdfgTmp_h146ea22a__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                       ? 0U : (IData)(__VdfgTmp_h55726fbe__0));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_he6c7014c__0, PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_he6c7014c__0[0U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_he6c7014c__0[1U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_he6c7014c__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__greater__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h5ba45d92__0, PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
        = ((1U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))
            ? __Vtemp_h5ba45d92__0[0U] : PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U]);
    vlSelf->__VdfgTmp_h637fac64__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                       ? 0U : (IData)(__VdfgTmp_hf0c63922__0));
    if ((1U & (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h5ba45d92__0[1U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h5ba45d92__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__less__DOT__encode__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    vlSelf->__VdfgTmp_h49d63918__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                       ? 0U : (IData)(__VdfgTmp_hc69c61d7__0));
    PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U])))))));
    PvuTop__DOT__less__DOT__encode__DOT___value_after_round_3_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_3_io_result_o[0U])))))));
    vlSelf->__VdfgTmp_h0c48c69a__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                       ? 0U : (IData)(__VdfgTmp_ha33f4f0c__0));
    PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U])))))));
    PvuTop__DOT__less__DOT__encode__DOT___value_after_round_2_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_2_io_result_o[0U])))))));
    PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U])))))));
    PvuTop__DOT__less__DOT__encode__DOT___value_after_round_1_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_1_io_result_o[0U])))))));
    PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__greater__DOT__encode__DOT___barrel_shifter_io_result_o[0U])))))));
    PvuTop__DOT__less__DOT__encode__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__less__DOT__encode__DOT___barrel_shifter_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he0b8de2f__0 
        = (((IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878add96__0) 
            & (0U == ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                       ? 0U : (0xfffffffU & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h459f37c1__0)))))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878add96__0)) 
                              & ((0U == (IData)(vlSelf->__VdfgTmp_h87dd8442__0)) 
                                 & ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)) 
                                    & ((IData)((vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h459f37c1__0 
                                                >> 0x1bU)) 
                                       & (0U == PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h9347f0fa__0)))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                                  ? 0U
                                                  : 
                                                 (0xfffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h459f37c1__0))))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878add96__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_3_T))))
                                                    : PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_3_T))));
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he0b8de2f__0 
        = (((IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878add96__0) 
            & (0U == ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                       ? 0U : (0xfffffffU & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_h0207e970__0)))))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878add96__0)) 
                              & ((0U == (IData)(vlSelf->__VdfgTmp_h146ea22a__0)) 
                                 & ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)) 
                                    & ((IData)((vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_h0207e970__0 
                                                >> 0x1bU)) 
                                       & (0U == PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h9347f0fa__0)))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                                  ? 0U
                                                  : 
                                                 (0xfffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_h0207e970__0))))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878add96__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ PvuTop__DOT__less__DOT__encode__DOT___value_after_round_3_T))))
                                                    : PvuTop__DOT__less__DOT__encode__DOT___value_after_round_3_T))));
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he40e72a1__0 
        = (((IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878e0f03__0) 
            & (0U == ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                       ? 0U : (0xfffffffU & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc3975437__0)))))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878e0f03__0)) 
                              & ((0U == (IData)(vlSelf->__VdfgTmp_h74bddf7d__0)) 
                                 & ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)) 
                                    & ((IData)((vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc3975437__0 
                                                >> 0x1bU)) 
                                       & (0U == PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0)))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                                  ? 0U
                                                  : 
                                                 (0xfffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc3975437__0))))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h878e0f03__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_2_T))))
                                                    : PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_2_T))));
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he40e72a1__0 
        = (((IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878e0f03__0) 
            & (0U == ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                       ? 0U : (0xfffffffU & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc3b54484__0)))))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878e0f03__0)) 
                              & ((0U == (IData)(vlSelf->__VdfgTmp_h637fac64__0)) 
                                 & ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)) 
                                    & ((IData)((vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc3b54484__0 
                                                >> 0x1bU)) 
                                       & (0U == PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0)))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                                  ? 0U
                                                  : 
                                                 (0xfffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc3b54484__0))))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h878e0f03__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ PvuTop__DOT__less__DOT__encode__DOT___value_after_round_2_T))))
                                                    : PvuTop__DOT__less__DOT__encode__DOT___value_after_round_2_T))));
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he7b3fb78__0 
        = (((IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f57e3c__0) 
            & (0U == ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                       ? 0U : (0xfffffffU & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h097c16a4__0)))))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)) 
                              & ((0U == (IData)(vlSelf->__VdfgTmp_h858cd4b3__0)) 
                                 & ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)) 
                                    & ((IData)((vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h097c16a4__0 
                                                >> 0x1bU)) 
                                       & (0U == PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h962fac1b__0)))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                                  ? 0U
                                                  : 
                                                 (0xfffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h097c16a4__0))))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_1_T))))
                                                    : PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_1_T))));
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he7b3fb78__0 
        = (((IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f57e3c__0) 
            & (0U == ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                       ? 0U : (0xfffffffU & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hda3bad21__0)))))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)) 
                              & ((0U == (IData)(vlSelf->__VdfgTmp_h49d63918__0)) 
                                 & ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)) 
                                    & ((IData)((vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hda3bad21__0 
                                                >> 0x1bU)) 
                                       & (0U == PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h962fac1b__0)))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                                  ? 0U
                                                  : 
                                                 (0xfffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hda3bad21__0))))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ PvuTop__DOT__less__DOT__encode__DOT___value_after_round_1_T))))
                                                    : PvuTop__DOT__less__DOT__encode__DOT___value_after_round_1_T))));
    vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he73d8bce__0 
        = (((IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f12fa9__0) 
            & (0U == ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                       ? 0U : (0xfffffffU & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b829ab6__0)))))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)) 
                              & ((0U == (IData)(vlSelf->__VdfgTmp_hfeb2b7ac__0)) 
                                 & ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)) 
                                    & ((IData)((vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b829ab6__0 
                                                >> 0x1bU)) 
                                       & (0U == PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h91c3a767__0)))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                                  ? 0U
                                                  : 
                                                 (0xfffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h7b829ab6__0))))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__greater__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_0_T))))
                                                    : PvuTop__DOT__greater__DOT__encode__DOT___value_after_round_0_T))));
    vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he73d8bce__0 
        = (((IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f12fa9__0) 
            & (0U == ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                       ? 0U : (0xfffffffU & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc528e02b__0)))))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)) 
                              & ((0U == (IData)(vlSelf->__VdfgTmp_h0c48c69a__0)) 
                                 & ((~ (IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)) 
                                    & ((IData)((vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc528e02b__0 
                                                >> 0x1bU)) 
                                       & (0U == PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h91c3a767__0)))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                                  ? 0U
                                                  : 
                                                 (0xfffffffU 
                                                  & (IData)(vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_hc528e02b__0))))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__less__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ PvuTop__DOT__less__DOT__encode__DOT___value_after_round_0_T))))
                                                    : PvuTop__DOT__less__DOT__encode__DOT___value_after_round_0_T))));
    if ((0x1fU >= (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc14b0578__0 
            = (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he0b8de2f__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT__less__DOT____VdfgTmp_hc14b0578__0 
            = (vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he0b8de2f__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_hc14b0578__0 = 0U;
        PvuTop__DOT__less__DOT____VdfgTmp_hc14b0578__0 = 0U;
    }
    vlSelf->PvuTop__DOT____VdfgTmp_hb3e87736__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_14)
                                                    ? 0x80000000U
                                                    : 
                                                   ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_19)
                                                     ? vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he0b8de2f__0
                                                     : 
                                                    ((0x1fU 
                                                      >= 
                                                      (0x3fU 
                                                       & ((IData)(0x20U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                      ? 
                                                     (PvuTop__DOT__less__DOT____VdfgTmp_hc14b0578__0 
                                                      << 
                                                      (0x3fU 
                                                       & ((IData)(0x20U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                      : 0U)));
    if ((0x1fU >= (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he68aee29__0 
            = (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he40e72a1__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT__less__DOT____VdfgTmp_he68aee29__0 
            = (vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he40e72a1__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he68aee29__0 = 0U;
        PvuTop__DOT__less__DOT____VdfgTmp_he68aee29__0 = 0U;
    }
    vlSelf->PvuTop__DOT____VdfgTmp_hb77deba8__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_9)
                                                    ? 0x80000000U
                                                    : 
                                                   ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_19)
                                                     ? vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he40e72a1__0
                                                     : 
                                                    ((0x1fU 
                                                      >= 
                                                      (0x3fU 
                                                       & ((IData)(0x20U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                      ? 
                                                     (PvuTop__DOT__less__DOT____VdfgTmp_he68aee29__0 
                                                      << 
                                                      (0x3fU 
                                                       & ((IData)(0x20U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                      : 0U)));
    if ((0x1fU >= (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h897751e3__0 
            = (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he7b3fb78__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT__less__DOT____VdfgTmp_h897751e3__0 
            = (vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he7b3fb78__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h897751e3__0 = 0U;
        PvuTop__DOT__less__DOT____VdfgTmp_h897751e3__0 = 0U;
    }
    vlSelf->PvuTop__DOT____VdfgTmp_hb6e28043__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_4)
                                                    ? 0x80000000U
                                                    : 
                                                   ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_19)
                                                     ? vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he7b3fb78__0
                                                     : 
                                                    ((0x1fU 
                                                      >= 
                                                      (0x3fU 
                                                       & ((IData)(0x20U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                      ? 
                                                     (PvuTop__DOT__less__DOT____VdfgTmp_h897751e3__0 
                                                      << 
                                                      (0x3fU 
                                                       & ((IData)(0x20U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                      : 0U)));
    if ((0x1fU >= (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))) {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h972e8323__0 
            = (vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_he73d8bce__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))));
        PvuTop__DOT__less__DOT____VdfgTmp_h972e8323__0 
            = (vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he73d8bce__0 
               >> (0x3fU & ((IData)(0x20U) - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))));
    } else {
        vlSelf->PvuTop__DOT__greater__DOT____VdfgTmp_h972e8323__0 = 0U;
        PvuTop__DOT__less__DOT____VdfgTmp_h972e8323__0 = 0U;
    }
    vlSelf->PvuTop__DOT____VdfgTmp_hb66c10f5__0 = ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN)
                                                    ? 0x80000000U
                                                    : 
                                                   ((IData)(vlSelf->PvuTop__DOT__greater__DOT___GEN_19)
                                                     ? vlSelf->PvuTop__DOT__less__DOT____VdfgTmp_he73d8bce__0
                                                     : 
                                                    ((0x1fU 
                                                      >= 
                                                      (0x3fU 
                                                       & ((IData)(0x20U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                      ? 
                                                     (PvuTop__DOT__less__DOT____VdfgTmp_h972e8323__0 
                                                      << 
                                                      (0x3fU 
                                                       & ((IData)(0x20U) 
                                                          - (IData)(vlSelf->PvuTop__DOT__greater__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                                      : 0U)));
    if ((7U == (IData)(vlSelf->io_op))) {
        vlSelf->PvuTop__DOT___GEN_98 = vlSelf->PvuTop__DOT___GEN_81;
        vlSelf->PvuTop__DOT___GEN_96 = vlSelf->PvuTop__DOT___GEN_80;
        vlSelf->PvuTop__DOT___GEN_94 = vlSelf->PvuTop__DOT___GEN_79;
        vlSelf->PvuTop__DOT___GEN_90 = vlSelf->PvuTop__DOT___GEN_78;
    } else {
        vlSelf->PvuTop__DOT___GEN_98 = ((1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_97)) 
                                               | (8U 
                                                  == (IData)(vlSelf->io_op))))
                                         ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hb3e87736__0);
        vlSelf->PvuTop__DOT___GEN_96 = ((1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_95)) 
                                               | (8U 
                                                  == (IData)(vlSelf->io_op))))
                                         ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hb77deba8__0);
        vlSelf->PvuTop__DOT___GEN_94 = ((1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_93)) 
                                               | (8U 
                                                  == (IData)(vlSelf->io_op))))
                                         ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hb6e28043__0);
        vlSelf->PvuTop__DOT___GEN_90 = ((1U & ((~ (IData)(vlSelf->PvuTop__DOT___GEN_89)) 
                                               | (8U 
                                                  == (IData)(vlSelf->io_op))))
                                         ? 0U : vlSelf->PvuTop__DOT____VdfgTmp_hb66c10f5__0);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__39(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__39\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_hff83cc3e__0;
    VlWide<3>/*95:0*/ __Vtemp_hc3cb4d62__0;
    VlWide<3>/*95:0*/ __Vtemp_h651510e4__0;
    VlWide<3>/*95:0*/ __Vtemp_h8291a914__0;
    VlWide<3>/*95:0*/ __Vtemp_h21dfdab1__0;
    VlWide<3>/*95:0*/ __Vtemp_hf05e592f__0;
    VlWide<3>/*95:0*/ __Vtemp_hf99ca7ab__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hff83cc3e__0, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_hff83cc3e__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_hff83cc3e__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_hff83cc3e__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_3__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hc3cb4d62__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_hc3cb4d62__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_hc3cb4d62__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_hc3cb4d62__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h651510e4__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h651510e4__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h651510e4__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_h651510e4__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h8291a914__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h8291a914__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h8291a914__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_h8291a914__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h21dfdab1__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h21dfdab1__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h21dfdab1__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_h21dfdab1__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hf05e592f__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hf05e592f__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hf05e592f__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_hf05e592f__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hf99ca7ab__0, PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[0U] 
            = __Vtemp_hf99ca7ab__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[1U] 
            = __Vtemp_hf99ca7ab__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[2U] 
            = (0xfU & __Vtemp_hf99ca7ab__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_3__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__40(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__40\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_hdf882596__0;
    VlWide<3>/*95:0*/ __Vtemp_h41662fa0__0;
    VlWide<3>/*95:0*/ __Vtemp_had88bf02__0;
    VlWide<3>/*95:0*/ __Vtemp_hc49295ea__0;
    VlWide<3>/*95:0*/ __Vtemp_hec517e6f__0;
    VlWide<3>/*95:0*/ __Vtemp_hbf59901a__0;
    VlWide<3>/*95:0*/ __Vtemp_h68bef81b__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hdf882596__0, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_hdf882596__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_hdf882596__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_hdf882596__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_2__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h41662fa0__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h41662fa0__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h41662fa0__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_h41662fa0__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_had88bf02__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_had88bf02__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_had88bf02__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_had88bf02__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hc49295ea__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hc49295ea__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hc49295ea__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_hc49295ea__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hec517e6f__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_hec517e6f__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_hec517e6f__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_hec517e6f__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hbf59901a__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hbf59901a__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hbf59901a__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_hbf59901a__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h68bef81b__0, PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[0U] 
            = __Vtemp_h68bef81b__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U] 
            = __Vtemp_h68bef81b__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[2U] 
            = (0xfU & __Vtemp_h68bef81b__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_2__DOT___temp_results_0_T_2[2U]);
    }
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__41(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__41\n"); );
    // Init
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2);
    VlWide<3>/*67:0*/ PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2;
    VL_ZERO_W(68, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_ha6edac0c__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f17b6c4__0;
    VlWide<3>/*95:0*/ __Vtemp_h7471db2a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a5ba430__0;
    VlWide<3>/*95:0*/ __Vtemp_h3bb6e5fa__0;
    VlWide<3>/*95:0*/ __Vtemp_hdb7cf72a__0;
    VlWide<3>/*95:0*/ __Vtemp_h314fbfa9__0;
    // Body
    VL_SHIFTL_WWI(68,68,32, __Vtemp_ha6edac0c__0, vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i, 0x40U);
    if ((0x40U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[0U] 
            = __Vtemp_ha6edac0c__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[1U] 
            = __Vtemp_ha6edac0c__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[2U] 
            = (0xfU & __Vtemp_ha6edac0c__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[0U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[1U] 
            = vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[2U] 
            = (0xfU & vlSelf->PvuTop__DOT__frac_norm_div__DOT____Vcellinp__shifter_1__io_operand_i[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h9f17b6c4__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2, 0x20U);
    if ((0x20U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[0U] 
            = __Vtemp_h9f17b6c4__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[1U] 
            = __Vtemp_h9f17b6c4__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[2U] 
            = (0xfU & __Vtemp_h9f17b6c4__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_5_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h7471db2a__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2, 0x10U);
    if ((0x10U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h7471db2a__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h7471db2a__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0xfU & __Vtemp_h7471db2a__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_4_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h3a5ba430__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2, 8U);
    if ((8U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h3a5ba430__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h3a5ba430__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0xfU & __Vtemp_h3a5ba430__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h3bb6e5fa__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2, 4U);
    if ((4U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h3bb6e5fa__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h3bb6e5fa__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0xfU & __Vtemp_h3bb6e5fa__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_hdb7cf72a__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2, 2U);
    if ((2U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hdb7cf72a__0[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hdb7cf72a__0[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0xfU & __Vtemp_hdb7cf72a__0[2U]);
    } else {
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTL_WWI(68,68,32, __Vtemp_h314fbfa9__0, PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2, 1U);
    if ((1U & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U])) {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[0U] 
            = __Vtemp_h314fbfa9__0[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U] 
            = __Vtemp_h314fbfa9__0[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[2U] 
            = (0xfU & __Vtemp_h314fbfa9__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[0U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U] 
            = PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[2U] 
            = (0xfU & PvuTop__DOT__frac_norm_div__DOT__shifter_1__DOT___temp_results_0_T_2[2U]);
    }
}
