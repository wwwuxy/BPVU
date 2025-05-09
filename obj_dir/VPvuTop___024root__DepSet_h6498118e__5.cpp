// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___nba_sequent__TOP__1(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*32:0*/ PvuTop__DOT__quantizeInt8__DOT___centered_T;
    PvuTop__DOT__quantizeInt8__DOT___centered_T = 0;
    CData/*1:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3;
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3 = 0;
    QData/*33:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4;
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4 = 0;
    QData/*32:0*/ PvuTop__DOT__quantizeInt8__DOT___centered_T_2;
    PvuTop__DOT__quantizeInt8__DOT___centered_T_2 = 0;
    CData/*1:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9;
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9 = 0;
    QData/*33:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10;
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10 = 0;
    QData/*32:0*/ PvuTop__DOT__quantizeInt8__DOT___centered_T_4;
    PvuTop__DOT__quantizeInt8__DOT___centered_T_4 = 0;
    CData/*1:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15;
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15 = 0;
    QData/*33:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16;
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16 = 0;
    QData/*32:0*/ PvuTop__DOT__quantizeInt8__DOT___centered_T_6;
    PvuTop__DOT__quantizeInt8__DOT___centered_T_6 = 0;
    CData/*1:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21;
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21 = 0;
    QData/*33:0*/ PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22;
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22 = 0;
    QData/*32:0*/ PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0;
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 = 0;
    QData/*32:0*/ PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0;
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 = 0;
    QData/*32:0*/ PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0;
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 = 0;
    QData/*32:0*/ PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0;
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 = 0;
    // Body
    PvuTop__DOT__quantizeInt8__DOT___centered_T = (0x1ffffffffULL 
                                                   & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1 
                                                      - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    PvuTop__DOT__quantizeInt8__DOT___centered_T_2 = 
        (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4 
                           - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    PvuTop__DOT__quantizeInt8__DOT___centered_T_4 = 
        (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7 
                           - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    PvuTop__DOT__quantizeInt8__DOT___centered_T_6 = 
        (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10 
                           - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (PvuTop__DOT__quantizeInt8__DOT___centered_T 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | PvuTop__DOT__quantizeInt8__DOT___centered_T), vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_12));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, PvuTop__DOT__quantizeInt8__DOT___centered_T, vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_1 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (PvuTop__DOT__quantizeInt8__DOT___centered_T_2 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | PvuTop__DOT__quantizeInt8__DOT___centered_T_2), vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_12));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, PvuTop__DOT__quantizeInt8__DOT___centered_T_2, vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_2 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (PvuTop__DOT__quantizeInt8__DOT___centered_T_4 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | PvuTop__DOT__quantizeInt8__DOT___centered_T_4), vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_12));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, PvuTop__DOT__quantizeInt8__DOT___centered_T_4, vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_3 
        = (0x3ffffffffULL & VL_DIVS_QQQ(34, (((QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (PvuTop__DOT__quantizeInt8__DOT___centered_T_6 
                                                                          >> 0x20U))))) 
                                              << 0x21U) 
                                             | PvuTop__DOT__quantizeInt8__DOT___centered_T_6), vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_12));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3 
        = (0x1ffffffffULL & VL_MODDIVS_QQQ(33, PvuTop__DOT__quantizeInt8__DOT___centered_T_6, vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale));
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder));
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1));
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2));
    PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
        = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3)
                              : vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h244a9ad7__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5b05cc0c__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_1)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h8080e71c__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_2)));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3 
        = (VL_GTS_IQQ(33, PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
           | ((PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hbf9ec76b__0 
               == vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13) 
              & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_3)));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_1)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_1)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_2)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_2)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21 
        = (3U & (VL_LTS_IQQ(33, 0x1ffffffffULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__remainder_3)
                  ? (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3)
                  : (- (IData)((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__roundToEven_3)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4 
        = (0x3ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & ((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3) 
                                                                >> 1U)))))) 
                                 << 2U) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_3)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10 
        = (0x3ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_1 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & ((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9) 
                                                                >> 1U)))))) 
                                 << 2U) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_9)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16 
        = (0x3ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_2 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & ((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15) 
                                                                >> 1U)))))) 
                                 << 2U) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_15)))));
    PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22 
        = (0x3ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__scaled_3 
                             + (((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & ((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21) 
                                                                >> 1U)))))) 
                                 << 2U) | (QData)((IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_21)))));
    vlSelf->__VdfgTmp_h87baa85a__0 = (0xffU & ((VL_LTS_IQQ(33, 0x1ffffff7fULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1) 
                                                & VL_GTS_IQQ(33, 0x80ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1))
                                                ? ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                                    ? 0U
                                                    : (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h4eff933c__0))
                                                : (
                                                   (1ULL 
                                                    == vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale)
                                                    ? 
                                                   (VL_LTS_IQQ(33, 0x7fULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1)
                                                     ? 0x7fU
                                                     : 0x80U)
                                                    : 
                                                   (VL_LTS_IQQ(34, 0x7fULL, PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                                     ? 0x7fU
                                                     : 
                                                    (VL_GTS_IQQ(34, 0x3ffffff80ULL, PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4)
                                                      ? 0x80U
                                                      : (IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_4))))));
    vlSelf->__VdfgTmp_h10c27d8c__0 = (0xffU & ((VL_LTS_IQQ(33, 0x1ffffff7fULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4) 
                                                & VL_GTS_IQQ(33, 0x80ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4))
                                                ? ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                                    ? 0U
                                                    : (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h5221cc71__0))
                                                : (
                                                   (1ULL 
                                                    == vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale)
                                                    ? 
                                                   (VL_LTS_IQQ(33, 0x7fULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4)
                                                     ? 0x7fU
                                                     : 0x80U)
                                                    : 
                                                   (VL_LTS_IQQ(34, 0x7fULL, PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                                     ? 0x7fU
                                                     : 
                                                    (VL_GTS_IQQ(34, 0x3ffffff80ULL, PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10)
                                                      ? 0x80U
                                                      : (IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_10))))));
    vlSelf->__VdfgTmp_h0453aeb4__0 = (0xffU & ((VL_LTS_IQQ(33, 0x1ffffff7fULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7) 
                                                & VL_GTS_IQQ(33, 0x80ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7))
                                                ? ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                                    ? 0U
                                                    : (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_h22e7a075__0))
                                                : (
                                                   (1ULL 
                                                    == vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale)
                                                    ? 
                                                   (VL_LTS_IQQ(33, 0x7fULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7)
                                                     ? 0x7fU
                                                     : 0x80U)
                                                    : 
                                                   (VL_LTS_IQQ(34, 0x7fULL, PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                                     ? 0x7fU
                                                     : 
                                                    (VL_GTS_IQQ(34, 0x3ffffff80ULL, PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16)
                                                      ? 0x80U
                                                      : (IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_16))))));
    vlSelf->__VdfgTmp_hee1354a9__0 = (0xffU & ((VL_LTS_IQQ(33, 0x1ffffff7fULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10) 
                                                & VL_GTS_IQQ(33, 0x80ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10))
                                                ? ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                                    ? 0U
                                                    : (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT____VdfgTmp_hb5fc9007__0))
                                                : (
                                                   (1ULL 
                                                    == vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale)
                                                    ? 
                                                   (VL_LTS_IQQ(33, 0x7fULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10)
                                                     ? 0x7fU
                                                     : 0x80U)
                                                    : 
                                                   (VL_LTS_IQQ(34, 0x7fULL, PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                                     ? 0x7fU
                                                     : 
                                                    (VL_GTS_IQQ(34, 0x3ffffff80ULL, PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22)
                                                      ? 0x80U
                                                      : (IData)(PvuTop__DOT__quantizeInt8__DOT___roundedValue_T_22))))));
    vlSelf->io_int_o_0 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_92)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h87baa85a__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h87baa85a__0))));
    vlSelf->io_int_o_1 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_92)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h10c27d8c__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h10c27d8c__0))));
    vlSelf->io_int_o_2 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_92)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h0453aeb4__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h0453aeb4__0))));
    vlSelf->io_int_o_3 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_92)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                                                & ((IData)(vlSelf->__VdfgTmp_hee1354a9__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_hee1354a9__0))));
}

void VPvuTop___024root___nba_sequent__TOP__0(VPvuTop___024root* vlSelf);

void VPvuTop___024root___eval_nba(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0x86U)) {
        VPvuTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xa8U] = 1U;
        VPvuTop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VPvuTop___024root___eval_triggers__ico(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__ico(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VPvuTop___024root___eval_ico(VPvuTop___024root* vlSelf);
void VPvuTop___024root___eval_triggers__act(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__act(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG
void VPvuTop___024root___eval_act(VPvuTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPvuTop___024root___dump_triggers__nba(VPvuTop___024root* vlSelf);
#endif  // VL_DEBUG

void VPvuTop___024root___eval(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<135> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VPvuTop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VPvuTop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 16750, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VPvuTop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPvuTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPvuTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 16750, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPvuTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPvuTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 16750, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPvuTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPvuTop___024root___eval_debug_assertions(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_op & 0xf0U))) {
        Verilated::overWidthError("io_op");}
    if (VL_UNLIKELY((vlSelf->io_Isposit & 0xfeU))) {
        Verilated::overWidthError("io_Isposit");}
    if (VL_UNLIKELY((vlSelf->io_Outposit & 0xfeU))) {
        Verilated::overWidthError("io_Outposit");}
    if (VL_UNLIKELY((vlSelf->io_float_mode & 0xf8U))) {
        Verilated::overWidthError("io_float_mode");}
    if (VL_UNLIKELY((vlSelf->io_float_posit & 0xfeU))) {
        Verilated::overWidthError("io_float_posit");}
    if (VL_UNLIKELY((vlSelf->io_dst_float_mode & 0xf0U))) {
        Verilated::overWidthError("io_dst_float_mode");}
    if (VL_UNLIKELY((vlSelf->io_src_posit_width & 0xc0U))) {
        Verilated::overWidthError("io_src_posit_width");}
    if (VL_UNLIKELY((vlSelf->io_vector_size & 0xf8U))) {
        Verilated::overWidthError("io_vector_size");}
    if (VL_UNLIKELY((vlSelf->io_dst_posit_width & 0xc0U))) {
        Verilated::overWidthError("io_dst_posit_width");}
}
#endif  // VL_DEBUG
