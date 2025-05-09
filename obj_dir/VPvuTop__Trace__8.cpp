// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPvuTop__Syms.h"


extern const VlWide<9>/*287:0*/ VPvuTop__ConstPool__CONST_hc5471b50_0;

void VPvuTop___024root__trace_chg_sub_8(VPvuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_chg_sub_8\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 25055);
    VlWide<4>/*127:0*/ __Vtemp_h1569040e__0;
    VlWide<6>/*191:0*/ __Vtemp_h154bf8ab__0;
    VlWide<7>/*223:0*/ __Vtemp_h69a0177c__0;
    VlWide<4>/*127:0*/ __Vtemp_h46bb9291__0;
    VlWide<3>/*95:0*/ __Vtemp_h082d3fd0__0;
    VlWide<4>/*127:0*/ __Vtemp_hc812d21b__0;
    VlWide<4>/*127:0*/ __Vtemp_hfc2c5713__0;
    VlWide<4>/*127:0*/ __Vtemp_ha4bc4514__0;
    VlWide<3>/*95:0*/ __Vtemp_h62095e6f__0;
    VlWide<4>/*127:0*/ __Vtemp_h44708993__0;
    VlWide<4>/*127:0*/ __Vtemp_h57e7e0b8__0;
    VlWide<3>/*95:0*/ __Vtemp_h692ccc60__0;
    VlWide<3>/*95:0*/ __Vtemp_hc32d3bdb__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2b40a05__0;
    VlWide<3>/*95:0*/ __Vtemp_h080749b8__0;
    VlWide<8>/*255:0*/ __Vtemp_h7c91d1c4__0;
    VlWide<7>/*223:0*/ __Vtemp_h7c5f11d9__0;
    VlWide<4>/*127:0*/ __Vtemp_h14d90051__0;
    VlWide<4>/*127:0*/ __Vtemp_h06c9d468__0;
    VlWide<4>/*127:0*/ __Vtemp_h863ff0d7__0;
    VlWide<3>/*95:0*/ __Vtemp_hf98bbfc2__0;
    VlWide<3>/*95:0*/ __Vtemp_hb2ec930e__0;
    VlWide<4>/*127:0*/ __Vtemp_h84f889ad__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf4c90c7__0;
    VlWide<4>/*127:0*/ __Vtemp_he3fd34c0__0;
    VlWide<6>/*191:0*/ __Vtemp_h747ba727__0;
    VlWide<9>/*287:0*/ __Vtemp_hee971096__0;
    VlWide<9>/*287:0*/ __Vtemp_h3feece17__0;
    VlWide<3>/*95:0*/ __Vtemp_h39f9fc91__0;
    VlWide<4>/*127:0*/ __Vtemp_hef56dceb__0;
    VlWide<9>/*287:0*/ __Vtemp_h40fbf5e9__0;
    VlWide<3>/*95:0*/ __Vtemp_h82f3b084__0;
    VlWide<4>/*127:0*/ __Vtemp_h77c88815__0;
    VlWide<4>/*127:0*/ __Vtemp_hd280c543__0;
    VlWide<4>/*127:0*/ __Vtemp_h95b92b9c__0;
    VlWide<3>/*95:0*/ __Vtemp_h1573502e__0;
    VlWide<4>/*127:0*/ __Vtemp_h8eb14285__0;
    VlWide<4>/*127:0*/ __Vtemp_hadd908e9__0;
    // Body
    bufp->chgIData(oldp+0,((((((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h878add96__0) 
                               & (0U == (IData)(vlSelf->__VdfgTmp_hc045d324__0)))
                               ? 0x80U : (((~ (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h878add96__0)) 
                                           & ((0U == 
                                               ((0U 
                                                 == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                  ? 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->__VdfgTmp_h1adcbe2e__0))
                                                  : 0U))) 
                                              & ((0U 
                                                  != vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0) 
                                                 & ((~ (IData)(vlSelf->__VdfgTmp_hcaf6f67e__0)) 
                                                    & (((IData)(vlSelf->PvuTop__DOT__convert8__DOT__rounded_frac_3) 
                                                        >> 3U) 
                                                       & (0U 
                                                          == (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h91b408de__0)))))))
                                           ? 0x40U : 
                                          ((0U == (IData)(vlSelf->__VdfgTmp_hc045d324__0))
                                            ? 0U : 
                                           ((IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT____VdfgTmp_h878add96__0)
                                             ? (0x80U 
                                                | (0x7fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_3_T)))))
                                             : (IData)(vlSelf->PvuTop__DOT__convert8__DOT__posit_encoder__DOT___value_after_round_3_T))))) 
                             << 0x18U) | (((IData)(vlSelf->__VdfgTmp_h88671e84__0) 
                                           << 0x10U) 
                                          | (((IData)(vlSelf->__VdfgTmp_h6bf87dce__0) 
                                              << 8U) 
                                             | (IData)(vlSelf->__VdfgTmp_h7342f0f4__0))))),32);
    bufp->chgIData(oldp+1,(((((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7b131dde__0)
                               ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                        ? (0x3fU & (IData)(vlSelf->__VdfgTmp_h1adcbe2e__0))
                                        : 0U)) << 0x12U) 
                            | ((((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7eb5ce53__0)
                                  ? 0U : ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                           ? (0x3fU 
                                              & (IData)(vlSelf->__VdfgTmp_h013556c5__0))
                                           : 0U)) << 0xcU) 
                               | ((((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h7ee3803d__0)
                                     ? 0U : ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                              ? (0x3fU 
                                                 & (IData)(vlSelf->__VdfgTmp_hab03c7d6__0))
                                              : 0U)) 
                                   << 6U) | ((0U == vlSelf->PvuTop__DOT__convert8__DOT____VdfgTmp_h799ff3bb__0)
                                              ? 0U : 
                                             ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                               ? (0x3fU 
                                                  & (IData)(vlSelf->__VdfgTmp_hc02f9133__0))
                                               : 0U)))))),24);
    bufp->chgIData(oldp+2,(vlSelf->PvuTop__DOT____Vcellinp__fracalign_1__io_pir_exp2_i),32);
    bufp->chgCData(oldp+3,(((8U & (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164) 
                                    << 3U) | (0xfffffff8U 
                                              & (((~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)) 
                                                  << 3U) 
                                                 & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                    ^ (IData)(vlSelf->PvuTop__DOT___GEN_172)))))) 
                            | ((4U & (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109) 
                                       << 2U) | (0xfffffffcU 
                                                 & (((~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)) 
                                                     << 2U) 
                                                    & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                       ^ (IData)(vlSelf->PvuTop__DOT___GEN_172)))))) 
                               | ((2U & (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54) 
                                          << 1U) | 
                                         (0xfffffffeU 
                                          & (((~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)) 
                                              << 1U) 
                                             & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                ^ (IData)(vlSelf->PvuTop__DOT___GEN_172)))))) 
                                  | (1U & ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN) 
                                           | ((~ (IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0)) 
                                              & ((IData)(vlSelf->PvuTop__DOT___GEN_40) 
                                                 ^ (IData)(vlSelf->PvuTop__DOT___GEN_172))))))))),4);
    __Vtemp_h1569040e__0[1U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)
                                            ? 0x8000000ULL
                                            : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                 << 0x18U) | (IData)(
                                                     (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN)
                                                        ? 0ULL
                                                        : 
                                                       ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0)
                                                         ? 0x8000000ULL
                                                         : 
                                                        ((0U 
                                                          == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                                          ? 0ULL
                                                          : 
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                                                           ? 0x7fffffffffffffULL
                                                           : 
                                                          ((QData)((IData)(
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
                                                      >> 0x20U)));
    __Vtemp_h1569040e__0[2U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)
                                            ? 0x8000000ULL
                                            : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                 >> 8U) | ((IData)(
                                                   (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54)
                                                      ? 0ULL
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)
                                                       ? 0x8000000ULL
                                                       : 
                                                      ((0U 
                                                        == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                        ? 0ULL
                                                        : 
                                                       ((0U 
                                                         == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                                                         ? 0x7fffffffffffffULL
                                                         : 
                                                        ((QData)((IData)(
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
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h154bf8ab__0[3U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)
                                            ? 0x8000000ULL
                                            : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                 << 0x10U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54)
                                                         ? 0ULL
                                                         : 
                                                        ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)
                                                          ? 0x8000000ULL
                                                          : 
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                           ? 0ULL
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                                                            ? 0x7fffffffffffffULL
                                                            : 
                                                           ((QData)((IData)(
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
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_h154bf8ab__0[4U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)
                                            ? 0x8000000ULL
                                            : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                 >> 0x10U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109)
                                                         ? 0ULL
                                                         : 
                                                        ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)
                                                          ? 0x8000000ULL
                                                          : 
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                           ? 0ULL
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                                                            ? 0x7fffffffffffffULL
                                                            : 
                                                           ((QData)((IData)(
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
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h69a0177c__0[0U] = (IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN)
                                         ? 0ULL : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0)
                                                    ? 0x8000000ULL
                                                    : 
                                                   ((0U 
                                                     == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                                     ? 0ULL
                                                     : 
                                                    ((0U 
                                                      == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                                                      ? 0x7fffffffffffffULL
                                                      : 
                                                     ((QData)((IData)(
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
    __Vtemp_h69a0177c__0[1U] = __Vtemp_h1569040e__0[1U];
    __Vtemp_h69a0177c__0[2U] = __Vtemp_h1569040e__0[2U];
    __Vtemp_h69a0177c__0[3U] = __Vtemp_h154bf8ab__0[3U];
    __Vtemp_h69a0177c__0[4U] = __Vtemp_h154bf8ab__0[4U];
    __Vtemp_h69a0177c__0[5U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)
                                            ? 0x8000000ULL
                                            : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                 << 8U) | ((IData)(
                                                   (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109)
                                                      ? 0ULL
                                                      : 
                                                     ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)
                                                       ? 0x8000000ULL
                                                       : 
                                                      ((0U 
                                                        == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                        ? 0ULL
                                                        : 
                                                       ((0U 
                                                         == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                                                         ? 0x7fffffffffffffULL
                                                         : 
                                                        ((QData)((IData)(
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
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_h69a0177c__0[6U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)
                                            ? 0x8000000ULL
                                            : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                 >> 0x18U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164)
                                                         ? 0ULL
                                                         : 
                                                        ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)
                                                          ? 0x8000000ULL
                                                          : 
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                           ? 0ULL
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                            ? 0x7fffffffffffffULL
                                                            : 
                                                           ((QData)((IData)(
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
                                                       >> 0x20U)) 
                                              << 8U));
    bufp->chgWData(oldp+4,(__Vtemp_h69a0177c__0),224);
    bufp->chgIData(oldp+11,(((IData)(vlSelf->__VdfgTmp_h4c868811__0)
                              ? 0x80000000U : ((IData)(vlSelf->__VdfgTmp_h5fa00eca__0)
                                                ? 0x40000000U
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dot_converter__DOT____Vcellinp__posit_encoder__io_pir_frac)
                                                    ? 0U
                                                    : vlSelf->__VdfgTmp_hd9892f2b__0)))),32);
    bufp->chgCData(oldp+12,(((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                              ? 0U : ((((1U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                         ? (IData)(vlSelf->__VdfgTmp_hae506208__0)
                                         : 0U) << 2U) 
                                      | (IData)(vlSelf->__VdfgTmp_hd9250a07__0)))),8);
    bufp->chgIData(oldp+13,(((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                              ? 0U : (((IData)((0U 
                                                != vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6)) 
                                       << 0x1bU) | 
                                      (0x7ffffffU & 
                                       (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___barrel_shifter_io_result_o 
                                        >> 2U))))),28);
    bufp->chgBit(oldp+14,((1U & (~ vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+15,(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgCData(oldp+16,(((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)
                              ? 0U : ((((1U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                         ? (IData)(vlSelf->__VdfgTmp_h71c5bb7f__0)
                                         : 0U) << 2U) 
                                      | (IData)(vlSelf->__VdfgTmp_h5dbe1e6a__0)))),8);
    bufp->chgCData(oldp+17,(((0U == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                              ? 0U : ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)
                                       ? 0U : ((((1U 
                                                  & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                  ? (IData)(vlSelf->__VdfgTmp_h71c5bb7f__0)
                                                  : 0U) 
                                                << 2U) 
                                               | (IData)(vlSelf->__VdfgTmp_h5dbe1e6a__0))))),8);
    bufp->chgBit(oldp+18,((1U & (~ vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+19,(vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+20,((0U == ((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                                   ? 0U : (((IData)(
                                                    (0U 
                                                     != vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6)) 
                                            << 0x1bU) 
                                           | (0x7ffffffU 
                                              & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___barrel_shifter_io_result_o 
                                                 >> 2U)))))));
    bufp->chgIData(oldp+21,((((IData)(vlSelf->__VdfgTmp_hd451a639__0) 
                              << 0x18U) | (((IData)(vlSelf->__VdfgTmp_h9a0d8522__0) 
                                            << 0x10U) 
                                           | (((IData)(vlSelf->__VdfgTmp_h195f781d__0) 
                                               << 8U) 
                                              | (IData)(vlSelf->__VdfgTmp_h94704af9__0))))),32);
    __Vtemp_h46bb9291__0[0U] = (IData)((((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)) 
                                         << 0x1cU) 
                                        | (QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0))));
    __Vtemp_h46bb9291__0[1U] = ((vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0))) 
                                                      >> 0x20U)));
    __Vtemp_h46bb9291__0[2U] = ((vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0 
                                 << 0x14U) | (vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0 
                                              >> 8U));
    __Vtemp_h46bb9291__0[3U] = (vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0 
                                >> 0xcU);
    bufp->chgWData(oldp+22,(__Vtemp_h46bb9291__0),112);
    __Vtemp_h082d3fd0__0[1U] = (IData)((((QData)((IData)(
                                                         (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0) 
                                                           & (0U 
                                                              == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0))
                                                           ? 0x80000000U
                                                           : 
                                                          (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0)) 
                                                            & ((0U 
                                                                == (IData)(vlSelf->__VdfgTmp_hd451a639__0)) 
                                                               & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                                  & ((5U 
                                                                      != (IData)(vlSelf->io_op)) 
                                                                     & ((vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U] 
                                                                         >> 0x1bU) 
                                                                        & (0U 
                                                                           == vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9347f0fa__0))))))
                                                            ? 0x40000000U
                                                            : 
                                                           ((0U 
                                                             == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0)
                                                              ? 
                                                             (0x80000000U 
                                                              | (0x7fffffffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                                              : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0) 
                                                            & (0U 
                                                               == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0))
                                                            ? 0x80000000U
                                                            : 
                                                           (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0)) 
                                                             & ((0U 
                                                                 == (IData)(vlSelf->__VdfgTmp_h9a0d8522__0)) 
                                                                & ((2U 
                                                                    < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                   & ((5U 
                                                                       != (IData)(vlSelf->io_op)) 
                                                                      & ((vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U] 
                                                                          >> 0x1bU) 
                                                                         & (0U 
                                                                            == vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0))))))
                                                             ? 0x40000000U
                                                             : 
                                                            ((0U 
                                                              == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0)
                                                               ? 
                                                              (0x80000000U 
                                                               | (0x7fffffffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                                               : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))))));
    __Vtemp_h082d3fd0__0[2U] = (IData)(((((QData)((IData)(
                                                          (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0) 
                                                            & (0U 
                                                               == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0))
                                                            ? 0x80000000U
                                                            : 
                                                           (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0)) 
                                                             & ((0U 
                                                                 == (IData)(vlSelf->__VdfgTmp_hd451a639__0)) 
                                                                & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                                   & ((5U 
                                                                       != (IData)(vlSelf->io_op)) 
                                                                      & ((vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U] 
                                                                          >> 0x1bU) 
                                                                         & (0U 
                                                                            == vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h9347f0fa__0))))))
                                                             ? 0x40000000U
                                                             : 
                                                            ((0U 
                                                              == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0)
                                                               ? 
                                                              (0x80000000U 
                                                               | (0x7fffffffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T))))
                                                               : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_3_T)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0) 
                                                             & (0U 
                                                                == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0))
                                                             ? 0x80000000U
                                                             : 
                                                            (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0)) 
                                                              & ((0U 
                                                                  == (IData)(vlSelf->__VdfgTmp_h9a0d8522__0)) 
                                                                 & ((2U 
                                                                     < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                    & ((5U 
                                                                        != (IData)(vlSelf->io_op)) 
                                                                       & ((vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U] 
                                                                           >> 0x1bU) 
                                                                          & (0U 
                                                                             == vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h96e1f5ff__0))))))
                                                              ? 0x40000000U
                                                              : 
                                                             ((0U 
                                                               == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0)
                                                                ? 
                                                               (0x80000000U 
                                                                | (0x7fffffffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))
                                                                : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_2_T))))))) 
                                        >> 0x20U));
    __Vtemp_hc812d21b__0[0U] = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f12fa9__0) 
                                 & (0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0))
                                 ? 0x80000000U : ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->__VdfgTmp_h94704af9__0)) 
                                                      & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                                         & ((5U 
                                                             != (IData)(vlSelf->io_op)) 
                                                            & ((vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U] 
                                                                >> 0x1bU) 
                                                               & (0U 
                                                                  == vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h91c3a767__0))))))
                                                   ? 0x40000000U
                                                   : 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)
                                                     ? 
                                                    (0x80000000U 
                                                     | (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))))
                                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_0_T))));
    __Vtemp_hc812d21b__0[1U] = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f57e3c__0) 
                                 & (0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0))
                                 ? 0x80000000U : ((
                                                   (~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->__VdfgTmp_h195f781d__0)) 
                                                      & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                                         & ((5U 
                                                             != (IData)(vlSelf->io_op)) 
                                                            & ((vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U] 
                                                                >> 0x1bU) 
                                                               & (0U 
                                                                  == vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h962fac1b__0))))))
                                                   ? 0x40000000U
                                                   : 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)
                                                     ? 
                                                    (0x80000000U 
                                                     | (0x7fffffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (~ vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))))
                                                     : vlSelf->PvuTop__DOT__encode__DOT___value_after_round_1_T))));
    __Vtemp_hc812d21b__0[2U] = __Vtemp_h082d3fd0__0[1U];
    __Vtemp_hc812d21b__0[3U] = __Vtemp_h082d3fd0__0[2U];
    bufp->chgWData(oldp+26,(__Vtemp_hc812d21b__0),128);
    bufp->chgBit(oldp+30,((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)));
    bufp->chgBit(oldp+31,((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)));
    bufp->chgBit(oldp+32,((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)));
    bufp->chgBit(oldp+33,((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)));
    bufp->chgCData(oldp+34,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->chgCData(oldp+35,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_1__io_shift_amount),5);
    bufp->chgCData(oldp+36,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_2__io_shift_amount),5);
    bufp->chgCData(oldp+37,(vlSelf->PvuTop__DOT__encode__DOT____Vcellinp__barrel_shifter_3__io_shift_amount),5);
    bufp->chgCData(oldp+38,(((5U == (IData)(vlSelf->io_op))
                              ? (IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T)
                              : 0U)),8);
    bufp->chgCData(oldp+39,(vlSelf->PvuTop__DOT__encode_dot__DOT____Vcellinp__barrel_shifter__io_shift_amount),5);
    bufp->chgQData(oldp+40,((((QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->io_float_i_3)))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (((IData)(vlSelf->io_float_i_2) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & (IData)(vlSelf->io_float_i_1))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->io_float_i_0))))))),64);
    bufp->chgCData(oldp+42,(((8U & ((IData)((vlSelf->io_float_i_3 
                                             >> 0xfU)) 
                                    << 3U)) | ((4U 
                                                & ((IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 0xfU)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_1 
                                                               >> 0xfU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_0 
                                                                >> 0xfU))))))),4);
    bufp->chgIData(oldp+43,(((((0U == (0x1fU & (IData)(
                                                       (vlSelf->io_float_i_3 
                                                        >> 0xaU))))
                                ? 0x32U : ((0x1fU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->io_float_i_3 
                                                        >> 0xaU))))
                                            ? 0U : 
                                           ((0x20U 
                                             & (((IData)(
                                                         (vlSelf->io_float_i_3 
                                                          >> 0xaU)) 
                                                 - (IData)(0xfU)) 
                                                << 1U)) 
                                            | (0x1fU 
                                               & ((IData)(
                                                          (vlSelf->io_float_i_3 
                                                           >> 0xaU)) 
                                                  - (IData)(0xfU)))))) 
                              << 0x12U) | ((((0U == 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlSelf->io_float_i_2 
                                                          >> 0xaU))))
                                              ? 0x32U
                                              : ((0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_2 
                                                              >> 0xaU))))
                                                  ? 0U
                                                  : 
                                                 ((0x20U 
                                                   & (((IData)(
                                                               (vlSelf->io_float_i_2 
                                                                >> 0xaU)) 
                                                       - (IData)(0xfU)) 
                                                      << 1U)) 
                                                  | (0x1fU 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0xaU)) 
                                                        - (IData)(0xfU)))))) 
                                            << 0xcU) 
                                           | ((((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_1 
                                                             >> 0xaU))))
                                                 ? 0x32U
                                                 : 
                                                ((0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_1 
                                                              >> 0xaU))))
                                                  ? 0U
                                                  : 
                                                 ((0x20U 
                                                   & (((IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 0xaU)) 
                                                       - (IData)(0xfU)) 
                                                      << 1U)) 
                                                  | (0x1fU 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0xaU)) 
                                                        - (IData)(0xfU)))))) 
                                               << 6U) 
                                              | ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_0 
                                                              >> 0xaU))))
                                                  ? 0x32U
                                                  : 
                                                 ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_0 
                                                               >> 0xaU))))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0xaU)) 
                                                        - (IData)(0xfU)) 
                                                       << 1U)) 
                                                   | (0x1fU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_0 
                                                                  >> 0xaU)) 
                                                         - (IData)(0xfU)))))))))),24);
    bufp->chgQData(oldp+44,((((QData)((IData)(vlSelf->__VdfgTmp_h36dad77c__0)) 
                              << 0x2bU) | (((QData)((IData)(
                                                            (0x3ffU 
                                                             & (IData)(vlSelf->io_float_i_3)))) 
                                            << 0x21U) 
                                           | (((QData)((IData)(vlSelf->__VdfgTmp_hfd1b85c0__0)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->io_float_i_2) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->__VdfgTmp_hebcb5633__0) 
                                                                     << 0x15U) 
                                                                    | ((0x1ff800U 
                                                                        & ((IData)(vlSelf->io_float_i_1) 
                                                                           << 0xbU)) 
                                                                       | (((IData)(vlSelf->__VdfgTmp_hcb4a60e4__0) 
                                                                           << 0xaU) 
                                                                          | (0x3ffU 
                                                                             & (IData)(vlSelf->io_float_i_0)))))))))))),44);
    bufp->chgBit(oldp+46,((0U == (0x1fU & (IData)((vlSelf->io_float_i_0 
                                                   >> 0xaU))))));
    bufp->chgBit(oldp+47,((0U == (0x1fU & (IData)((vlSelf->io_float_i_1 
                                                   >> 0xaU))))));
    bufp->chgBit(oldp+48,((0U == (0x1fU & (IData)((vlSelf->io_float_i_2 
                                                   >> 0xaU))))));
    bufp->chgBit(oldp+49,((0U == (0x1fU & (IData)((vlSelf->io_float_i_3 
                                                   >> 0xaU))))));
    __Vtemp_hfc2c5713__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                                           ? 0U
                                                           : 
                                                          (((IData)(vlSelf->__VdfgTmp_hebcb5633__0) 
                                                            << 0x1bU) 
                                                           | (0x7fe0000U 
                                                              & ((IData)(vlSelf->io_float_i_1) 
                                                                 << 0x11U)))))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                                            ? 0U
                                                            : 
                                                           (((IData)(vlSelf->__VdfgTmp_hcb4a60e4__0) 
                                                             << 0x1bU) 
                                                            | (0x7fe0000U 
                                                               & ((IData)(vlSelf->io_float_i_0) 
                                                                  << 0x11U))))))));
    __Vtemp_hfc2c5713__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_hfd1b85c0__0) 
                                            << 0x1bU) 
                                           | (0x7fe0000U 
                                              & ((IData)(vlSelf->io_float_i_2) 
                                                 << 0x11U)))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                                                          ? 0U
                                                                          : 
                                                                         (((IData)(vlSelf->__VdfgTmp_hebcb5633__0) 
                                                                           << 0x1bU) 
                                                                          | (0x7fe0000U 
                                                                             & ((IData)(vlSelf->io_float_i_1) 
                                                                                << 0x11U)))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                                                           ? 0U
                                                                           : 
                                                                          (((IData)(vlSelf->__VdfgTmp_hcb4a60e4__0) 
                                                                            << 0x1bU) 
                                                                           | (0x7fe0000U 
                                                                              & ((IData)(vlSelf->io_float_i_0) 
                                                                                << 0x11U))))))) 
                                                      >> 0x20U)));
    __Vtemp_hfc2c5713__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_h36dad77c__0) 
                                            << 0x1bU) 
                                           | (0x7fe0000U 
                                              & ((IData)(vlSelf->io_float_i_3) 
                                                 << 0x11U)))) 
                                 << 0x14U) | (((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->__VdfgTmp_hfd1b85c0__0) 
                                                    << 0x1bU) 
                                                   | (0x7fe0000U 
                                                      & ((IData)(vlSelf->io_float_i_2) 
                                                         << 0x11U)))) 
                                              >> 8U));
    __Vtemp_hfc2c5713__0[3U] = (((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                  ? 0U : (((IData)(vlSelf->__VdfgTmp_h36dad77c__0) 
                                           << 0x1bU) 
                                          | (0x7fe0000U 
                                             & ((IData)(vlSelf->io_float_i_3) 
                                                << 0x11U)))) 
                                >> 0xcU);
    bufp->chgWData(oldp+50,(__Vtemp_hfc2c5713__0),112);
    bufp->chgBit(oldp+54,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_0)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_hcb4a60e4__0) 
                                            << 0x1bU) 
                                           | (0x7fe0000U 
                                              & ((IData)(vlSelf->io_float_i_0) 
                                                 << 0x11U)))))));
    bufp->chgBit(oldp+55,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_2)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_hebcb5633__0) 
                                            << 0x1bU) 
                                           | (0x7fe0000U 
                                              & ((IData)(vlSelf->io_float_i_1) 
                                                 << 0x11U)))))));
    bufp->chgBit(oldp+56,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_4)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_hfd1b85c0__0) 
                                            << 0x1bU) 
                                           | (0x7fe0000U 
                                              & ((IData)(vlSelf->io_float_i_2) 
                                                 << 0x11U)))))));
    bufp->chgBit(oldp+57,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp16__DOT___GEN_6)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_h36dad77c__0) 
                                            << 0x1bU) 
                                           | (0x7fe0000U 
                                              & ((IData)(vlSelf->io_float_i_3) 
                                                 << 0x11U)))))));
    __Vtemp_ha4bc4514__0[0U] = (IData)(vlSelf->io_float_i_0);
    __Vtemp_ha4bc4514__0[1U] = (IData)(vlSelf->io_float_i_1);
    __Vtemp_ha4bc4514__0[2U] = (IData)((((QData)((IData)(vlSelf->io_float_i_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_float_i_2))));
    __Vtemp_ha4bc4514__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_float_i_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_float_i_2))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+58,(__Vtemp_ha4bc4514__0),128);
    bufp->chgCData(oldp+62,(((8U & ((IData)((vlSelf->io_float_i_3 
                                             >> 0x1fU)) 
                                    << 3U)) | ((4U 
                                                & ((IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 0x1fU)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_1 
                                                               >> 0x1fU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_0 
                                                                >> 0x1fU))))))),4);
    __Vtemp_h62095e6f__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h4fd42478__0)) 
                                         << 0x2fU) 
                                        | (((QData)((IData)(
                                                            (0x7fffffU 
                                                             & (IData)(vlSelf->io_float_i_1)))) 
                                            << 0x18U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->__VdfgTmp_h4303f8d5__0) 
                                                               << 0x17U) 
                                                              | (0x7fffffU 
                                                                 & (IData)(vlSelf->io_float_i_0))))))));
    __Vtemp_h62095e6f__0[1U] = (((IData)(vlSelf->io_float_i_2) 
                                 << 0x10U) | (IData)(
                                                     ((((QData)((IData)(vlSelf->__VdfgTmp_h4fd42478__0)) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           (0x7fffffU 
                                                                            & (IData)(vlSelf->io_float_i_1)))) 
                                                           << 0x18U) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelf->__VdfgTmp_h4303f8d5__0) 
                                                                              << 0x17U) 
                                                                             | (0x7fffffU 
                                                                                & (IData)(vlSelf->io_float_i_0))))))) 
                                                      >> 0x20U)));
    __Vtemp_h62095e6f__0[2U] = (((IData)(vlSelf->__VdfgTmp_h1abfe04b__0) 
                                 << 0x1fU) | ((0x7fffff00U 
                                               & ((IData)(vlSelf->io_float_i_3) 
                                                  << 8U)) 
                                              | (((IData)(vlSelf->__VdfgTmp_hdbd751b3__0) 
                                                  << 7U) 
                                                 | (0x7fU 
                                                    & ((IData)(vlSelf->io_float_i_2) 
                                                       >> 0x10U)))));
    bufp->chgWData(oldp+63,(__Vtemp_h62095e6f__0),96);
    bufp->chgBit(oldp+66,((0U == (0xffU & (IData)((vlSelf->io_float_i_0 
                                                   >> 0x17U))))));
    bufp->chgBit(oldp+67,((0U == (0xffU & (IData)((vlSelf->io_float_i_1 
                                                   >> 0x17U))))));
    bufp->chgBit(oldp+68,((0U == (0xffU & (IData)((vlSelf->io_float_i_2 
                                                   >> 0x17U))))));
    bufp->chgBit(oldp+69,((0U == (0xffU & (IData)((vlSelf->io_float_i_3 
                                                   >> 0x17U))))));
    bufp->chgIData(oldp+70,(((((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                ? 0U : (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                         ? 0x3fU : 
                                        (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h553e6b95__0))
                                          ? 0xc0U : 
                                         ((0U == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_3 
                                                             >> 0x17U))))
                                           ? 0x82U : 
                                          ((0xffU == 
                                            (0xffU 
                                             & (IData)(
                                                       (vlSelf->io_float_i_3 
                                                        >> 0x17U))))
                                            ? 0U : 
                                           (0xffU & 
                                            ((IData)(
                                                     (vlSelf->io_float_i_3 
                                                      >> 0x17U)) 
                                             - (IData)(0x7fU)))))))) 
                              << 0x18U) | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                              ? 0U : 
                                             (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                               ? 0x3fU
                                               : (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5552cb50__0))
                                                   ? 0xc0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_2 
                                                                >> 0x17U))))
                                                    ? 0x82U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (0xffU 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x17U)) 
                                                        - (IData)(0x7fU)))))))) 
                                            << 0x10U) 
                                           | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                                 ? 0U
                                                 : 
                                                (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                                  ? 0x3fU
                                                  : 
                                                 (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h5577e19d__0))
                                                   ? 0xc0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 0x17U))))
                                                    ? 0x82U
                                                    : 
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x17U))))
                                                     ? 0U
                                                     : 
                                                    (0xffU 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x17U)) 
                                                        - (IData)(0x7fU)))))))) 
                                               << 8U) 
                                              | ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                                  ? 0U
                                                  : 
                                                 (VL_LTS_III(9, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                                   ? 0x3fU
                                                   : 
                                                  (VL_GTS_III(9, 0x1c0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT____VdfgTmp_h54dd2d3f__0))
                                                    ? 0xc0U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x17U))))
                                                     ? 0x82U
                                                     : 
                                                    ((0xffU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->io_float_i_0 
                                                                  >> 0x17U))))
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_0 
                                                                  >> 0x17U)) 
                                                         - (IData)(0x7fU)))))))))))),32);
    __Vtemp_h44708993__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                                           ? 0U
                                                           : 
                                                          (((IData)(vlSelf->__VdfgTmp_h4fd42478__0) 
                                                            << 0x1bU) 
                                                           | (0x7fffff0U 
                                                              & ((IData)(vlSelf->io_float_i_1) 
                                                                 << 4U)))))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                                            ? 0U
                                                            : 
                                                           (((IData)(vlSelf->__VdfgTmp_h4303f8d5__0) 
                                                             << 0x1bU) 
                                                            | (0x7fffff0U 
                                                               & ((IData)(vlSelf->io_float_i_0) 
                                                                  << 4U))))))));
    __Vtemp_h44708993__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_hdbd751b3__0) 
                                            << 0x1bU) 
                                           | (0x7fffff0U 
                                              & ((IData)(vlSelf->io_float_i_2) 
                                                 << 4U)))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                                                          ? 0U
                                                                          : 
                                                                         (((IData)(vlSelf->__VdfgTmp_h4fd42478__0) 
                                                                           << 0x1bU) 
                                                                          | (0x7fffff0U 
                                                                             & ((IData)(vlSelf->io_float_i_1) 
                                                                                << 4U)))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                                                           ? 0U
                                                                           : 
                                                                          (((IData)(vlSelf->__VdfgTmp_h4303f8d5__0) 
                                                                            << 0x1bU) 
                                                                           | (0x7fffff0U 
                                                                              & ((IData)(vlSelf->io_float_i_0) 
                                                                                << 4U))))))) 
                                                      >> 0x20U)));
    __Vtemp_h44708993__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_h1abfe04b__0) 
                                            << 0x1bU) 
                                           | (0x7fffff0U 
                                              & ((IData)(vlSelf->io_float_i_3) 
                                                 << 4U)))) 
                                 << 0x14U) | (((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->__VdfgTmp_hdbd751b3__0) 
                                                    << 0x1bU) 
                                                   | (0x7fffff0U 
                                                      & ((IData)(vlSelf->io_float_i_2) 
                                                         << 4U)))) 
                                              >> 8U));
    __Vtemp_h44708993__0[3U] = (((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                  ? 0U : (((IData)(vlSelf->__VdfgTmp_h1abfe04b__0) 
                                           << 0x1bU) 
                                          | (0x7fffff0U 
                                             & ((IData)(vlSelf->io_float_i_3) 
                                                << 4U)))) 
                                >> 0xcU);
    bufp->chgWData(oldp+71,(__Vtemp_h44708993__0),112);
    bufp->chgBit(oldp+75,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_0)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_h4303f8d5__0) 
                                            << 0x1bU) 
                                           | (0x7fffff0U 
                                              & ((IData)(vlSelf->io_float_i_0) 
                                                 << 4U)))))));
    bufp->chgBit(oldp+76,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_2)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_h4fd42478__0) 
                                            << 0x1bU) 
                                           | (0x7fffff0U 
                                              & ((IData)(vlSelf->io_float_i_1) 
                                                 << 4U)))))));
    bufp->chgBit(oldp+77,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_4)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_hdbd751b3__0) 
                                            << 0x1bU) 
                                           | (0x7fffff0U 
                                              & ((IData)(vlSelf->io_float_i_2) 
                                                 << 4U)))))));
    bufp->chgBit(oldp+78,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp32__DOT___GEN_6)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_h1abfe04b__0) 
                                            << 0x1bU) 
                                           | (0x7fffff0U 
                                              & ((IData)(vlSelf->io_float_i_3) 
                                                 << 4U)))))));
    bufp->chgSData(oldp+79,(((0xf000U & ((IData)(vlSelf->io_float_i_3) 
                                         << 0xcU)) 
                             | ((0xf00U & ((IData)(vlSelf->io_float_i_2) 
                                           << 8U)) 
                                | ((0xf0U & ((IData)(vlSelf->io_float_i_1) 
                                             << 4U)) 
                                   | (0xfU & (IData)(vlSelf->io_float_i_0)))))),16);
    bufp->chgCData(oldp+80,(((8U & ((IData)((vlSelf->io_float_i_3 
                                             >> 3U)) 
                                    << 3U)) | ((4U 
                                                & ((IData)(
                                                           (vlSelf->io_float_i_2 
                                                            >> 3U)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & ((IData)(
                                                              (vlSelf->io_float_i_1 
                                                               >> 3U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_0 
                                                                >> 3U))))))),4);
    bufp->chgCData(oldp+81,(((0x40U & ((~ (IData)((vlSelf->io_float_i_3 
                                                   >> 2U))) 
                                       << 6U)) | ((0x10U 
                                                   & ((~ (IData)(
                                                                 (vlSelf->io_float_i_2 
                                                                  >> 2U))) 
                                                      << 4U)) 
                                                  | ((4U 
                                                      & ((~ (IData)(
                                                                    (vlSelf->io_float_i_1 
                                                                     >> 2U))) 
                                                         << 2U)) 
                                                     | (1U 
                                                        & (~ (IData)(
                                                                     (vlSelf->io_float_i_0 
                                                                      >> 2U)))))))),8);
    bufp->chgSData(oldp+82,(((0x600U & ((IData)(vlSelf->io_float_i_3) 
                                        << 9U)) | (
                                                   (0xc0U 
                                                    & ((IData)(vlSelf->io_float_i_2) 
                                                       << 6U)) 
                                                   | ((0x18U 
                                                       & ((IData)(vlSelf->io_float_i_1) 
                                                          << 3U)) 
                                                      | (3U 
                                                         & (IData)(vlSelf->io_float_i_0)))))),12);
    bufp->chgIData(oldp+83,(((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                ? 0U : (1U & (~ (IData)(
                                                        (vlSelf->io_float_i_3 
                                                         >> 2U))))) 
                              << 0x18U) | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                              ? 0U : 
                                             (1U & 
                                              (~ (IData)(
                                                         (vlSelf->io_float_i_2 
                                                          >> 2U))))) 
                                            << 0x10U) 
                                           | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & (~ (IData)(
                                                              (vlSelf->io_float_i_1 
                                                               >> 2U))))) 
                                               << 8U) 
                                              | ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (vlSelf->io_float_i_0 
                                                                >> 2U))))))))),32);
    __Vtemp_h57e7e0b8__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                           ? 0U
                                                           : 
                                                          (0x6000000U 
                                                           & ((IData)(vlSelf->io_float_i_1) 
                                                              << 0x19U))))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                            ? 0U
                                                            : 
                                                           (0x6000000U 
                                                            & ((IData)(vlSelf->io_float_i_0) 
                                                               << 0x19U)))))));
    __Vtemp_h57e7e0b8__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                   ? 0U : (0x6000000U 
                                           & ((IData)(vlSelf->io_float_i_2) 
                                              << 0x19U))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                                          ? 0U
                                                                          : 
                                                                         (0x6000000U 
                                                                          & ((IData)(vlSelf->io_float_i_1) 
                                                                             << 0x19U))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                                           ? 0U
                                                                           : 
                                                                          (0x6000000U 
                                                                           & ((IData)(vlSelf->io_float_i_0) 
                                                                              << 0x19U)))))) 
                                                      >> 0x20U)));
    __Vtemp_h57e7e0b8__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                   ? 0U : (0x6000000U 
                                           & ((IData)(vlSelf->io_float_i_3) 
                                              << 0x19U))) 
                                 << 0x14U) | (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                                ? 0U
                                                : (0x6000000U 
                                                   & ((IData)(vlSelf->io_float_i_2) 
                                                      << 0x19U))) 
                                              >> 8U));
    __Vtemp_h57e7e0b8__0[3U] = (((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                  ? 0U : (0x6000000U 
                                          & ((IData)(vlSelf->io_float_i_3) 
                                             << 0x19U))) 
                                >> 0xcU);
    bufp->chgWData(oldp+84,(__Vtemp_h57e7e0b8__0),112);
    bufp->chgBit(oldp+88,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                   ? 0U : (0x6000000U 
                                           & ((IData)(vlSelf->io_float_i_0) 
                                              << 0x19U))))));
    bufp->chgBit(oldp+89,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                   ? 0U : (0x6000000U 
                                           & ((IData)(vlSelf->io_float_i_1) 
                                              << 0x19U))))));
    bufp->chgBit(oldp+90,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                   ? 0U : (0x6000000U 
                                           & ((IData)(vlSelf->io_float_i_2) 
                                              << 0x19U))))));
    bufp->chgBit(oldp+91,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                   ? 0U : (0x6000000U 
                                           & ((IData)(vlSelf->io_float_i_3) 
                                              << 0x19U))))));
    __Vtemp_h692ccc60__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                           ? 0U
                                                           : 
                                                          (1U 
                                                           & (~ (IData)(
                                                                        (vlSelf->io_float_i_0 
                                                                         >> 2U))))))) 
                                         << 0x39U) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                             ? 0U
                                                             : 
                                                            (0x6000000U 
                                                             & ((IData)(vlSelf->io_float_i_0) 
                                                                << 0x19U))))) 
                                           << 0x1eU)));
    __Vtemp_h692ccc60__0[1U] = (0xf0000000U | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                                           ? 0U
                                                                           : 
                                                                          (1U 
                                                                           & (~ (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 2U))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_0)
                                                                             ? 0U
                                                                             : 
                                                                            (0x6000000U 
                                                                             & ((IData)(vlSelf->io_float_i_0) 
                                                                                << 0x19U))))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    __Vtemp_h692ccc60__0[2U] = 0x3ffffffU;
    bufp->chgWData(oldp+92,(__Vtemp_h692ccc60__0),90);
    __Vtemp_hc32d3bdb__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                           ? 0U
                                                           : 
                                                          (1U 
                                                           & (~ (IData)(
                                                                        (vlSelf->io_float_i_1 
                                                                         >> 2U))))))) 
                                         << 0x39U) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                             ? 0U
                                                             : 
                                                            (0x6000000U 
                                                             & ((IData)(vlSelf->io_float_i_1) 
                                                                << 0x19U))))) 
                                           << 0x1eU)));
    __Vtemp_hc32d3bdb__0[1U] = (0xf0000000U | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                                           ? 0U
                                                                           : 
                                                                          (1U 
                                                                           & (~ (IData)(
                                                                                (vlSelf->io_float_i_1 
                                                                                >> 2U))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_2)
                                                                             ? 0U
                                                                             : 
                                                                            (0x6000000U 
                                                                             & ((IData)(vlSelf->io_float_i_1) 
                                                                                << 0x19U))))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    __Vtemp_hc32d3bdb__0[2U] = 0x3ffffffU;
    bufp->chgWData(oldp+95,(__Vtemp_hc32d3bdb__0),90);
    __Vtemp_hb2b40a05__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                                           ? 0U
                                                           : 
                                                          (1U 
                                                           & (~ (IData)(
                                                                        (vlSelf->io_float_i_2 
                                                                         >> 2U))))))) 
                                         << 0x39U) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                                             ? 0U
                                                             : 
                                                            (0x6000000U 
                                                             & ((IData)(vlSelf->io_float_i_2) 
                                                                << 0x19U))))) 
                                           << 0x1eU)));
    __Vtemp_hb2b40a05__0[1U] = (0xf0000000U | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                                                           ? 0U
                                                                           : 
                                                                          (1U 
                                                                           & (~ (IData)(
                                                                                (vlSelf->io_float_i_2 
                                                                                >> 2U))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_4)
                                                                             ? 0U
                                                                             : 
                                                                            (0x6000000U 
                                                                             & ((IData)(vlSelf->io_float_i_2) 
                                                                                << 0x19U))))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    __Vtemp_hb2b40a05__0[2U] = 0x3ffffffU;
    bufp->chgWData(oldp+98,(__Vtemp_hb2b40a05__0),90);
    __Vtemp_h080749b8__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                                           ? 0U
                                                           : 
                                                          (1U 
                                                           & (~ (IData)(
                                                                        (vlSelf->io_float_i_3 
                                                                         >> 2U))))))) 
                                         << 0x39U) 
                                        | ((QData)((IData)(
                                                           ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                                             ? 0U
                                                             : 
                                                            (0x6000000U 
                                                             & ((IData)(vlSelf->io_float_i_3) 
                                                                << 0x19U))))) 
                                           << 0x1eU)));
    __Vtemp_h080749b8__0[1U] = (0xf0000000U | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                                                           ? 0U
                                                                           : 
                                                                          (1U 
                                                                           & (~ (IData)(
                                                                                (vlSelf->io_float_i_3 
                                                                                >> 2U))))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(
                                                                           ((IData)(vlSelf->PvuTop__DOT__float2posit_fp4__DOT___GEN_6)
                                                                             ? 0U
                                                                             : 
                                                                            (0x6000000U 
                                                                             & ((IData)(vlSelf->io_float_i_3) 
                                                                                << 0x19U))))) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    __Vtemp_h080749b8__0[2U] = 0x3ffffffU;
    bufp->chgWData(oldp+101,(__Vtemp_h080749b8__0),90);
    __Vtemp_h7c91d1c4__0[0U] = (IData)(vlSelf->io_float_i_0);
    __Vtemp_h7c91d1c4__0[1U] = (IData)((vlSelf->io_float_i_0 
                                        >> 0x20U));
    __Vtemp_h7c91d1c4__0[2U] = (IData)(vlSelf->io_float_i_1);
    __Vtemp_h7c91d1c4__0[3U] = (IData)((vlSelf->io_float_i_1 
                                        >> 0x20U));
    __Vtemp_h7c91d1c4__0[4U] = (IData)(vlSelf->io_float_i_2);
    __Vtemp_h7c91d1c4__0[5U] = (IData)((vlSelf->io_float_i_2 
                                        >> 0x20U));
    __Vtemp_h7c91d1c4__0[6U] = (IData)(vlSelf->io_float_i_3);
    __Vtemp_h7c91d1c4__0[7U] = (IData)((vlSelf->io_float_i_3 
                                        >> 0x20U));
    bufp->chgWData(oldp+104,(__Vtemp_h7c91d1c4__0),256);
    bufp->chgCData(oldp+112,(((8U & ((IData)((vlSelf->io_float_i_3 
                                              >> 0x3fU)) 
                                     << 3U)) | ((4U 
                                                 & ((IData)(
                                                            (vlSelf->io_float_i_2 
                                                             >> 0x3fU)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 0x3fU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 0x3fU))))))),4);
    __Vtemp_h7c5f11d9__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((0U 
                                                               == 
                                                               (0x7ffU 
                                                                & (IData)(
                                                                          (vlSelf->io_float_i_0 
                                                                           >> 0x34U)))) 
                                                              | (0x7ffU 
                                                                 == 
                                                                 (0x7ffU 
                                                                  & (IData)(
                                                                            (vlSelf->io_float_i_0 
                                                                             >> 0x34U))))))))) 
                                         << 0x34U) 
                                        | (0xfffffffffffffULL 
                                           & vlSelf->io_float_i_0)));
    __Vtemp_h7c5f11d9__0[1U] = (((IData)((0xfffffffffffffULL 
                                          & vlSelf->io_float_i_1)) 
                                 << 0x15U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((0U 
                                                                              == 
                                                                              (0x7ffU 
                                                                               & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0x34U)))) 
                                                                             | (0x7ffU 
                                                                                == 
                                                                                (0x7ffU 
                                                                                & (IData)(
                                                                                (vlSelf->io_float_i_0 
                                                                                >> 0x34U))))))))) 
                                                        << 0x34U) 
                                                       | (0xfffffffffffffULL 
                                                          & vlSelf->io_float_i_0)) 
                                                      >> 0x20U)));
    __Vtemp_h7c5f11d9__0[2U] = (((IData)((0xfffffffffffffULL 
                                          & vlSelf->io_float_i_1)) 
                                 >> 0xbU) | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & vlSelf->io_float_i_1) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_h7c5f11d9__0[3U] = (((IData)((0xfffffffffffffULL 
                                          & vlSelf->io_float_i_2)) 
                                 << 0xaU) | ((0x200U 
                                              & ((~ 
                                                  ((0U 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 0x34U)))) 
                                                   | (0x7ffU 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSelf->io_float_i_1 
                                                                  >> 0x34U)))))) 
                                                 << 9U)) 
                                             | ((IData)(
                                                        ((0xfffffffffffffULL 
                                                          & vlSelf->io_float_i_1) 
                                                         >> 0x20U)) 
                                                >> 0xbU)));
    __Vtemp_h7c5f11d9__0[4U] = (((IData)((0xfffffffffffffULL 
                                          & vlSelf->io_float_i_3)) 
                                 << 0x1fU) | ((0x40000000U 
                                               & ((~ 
                                                   ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x34U)))) 
                                                    | (0x7ffU 
                                                       == 
                                                       (0x7ffU 
                                                        & (IData)(
                                                                  (vlSelf->io_float_i_2 
                                                                   >> 0x34U)))))) 
                                                  << 0x1eU)) 
                                              | (((IData)(
                                                          (0xfffffffffffffULL 
                                                           & vlSelf->io_float_i_2)) 
                                                  >> 0x16U) 
                                                 | ((IData)(
                                                            ((0xfffffffffffffULL 
                                                              & vlSelf->io_float_i_2) 
                                                             >> 0x20U)) 
                                                    << 0xaU))));
    __Vtemp_h7c5f11d9__0[5U] = (((IData)((0xfffffffffffffULL 
                                          & vlSelf->io_float_i_3)) 
                                 >> 1U) | ((IData)(
                                                   ((0xfffffffffffffULL 
                                                     & vlSelf->io_float_i_3) 
                                                    >> 0x20U)) 
                                           << 0x1fU));
    __Vtemp_h7c5f11d9__0[6U] = ((0x80000U & ((~ ((0U 
                                                  == 
                                                  (0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_3 
                                                              >> 0x34U)))) 
                                                 | (0x7ffU 
                                                    == 
                                                    (0x7ffU 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_3 
                                                                >> 0x34U)))))) 
                                             << 0x13U)) 
                                | ((IData)(((0xfffffffffffffULL 
                                             & vlSelf->io_float_i_3) 
                                            >> 0x20U)) 
                                   >> 1U));
    bufp->chgWData(oldp+113,(__Vtemp_h7c5f11d9__0),212);
    bufp->chgBit(oldp+120,((0U == (0x7ffU & (IData)(
                                                    (vlSelf->io_float_i_0 
                                                     >> 0x34U))))));
    bufp->chgBit(oldp+121,((0U == (0x7ffU & (IData)(
                                                    (vlSelf->io_float_i_1 
                                                     >> 0x34U))))));
    bufp->chgBit(oldp+122,((0U == (0x7ffU & (IData)(
                                                    (vlSelf->io_float_i_2 
                                                     >> 0x34U))))));
    bufp->chgBit(oldp+123,((0U == (0x7ffU & (IData)(
                                                    (vlSelf->io_float_i_3 
                                                     >> 0x34U))))));
    bufp->chgIData(oldp+124,(((((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_6)
                                 ? 0U : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                          ? 0x3fU : 
                                         (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h55001d01__0))
                                           ? 0xc0U : 
                                          ((0U == (0x7ffU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_3 
                                                              >> 0x34U))))
                                            ? 2U : 
                                           ((0x7ffU 
                                             == (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 0x34U))))
                                             ? 0U : 
                                            (0xffU 
                                             & ((IData)(
                                                        (vlSelf->io_float_i_3 
                                                         >> 0x34U)) 
                                                - (IData)(0xffU)))))))) 
                               << 0x18U) | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_4)
                                               ? 0U
                                               : (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                                   ? 0x3fU
                                                   : 
                                                  (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5572f924__0))
                                                    ? 0xc0U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 0x34U))))
                                                     ? 2U
                                                     : 
                                                    ((0x7ffU 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSelf->io_float_i_2 
                                                                  >> 0x34U))))
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_2 
                                                                  >> 0x34U)) 
                                                         - (IData)(0xffU)))))))) 
                                             << 0x10U) 
                                            | ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_2)
                                                  ? 0U
                                                  : 
                                                 (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                                   ? 0x3fU
                                                   : 
                                                  (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h5489a20c__0))
                                                    ? 0xc0U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 0x34U))))
                                                     ? 2U
                                                     : 
                                                    ((0x7ffU 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSelf->io_float_i_1 
                                                                  >> 0x34U))))
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_1 
                                                                  >> 0x34U)) 
                                                         - (IData)(0xffU)))))))) 
                                                << 8U) 
                                               | ((IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT___GEN_0)
                                                   ? 0U
                                                   : 
                                                  (VL_LTS_III(12, 0x3fU, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                                    ? 0x3fU
                                                    : 
                                                   (VL_GTS_III(12, 0xfc0U, (IData)(vlSelf->PvuTop__DOT__float2posit_fp64__DOT____VdfgTmp_h54dd53e7__0))
                                                     ? 0xc0U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x7ffU 
                                                       & (IData)(
                                                                 (vlSelf->io_float_i_0 
                                                                  >> 0x34U))))
                                                      ? 2U
                                                      : 
                                                     ((0x7ffU 
                                                       == 
                                                       (0x7ffU 
                                                        & (IData)(
                                                                  (vlSelf->io_float_i_0 
                                                                   >> 0x34U))))
                                                       ? 0U
                                                       : 
                                                      (0xffU 
                                                       & ((IData)(
                                                                  (vlSelf->io_float_i_0 
                                                                   >> 0x34U)) 
                                                          - (IData)(0xffU)))))))))))),32);
    bufp->chgIData(oldp+125,((((IData)(vlSelf->io_float_i_3) 
                               << 0x18U) | ((0xff0000U 
                                             & ((IData)(vlSelf->io_float_i_2) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & ((IData)(vlSelf->io_float_i_1) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & (IData)(vlSelf->io_float_i_0)))))),32);
    bufp->chgCData(oldp+126,(((8U & ((IData)((vlSelf->io_float_i_3 
                                              >> 7U)) 
                                     << 3U)) | ((4U 
                                                 & ((IData)(
                                                            (vlSelf->io_float_i_2 
                                                             >> 7U)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 7U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 7U))))))),4);
    bufp->chgIData(oldp+127,(((((0U == (0xfU & (IData)(
                                                       (vlSelf->io_float_i_3 
                                                        >> 3U))))
                                 ? 0x1aU : ((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->io_float_i_3 
                                                         >> 3U))))
                                             ? 0U : 
                                            ((0x10U 
                                              & (((IData)(
                                                          (vlSelf->io_float_i_3 
                                                           >> 3U)) 
                                                  - (IData)(7U)) 
                                                 << 1U)) 
                                             | (0xfU 
                                                & ((IData)(
                                                           (vlSelf->io_float_i_3 
                                                            >> 3U)) 
                                                   - (IData)(7U)))))) 
                               << 0xfU) | ((((0U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->io_float_i_2 
                                                          >> 3U))))
                                              ? 0x1aU
                                              : ((0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_2 
                                                              >> 3U))))
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & (((IData)(
                                                               (vlSelf->io_float_i_2 
                                                                >> 3U)) 
                                                       - (IData)(7U)) 
                                                      << 1U)) 
                                                  | (0xfU 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_2 
                                                                 >> 3U)) 
                                                        - (IData)(7U)))))) 
                                            << 0xaU) 
                                           | ((((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->io_float_i_1 
                                                             >> 3U))))
                                                 ? 0x1aU
                                                 : 
                                                ((0xfU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_1 
                                                              >> 3U))))
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & (((IData)(
                                                               (vlSelf->io_float_i_1 
                                                                >> 3U)) 
                                                       - (IData)(7U)) 
                                                      << 1U)) 
                                                  | (0xfU 
                                                     & ((IData)(
                                                                (vlSelf->io_float_i_1 
                                                                 >> 3U)) 
                                                        - (IData)(7U)))))) 
                                               << 5U) 
                                              | ((0U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->io_float_i_0 
                                                              >> 3U))))
                                                  ? 0x1aU
                                                  : 
                                                 ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->io_float_i_0 
                                                               >> 3U))))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (((IData)(
                                                                (vlSelf->io_float_i_0 
                                                                 >> 3U)) 
                                                        - (IData)(7U)) 
                                                       << 1U)) 
                                                   | (0xfU 
                                                      & ((IData)(
                                                                 (vlSelf->io_float_i_0 
                                                                  >> 3U)) 
                                                         - (IData)(7U)))))))))),20);
    bufp->chgSData(oldp+128,((((IData)(vlSelf->__VdfgTmp_h18d17475__0) 
                               << 0xfU) | ((0x7000U 
                                            & ((IData)(vlSelf->io_float_i_3) 
                                               << 0xcU)) 
                                           | (((IData)(vlSelf->__VdfgTmp_hcbfe9c52__0) 
                                               << 0xbU) 
                                              | ((0x700U 
                                                  & ((IData)(vlSelf->io_float_i_2) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelf->__VdfgTmp_ha54cdad1__0) 
                                                     << 7U) 
                                                    | ((0x70U 
                                                        & ((IData)(vlSelf->io_float_i_1) 
                                                           << 4U)) 
                                                       | (((IData)(vlSelf->__VdfgTmp_haf7f5c8c__0) 
                                                           << 3U) 
                                                          | (7U 
                                                             & (IData)(vlSelf->io_float_i_0)))))))))),16);
    bufp->chgBit(oldp+129,((0U == (0xfU & (IData)((vlSelf->io_float_i_0 
                                                   >> 3U))))));
    bufp->chgBit(oldp+130,((0U == (0xfU & (IData)((vlSelf->io_float_i_1 
                                                   >> 3U))))));
    bufp->chgBit(oldp+131,((0U == (0xfU & (IData)((vlSelf->io_float_i_2 
                                                   >> 3U))))));
    bufp->chgBit(oldp+132,((0U == (0xfU & (IData)((vlSelf->io_float_i_3 
                                                   >> 3U))))));
    __Vtemp_h14d90051__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                                           ? 0U
                                                           : 
                                                          (((IData)(vlSelf->__VdfgTmp_ha54cdad1__0) 
                                                            << 0x1bU) 
                                                           | (0x7000000U 
                                                              & ((IData)(vlSelf->io_float_i_1) 
                                                                 << 0x18U)))))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                                            ? 0U
                                                            : 
                                                           (((IData)(vlSelf->__VdfgTmp_haf7f5c8c__0) 
                                                             << 0x1bU) 
                                                            | (0x7000000U 
                                                               & ((IData)(vlSelf->io_float_i_0) 
                                                                  << 0x18U))))))));
    __Vtemp_h14d90051__0[1U] = ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_hcbfe9c52__0) 
                                            << 0x1bU) 
                                           | (0x7000000U 
                                              & ((IData)(vlSelf->io_float_i_2) 
                                                 << 0x18U)))) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                                                          ? 0U
                                                                          : 
                                                                         (((IData)(vlSelf->__VdfgTmp_ha54cdad1__0) 
                                                                           << 0x1bU) 
                                                                          | (0x7000000U 
                                                                             & ((IData)(vlSelf->io_float_i_1) 
                                                                                << 0x18U)))))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                                                           ? 0U
                                                                           : 
                                                                          (((IData)(vlSelf->__VdfgTmp_haf7f5c8c__0) 
                                                                            << 0x1bU) 
                                                                           | (0x7000000U 
                                                                              & ((IData)(vlSelf->io_float_i_0) 
                                                                                << 0x18U))))))) 
                                                      >> 0x20U)));
    __Vtemp_h14d90051__0[2U] = ((((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                   ? 0U : (((IData)(vlSelf->__VdfgTmp_h18d17475__0) 
                                            << 0x1bU) 
                                           | (0x7000000U 
                                              & ((IData)(vlSelf->io_float_i_3) 
                                                 << 0x18U)))) 
                                 << 0x14U) | (((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->__VdfgTmp_hcbfe9c52__0) 
                                                    << 0x1bU) 
                                                   | (0x7000000U 
                                                      & ((IData)(vlSelf->io_float_i_2) 
                                                         << 0x18U)))) 
                                              >> 8U));
    __Vtemp_h14d90051__0[3U] = (((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                  ? 0U : (((IData)(vlSelf->__VdfgTmp_h18d17475__0) 
                                           << 0x1bU) 
                                          | (0x7000000U 
                                             & ((IData)(vlSelf->io_float_i_3) 
                                                << 0x18U)))) 
                                >> 0xcU);
    bufp->chgWData(oldp+133,(__Vtemp_h14d90051__0),112);
    bufp->chgBit(oldp+137,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_0)
                                    ? 0U : (((IData)(vlSelf->__VdfgTmp_haf7f5c8c__0) 
                                             << 0x1bU) 
                                            | (0x7000000U 
                                               & ((IData)(vlSelf->io_float_i_0) 
                                                  << 0x18U)))))));
    bufp->chgBit(oldp+138,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_2)
                                    ? 0U : (((IData)(vlSelf->__VdfgTmp_ha54cdad1__0) 
                                             << 0x1bU) 
                                            | (0x7000000U 
                                               & ((IData)(vlSelf->io_float_i_1) 
                                                  << 0x18U)))))));
    bufp->chgBit(oldp+139,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_4)
                                    ? 0U : (((IData)(vlSelf->__VdfgTmp_hcbfe9c52__0) 
                                             << 0x1bU) 
                                            | (0x7000000U 
                                               & ((IData)(vlSelf->io_float_i_2) 
                                                  << 0x18U)))))));
    bufp->chgBit(oldp+140,((0U == ((IData)(vlSelf->PvuTop__DOT__float2posit_fp8__DOT___GEN_6)
                                    ? 0U : (((IData)(vlSelf->__VdfgTmp_h18d17475__0) 
                                             << 0x1bU) 
                                            | (0x7000000U 
                                               & ((IData)(vlSelf->io_float_i_3) 
                                                  << 0x18U)))))));
    if (vlSelf->io_Isposit) {
        __Vtemp_h06c9d468__0[0U] = 0U;
        __Vtemp_h06c9d468__0[1U] = 0U;
        __Vtemp_h06c9d468__0[2U] = 0U;
        __Vtemp_h06c9d468__0[3U] = 0U;
    } else {
        __Vtemp_h06c9d468__0[0U] = (IData)(vlSelf->io_float_i_0);
        __Vtemp_h06c9d468__0[1U] = (IData)(vlSelf->io_float_i_1);
        __Vtemp_h06c9d468__0[2U] = (IData)((((QData)((IData)(vlSelf->io_float_i_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_float_i_2))));
        __Vtemp_h06c9d468__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_float_i_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_float_i_2))) 
                                            >> 0x20U));
    }
    bufp->chgWData(oldp+141,(__Vtemp_h06c9d468__0),128);
    bufp->chgCData(oldp+145,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
                                      & (IData)((vlSelf->io_float_i_3 
                                                 >> 0x1fU))) 
                                     << 3U)) | ((4U 
                                                 & (((~ (IData)(vlSelf->io_Isposit)) 
                                                     & (IData)(
                                                               (vlSelf->io_float_i_2 
                                                                >> 0x1fU))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((~ (IData)(vlSelf->io_Isposit)) 
                                                        & (IData)(
                                                                  (vlSelf->io_float_i_1 
                                                                   >> 0x1fU))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSelf->io_Isposit)) 
                                                         & (IData)(
                                                                   (vlSelf->io_float_i_0 
                                                                    >> 0x1fU)))))))),4);
    if (vlSelf->io_Isposit) {
        __Vtemp_h863ff0d7__0[0U] = 0U;
        __Vtemp_h863ff0d7__0[1U] = 0U;
        __Vtemp_h863ff0d7__0[2U] = 0U;
        __Vtemp_h863ff0d7__0[3U] = 0U;
    } else {
        __Vtemp_h863ff0d7__0[0U] = (IData)(vlSelf->io_float_i2_0);
        __Vtemp_h863ff0d7__0[1U] = (IData)(vlSelf->io_float_i2_1);
        __Vtemp_h863ff0d7__0[2U] = (IData)((((QData)((IData)(vlSelf->io_float_i2_3)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->io_float_i2_2))));
        __Vtemp_h863ff0d7__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_float_i2_3)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->io_float_i2_2))) 
                                            >> 0x20U));
    }
    bufp->chgWData(oldp+146,(__Vtemp_h863ff0d7__0),128);
    bufp->chgCData(oldp+150,(((8U & (((~ (IData)(vlSelf->io_Isposit)) 
                                      & (IData)((vlSelf->io_float_i2_3 
                                                 >> 0x1fU))) 
                                     << 3U)) | ((4U 
                                                 & (((~ (IData)(vlSelf->io_Isposit)) 
                                                     & (IData)(
                                                               (vlSelf->io_float_i2_2 
                                                                >> 0x1fU))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((~ (IData)(vlSelf->io_Isposit)) 
                                                        & (IData)(
                                                                  (vlSelf->io_float_i2_1 
                                                                   >> 0x1fU))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSelf->io_Isposit)) 
                                                         & (IData)(
                                                                   (vlSelf->io_float_i2_0 
                                                                    >> 0x1fU)))))))),4);
    bufp->chgSData(oldp+151,(((0xffffff00U & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h41d5b416__0) 
                                               << 8U) 
                                              & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T) 
                                                 << 1U))) 
                              | (IData)(vlSelf->PvuTop__DOT___GEN_145))),9);
    bufp->chgIData(oldp+152,(((((IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isZero)
                                 ? 0U : (((IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isInf) 
                                          | (IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isNaN))
                                          ? 0xffU : 
                                         ((0x182U == 
                                           ((0xffffff00U 
                                             & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h41d5b416__0) 
                                                 << 8U) 
                                                & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T) 
                                                   << 1U))) 
                                            | (IData)(vlSelf->PvuTop__DOT___GEN_145)))
                                           ? 0U : (0xffU 
                                                   & ((IData)(0x7fU) 
                                                      + (IData)(vlSelf->PvuTop__DOT___GEN_145)))))) 
                               << 0x17U) | (((IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isInf) 
                                             | (IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isZero))
                                             ? 0U : 
                                            ((IData)(vlSelf->PvuTop__DOT____Vcellinp__floatDotEncoder__io_isNaN)
                                              ? ((0U 
                                                  == vlSelf->PvuTop__DOT__floatDotEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                  ? 1U
                                                  : vlSelf->PvuTop__DOT__floatDotEncoder__DOT____VdfgTmp_h96e1e555__0)
                                              : vlSelf->PvuTop__DOT__floatDotEncoder__DOT____VdfgTmp_h96e1e555__0)))),32);
    bufp->chgBit(oldp+153,((0x182U == ((0xffffff00U 
                                        & (((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h41d5b416__0) 
                                            << 8U) 
                                           & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_dot_T) 
                                              << 1U))) 
                                       | (IData)(vlSelf->PvuTop__DOT___GEN_145)))));
    bufp->chgQData(oldp+154,((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                 ? 
                                                ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                   & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T) 
                                                      >> 7U)) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->PvuTop__DOT___GEN_156))
                                                 : 0U))) 
                               << 0x1bU) | (QData)((IData)(
                                                           ((((2U 
                                                               < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                               ? 
                                                              ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                                 & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T) 
                                                                    >> 7U)) 
                                                                << 8U) 
                                                               | (IData)(vlSelf->PvuTop__DOT___GEN_155))
                                                               : 0U) 
                                                             << 0x12U) 
                                                            | ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                  ? 
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_154))
                                                                  : 0U) 
                                                                << 9U) 
                                                               | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                   ? 
                                                                  ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                                     & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
                                                                        >> 7U)) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelf->PvuTop__DOT___GEN_152))
                                                                   : 0U))))))),36);
    __Vtemp_hf98bbfc2__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                           ? 
                                                          ((IData)(vlSelf->PvuTop__DOT___GEN_153)
                                                            ? 0U
                                                            : 
                                                           ((5U 
                                                             == (IData)(vlSelf->io_op))
                                                             ? 0U
                                                             : 
                                                            (0x7fffffU 
                                                             & vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U])))
                                                           : 0U))) 
                                         << 0x18U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                            ? 
                                                           ((IData)(vlSelf->PvuTop__DOT___GEN_153)
                                                             ? 0U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->io_op))
                                                              ? 0U
                                                              : 
                                                             (0x7fffffU 
                                                              & vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U])))
                                                            : 0U)))));
    __Vtemp_hf98bbfc2__0[1U] = ((((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                   ? ((IData)(vlSelf->PvuTop__DOT___GEN_153)
                                       ? 0U : ((5U 
                                                == (IData)(vlSelf->io_op))
                                                ? 0U
                                                : (0x7fffffU 
                                                   & vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U])))
                                   : 0U) << 0x10U) 
                                | (IData)(((((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                               ? 
                                                              ((IData)(vlSelf->PvuTop__DOT___GEN_153)
                                                                ? 0U
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelf->io_op))
                                                                 ? 0U
                                                                 : 
                                                                (0x7fffffU 
                                                                 & vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U])))
                                                               : 0U))) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                ? 
                                                               ((IData)(vlSelf->PvuTop__DOT___GEN_153)
                                                                 ? 0U
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlSelf->io_op))
                                                                  ? 0U
                                                                  : 
                                                                 (0x7fffffU 
                                                                  & vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U])))
                                                                : 0U)))) 
                                           >> 0x20U)));
    __Vtemp_hf98bbfc2__0[2U] = ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                   ? ((IData)(vlSelf->PvuTop__DOT___GEN_153)
                                       ? 0U : ((5U 
                                                == (IData)(vlSelf->io_op))
                                                ? 0U
                                                : (0x7fffffU 
                                                   & vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U])))
                                   : 0U) << 8U) | (
                                                   ((2U 
                                                     < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                     ? 
                                                    ((IData)(vlSelf->PvuTop__DOT___GEN_153)
                                                      ? 0U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->io_op))
                                                       ? 0U
                                                       : 
                                                      (0x7fffffU 
                                                       & vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U])))
                                                     : 0U) 
                                                   >> 0x10U));
    bufp->chgWData(oldp+156,(__Vtemp_hf98bbfc2__0),96);
    bufp->chgCData(oldp+159,((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                               << 3U) | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                           << 1U) | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0))))),4);
    __Vtemp_hb2ec930e__0[0U] = (IData)((((QData)((IData)(
                                                         ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfe6df398__0) 
                                                          & (IData)(vlSelf->PvuTop__DOT___GEN_84)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                                              ? 0U
                                                              : 
                                                             (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                               | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0))
                                                               ? 0xffU
                                                               : 
                                                              ((0x182U 
                                                                == 
                                                                ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                  ? 
                                                                 ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                                    & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
                                                                       >> 7U)) 
                                                                   << 8U) 
                                                                  | (IData)(vlSelf->PvuTop__DOT___GEN_154))
                                                                  : 0U))
                                                                ? 0U
                                                                : 
                                                               (0xffU 
                                                                & ((IData)(0x7fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                     ? (IData)(vlSelf->PvuTop__DOT___GEN_154)
                                                                     : 0U)))))))) 
                                            << 0x37U) 
                                           | (((QData)((IData)(
                                                               (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                                                 | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                                                 ? 0U
                                                                 : 
                                                                ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0)
                                                                  ? 
                                                                 ((0U 
                                                                   == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                                   ? 1U
                                                                   : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                                  : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h48f6830c__0) 
                                                                   & (IData)(vlSelf->PvuTop__DOT___GEN_83)) 
                                                                  << 0x1fU) 
                                                                 | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                                       ? 0U
                                                                       : 
                                                                      (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                                        | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13a8a89__0))
                                                                        ? 0xffU
                                                                        : 
                                                                       ((0x182U 
                                                                         == 
                                                                         ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                           ? 
                                                                          ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                                             & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
                                                                                >> 7U)) 
                                                                            << 8U) 
                                                                           | (IData)(vlSelf->PvuTop__DOT___GEN_152))
                                                                           : 0U))
                                                                         ? 0U
                                                                         : 
                                                                        (0xffU 
                                                                         & ((IData)(0x7fU) 
                                                                            + 
                                                                            ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                              ? (IData)(vlSelf->PvuTop__DOT___GEN_152)
                                                                              : 0U)))))) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                                        | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                                        ? 0U
                                                                        : 
                                                                       ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13a8a89__0)
                                                                         ? 
                                                                        ((0U 
                                                                          == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                                          ? 1U
                                                                          : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                                         : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0))))))))));
    __Vtemp_hb2ec930e__0[1U] = (IData)(((((QData)((IData)(
                                                          ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_hfe6df398__0) 
                                                           & (IData)(vlSelf->PvuTop__DOT___GEN_84)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                                               ? 0U
                                                               : 
                                                              (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                                | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0))
                                                                ? 0xffU
                                                                : 
                                                               ((0x182U 
                                                                 == 
                                                                 ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                   ? 
                                                                  ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                                     & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
                                                                        >> 7U)) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelf->PvuTop__DOT___GEN_154))
                                                                   : 0U))
                                                                 ? 0U
                                                                 : 
                                                                (0xffU 
                                                                 & ((IData)(0x7fU) 
                                                                    + 
                                                                    ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                                      ? (IData)(vlSelf->PvuTop__DOT___GEN_154)
                                                                      : 0U)))))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                                                  | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                                                  ? 0U
                                                                  : 
                                                                 ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13edb1c__0)
                                                                   ? 
                                                                  ((0U 
                                                                    == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                                    ? 1U
                                                                    : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)
                                                                   : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h48f6830c__0) 
                                                                    & (IData)(vlSelf->PvuTop__DOT___GEN_83)) 
                                                                   << 0x1fU) 
                                                                  | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
                                                                        ? 0U
                                                                        : 
                                                                       (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0) 
                                                                         | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13a8a89__0))
                                                                         ? 0xffU
                                                                         : 
                                                                        ((0x182U 
                                                                          == 
                                                                          ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                            ? 
                                                                           ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                                              & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
                                                                                >> 7U)) 
                                                                             << 8U) 
                                                                            | (IData)(vlSelf->PvuTop__DOT___GEN_152))
                                                                            : 0U))
                                                                          ? 0U
                                                                          : 
                                                                         (0xffU 
                                                                          & ((IData)(0x7fU) 
                                                                             + 
                                                                             ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                                               ? (IData)(vlSelf->PvuTop__DOT___GEN_152)
                                                                               : 0U)))))) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0) 
                                                                         | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h8d85fb91__0))
                                                                         ? 0U
                                                                         : 
                                                                        ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc13a8a89__0)
                                                                          ? 
                                                                         ((0U 
                                                                           == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                                           ? 1U
                                                                           : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0)
                                                                          : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0))))))))) 
                                        >> 0x20U));
    __Vtemp_h84f889ad__0[0U] = __Vtemp_hb2ec930e__0[0U];
    __Vtemp_h84f889ad__0[1U] = __Vtemp_hb2ec930e__0[1U];
    __Vtemp_h84f889ad__0[2U] = ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h4d703b6d__0) 
                                  & (IData)(vlSelf->PvuTop__DOT___GEN_85)) 
                                 << 0x1fU) | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f6aa23__0))
                                                  ? 0xffU
                                                  : 
                                                 ((0x182U 
                                                   == 
                                                   ((2U 
                                                     < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                     ? 
                                                    ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                       & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T) 
                                                          >> 7U)) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->PvuTop__DOT___GEN_155))
                                                     : 0U))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x7fU) 
                                                      + 
                                                      ((2U 
                                                        < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                                        ? (IData)(vlSelf->PvuTop__DOT___GEN_155)
                                                        : 0U)))))) 
                                               << 0x17U) 
                                              | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f6aa23__0)
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0)
                                                    ? 1U
                                                    : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0)
                                                   : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h973e52a2__0))));
    __Vtemp_h84f889ad__0[3U] = ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h9b56b116__0) 
                                  & (IData)(vlSelf->PvuTop__DOT___GEN_86)) 
                                 << 0x1fU) | ((((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f17ab6__0))
                                                  ? 0xffU
                                                  : 
                                                 ((0x182U 
                                                   == 
                                                   ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                     ? 
                                                    ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                                       & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T) 
                                                          >> 7U)) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->PvuTop__DOT___GEN_156))
                                                     : 0U))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x7fU) 
                                                      + 
                                                      ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                                        ? (IData)(vlSelf->PvuTop__DOT___GEN_156)
                                                        : 0U)))))) 
                                               << 0x17U) 
                                              | (((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_hc1f17ab6__0)
                                                   ? 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0)
                                                    ? 1U
                                                    : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0)
                                                   : vlSelf->PvuTop__DOT__floatEncoder__DOT____VdfgTmp_h93d0764a__0))));
    bufp->chgWData(oldp+160,(__Vtemp_h84f889ad__0),128);
    bufp->chgBit(oldp+164,((0x182U == ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                        ? ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                             & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_0_T) 
                                                >> 7U)) 
                                            << 8U) 
                                           | (IData)(vlSelf->PvuTop__DOT___GEN_152))
                                        : 0U))));
    bufp->chgBit(oldp+165,((0x182U == ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                        ? ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                             & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_1_T) 
                                                >> 7U)) 
                                            << 8U) 
                                           | (IData)(vlSelf->PvuTop__DOT___GEN_154))
                                        : 0U))));
    bufp->chgBit(oldp+166,((0x182U == ((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                        ? ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                             & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_2_T) 
                                                >> 7U)) 
                                            << 8U) 
                                           | (IData)(vlSelf->PvuTop__DOT___GEN_155))
                                        : 0U))));
    bufp->chgBit(oldp+167,((0x182U == ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                        ? ((((~ (IData)(vlSelf->PvuTop__DOT___GEN_151)) 
                                             & ((IData)(vlSelf->PvuTop__DOT___pir_exp_rst_adjusied_3_T) 
                                                >> 7U)) 
                                            << 8U) 
                                           | (IData)(vlSelf->PvuTop__DOT___GEN_156))
                                        : 0U))));
    bufp->chgIData(oldp+168,(((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                 ? ((0U == (0x1fU & 
                                            vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                     ? ((0xe0U & ((- (IData)(
                                                             (1U 
                                                              & ((((IData)(1U) 
                                                                   - 
                                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                  - (IData)(1U)) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                        | (0x1fU & 
                                           (((IData)(1U) 
                                             - vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                            - (IData)(1U))))
                                     : ((0xe0U & ((- (IData)(
                                                             (1U 
                                                              & ((- 
                                                                  vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                        | (0x1fU & 
                                           (- vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                 : 0U) << 0x18U) | 
                              ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                  ? ((0U == (0x1fU 
                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                      ? ((0xe0U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((((IData)(1U) 
                                                                    - 
                                                                    vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   - (IData)(1U)) 
                                                                  >> 4U)))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            (((IData)(1U) 
                                              - vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U))))
                                      : ((0xe0U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((- 
                                                                   vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                  >> 4U)))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            (- vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                  : 0U) << 0x10U) | 
                               ((((1U & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((0U == (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                       ? ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((((IData)(1U) 
                                                             - 
                                                             vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            - (IData)(1U)) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (((IData)(1U) 
                                                 - 
                                                 vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                - (IData)(1U))))
                                       : ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((- 
                                                            vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (- vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                   : 0U) << 8U) | (
                                                   (1U 
                                                    & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                     ? 
                                                    ((0xe0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((((IData)(1U) 
                                                                          - 
                                                                          vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         - (IData)(1U)) 
                                                                        >> 4U)))) 
                                                         << 5U)) 
                                                     | (0x1fU 
                                                        & (((IData)(1U) 
                                                            - 
                                                            vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           - (IData)(1U))))
                                                     : 
                                                    ((0xe0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((- 
                                                                         vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                        >> 4U)))) 
                                                         << 5U)) 
                                                     | (0x1fU 
                                                        & (- 
                                                           vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                    : 0U))))),32);
    __Vtemp_hdf4c90c7__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
                                                                >> 3U)))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
                                                                     >> 2U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o)))))))));
    __Vtemp_hdf4c90c7__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o 
                                                                    >> 3U)))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o))) 
                                                                   << 0x1cU) 
                                                                  | ((0xffffffeU 
                                                                      & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o 
                                                                         >> 2U)) 
                                                                     | (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o)))))))) 
                                           >> 0x20U)));
    __Vtemp_hdf4c90c7__0[2U] = ((0xffe00000U & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o))) 
                                    << 0x14U) | (0xfffffU 
                                                 & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_hdf4c90c7__0[3U] = (0xffffU & (vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o 
                                           >> 0xeU));
    bufp->chgWData(oldp+169,(__Vtemp_hdf4c90c7__0),112);
    bufp->chgBit(oldp+173,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+174,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+175,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+176,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+177,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+178,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+179,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+180,(vlSelf->PvuTop__DOT__frac_norm_add__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+181,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_io_result_o),30);
    bufp->chgIData(oldp+182,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_1_io_result_o),30);
    bufp->chgIData(oldp+183,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_2_io_result_o),30);
    bufp->chgIData(oldp+184,(vlSelf->PvuTop__DOT__frac_norm_add__DOT___shifter_3_io_result_o),30);
    __Vtemp_he3fd34c0__0[3U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)
                                            ? 0x8000000ULL
                                            : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                 >> 0x1cU) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54)
                                                         ? 0ULL
                                                         : 
                                                        ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)
                                                          ? 0x8000000ULL
                                                          : 
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                           ? 0ULL
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                                                            ? 0x7fffffffffffffULL
                                                            : 
                                                           ((QData)((IData)(
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
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h747ba727__0[5U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)
                                            ? 0x8000000ULL
                                            : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                 >> 0x18U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109)
                                                         ? 0ULL
                                                         : 
                                                        ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)
                                                          ? 0x8000000ULL
                                                          : 
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                           ? 0ULL
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                                                            ? 0x7fffffffffffffULL
                                                            : 
                                                           ((QData)((IData)(
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
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_hee971096__0[7U] = (((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164)
                                           ? 0ULL : 
                                          ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)
                                            ? 0x8000000ULL
                                            : ((0U 
                                                == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                 >> 0x14U) | ((IData)(
                                                      (((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164)
                                                         ? 0ULL
                                                         : 
                                                        ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)
                                                          ? 0x8000000ULL
                                                          : 
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                           ? 0ULL
                                                           : 
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                            ? 0x7fffffffffffffULL
                                                            : 
                                                           ((QData)((IData)(
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
                                                       >> 0x20U)) 
                                              << 0xcU));
    if (vlSelf->__VdfgTmp_hce76d41b__0) {
        __Vtemp_h3feece17__0[0U] = VPvuTop__ConstPool__CONST_hc5471b50_0[0U];
        __Vtemp_h3feece17__0[1U] = VPvuTop__ConstPool__CONST_hc5471b50_0[1U];
        __Vtemp_h3feece17__0[2U] = VPvuTop__ConstPool__CONST_hc5471b50_0[2U];
        __Vtemp_h3feece17__0[3U] = VPvuTop__ConstPool__CONST_hc5471b50_0[3U];
        __Vtemp_h3feece17__0[4U] = VPvuTop__ConstPool__CONST_hc5471b50_0[4U];
        __Vtemp_h3feece17__0[5U] = VPvuTop__ConstPool__CONST_hc5471b50_0[5U];
        __Vtemp_h3feece17__0[6U] = VPvuTop__ConstPool__CONST_hc5471b50_0[6U];
        __Vtemp_h3feece17__0[7U] = VPvuTop__ConstPool__CONST_hc5471b50_0[7U];
        __Vtemp_h3feece17__0[8U] = VPvuTop__ConstPool__CONST_hc5471b50_0[8U];
    } else {
        __Vtemp_h3feece17__0[0U] = (IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN)
                                             ? 0ULL
                                             : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0)
                                                 ? 0x8000000ULL
                                                 : 
                                                ((0U 
                                                  == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                                  ? 0ULL
                                                  : 
                                                 ((0U 
                                                   == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                                                   ? 0x7fffffffffffffULL
                                                   : 
                                                  ((QData)((IData)(
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
        __Vtemp_h3feece17__0[1U] = (IData)((((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN)
                                              ? 0ULL
                                              : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_0)
                                                  ? 0x8000000ULL
                                                  : 
                                                 ((0U 
                                                   == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_a)
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
        __Vtemp_h3feece17__0[2U] = ((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_54)
                                              ? 0ULL
                                              : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_55)
                                                  ? 0x8000000ULL
                                                  : 
                                                 ((0U 
                                                   == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_a)
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_1__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                    << 4U);
        __Vtemp_h3feece17__0[3U] = __Vtemp_he3fd34c0__0[3U];
        __Vtemp_h3feece17__0[4U] = ((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_109)
                                              ? 0ULL
                                              : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_110)
                                                  ? 0x8000000ULL
                                                  : 
                                                 ((0U 
                                                   == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_a)
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_2__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                    << 8U);
        __Vtemp_h3feece17__0[5U] = __Vtemp_h747ba727__0[5U];
        __Vtemp_h3feece17__0[6U] = ((IData)(((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164)
                                              ? 0ULL
                                              : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)
                                                  ? 0x8000000ULL
                                                  : 
                                                 ((0U 
                                                   == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                    ? 0x7fffffffffffffULL
                                                    : 
                                                   ((QData)((IData)(
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
                                                    << 0x1dU)))))) 
                                    << 0xcU);
        __Vtemp_h3feece17__0[7U] = __Vtemp_hee971096__0[7U];
        __Vtemp_h3feece17__0[8U] = ((IData)((((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_164)
                                               ? 0ULL
                                               : ((IData)(vlSelf->PvuTop__DOT__div_inst__DOT___GEN_165)
                                                   ? 0x8000000ULL
                                                   : 
                                                  ((0U 
                                                    == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_a)
                                                    ? 0ULL
                                                    : 
                                                   ((0U 
                                                     == vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT____Vcellinp__radix4BoothMultiplier_3__io_operand_b)
                                                     ? 0x7fffffffffffffULL
                                                     : 
                                                    ((QData)((IData)(
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
                                             >> 0x20U)) 
                                    >> 0x14U);
    }
    bufp->chgWData(oldp+185,(__Vtemp_h3feece17__0),272);
    bufp->chgQData(oldp+194,((((QData)((IData)(((1U 
                                                 & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                 ? 
                                                ((0xdU 
                                                  > 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U]))
                                                  ? 
                                                 ((0x380U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((((IData)(0xdU) 
                                                                       - 
                                                                       vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(1U)) 
                                                                     >> 6U)))) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (((IData)(0xdU) 
                                                         - 
                                                         vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                        - (IData)(1U))))
                                                  : 
                                                 ((0x380U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- 
                                                                      (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                       - (IData)(0xcU))) 
                                                                     >> 6U)))) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (- 
                                                        (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                         - (IData)(0xcU))))))
                                                 : 0U))) 
                               << 0x1eU) | (QData)((IData)(
                                                           ((((1U 
                                                               & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                               ? 
                                                              ((0xdU 
                                                                > 
                                                                (0x7fU 
                                                                 & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U]))
                                                                ? 
                                                               ((0x380U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((((IData)(0xdU) 
                                                                                - 
                                                                                vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (0x7fU 
                                                                   & (((IData)(0xdU) 
                                                                       - 
                                                                       vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(1U))))
                                                                : 
                                                               ((0x380U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((- 
                                                                                (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(0xcU))) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (0x7fU 
                                                                   & (- 
                                                                      (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                       - (IData)(0xcU))))))
                                                               : 0U) 
                                                             << 0x14U) 
                                                            | ((((1U 
                                                                  & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                  ? 
                                                                 ((0xdU 
                                                                   > 
                                                                   (0x7fU 
                                                                    & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U]))
                                                                   ? 
                                                                  ((0x380U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(0xdU) 
                                                                                - 
                                                                                vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 6U)))) 
                                                                       << 7U)) 
                                                                   | (0x7fU 
                                                                      & (((IData)(0xdU) 
                                                                          - 
                                                                          vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         - (IData)(1U))))
                                                                   : 
                                                                  ((0x380U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(0xcU))) 
                                                                                >> 6U)))) 
                                                                       << 7U)) 
                                                                   | (0x7fU 
                                                                      & (- 
                                                                         (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                          - (IData)(0xcU))))))
                                                                  : 0U) 
                                                                << 0xaU) 
                                                               | ((1U 
                                                                   & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                   ? 
                                                                  ((0xdU 
                                                                    > 
                                                                    (0x7fU 
                                                                     & vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U]))
                                                                    ? 
                                                                   ((0x380U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(0xdU) 
                                                                                - 
                                                                                vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 6U)))) 
                                                                        << 7U)) 
                                                                    | (0x7fU 
                                                                       & (((IData)(0xdU) 
                                                                           - 
                                                                           vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                          - (IData)(1U))))
                                                                    : 
                                                                   ((0x380U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(0xcU))) 
                                                                                >> 6U)))) 
                                                                        << 7U)) 
                                                                    | (0x7fU 
                                                                       & (- 
                                                                          (vlSymsp->TOP__PvuTop__DOT__frac_norm_div__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                           - (IData)(0xcU))))))
                                                                   : 0U))))))),40);
    __Vtemp_h39f9fc91__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[0U]))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & ((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[2U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U] 
                                                                   >> 9U))))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[0U])))))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & ((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[2U] 
                                                                      << 0x18U) 
                                                                     | (0xfffffeU 
                                                                        & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[1U] 
                                                                           >> 8U)))) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xffffffffffULL 
                                                                     & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[1U])) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[0U]))))))))))));
    __Vtemp_h39f9fc91__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U] 
                                                << 0x10U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (0xffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[0U]))))))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & ((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[2U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U] 
                                                                       >> 9U))))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xffffffffffULL 
                                                                             & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o[0U])))))) 
                                                                   << 0x1cU) 
                                                                  | ((0xffffffeU 
                                                                      & ((vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[2U] 
                                                                          << 0x18U) 
                                                                         | (0xfffffeU 
                                                                            & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[1U] 
                                                                               >> 8U)))) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o[0U]))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hef56dceb__0[0U] = __Vtemp_h39f9fc91__0[0U];
    __Vtemp_hef56dceb__0[1U] = __Vtemp_h39f9fc91__0[1U];
    __Vtemp_hef56dceb__0[2U] = ((0xffe00000U & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[1U] 
                                                << 0xcU)) 
                                | (((IData)((0U != 
                                             (0xffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[0U])))))) 
                                    << 0x14U) | (0xfffffU 
                                                 & ((0x1ff0000U 
                                                     & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[2U] 
                                                        << 0x10U)) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o[1U] 
                                                       >> 0x10U)))));
    __Vtemp_hef56dceb__0[3U] = (0xffffU & ((0x1ff000U 
                                            & (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[2U] 
                                               << 0xcU)) 
                                           | (vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o[1U] 
                                              >> 0x14U)));
    bufp->chgWData(oldp+196,(__Vtemp_hef56dceb__0),112);
    bufp->chgWData(oldp+200,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_io_result_o),68);
    bufp->chgWData(oldp+203,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_1_io_result_o),68);
    bufp->chgWData(oldp+206,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_2_io_result_o),68);
    bufp->chgWData(oldp+209,(vlSelf->PvuTop__DOT__frac_norm_div__DOT___shifter_3_io_result_o),68);
    bufp->chgSData(oldp+212,(((1U & (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))
                               ? ((5U > (0x3fU & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                   ? ((0x1c0U & ((- (IData)(
                                                            (1U 
                                                             & ((((IData)(5U) 
                                                                  - 
                                                                  vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 - (IData)(1U)) 
                                                                >> 5U)))) 
                                                 << 6U)) 
                                      | (0x3fU & (((IData)(5U) 
                                                   - 
                                                   vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                  - (IData)(1U))))
                                   : ((0x1c0U & ((- (IData)(
                                                            (1U 
                                                             & ((- 
                                                                 (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                  - (IData)(4U))) 
                                                                >> 5U)))) 
                                                 << 6U)) 
                                      | (0x3fU & (- 
                                                  (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   - (IData)(4U))))))
                               : 0U)),9);
    bufp->chgBit(oldp+213,((1U & (~ (IData)(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgQData(oldp+214,(vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),64);
    bufp->chgQData(oldp+216,((0x7ffffffffffffffULL 
                              & ((1U & (((IData)(1U) 
                                         - vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                        - (IData)(1U)))
                                  ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2 
                                     >> 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter__DOT___temp_results_0_T_2))),59);
    bufp->chgQData(oldp+218,((0x7ffffffffffffffULL 
                              & ((1U & vlSelf->PvuTop__DOT__frac_norm_dot__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U])
                                  ? (vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2 
                                     << 1U) : vlSelf->PvuTop__DOT__frac_norm_dot__DOT__shifter_1__DOT___temp_results_0_T_2))),59);
    if (vlSelf->__VdfgTmp_h5f8b4dd4__0) {
        __Vtemp_h40fbf5e9__0[0U] = VPvuTop__ConstPool__CONST_hc5471b50_0[0U];
        __Vtemp_h40fbf5e9__0[1U] = VPvuTop__ConstPool__CONST_hc5471b50_0[1U];
        __Vtemp_h40fbf5e9__0[2U] = VPvuTop__ConstPool__CONST_hc5471b50_0[2U];
        __Vtemp_h40fbf5e9__0[3U] = VPvuTop__ConstPool__CONST_hc5471b50_0[3U];
        __Vtemp_h40fbf5e9__0[4U] = VPvuTop__ConstPool__CONST_hc5471b50_0[4U];
        __Vtemp_h40fbf5e9__0[5U] = VPvuTop__ConstPool__CONST_hc5471b50_0[5U];
        __Vtemp_h40fbf5e9__0[6U] = VPvuTop__ConstPool__CONST_hc5471b50_0[6U];
        __Vtemp_h40fbf5e9__0[7U] = VPvuTop__ConstPool__CONST_hc5471b50_0[7U];
        __Vtemp_h40fbf5e9__0[8U] = VPvuTop__ConstPool__CONST_hc5471b50_0[8U];
    } else {
        __Vtemp_h40fbf5e9__0[0U] = (IData)(((0x100U 
                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                             ? 0ULL
                                             : (0xffffffffffffffULL 
                                                & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                   + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))));
        __Vtemp_h40fbf5e9__0[1U] = (IData)((((0x100U 
                                              & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum))
                                              ? 0ULL
                                              : (0xffffffffffffffULL 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                    + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                            >> 0x20U));
        __Vtemp_h40fbf5e9__0[2U] = ((IData)(((0x100U 
                                              & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                              ? 0ULL
                                              : (0xffffffffffffffULL 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                    + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                    << 4U);
        __Vtemp_h40fbf5e9__0[3U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     >> 0x1cU) | ((IData)(
                                                          (((0x100U 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_1))
                                                             ? 0ULL
                                                             : 
                                                            (0xffffffffffffffULL 
                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                                + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_1__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h40fbf5e9__0[4U] = ((IData)(((0x100U 
                                              & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                              ? 0ULL
                                              : (0xffffffffffffffULL 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                    + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                    << 8U);
        __Vtemp_h40fbf5e9__0[5U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     >> 0x18U) | ((IData)(
                                                          (((0x100U 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_2))
                                                             ? 0ULL
                                                             : 
                                                            (0xffffffffffffffULL 
                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                                + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_2__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h40fbf5e9__0[6U] = ((IData)(((0x100U 
                                              & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                              ? 0ULL
                                              : (0xffffffffffffffULL 
                                                 & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                    + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                    << 0xcU);
        __Vtemp_h40fbf5e9__0[7U] = (((IData)(((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o)))) 
                                     >> 0x14U) | ((IData)(
                                                          (((0x100U 
                                                             & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                                             ? 0ULL
                                                             : 
                                                            (0xffffffffffffffULL 
                                                             & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                                + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h40fbf5e9__0[8U] = ((IData)((((0x100U 
                                               & (IData)(vlSelf->PvuTop__DOT__dotproduct__DOT__mul__DOT__sum_3))
                                               ? 0ULL
                                               : (0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_carry_o 
                                                     + vlSymsp->TOP__PvuTop__DOT__mul__DOT__radix4BoothMultiplier_3__csaTree__DOT__compressor.__PVT__io_sum_o))) 
                                             >> 0x20U)) 
                                    >> 0x14U);
    }
    bufp->chgWData(oldp+220,(__Vtemp_h40fbf5e9__0),272);
    bufp->chgQData(oldp+229,((((QData)((IData)(((1U 
                                                 & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                 ? 
                                                ((0xeU 
                                                  > 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U]))
                                                  ? 
                                                 ((0x380U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((((IData)(0xeU) 
                                                                       - 
                                                                       vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(1U)) 
                                                                     >> 6U)))) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (((IData)(0xeU) 
                                                         - 
                                                         vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                        - (IData)(1U))))
                                                  : 
                                                 ((0x380U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((- 
                                                                      (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                       - (IData)(0xdU))) 
                                                                     >> 6U)))) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (- 
                                                        (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_3.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                         - (IData)(0xdU))))))
                                                 : 0U))) 
                               << 0x1eU) | (QData)((IData)(
                                                           ((((1U 
                                                               & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                               ? 
                                                              ((0xeU 
                                                                > 
                                                                (0x7fU 
                                                                 & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U]))
                                                                ? 
                                                               ((0x380U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((((IData)(0xeU) 
                                                                                - 
                                                                                vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (0x7fU 
                                                                   & (((IData)(0xeU) 
                                                                       - 
                                                                       vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                      - (IData)(1U))))
                                                                : 
                                                               ((0x380U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((- 
                                                                                (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(0xdU))) 
                                                                                >> 6U)))) 
                                                                    << 7U)) 
                                                                | (0x7fU 
                                                                   & (- 
                                                                      (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_2.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                       - (IData)(0xdU))))))
                                                               : 0U) 
                                                             << 0x14U) 
                                                            | ((((1U 
                                                                  & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                  ? 
                                                                 ((0xeU 
                                                                   > 
                                                                   (0x7fU 
                                                                    & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U]))
                                                                   ? 
                                                                  ((0x380U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(0xeU) 
                                                                                - 
                                                                                vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 6U)))) 
                                                                       << 7U)) 
                                                                   | (0x7fU 
                                                                      & (((IData)(0xeU) 
                                                                          - 
                                                                          vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         - (IData)(1U))))
                                                                   : 
                                                                  ((0x380U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(0xdU))) 
                                                                                >> 6U)))) 
                                                                       << 7U)) 
                                                                   | (0x7fU 
                                                                      & (- 
                                                                         (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod_1.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                          - (IData)(0xdU))))))
                                                                  : 0U) 
                                                                << 0xaU) 
                                                               | ((1U 
                                                                   & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                   ? 
                                                                  ((0xeU 
                                                                    > 
                                                                    (0x7fU 
                                                                     & vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U]))
                                                                    ? 
                                                                   ((0x380U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((((IData)(0xeU) 
                                                                                - 
                                                                                vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                                - (IData)(1U)) 
                                                                                >> 6U)))) 
                                                                        << 7U)) 
                                                                    | (0x7fU 
                                                                       & (((IData)(0xeU) 
                                                                           - 
                                                                           vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U]) 
                                                                          - (IData)(1U))))
                                                                    : 
                                                                   ((0x380U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((- 
                                                                                (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                - (IData)(0xdU))) 
                                                                                >> 6U)))) 
                                                                        << 7U)) 
                                                                    | (0x7fU 
                                                                       & (- 
                                                                          (vlSymsp->TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod.__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                           - (IData)(0xdU))))))
                                                                   : 0U))))))),40);
    __Vtemp_h82f3b084__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[0U]))))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[2U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[1U] 
                                                                   >> 9U))))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[0U])))))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[2U] 
                                                                      << 0x18U) 
                                                                     | (0xfffffeU 
                                                                        & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[1U] 
                                                                           >> 8U)))) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xffffffffffULL 
                                                                     & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[1U])) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[0U]))))))))))));
    __Vtemp_h82f3b084__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[1U] 
                                                << 0x10U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (0xffffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[0U]))))))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[2U] 
                                                                     << 0x17U) 
                                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[1U] 
                                                                       >> 9U))))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xffffffffffULL 
                                                                             & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o[0U])))))) 
                                                                   << 0x1cU) 
                                                                  | ((0xffffffeU 
                                                                      & ((vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[2U] 
                                                                          << 0x18U) 
                                                                         | (0xfffffeU 
                                                                            & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[1U] 
                                                                               >> 8U)))) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o[0U]))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h77c88815__0[0U] = __Vtemp_h82f3b084__0[0U];
    __Vtemp_h77c88815__0[1U] = __Vtemp_h82f3b084__0[1U];
    __Vtemp_h77c88815__0[2U] = ((0xffe00000U & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[1U] 
                                                << 0xcU)) 
                                | (((IData)((0U != 
                                             (0xffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[0U])))))) 
                                    << 0x14U) | (0xfffffU 
                                                 & ((0x1ff0000U 
                                                     & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[2U] 
                                                        << 0x10U)) 
                                                    | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o[1U] 
                                                       >> 0x10U)))));
    __Vtemp_h77c88815__0[3U] = (0xffffU & ((0x1ff000U 
                                            & (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[2U] 
                                               << 0xcU)) 
                                           | (vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o[1U] 
                                              >> 0x14U)));
    bufp->chgWData(oldp+231,(__Vtemp_h77c88815__0),112);
    bufp->chgWData(oldp+235,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_io_result_o),68);
    bufp->chgWData(oldp+238,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_1_io_result_o),68);
    bufp->chgWData(oldp+241,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_2_io_result_o),68);
    bufp->chgWData(oldp+244,(vlSelf->PvuTop__DOT__frac_norm_mul__DOT___shifter_3_io_result_o),68);
    bufp->chgIData(oldp+247,(((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes)
                                 ? ((0U == (0x1fU & 
                                            vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                                     ? ((0xe0U & ((- (IData)(
                                                             (1U 
                                                              & ((((IData)(1U) 
                                                                   - 
                                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                  - (IData)(1U)) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                        | (0x1fU & 
                                           (((IData)(1U) 
                                             - vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                            - (IData)(1U))))
                                     : ((0xe0U & ((- (IData)(
                                                             (1U 
                                                              & ((- 
                                                                  vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                 >> 4U)))) 
                                                  << 5U)) 
                                        | (0x1fU & 
                                           (- vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                 : 0U) << 0x18U) | 
                              ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes)
                                  ? ((0U == (0x1fU 
                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                                      ? ((0xe0U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((((IData)(1U) 
                                                                    - 
                                                                    vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                   - (IData)(1U)) 
                                                                  >> 4U)))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            (((IData)(1U) 
                                              - vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                             - (IData)(1U))))
                                      : ((0xe0U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & ((- 
                                                                   vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                  >> 4U)))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            (- vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                  : 0U) << 0x10U) | 
                               ((((1U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((0U == (0x1fU 
                                              & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                                       ? ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((((IData)(1U) 
                                                             - 
                                                             vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                            - (IData)(1U)) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (((IData)(1U) 
                                                 - 
                                                 vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                - (IData)(1U))))
                                       : ((0xe0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((- 
                                                            vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           >> 4U)))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (- vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                   : 0U) << 8U) | (
                                                   (1U 
                                                    & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                     ? 
                                                    ((0xe0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((((IData)(1U) 
                                                                          - 
                                                                          vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                         - (IData)(1U)) 
                                                                        >> 4U)))) 
                                                         << 5U)) 
                                                     | (0x1fU 
                                                        & (((IData)(1U) 
                                                            - 
                                                            vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                           - (IData)(1U))))
                                                     : 
                                                    ((0xe0U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((- 
                                                                         vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]) 
                                                                        >> 4U)))) 
                                                         << 5U)) 
                                                     | (0x1fU 
                                                        & (- 
                                                           vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__index_nodes[0U]))))
                                                    : 0U))))),32);
    __Vtemp_hd280c543__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7ffffffU 
                                                             & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
                                                                >> 3U)))) 
                                            << 0x1dU) 
                                           | (QData)((IData)(
                                                             (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o))) 
                                                               << 0x1cU) 
                                                              | ((0xffffffeU 
                                                                  & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
                                                                     >> 2U)) 
                                                                 | (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))))))));
    __Vtemp_hd280c543__0[1U] = ((0xfe000000U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
                                                << 0x16U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0x7ffffffU 
                                                                 & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o 
                                                                    >> 3U)))) 
                                                << 0x1dU) 
                                               | (QData)((IData)(
                                                                 (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o))) 
                                                                   << 0x1cU) 
                                                                  | ((0xffffffeU 
                                                                      & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o 
                                                                         >> 2U)) 
                                                                     | (0U 
                                                                        != 
                                                                        (3U 
                                                                         & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o)))))))) 
                                           >> 0x20U)));
    __Vtemp_hd280c543__0[2U] = ((0xffe00000U & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o 
                                                << 0x12U)) 
                                | (((IData)((0U != 
                                             (3U & vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o))) 
                                    << 0x14U) | (0xfffffU 
                                                 & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o 
                                                    >> 0xaU))));
    __Vtemp_hd280c543__0[3U] = (0xffffU & (vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o 
                                           >> 0xeU));
    bufp->chgWData(oldp+248,(__Vtemp_hd280c543__0),112);
    bufp->chgBit(oldp+252,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+253,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+254,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+255,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+256,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+257,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+258,((1U & (~ vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+259,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT__lzcMod_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+260,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_io_result_o),30);
    bufp->chgIData(oldp+261,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_1_io_result_o),30);
    bufp->chgIData(oldp+262,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_2_io_result_o),30);
    bufp->chgIData(oldp+263,(vlSelf->PvuTop__DOT__frac_norm_sub__DOT___shifter_3_io_result_o),30);
    __Vtemp_h95b92b9c__0[0U] = vlSelf->io_posit_i2_0;
    __Vtemp_h95b92b9c__0[1U] = vlSelf->io_posit_i2_1;
    __Vtemp_h95b92b9c__0[2U] = (IData)((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->io_posit_i2_2))));
    __Vtemp_h95b92b9c__0[3U] = (IData)(((((QData)((IData)(vlSelf->io_posit_i2_3)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->io_posit_i2_2))) 
                                        >> 0x20U));
    bufp->chgWData(oldp+264,(__Vtemp_h95b92b9c__0),128);
    bufp->chgBit(oldp+268,((0x80000000U == vlSelf->io_posit_i1_0)));
    bufp->chgBit(oldp+269,((0x80000000U == vlSelf->io_posit_i2_0)));
    bufp->chgBit(oldp+270,((0x80000000U == vlSelf->io_posit_i1_1)));
    bufp->chgBit(oldp+271,((0x80000000U == vlSelf->io_posit_i2_1)));
    bufp->chgBit(oldp+272,((0x80000000U == vlSelf->io_posit_i1_2)));
    bufp->chgBit(oldp+273,((0x80000000U == vlSelf->io_posit_i2_2)));
    bufp->chgBit(oldp+274,((0x80000000U == vlSelf->io_posit_i1_3)));
    bufp->chgBit(oldp+275,((0x80000000U == vlSelf->io_posit_i2_3)));
    bufp->chgQData(oldp+276,((((QData)((IData)((1U 
                                                & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Sign) 
                                                   >> 3U)))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
                                                               ? 0U
                                                               : 
                                                              (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                                                | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                   >> 3U))
                                                                ? 0x1fU
                                                                : 
                                                               (((~ 
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
                                                                      : (IData)(vlSelf->__VdfgTmp_h00c4dd81__0))))))))) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(
                                                                (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
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
                                                                   : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h972069b6__0))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Sign) 
                                                                       >> 2U)))) 
                                                   << 0x2fU) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                                                        ? 0U
                                                                        : 
                                                                       ((1U 
                                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                                            | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                               >> 2U)))
                                                                         ? 0x1fU
                                                                         : 
                                                                        (((~ 
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
                                                                               : (IData)(vlSelf->__VdfgTmp_h7ae519d9__0))))))))) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(
                                                                         (((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
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
                                                                            : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h974ef2fe__0))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0x80000000U 
                                                                            & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Sign) 
                                                                               << 0x1eU)) 
                                                                           | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                                                | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                                >> 1U)))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                (((~ 
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
                                                                               << 0x1aU) 
                                                                              | (((((IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
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
                                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96daf448__0))) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
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
                                                                                 : (IData)(vlSelf->PvuTop__DOT__posit2float_fp16__DOT__floatEncoder__DOT____VdfgTmp_h96e1e122__0))))))))))))))))),64);
    bufp->chgBit(oldp+278,((0U == vlSelf->io_posit_i1_0)));
    bufp->chgBit(oldp+279,((0U == vlSelf->io_posit_i1_1)));
    bufp->chgBit(oldp+280,((0U == vlSelf->io_posit_i1_2)));
    bufp->chgBit(oldp+281,((0U == vlSelf->io_posit_i1_3)));
    __Vtemp_h1573502e__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
                                                             >> 1U)))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                                              ? 0U
                                                              : 
                                                             ((1U 
                                                               & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                                  | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                     >> 1U)))
                                                               ? 0xffU
                                                               : 
                                                              (((~ 
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
                                                                     : (IData)(vlSelf->__VdfgTmp_hf5799464__0))))))))) 
                                            << 0x37U) 
                                           | (((QData)((IData)(
                                                               (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
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
                                                                  : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
                                                                  << 0x1fU) 
                                                                 | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
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
                                                                         : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0))))))))));
    __Vtemp_h1573502e__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
                                                              >> 1U)))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                                               ? 0U
                                                               : 
                                                              ((1U 
                                                                & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                                   | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                      >> 1U)))
                                                                ? 0xffU
                                                                : 
                                                               (((~ 
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
                                                                      : (IData)(vlSelf->__VdfgTmp_hf5799464__0))))))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
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
                                                                   : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96993e88__0)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
                                                                   << 0x1fU) 
                                                                  | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h554a23d6__0)
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
                                                                          : vlSelf->PvuTop__DOT__posit2float_fp32__DOT__floatEncoder__DOT____VdfgTmp_h96e1e555__0))))))))) 
                                        >> 0x20U));
    __Vtemp_h8eb14285__0[0U] = __Vtemp_h1573502e__0[0U];
    __Vtemp_h8eb14285__0[1U] = __Vtemp_h1573502e__0[1U];
    __Vtemp_h8eb14285__0[2U] = ((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
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
    __Vtemp_h8eb14285__0[3U] = ((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Sign) 
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
    bufp->chgWData(oldp+282,(__Vtemp_h8eb14285__0),128);
    bufp->chgSData(oldp+286,(((0x8000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
                                          << 0xcU)) 
                              | ((0x4000U & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)) 
                                              << 0xeU) 
                                             & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0) 
                                                 << 0xeU) 
                                                | ((0xffffc000U 
                                                    & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                       << 0xbU)) 
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
                                                      << 0xeU))))) 
                                 | (((((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                                       | (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0))
                                       ? 0U : ((8U 
                                                & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))
                                                    ? 1U
                                                    : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))
                                                : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96838f20__0))) 
                                     << 0xcU) | ((0x800U 
                                                  & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
                                                     << 9U)) 
                                                 | ((0x400U 
                                                     & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)) 
                                                         << 0xaU) 
                                                        & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                            << 0xaU) 
                                                           | ((0xfffffc00U 
                                                               & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                  << 8U)) 
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
                                                                 << 0xaU))))) 
                                                    | (((((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
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
                                                           : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h968e33b0__0))) 
                                                        << 8U) 
                                                       | ((0x80U 
                                                           & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Sign) 
                                                              << 6U)) 
                                                          | ((0x40U 
                                                              & (((~ (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)) 
                                                                  << 6U) 
                                                                 & (((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                                     << 6U) 
                                                                    | ((0xffffffc0U 
                                                                        & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                           << 5U)) 
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
                                                                          << 6U))))) 
                                                             | (((((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
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
                                                                    : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96ba1187__0))) 
                                                                 << 4U) 
                                                                | ((8U 
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
                                                                           : (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT__floatEncoder__DOT____VdfgTmp_h96e1e338__0))))))))))))))),16);
    bufp->chgQData(oldp+287,((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_2)
                                                 ? 0U
                                                 : 
                                                ((0xf00U 
                                                  & ((- (IData)(
                                                                (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                 >> 0x1fU))) 
                                                     << 8U)) 
                                                 | (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                    >> 0x18U))))) 
                               << 0x24U) | (((QData)((IData)(
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
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN_0)
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
                                                                        >> 8U)))) 
                                                                << 0xcU) 
                                                               | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp64__DOT___GEN)
                                                                   ? 0U
                                                                   : 
                                                                  ((0xf00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp 
                                                                                >> 7U)))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp))))))))),48);
    bufp->chgIData(oldp+289,(((0x80000000U & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
                                              << 0x1cU)) 
                              | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0)
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
                                  << 0x1bU) | (((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5501d1d1__0) 
                                                  | (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf256099e__0))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96d5f417__0))
                                                    ? 1U
                                                    : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96d5f417__0))
                                                   : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96d5f417__0))) 
                                                << 0x18U) 
                                               | ((0x800000U 
                                                   & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
                                                      << 0x15U)) 
                                                  | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0)
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0) 
                                                            | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                               >> 2U)))
                                                         ? 0xfU
                                                         : 
                                                        (((~ 
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
                                                      << 0x13U) 
                                                     | (((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h5505034c__0) 
                                                           | (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_hf25a5b0b__0))
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                            ? 
                                                           ((0U 
                                                             == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h968546ec__0))
                                                             ? 1U
                                                             : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h968546ec__0))
                                                            : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h968546ec__0))) 
                                                         << 0x10U) 
                                                        | ((0x8000U 
                                                            & ((IData)(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Sign) 
                                                               << 0xeU)) 
                                                           | ((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0)
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  & ((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0) 
                                                                     | ((IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN) 
                                                                        >> 1U)))
                                                                  ? 0xfU
                                                                  : 
                                                                 (((~ 
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
                                                               << 0xbU) 
                                                              | (((((IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h554e727b__0) 
                                                                    | (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h8d992a04__0))
                                                                    ? 0U
                                                                    : 
                                                                   ((2U 
                                                                     & (IData)(vlSelf->PvuTop__DOT__posit2float_fp4__DOT____Vcellinp__floatEncoder__io_isNaN))
                                                                     ? 
                                                                    ((0U 
                                                                      == (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96b7909b__0))
                                                                      ? 1U
                                                                      : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96b7909b__0))
                                                                     : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96b7909b__0))) 
                                                                  << 8U) 
                                                                 | ((0x80U 
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
                                                                            : (IData)(vlSelf->PvuTop__DOT__posit2float_fp8__DOT__floatEncoder__DOT____VdfgTmp_h96e1e07c__0))))))))))))))),32);
    bufp->chgIData(oldp+290,(((((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                 ? 0U : (IData)(vlSelf->__VdfgTmp_hd451a639__0)) 
                               << 0x18U) | ((((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h9a0d8522__0)) 
                                             << 0x10U) 
                                            | ((((0U 
                                                  == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                  ? 0U
                                                  : (IData)(vlSelf->__VdfgTmp_h195f781d__0)) 
                                                << 8U) 
                                               | ((0U 
                                                   == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                   ? 0U
                                                   : (IData)(vlSelf->__VdfgTmp_h94704af9__0)))))),32);
    __Vtemp_hadd908e9__0[0U] = (IData)((((QData)((IData)(
                                                         ((0U 
                                                           == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                           ? 0U
                                                           : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((0U 
                                                            == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                            ? 0U
                                                            : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)))));
    __Vtemp_hadd908e9__0[1U] = ((((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                   ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0) 
                                 << 0x18U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0U 
                                                                          == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                                          ? 0U
                                                                          : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0))) 
                                                        << 0x1cU) 
                                                       | (QData)((IData)(
                                                                         ((0U 
                                                                           == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                                           ? 0U
                                                                           : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)))) 
                                                      >> 0x20U)));
    __Vtemp_hadd908e9__0[2U] = ((((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                   ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0) 
                                 << 0x14U) | (((0U 
                                                == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                ? 0U
                                                : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0) 
                                              >> 8U));
    __Vtemp_hadd908e9__0[3U] = (((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                  ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0) 
                                >> 0xcU);
    bufp->chgWData(oldp+291,(__Vtemp_hadd908e9__0),112);
    bufp->chgBit(oldp+295,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                    ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0))));
    bufp->chgBit(oldp+296,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                    ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0))));
    bufp->chgBit(oldp+297,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                    ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0))));
    bufp->chgBit(oldp+298,((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                    ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0))));
    bufp->chgIData(oldp+299,(((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0)
                                 ? (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.io_Exp 
                                    >> 0x18U) : 0U) 
                               << 0x18U) | ((((2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE))
                                               ? (0xffU 
                                                  & (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.io_Exp 
                                                     >> 0x10U))
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0)
                                                  ? 
                                                 (0xffU 
                                                  & (vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.io_Exp 
                                                     >> 8U))
                                                  : 0U) 
                                                << 8U) 
                                               | ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0)
                                                   ? 
                                                  (0xffU 
                                                   & vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.io_Exp)
                                                   : 0U))))),32);
    bufp->chgIData(oldp+300,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_io_result_o),31);
    bufp->chgIData(oldp+301,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->chgIData(oldp+302,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->chgIData(oldp+303,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->chgBit(oldp+304,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+305,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+306,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+307,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+308,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+309,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+310,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+311,(vlSymsp->TOP__PvuTop__DOT__decode1.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+312,(vlSymsp->TOP__PvuTop__DOT__decode2.io_Exp),32);
    bufp->chgIData(oldp+313,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_io_result_o),31);
    bufp->chgIData(oldp+314,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_1_io_result_o),31);
    bufp->chgIData(oldp+315,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_2_io_result_o),31);
    bufp->chgIData(oldp+316,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT___barrel_shifter_3_io_result_o),31);
    bufp->chgBit(oldp+317,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+318,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+319,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+320,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+321,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+322,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+323,((1U & (~ vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+324,(vlSymsp->TOP__PvuTop__DOT__decode2.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+325,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.io_Frac),112);
    bufp->chgBit(oldp+329,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+330,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+331,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+332,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+333,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+334,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+335,((1U & (~ vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+336,(vlSymsp->TOP__PvuTop__DOT__result_converted_decoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+337,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+341,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+342,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+343,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+344,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+345,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+346,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+347,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+348,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp4__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+349,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+353,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+354,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+355,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+356,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+357,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+358,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+359,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+360,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp8__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+361,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+365,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+366,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+367,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+368,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+369,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+370,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+371,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+372,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp16__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgWData(oldp+373,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+377,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+378,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+379,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+380,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+381,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+382,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+383,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+384,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp32__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgIData(oldp+385,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Exp),32);
    bufp->chgWData(oldp+386,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.io_Frac),112);
    bufp->chgBit(oldp+390,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+391,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+392,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+393,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+394,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+395,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes),32);
    bufp->chgBit(oldp+396,((1U & (~ vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))));
    bufp->chgIData(oldp+397,(vlSymsp->TOP__PvuTop__DOT__posit2float_fp64__DOT__positDecoder.__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes),32);
}

void VPvuTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root__trace_cleanup\n"); );
    // Init
    VPvuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPvuTop___024root*>(voidSelf);
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    IData/*31:0*/ __Vilp;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vilp = 0U;
    while ((__Vilp <= 0xa8U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
