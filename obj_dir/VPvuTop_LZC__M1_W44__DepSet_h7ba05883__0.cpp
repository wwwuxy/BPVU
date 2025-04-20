// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_LZC__M1_W44.h"

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__1\n"); );
    // Init
    VlWide<28>/*895:0*/ __Vtemp_h46762311__0;
    VlWide<3>/*95:0*/ __Vtemp_h5fa7ae5b__0;
    VlWide<3>/*95:0*/ __Vtemp_h30a53444__0;
    VlWide<4>/*127:0*/ __Vtemp_h2eb7d13f__0;
    VlWide<5>/*159:0*/ __Vtemp_h5a496198__0;
    VlWide<6>/*191:0*/ __Vtemp_h926d998a__0;
    VlWide<7>/*223:0*/ __Vtemp_hcc1a6449__0;
    VlWide<7>/*223:0*/ __Vtemp_hf941b325__0;
    VlWide<8>/*255:0*/ __Vtemp_h91b6ba17__0;
    VlWide<9>/*287:0*/ __Vtemp_h9757a18a__0;
    VlWide<10>/*319:0*/ __Vtemp_hb169b1d5__0;
    VlWide<10>/*319:0*/ __Vtemp_h8b3bf56b__0;
    VlWide<11>/*351:0*/ __Vtemp_hbe291040__0;
    VlWide<12>/*383:0*/ __Vtemp_h317db369__0;
    VlWide<13>/*415:0*/ __Vtemp_h8e47b88f__0;
    VlWide<14>/*447:0*/ __Vtemp_h4253bbc7__0;
    VlWide<14>/*447:0*/ __Vtemp_h30bf5052__0;
    // Body
    __Vtemp_h5fa7ae5b__0[0U] = (IData)((((QData)((IData)(
                                                         (0x7fU 
                                                          & ((0x20000U 
                                                              & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                              ? 
                                                             ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 9U) 
                                                              | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x17U))
                                                              : 
                                                             ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                               << 2U) 
                                                              | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x1eU)))))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0x7fU 
                                                             & ((0x8000U 
                                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                 ? 
                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0x10U)))))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (0x7fU 
                                                                & ((0x2000U 
                                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                    ? 
                                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 5U) 
                                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1bU))
                                                                    : 
                                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 2U)))))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & ((0x800U 
                                                                       & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                       ? 
                                                                      ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0x13U) 
                                                                       | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0xdU))
                                                                       : 
                                                                      ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x14U)))))) 
                                                  << 0x23U) 
                                                 | (((QData)((IData)(
                                                                     (0x7fU 
                                                                      & ((0x200U 
                                                                          & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                          ? 
                                                                         ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 1U) 
                                                                          | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                             >> 0x1fU))
                                                                          : 
                                                                         ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x1aU) 
                                                                          | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 6U)))))) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe00000U 
                                                                        & (((0x80U 
                                                                             & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                             ? 
                                                                            ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 0xfU) 
                                                                             | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x11U))
                                                                             : 
                                                                            ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 8U) 
                                                                             | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x18U))) 
                                                                           << 0x15U)) 
                                                                       | ((0x1fc000U 
                                                                           & (((0x20U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                ? 
                                                                               ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                : 
                                                                               ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))) 
                                                                              << 0xeU)) 
                                                                          | ((0x3f80U 
                                                                              & (((8U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x15U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1cU))) 
                                                                                << 7U)) 
                                                                             | (0x7fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x19U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 7U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x12U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xeU)))))))))))))));
    __Vtemp_h5fa7ae5b__0[1U] = ((((0x80000U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                   ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1bU) | 
                                      (vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 5U)) : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                 << 0x1fU) | (IData)(
                                                     ((((QData)((IData)(
                                                                        (0x7fU 
                                                                         & ((0x20000U 
                                                                             & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                             ? 
                                                                            ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                              << 9U) 
                                                                             | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                                >> 0x17U))
                                                                             : 
                                                                            ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                                              << 2U) 
                                                                             | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                                >> 0x1eU)))))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (0x7fU 
                                                                            & ((0x8000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                ? 
                                                                               ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                                << 0x17U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                                >> 9U))
                                                                                : 
                                                                               ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                                >> 0x10U)))))) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(
                                                                              (0x7fU 
                                                                               & ((0x2000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                                << 5U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x1bU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                                << 0x1eU) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] 
                                                                                >> 2U)))))) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x14U)))))) 
                                                                 << 0x23U) 
                                                                | (((QData)((IData)(
                                                                                (0x7fU 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1fU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                                    << 0x1cU) 
                                                                   | (QData)((IData)(
                                                                                ((0xfe00000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x11U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 8U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x18U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x1fc000U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x3f80U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x15U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1cU))) 
                                                                                << 7U)) 
                                                                                | (0x7fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                                                 ? 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x19U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 7U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x12U) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xeU)))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h30a53444__0[2U] = ((0xfe000U & (((0x800000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                               ? ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                   << 0x1fU) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                     >> 1U))
                                               : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                     >> 8U))) 
                                             << 0xdU)) 
                                | ((0x1fc0U & (((0x200000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0xdU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x13U))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                  << 6U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x1aU))) 
                                               << 6U)) 
                                   | (0x3fU & (((0x80000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1bU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 5U))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x14U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0xcU))) 
                                               >> 1U))));
    __Vtemp_h2eb7d13f__0[3U] = ((0x7f0000U & (((2U 
                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                ? (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                    << 0x19U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                      >> 7U))
                                                : (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                    << 0x12U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                      >> 0xeU))) 
                                              << 0x10U)) 
                                | ((0xfe00U & (((vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                 >> 0x1fU)
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                  << 7U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                    >> 0x19U))
                                                 : 
                                                vlSelf->__PVT__gen_lzc__DOT__index_nodes[7U]) 
                                               << 9U)) 
                                   | ((0x1fcU & (((0x20000000U 
                                                   & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                   ? 
                                                  ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0x15U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0xeU) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0x12U))) 
                                                 << 2U)) 
                                      | (3U & (((0x8000000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                    >> 0x1dU))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                                    >> 4U))) 
                                               >> 5U)))));
    __Vtemp_h5a496198__0[4U] = ((0x7f000U & (((0x200U 
                                               & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                               ? ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                   << 1U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                     >> 0x1fU))
                                               : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                   << 0x1aU) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                     >> 6U))) 
                                             << 0xcU)) 
                                | ((0xfe0U & (((0x80U 
                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                ? (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0xfU) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0x11U))
                                                : (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 8U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0x18U))) 
                                              << 5U)) 
                                   | (0x1fU & (((0x20U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                  << 0x1dU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                    >> 3U))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                  << 0x16U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                    >> 0xaU))) 
                                               >> 2U))));
    __Vtemp_h926d998a__0[5U] = ((0x7f00U & (((0x20000U 
                                              & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                              ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 9U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x17U))
                                              : ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                  << 2U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x1eU))) 
                                            << 8U)) 
                                | ((0xfeU & (((0x8000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                               ? ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x17U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 9U))
                                               : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 0x10U))) 
                                             << 1U)) 
                                   | (1U & (((0x2000U 
                                              & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                              ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 5U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                    >> 0x1bU))
                                              : ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 2U))) 
                                            >> 6U))));
    __Vtemp_hcc1a6449__0[5U] = ((((0x800000U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                   ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                       << 0x1fU) | 
                                      (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                       >> 1U)) : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                     >> 8U))) 
                                 << 0x1dU) | ((0x1fc00000U 
                                               & (((0x200000U 
                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                    ? 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     << 0xdU) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0x13U))
                                                    : 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                     << 6U) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0x1aU))) 
                                                  << 0x16U)) 
                                              | ((0x3f8000U 
                                                  & (((0x80000U 
                                                       & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                       ? 
                                                      ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        << 0x1bU) 
                                                       | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                          >> 5U))
                                                       : 
                                                      ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        << 0x14U) 
                                                       | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xbU] 
                                                          >> 0xcU))) 
                                                     << 0xfU)) 
                                                 | __Vtemp_h926d998a__0[5U])));
    __Vtemp_hf941b325__0[6U] = ((0x3f800U & (((0x8000000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                               ? ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                   << 3U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                     >> 0x1dU))
                                               : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                   << 0x1cU) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                     >> 4U))) 
                                             << 0xbU)) 
                                | ((0x7f0U & (((0x2000000U 
                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                ? (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                    << 0x11U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                      >> 0xfU))
                                                : (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                    << 0xaU) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                      >> 0x16U))) 
                                              << 4U)) 
                                   | (0xfU & (((0x800000U 
                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                ? (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                    << 0x1fU) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                      >> 1U))
                                                : (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                    << 0x18U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
                                                      >> 8U))) 
                                              >> 3U))));
    __Vtemp_h91b6ba17__0[7U] = ((0x1fc000U & (((0x20U 
                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                ? (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                    << 0x1dU) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                      >> 3U))
                                                : (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                    << 0x16U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                      >> 0xaU))) 
                                              << 0xeU)) 
                                | ((0x3f80U & (((8U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                  << 0xbU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                    >> 0x15U))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                  << 4U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                    >> 0x1cU))) 
                                               << 7U)) 
                                   | (0x7fU & ((2U 
                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                ? (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                    << 0x19U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                      >> 7U))
                                                : (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                    << 0x12U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xeU] 
                                                      >> 0xeU))))));
    __Vtemp_h9757a18a__0[8U] = ((0x1fc00U & (((0x2000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                               ? ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                   << 5U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                     >> 0x1bU))
                                               : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                     >> 2U))) 
                                             << 0xaU)) 
                                | ((0x3f8U & (((0x800U 
                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                ? (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                    << 0x13U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                      >> 0xdU))
                                                : (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                    << 0xcU) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                      >> 0x14U))) 
                                              << 3U)) 
                                   | (7U & (((0x200U 
                                              & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                              ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                  << 1U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                    >> 0x1fU))
                                              : ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                                    >> 6U))) 
                                            >> 4U))));
    __Vtemp_hb169b1d5__0[8U] = ((((0x80000U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                   ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                       << 0x1bU) | 
                                      (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                       >> 5U)) : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                     >> 0xcU))) 
                                 << 0x1fU) | ((0x7f000000U 
                                               & (((0x20000U 
                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                    ? 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                     << 9U) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                       >> 0x17U))
                                                    : 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                     << 2U) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                       >> 0x1eU))) 
                                                  << 0x18U)) 
                                              | ((0xfe0000U 
                                                  & (((0x8000U 
                                                       & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                       ? 
                                                      ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                        << 0x17U) 
                                                       | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                          >> 9U))
                                                       : 
                                                      ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                        << 0x10U) 
                                                       | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
                                                          >> 0x10U))) 
                                                     << 0x11U)) 
                                                 | __Vtemp_h9757a18a__0[8U])));
    __Vtemp_h8b3bf56b__0[9U] = ((0xfe000U & (((0x800000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                               ? ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                   << 0x1fU) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                     >> 1U))
                                               : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                     >> 8U))) 
                                             << 0xdU)) 
                                | ((0x1fc0U & (((0x200000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                  << 0xdU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                    >> 0x13U))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                  << 6U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                    >> 0x1aU))) 
                                               << 6U)) 
                                   | (0x3fU & (((0x80000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                  << 0x1bU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                    >> 5U))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                  << 0x14U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
                                                    >> 0xcU))) 
                                               >> 1U))));
    __Vtemp_hbe291040__0[0xaU] = ((0x7f0000U & (((2U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                  ? 
                                                 ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                     >> 7U))
                                                  : 
                                                 ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                   << 0x12U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                     >> 0xeU))) 
                                                << 0x10U)) 
                                  | ((0xfe00U & (((
                                                   vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                    << 7U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                      >> 0x19U))
                                                   : 
                                                  vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x15U]) 
                                                 << 9U)) 
                                     | ((0x1fcU & (
                                                   ((0x20000000U 
                                                     & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                     ? 
                                                    ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                      << 0x15U) 
                                                     | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                        >> 0xbU))
                                                     : 
                                                    ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                      << 0xeU) 
                                                     | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                        >> 0x12U))) 
                                                   << 2U)) 
                                        | (3U & (((0x8000000U 
                                                   & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                   ? 
                                                  ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                    << 3U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                      >> 0x1dU))
                                                   : 
                                                  ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                    << 0x1cU) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                                      >> 4U))) 
                                                 >> 5U)))));
    __Vtemp_h317db369__0[0xbU] = ((0x7f000U & (((0x200U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                  << 1U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                    >> 0x1fU))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                  << 0x1aU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                    >> 6U))) 
                                               << 0xcU)) 
                                  | ((0xfe0U & (((0x80U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                  ? 
                                                 ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                   << 0xfU) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                     >> 0x11U))
                                                  : 
                                                 ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                   << 8U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                     >> 0x18U))) 
                                                << 5U)) 
                                     | (0x1fU & (((0x20U 
                                                   & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                   ? 
                                                  ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                    << 0x1dU) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                      >> 3U))
                                                   : 
                                                  ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                    << 0x16U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                      >> 0xaU))) 
                                                 >> 2U))));
    __Vtemp_h8e47b88f__0[0xcU] = ((0x7f00U & (((0x20000U 
                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                ? (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                    << 9U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                      >> 0x17U))
                                                : (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                    << 2U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                      >> 0x1eU))) 
                                              << 8U)) 
                                  | ((0xfeU & (((0x8000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                  << 0x17U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                    >> 9U))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                  << 0x10U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                    >> 0x10U))) 
                                               << 1U)) 
                                     | (1U & (((0x2000U 
                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                ? (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                    << 5U) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                      >> 0x1bU))
                                                : (
                                                   (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                                      >> 2U))) 
                                              >> 6U))));
    __Vtemp_h4253bbc7__0[0xcU] = ((((0x800000U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                     ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                         << 0x1fU) 
                                        | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                           >> 1U)) : 
                                    ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                   >> 8U))) 
                                   << 0x1dU) | ((0x1fc00000U 
                                                 & (((0x200000U 
                                                      & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                      ? 
                                                     ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                       << 0xdU) 
                                                      | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                         >> 0x13U))
                                                      : 
                                                     ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                       << 6U) 
                                                      | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                         >> 0x1aU))) 
                                                    << 0x16U)) 
                                                | ((0x3f8000U 
                                                    & (((0x80000U 
                                                         & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                         ? 
                                                        ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                          << 0x1bU) 
                                                         | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                            >> 5U))
                                                         : 
                                                        ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                          << 0x14U) 
                                                         | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x19U] 
                                                            >> 0xcU))) 
                                                       << 0xfU)) 
                                                   | __Vtemp_h8e47b88f__0[0xcU])));
    __Vtemp_h30bf5052__0[0xdU] = ((0x3f800U & (((0x8000000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                 ? 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                    >> 0x1dU))
                                                 : 
                                                ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                  << 0x1cU) 
                                                 | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                                    >> 4U))) 
                                               << 0xbU)) 
                                  | ((0x7f0U & (((0x2000000U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                  ? 
                                                 ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                   << 0x11U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                     >> 0xfU))
                                                  : 
                                                 ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                   << 0xaU) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                     >> 0x16U))) 
                                                << 4U)) 
                                     | (0xfU & (((0x800000U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                  ? 
                                                 ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                   << 0x1fU) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                     >> 1U))
                                                  : 
                                                 ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                   << 0x18U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] 
                                                     >> 8U))) 
                                                >> 3U))));
    __Vtemp_h46762311__0[2U] = ((((0x8000000U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                   ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                       << 3U) | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                       << 0x1cU) | 
                                      (vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] 
                                       >> 4U))) << 0x1bU) 
                                | ((0x7f00000U & ((
                                                   (0x2000000U 
                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])
                                                    ? 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0x11U) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0xaU) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0x16U))) 
                                                  << 0x14U)) 
                                   | __Vtemp_h30a53444__0[2U]));
    __Vtemp_h46762311__0[3U] = ((((0x20U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                   ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                       << 0x1dU) | 
                                      (vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                       >> 3U)) : ((
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                   << 0x16U) 
                                                  | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                     >> 0xaU))) 
                                 << 0x1eU) | ((0x3f800000U 
                                               & (((8U 
                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                    ? 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                     << 0xbU) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x15U))
                                                    : 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] 
                                                     << 4U) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x1cU))) 
                                                  << 0x17U)) 
                                              | __Vtemp_h2eb7d13f__0[3U]));
    __Vtemp_h46762311__0[4U] = ((((0x2000U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                   ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 5U) | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                 >> 0x1bU))
                                   : ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 0x1eU) | 
                                      (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
                                       >> 2U))) << 0x1aU) 
                                | ((0x3f80000U & ((
                                                   (0x800U 
                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                    ? 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 0x13U) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0xdU))
                                                    : 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 0xcU) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0x14U))) 
                                                  << 0x13U)) 
                                   | __Vtemp_h5a496198__0[4U]));
    __Vtemp_h46762311__0[6U] = ((((vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                   >> 0x1fU) ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                 << 7U) 
                                                | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                   >> 0x19U))
                                   : vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xeU]) 
                                 << 0x19U) | ((0x1fc0000U 
                                               & (((0x20000000U 
                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U])
                                                    ? 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                     << 0x15U) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                       >> 0xbU))
                                                    : 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                     << 0xeU) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
                                                       >> 0x12U))) 
                                                  << 0x12U)) 
                                              | __Vtemp_hf941b325__0[6U]));
    __Vtemp_h46762311__0[7U] = ((((0x200U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                   ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                       << 1U) | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                 >> 0x1fU))
                                   : ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                       << 0x1aU) | 
                                      (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
                                       >> 6U))) << 0x1cU) 
                                | ((0xfe00000U & ((
                                                   (0x80U 
                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                    ? 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                     << 0xfU) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                       >> 0x11U))
                                                    : 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                     << 8U) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
                                                       >> 0x18U))) 
                                                  << 0x15U)) 
                                   | __Vtemp_h91b6ba17__0[7U]));
    __Vtemp_h46762311__0[9U] = ((((0x8000000U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                   ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                       << 3U) | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                       << 0x1cU) | 
                                      (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
                                       >> 4U))) << 0x1bU) 
                                | ((0x7f00000U & ((
                                                   (0x2000000U 
                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])
                                                    ? 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                     << 0x11U) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                       >> 0xfU))
                                                    : 
                                                   ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                     << 0xaU) 
                                                    | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
                                                       >> 0x16U))) 
                                                  << 0x14U)) 
                                   | __Vtemp_h8b3bf56b__0[9U]));
    __Vtemp_h46762311__0[0xaU] = ((((0x20U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                     ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                         << 0x1dU) 
                                        | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                           >> 3U)) : 
                                    ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                      << 0x16U) | (
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                   >> 0xaU))) 
                                   << 0x1eU) | ((0x3f800000U 
                                                 & (((8U 
                                                      & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                      ? 
                                                     ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                       << 0xbU) 
                                                      | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                         >> 0x15U))
                                                      : 
                                                     ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] 
                                                       << 4U) 
                                                      | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x15U] 
                                                         >> 0x1cU))) 
                                                    << 0x17U)) 
                                                | __Vtemp_hbe291040__0[0xaU]));
    __Vtemp_h46762311__0[0xbU] = ((((0x2000U & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                     ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                         << 5U) | (
                                                   vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                   >> 0x1bU))
                                     : ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                         << 0x1eU) 
                                        | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] 
                                           >> 2U))) 
                                   << 0x1aU) | ((0x3f80000U 
                                                 & (((0x800U 
                                                      & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                                      ? 
                                                     ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                       << 0x13U) 
                                                      | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                         >> 0xdU))
                                                      : 
                                                     ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                       << 0xcU) 
                                                      | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] 
                                                         >> 0x14U))) 
                                                    << 0x13U)) 
                                                | __Vtemp_h317db369__0[0xbU]));
    __Vtemp_h46762311__0[0xdU] = ((((1U & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                     ? 0U : 1U) << 0x19U) 
                                  | ((0x1fc0000U & 
                                      (((0x20000000U 
                                         & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])
                                         ? ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                             << 0x15U) 
                                            | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                               >> 0xbU))
                                         : ((vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                             << 0xeU) 
                                            | (vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
                                               >> 0x12U))) 
                                       << 0x12U)) | 
                                     __Vtemp_h30bf5052__0[0xdU]));
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0U] = 
        __Vtemp_h5fa7ae5b__0[0U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[1U] = 
        __Vtemp_h5fa7ae5b__0[1U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[2U] = 
        __Vtemp_h46762311__0[2U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[3U] = 
        __Vtemp_h46762311__0[3U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[4U] = 
        __Vtemp_h46762311__0[4U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[5U] = 
        __Vtemp_hcc1a6449__0[5U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[6U] = 
        __Vtemp_h46762311__0[6U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[7U] = 
        __Vtemp_h46762311__0[7U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[8U] = 
        __Vtemp_hb169b1d5__0[8U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[9U] = 
        __Vtemp_h46762311__0[9U];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xaU] 
        = __Vtemp_h46762311__0[0xaU];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xbU] 
        = __Vtemp_h46762311__0[0xbU];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xcU] 
        = __Vtemp_h4253bbc7__0[0xcU];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xdU] 
        = __Vtemp_h46762311__0[0xdU];
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xeU] 
        = ((((0x400U & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
              ? 0xaU : 0xbU) << 0x1cU) | ((((0x100U 
                                             & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                             ? 8U : 9U) 
                                           << 0x15U) 
                                          | ((((0x40U 
                                                & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                ? 6U
                                                : 7U) 
                                              << 0xeU) 
                                             | ((((0x10U 
                                                   & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                   ? 4U
                                                   : 5U) 
                                                 << 7U) 
                                                | ((4U 
                                                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                    ? 2U
                                                    : 3U)))));
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0xfU] 
        = ((((0x100000U & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
              ? 0x14U : 0x15U) << 0x1fU) | ((((0x40000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x11U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xaU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 3U) 
                                                     | (((0x400U 
                                                          & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                          ? 0xaU
                                                          : 0xbU) 
                                                        >> 4U))))));
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x10U] 
        = ((((0x10000000U & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
              ? 0x1cU : 0x1dU) << 0x1bU) | ((((0x4000000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                               ? 0x1aU
                                               : 0x1bU) 
                                             << 0x14U) 
                                            | ((((0x1000000U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                  ? 0x18U
                                                  : 0x19U) 
                                                << 0xdU) 
                                               | ((((0x400000U 
                                                     & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                     ? 0x16U
                                                     : 0x17U) 
                                                   << 6U) 
                                                  | (((0x100000U 
                                                       & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                       ? 0x14U
                                                       : 0x15U) 
                                                     >> 1U)))));
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x11U] 
        = ((((0x40U & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
              ? 0x26U : 0x27U) << 0x1eU) | ((((0x10U 
                                               & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                               ? 0x24U
                                               : 0x25U) 
                                             << 0x17U) 
                                            | ((((4U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                  ? 0x22U
                                                  : 0x23U) 
                                                << 0x10U) 
                                               | ((((1U 
                                                     & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                     ? 0x20U
                                                     : 0x21U) 
                                                   << 9U) 
                                                  | ((((0x40000000U 
                                                        & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                        ? 0x1eU
                                                        : 0x1fU) 
                                                      << 2U) 
                                                     | (((0x10000000U 
                                                          & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])
                                                          ? 0x1cU
                                                          : 0x1dU) 
                                                        >> 5U))))));
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x12U] 
        = ((((0x4000U & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
              ? 0x2eU : 0x2fU) << 0x1aU) | ((((0x1000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                               ? 0x2cU
                                               : 0x2dU) 
                                             << 0x13U) 
                                            | ((((0x400U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                  ? 0x2aU
                                                  : 0x2bU) 
                                                << 0xcU) 
                                               | ((((0x100U 
                                                     & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                     ? 0x28U
                                                     : 0x29U) 
                                                   << 5U) 
                                                  | (((0x40U 
                                                       & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                       ? 0x26U
                                                       : 0x27U) 
                                                     >> 2U)))));
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x13U] 
        = ((((0x1000000U & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
              ? 0x38U : 0x39U) << 0x1dU) | ((((0x400000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                               ? 0x36U
                                               : 0x37U) 
                                             << 0x16U) 
                                            | ((((0x100000U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                  ? 0x34U
                                                  : 0x35U) 
                                                << 0xfU) 
                                               | ((((0x40000U 
                                                     & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                     ? 0x32U
                                                     : 0x33U) 
                                                   << 8U) 
                                                  | ((((0x10000U 
                                                        & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                        ? 0x30U
                                                        : 0x31U) 
                                                      << 1U) 
                                                     | (((0x4000U 
                                                          & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                          ? 0x2eU
                                                          : 0x2fU) 
                                                        >> 6U))))));
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x14U] 
        = ((((1U & vlSelf->__PVT__gen_lzc__DOT__in_tmp[2U])
              ? 0x40U : 0x41U) << 0x19U) | ((((0x40000000U 
                                               & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                               ? 0x3eU
                                               : 0x3fU) 
                                             << 0x12U) 
                                            | ((((0x10000000U 
                                                  & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                  ? 0x3cU
                                                  : 0x3dU) 
                                                << 0xbU) 
                                               | ((((0x4000000U 
                                                     & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                     ? 0x3aU
                                                     : 0x3bU) 
                                                   << 4U) 
                                                  | (((0x1000000U 
                                                       & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U])
                                                       ? 0x38U
                                                       : 0x39U) 
                                                     >> 3U)))));
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x15U] 
        = ((4U & vlSelf->__PVT__gen_lzc__DOT__in_tmp[2U])
            ? 0x42U : 0x43U);
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x16U] = 0U;
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x17U] = 0U;
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x18U] = 0U;
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x19U] = 0U;
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1aU] = 0U;
    vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1bU] 
        = (0xfe000000U & vlSelf->__PVT__gen_lzc__DOT__index_nodes[0x1bU]);
}

VL_INLINE_OPT void VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2(VPvuTop_LZC__M1_W44* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VPvuTop_LZC__M1_W44___ico_comb__TOP__PvuTop__DOT__frac_norm_mul__DOT__lzcMod__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h7d6cf92d__0;
    VlWide<3>/*95:0*/ __Vtemp_h3b02f6a5__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd3faaf7__0;
    VlWide<3>/*95:0*/ __Vtemp_hf82f8539__0;
    VlWide<3>/*95:0*/ __Vtemp_h65315a8d__0;
    // Body
    __Vtemp_h7d6cf92d__0[0U] = (IData)((((QData)((IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0x60000000U 
                                                              & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x18000000U 
                                                                 & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x6000000U 
                                                                    & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x1800000U 
                                                                       & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x600000U 
                                                                          & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x180000U 
                                                                             & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x60000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                >> 0x1fU) 
                                                                                | vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((0x80000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                << 0x1fU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((0x8000U 
                                                                                & (vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                                                >> 0x10U)) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                                                << 0xfU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h7d6cf92d__0[1U] = (IData)(((((QData)((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (0U 
                                                              != 
                                                              (0x60000000U 
                                                               & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x18000000U 
                                                                  & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x6000000U 
                                                                     & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x1800000U 
                                                                        & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x600000U 
                                                                           & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x180000U 
                                                                              & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                >> 0x1fU) 
                                                                                | vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U])))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((0x80000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U] 
                                                                                << 0x1fU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U]))) 
                                                                                << 0x10U) 
                                                                                | ((0x8000U 
                                                                                & ((0x8000U 
                                                                                & (vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U] 
                                                                                >> 0x10U)) 
                                                                                | (vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U] 
                                                                                << 0xfU))) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h3b02f6a5__0[2U] = (((IData)((0U != (0xc000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                 << 6U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x3000U 
                                                      & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                            << 5U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xc00U 
                                                         & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                                  << 3U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                                     << 2U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x30U 
                                                                  & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                                        << 1U) 
                                                       | (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U])))))))));
    __Vtemp_hdd3faaf7__0[2U] = (((IData)((0U != (0x30000000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                 << 0xdU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                              << 0xcU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                                 << 0xbU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                                    << 0xaU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                                       << 9U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                                          << 8U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                                             << 7U) 
                                                            | __Vtemp_h3b02f6a5__0[2U])))))));
    __Vtemp_hf82f8539__0[2U] = (((IData)((0U != (0xc00U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                 << 0x14U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                               << 0x13U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xc0U 
                                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                  << 0x12U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x30U 
                                                               & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                     << 0x11U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xcU 
                                                                  & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                        << 0x10U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                           << 0xfU) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xc0000000U 
                                                                        & vlSelf->__PVT__gen_lzc__DOT__in_tmp[0U]))) 
                                                              << 0xeU) 
                                                             | __Vtemp_hdd3faaf7__0[2U])))))));
    __Vtemp_h65315a8d__0[2U] = (((IData)((0U != (0x3000000U 
                                                 & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                 << 0x1bU) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xc00000U 
                                                         & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                               << 0x1aU) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300000U 
                                                            & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                  << 0x19U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc0000U 
                                                               & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                     << 0x18U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x30000U 
                                                                  & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                        << 0x17U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xc000U 
                                                                     & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                           << 0x16U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x3000U 
                                                                        & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                              << 0x15U) 
                                                             | __Vtemp_hf82f8539__0[2U])))))));
    vlSelf->__PVT__gen_lzc__DOT__sel_nodes[0U] = __Vtemp_h7d6cf92d__0[0U];
    vlSelf->__PVT__gen_lzc__DOT__sel_nodes[1U] = __Vtemp_h7d6cf92d__0[1U];
    vlSelf->__PVT__gen_lzc__DOT__sel_nodes[2U] = (((IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & vlSelf->__PVT__gen_lzc__DOT__in_tmp[2U]))) 
                                                   << 0x1fU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0xc0000000U 
                                                                & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                      << 0x1eU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x30000000U 
                                                                   & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                         << 0x1dU) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xc000000U 
                                                                      & vlSelf->__PVT__gen_lzc__DOT__in_tmp[1U]))) 
                                                            << 0x1cU) 
                                                           | __Vtemp_h65315a8d__0[2U]))));
    vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U] = ((0x80000000U 
                                                   & vlSelf->__PVT__gen_lzc__DOT__sel_nodes[3U]) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (0xcU 
                                                              & vlSelf->__PVT__gen_lzc__DOT__in_tmp[2U]))));
}
