// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop_PositDecode.h"

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__0(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__0\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    // Body
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->__PVT___operand_3_T_6 
                              << 0x10U) : vlSelf->__PVT___operand_3_T_6));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__1(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__1\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    // Body
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->__PVT___operand_2_T_6 
                              << 0x10U) : vlSelf->__PVT___operand_2_T_6));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__2(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__2\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    // Body
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->__PVT___operand_1_T_6 
                              << 0x10U) : vlSelf->__PVT___operand_1_T_6));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__3(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__3\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->__PVT___operand_0_T_6 
                              << 0x10U) : vlSelf->__PVT___operand_0_T_6));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__4(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__4\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h596fec38__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd1614af__0;
    // Body
    __Vtemp_h596fec38__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h596fec38__0[1U] = ((((0x2000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hcd1614af__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h596fec38__0[0U];
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h596fec38__0[1U];
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hcd1614af__0[2U])))));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__5\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h6ed9cf86__0;
    // Body
    __Vtemp_h6ed9cf86__0 = ((0x40000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h6ed9cf86__0);
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__6(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__6\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6a7498eb__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc793c7a__0;
    // Body
    __Vtemp_h6a7498eb__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h6a7498eb__0[1U] = ((((0x2000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hcc793c7a__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h6a7498eb__0[0U];
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h6a7498eb__0[1U];
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hcc793c7a__0[2U])))));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__7\n"); );
    // Init
    IData/*31:0*/ __Vtemp_hd3474648__0;
    // Body
    __Vtemp_hd3474648__0 = ((0x40000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_hd3474648__0);
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__8(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__8\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf3e0eabe__0;
    VlWide<3>/*95:0*/ __Vtemp_hc08fc0c1__0;
    // Body
    __Vtemp_hf3e0eabe__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hf3e0eabe__0[1U] = ((((0x2000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hc08fc0c1__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hf3e0eabe__0[0U];
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hf3e0eabe__0[1U];
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hc08fc0c1__0[2U])))));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__9\n"); );
    // Init
    IData/*31:0*/ __Vtemp_ha2a85037__0;
    // Body
    __Vtemp_ha2a85037__0 = ((0x40000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_ha2a85037__0);
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__10(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__10\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc3bb1030__0;
    VlWide<3>/*95:0*/ __Vtemp_hba3bc2d5__0;
    // Body
    __Vtemp_hc3bb1030__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hc3bb1030__0[1U] = ((((0x2000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hba3bc2d5__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hc3bb1030__0[0U];
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hc3bb1030__0[1U];
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hba3bc2d5__0[2U])))));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__11\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h25c0f768__0;
    // Body
    __Vtemp_h25c0f768__0 = ((0x40000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h25c0f768__0);
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__12\n"); );
    // Body
    vlSelf->io_Exp = ((((8U & (IData)(vlSelf->__PVT__isNaR))
                         ? 0U : ((((1U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                    ? ((0x40000000U 
                                        & vlSelf->__PVT___operand_3_T_6)
                                        ? (0x1fU & 
                                           (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                            - (IData)(1U)))
                                        : (0x20U | 
                                           (0x1fU & 
                                            ((IData)(1U) 
                                             + (~ vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                    : 0U) << 2U) | 
                                 ((1U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? (3U & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                            >> 0x1dU))
                                   : 0U))) << 0x18U) 
                      | ((((4U & (IData)(vlSelf->__PVT__isNaR))
                            ? 0U : ((((1U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                       ? ((0x40000000U 
                                           & vlSelf->__PVT___operand_2_T_6)
                                           ? (0x1fU 
                                              & (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                 - (IData)(1U)))
                                           : (0x20U 
                                              | (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ 
                                                     vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                       : 0U) << 2U) 
                                    | ((1U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                        ? (3U & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                                 >> 0x1dU))
                                        : 0U))) << 0x10U) 
                         | ((((2U & (IData)(vlSelf->__PVT__isNaR))
                               ? 0U : ((((1U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                          ? ((0x40000000U 
                                              & vlSelf->__PVT___operand_1_T_6)
                                              ? (0x1fU 
                                                 & (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                    - (IData)(1U)))
                                              : (0x20U 
                                                 | (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ 
                                                        vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                          : 0U) << 2U) 
                                       | ((1U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                           ? (3U & 
                                              (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                               >> 0x1dU))
                                           : 0U))) 
                             << 8U) | ((1U & (IData)(vlSelf->__PVT__isNaR))
                                        ? 0U : ((((1U 
                                                   & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->__PVT___operand_0_T_6)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                       - (IData)(1U)))
                                                    : 
                                                   (0x20U 
                                                    | (0x1fU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ 
                                                           vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])))))
                                                   : 0U) 
                                                 << 2U) 
                                                | ((1U 
                                                    & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                    ? 
                                                   (3U 
                                                    & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                                       >> 0x1dU))
                                                    : 0U))))));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__decode1__13\n"); );
    // Body
    vlSelf->io_Frac[0U] = (IData)((((QData)((IData)(
                                                    ((2U 
                                                      & (IData)(vlSelf->__PVT__isNaR))
                                                      ? 0U
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != vlSelf->__PVT___operand_1_T_6)) 
                                                       << 0x1bU) 
                                                      | (0x7ffffffU 
                                                         & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                                            >> 2U)))))) 
                                    << 0x1cU) | (QData)((IData)(
                                                                ((1U 
                                                                  & (IData)(vlSelf->__PVT__isNaR))
                                                                  ? 0U
                                                                  : 
                                                                 (((IData)(
                                                                           (0U 
                                                                            != vlSelf->__PVT___operand_0_T_6)) 
                                                                   << 0x1bU) 
                                                                  | (0x7ffffffU 
                                                                     & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                                                        >> 2U))))))));
    vlSelf->io_Frac[1U] = ((((4U & (IData)(vlSelf->__PVT__isNaR))
                              ? 0U : (((IData)((0U 
                                                != vlSelf->__PVT___operand_2_T_6)) 
                                       << 0x1bU) | 
                                      (0x7ffffffU & 
                                       (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                        >> 2U)))) << 0x18U) 
                           | (IData)(((((QData)((IData)(
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__isNaR))
                                                          ? 0U
                                                          : 
                                                         (((IData)(
                                                                   (0U 
                                                                    != vlSelf->__PVT___operand_1_T_6)) 
                                                           << 0x1bU) 
                                                          | (0x7ffffffU 
                                                             & (vlSelf->__PVT___barrel_shifter_1_io_result_o 
                                                                >> 2U)))))) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(vlSelf->__PVT__isNaR))
                                                                      ? 0U
                                                                      : 
                                                                     (((IData)(
                                                                               (0U 
                                                                                != vlSelf->__PVT___operand_0_T_6)) 
                                                                       << 0x1bU) 
                                                                      | (0x7ffffffU 
                                                                         & (vlSelf->__PVT___barrel_shifter_io_result_o 
                                                                            >> 2U))))))) 
                                      >> 0x20U)));
    vlSelf->io_Frac[2U] = ((((8U & (IData)(vlSelf->__PVT__isNaR))
                              ? 0U : (((IData)((0U 
                                                != vlSelf->__PVT___operand_3_T_6)) 
                                       << 0x1bU) | 
                                      (0x7ffffffU & 
                                       (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                        >> 2U)))) << 0x14U) 
                           | (((4U & (IData)(vlSelf->__PVT__isNaR))
                                ? 0U : (((IData)((0U 
                                                  != vlSelf->__PVT___operand_2_T_6)) 
                                         << 0x1bU) 
                                        | (0x7ffffffU 
                                           & (vlSelf->__PVT___barrel_shifter_2_io_result_o 
                                              >> 2U)))) 
                              >> 8U));
    vlSelf->io_Frac[3U] = (((8U & (IData)(vlSelf->__PVT__isNaR))
                             ? 0U : (((IData)((0U != vlSelf->__PVT___operand_3_T_6)) 
                                      << 0x1bU) | (0x7ffffffU 
                                                   & (vlSelf->__PVT___barrel_shifter_3_io_result_o 
                                                      >> 2U)))) 
                           >> 0xcU);
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__2(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__2\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_3__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h596fec38__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd1614af__0;
    // Body
    __Vtemp_h596fec38__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h596fec38__0[1U] = ((((0x2000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hcd1614af__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h596fec38__0[0U];
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h596fec38__0[1U];
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hcd1614af__0[2U])))));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    __PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->__PVT___operand_3_T_6 
                              << 0x10U) : vlSelf->__PVT___operand_3_T_6));
    __PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_3__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_3__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_3__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_3__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_3_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->__PVT__lzcModule_3__DOT__gen_lzc__DOT__index_nodes[0U]))
                         ? (__PVT__barrel_shifter_3__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_3__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__4(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__4\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_2__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h6a7498eb__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc793c7a__0;
    // Body
    __Vtemp_h6a7498eb__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h6a7498eb__0[1U] = ((((0x2000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hcc793c7a__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h6a7498eb__0[0U];
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h6a7498eb__0[1U];
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hcc793c7a__0[2U])))));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    __PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->__PVT___operand_2_T_6 
                              << 0x10U) : vlSelf->__PVT___operand_2_T_6));
    __PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_2__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_2__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_2__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_2__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_2_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->__PVT__lzcModule_2__DOT__gen_lzc__DOT__index_nodes[0U]))
                         ? (__PVT__barrel_shifter_2__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_2__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__6(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__6\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter_1__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hf3e0eabe__0;
    VlWide<3>/*95:0*/ __Vtemp_hc08fc0c1__0;
    // Body
    __Vtemp_hf3e0eabe__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hf3e0eabe__0[1U] = ((((0x2000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hc08fc0c1__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hf3e0eabe__0[0U];
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hf3e0eabe__0[1U];
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hc08fc0c1__0[2U])))));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    __PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->__PVT___operand_1_T_6 
                              << 0x10U) : vlSelf->__PVT___operand_1_T_6));
    __PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter_1__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter_1__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter_1__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter_1__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_1_io_result_o = 
        (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->__PVT__lzcModule_1__DOT__gen_lzc__DOT__index_nodes[0U]))
                         ? (__PVT__barrel_shifter_1__DOT___temp_results_0_T_2 
                            << 1U) : __PVT__barrel_shifter_1__DOT___temp_results_0_T_2));
}

VL_INLINE_OPT void VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__8(VPvuTop_PositDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VPvuTop_PositDecode___ico_comb__TOP__PvuTop__DOT__result_converted_decoder__8\n"); );
    // Init
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_3_T_2;
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_2_T_2;
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_1_T_2;
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ __PVT__barrel_shifter__DOT___temp_results_0_T_2;
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_hc3bb1030__0;
    VlWide<3>/*95:0*/ __Vtemp_hba3bc2d5__0;
    // Body
    __Vtemp_hc3bb1030__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_hc3bb1030__0[1U] = ((((0x2000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hba3bc2d5__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_hc3bb1030__0[0U];
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_hc3bb1030__0[1U];
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hba3bc2d5__0[2U])))));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    __PVT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->__PVT___operand_0_T_6 
                              << 0x10U) : vlSelf->__PVT___operand_0_T_6));
    __PVT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : __PVT__barrel_shifter__DOT___temp_results_3_T_2));
    __PVT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : __PVT__barrel_shifter__DOT___temp_results_2_T_2));
    __PVT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (__PVT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : __PVT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->__PVT___barrel_shifter_io_result_o = (0x7fffffffU 
                                                  & ((1U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         vlSelf->__PVT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                                                      ? 
                                                     (__PVT__barrel_shifter__DOT___temp_results_0_T_2 
                                                      << 1U)
                                                      : __PVT__barrel_shifter__DOT___temp_results_0_T_2));
}
