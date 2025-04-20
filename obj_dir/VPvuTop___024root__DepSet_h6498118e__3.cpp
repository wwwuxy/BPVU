// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPvuTop.h for the primary calling header

#include "verilated.h"

#include "VPvuTop___024root.h"

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__67(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__67\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    // Body
    vlSelf->__VdfgTmp_h71c5bb7f__0 = ((0x40000000U 
                                       & vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6)
                                       ? (0x1fU & (
                                                   vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   - (IData)(1U)))
                                       : (0x20U | (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ 
                                                       vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])))));
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6));
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__dot_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac 
        = ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)
            ? 0U : (((IData)((0U != vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6)) 
                     << 0x1bU) | (0x7ffffffU & (vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
                                                >> 2U))));
    if ((0U == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)) {
        vlSelf->PvuTop__DOT__dot_converter__DOT____Vcellinp__posit_encoder__io_pir_frac = 0U;
        vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0 = 0U;
    } else {
        vlSelf->PvuTop__DOT__dot_converter__DOT____Vcellinp__posit_encoder__io_pir_frac 
            = vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac;
        vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0 
            = ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)
                ? 0U : (0x7ffffffU & (vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
                                      >> 2U)));
    }
    vlSelf->__VdfgTmp_h4c868811__0 = ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT___GEN) 
                                      & (0U == vlSelf->PvuTop__DOT__dot_converter__DOT____Vcellinp__posit_encoder__io_pir_frac));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__68(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__68\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h0f7b6d09__0;
    VlWide<3>/*95:0*/ __Vtemp_hc0bfd9a0__0;
    // Body
    __Vtemp_h0f7b6d09__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h0f7b6d09__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hc0bfd9a0__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h0f7b6d09__0[0U];
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h0f7b6d09__0[1U];
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hc0bfd9a0__0[2U])))));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__69(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__69\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h182ba114__0;
    // Body
    __Vtemp_h182ba114__0 = ((0x40000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h182ba114__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__70(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__70\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he8348110__0;
    // Body
    __Vtemp_he8348110__0[1U] = (IData)((((QData)((IData)(
                                                         (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0) 
                                                           & (0U 
                                                              == 
                                                              ((0U 
                                                                == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                                ? 0U
                                                                : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)))
                                                           ? 0x80000000U
                                                           : 
                                                          (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0)) 
                                                            & ((0U 
                                                                == 
                                                                ((0U 
                                                                  == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                                  ? 0U
                                                                  : (IData)(vlSelf->__VdfgTmp_hd451a639__0))) 
                                                               & ((0U 
                                                                   != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0) 
                                                                  & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                                     & ((5U 
                                                                         != (IData)(vlSelf->io_op)) 
                                                                        & ((vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U] 
                                                                            >> 0x1bU) 
                                                                           & (0U 
                                                                              == vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h9347f0fa__0)))))))
                                                            ? 0x40000000U
                                                            : 
                                                           ((0U 
                                                             == 
                                                             ((0U 
                                                               == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                               ? 0U
                                                               : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0))
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0)
                                                              ? 
                                                             (0x80000000U 
                                                              | (0x7fffffffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (~ vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_3_T))))
                                                              : vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_3_T)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0) 
                                                            & (0U 
                                                               == 
                                                               ((0U 
                                                                 == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                                 ? 0U
                                                                 : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)))
                                                            ? 0x80000000U
                                                            : 
                                                           (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0)) 
                                                             & ((0U 
                                                                 == 
                                                                 ((0U 
                                                                   == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                                   ? 0U
                                                                   : (IData)(vlSelf->__VdfgTmp_h9a0d8522__0))) 
                                                                & ((0U 
                                                                    != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0) 
                                                                   & ((2U 
                                                                       < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                      & ((5U 
                                                                          != (IData)(vlSelf->io_op)) 
                                                                         & ((vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U] 
                                                                             >> 0x1bU) 
                                                                            & (0U 
                                                                               == vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h96e1f5ff__0)))))))
                                                             ? 0x40000000U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              ((0U 
                                                                == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                                ? 0U
                                                                : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0))
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0)
                                                               ? 
                                                              (0x80000000U 
                                                               | (0x7fffffffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (~ vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_2_T))))
                                                               : vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_2_T))))))));
    __Vtemp_he8348110__0[2U] = (IData)(((((QData)((IData)(
                                                          (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0) 
                                                            & (0U 
                                                               == 
                                                               ((0U 
                                                                 == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                                 ? 0U
                                                                 : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)))
                                                            ? 0x80000000U
                                                            : 
                                                           (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0)) 
                                                             & ((0U 
                                                                 == 
                                                                 ((0U 
                                                                   == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                                   ? 0U
                                                                   : (IData)(vlSelf->__VdfgTmp_hd451a639__0))) 
                                                                & ((0U 
                                                                    != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0) 
                                                                   & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0) 
                                                                      & ((5U 
                                                                          != (IData)(vlSelf->io_op)) 
                                                                         & ((vlSelf->PvuTop__DOT____VdfgTmp_h663e95d2__0[0U] 
                                                                             >> 0x1bU) 
                                                                            & (0U 
                                                                               == vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h9347f0fa__0)))))))
                                                             ? 0x40000000U
                                                             : 
                                                            ((0U 
                                                              == 
                                                              ((0U 
                                                                == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0)
                                                                ? 0U
                                                                : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7b131dde__0))
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878add96__0)
                                                               ? 
                                                              (0x80000000U 
                                                               | (0x7fffffffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (~ vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_3_T))))
                                                               : vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_3_T)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0) 
                                                             & (0U 
                                                                == 
                                                                ((0U 
                                                                  == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                                  ? 0U
                                                                  : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)))
                                                             ? 0x80000000U
                                                             : 
                                                            (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0)) 
                                                              & ((0U 
                                                                  == 
                                                                  ((0U 
                                                                    == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                                    ? 0U
                                                                    : (IData)(vlSelf->__VdfgTmp_h9a0d8522__0))) 
                                                                 & ((0U 
                                                                     != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0) 
                                                                    & ((2U 
                                                                        < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)) 
                                                                       & ((5U 
                                                                           != (IData)(vlSelf->io_op)) 
                                                                          & ((vlSelf->PvuTop__DOT____VdfgTmp_h65ffef42__0[0U] 
                                                                              >> 0x1bU) 
                                                                             & (0U 
                                                                                == vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h96e1f5ff__0)))))))
                                                              ? 0x40000000U
                                                              : 
                                                             ((0U 
                                                               == 
                                                               ((0U 
                                                                 == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0)
                                                                 ? 0U
                                                                 : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7eb5ce53__0))
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h878e0f03__0)
                                                                ? 
                                                               (0x80000000U 
                                                                | (0x7fffffffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (~ vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_2_T))))
                                                                : vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_2_T))))))) 
                                        >> 0x20U));
    vlSelf->PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[0U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f12fa9__0) 
            & (0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                       ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)) 
                              & ((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                          ? 0U : (IData)(vlSelf->__VdfgTmp_h94704af9__0))) 
                                 & ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0) 
                                    & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha15d0789__0) 
                                       & ((5U != (IData)(vlSelf->io_op)) 
                                          & ((vlSelf->PvuTop__DOT____VdfgTmp_hf4fce55a__0[0U] 
                                              >> 0x1bU) 
                                             & (0U 
                                                == vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0)))))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((0U 
                                                  == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0)
                                                  ? 0U
                                                  : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h799ff3bb__0))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f12fa9__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_0_T))))
                                                    : vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_0_T))));
    vlSelf->PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[1U] 
        = (((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f57e3c__0) 
            & (0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                       ? 0U : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)) 
                              & ((0U == ((0U == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                          ? 0U : (IData)(vlSelf->__VdfgTmp_h195f781d__0))) 
                                 & ((0U != vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0) 
                                    & ((IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0) 
                                       & ((5U != (IData)(vlSelf->io_op)) 
                                          & ((vlSelf->PvuTop__DOT____VdfgTmp_hadfdcc16__0[0U] 
                                              >> 0x1bU) 
                                             & (0U 
                                                == vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT____VdfgTmp_h962fac1b__0)))))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((0U 
                                                  == vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0)
                                                  ? 0U
                                                  : vlSelf->PvuTop__DOT__result_converter__DOT____VdfgTmp_h7ee3803d__0))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__encode__DOT____VdfgTmp_h87f57e3c__0)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_1_T))))
                                                    : vlSelf->PvuTop__DOT__result_converter__DOT__posit_encoder__DOT___value_after_round_1_T))));
    vlSelf->PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[2U] 
        = __Vtemp_he8348110__0[1U];
    vlSelf->PvuTop__DOT____Vcellinp__result_converted_decoder__io_posit[3U] 
        = __Vtemp_he8348110__0[2U];
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__72(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__72\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___value_after_round_0_T;
    PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___value_after_round_0_T = 0;
    CData/*0:0*/ PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    IData/*30:0*/ PvuTop__DOT__dot_converted_decoder__DOT____VdfgTmp_h27f16fb5__0;
    PvuTop__DOT__dot_converted_decoder__DOT____VdfgTmp_h27f16fb5__0 = 0;
    CData/*0:0*/ PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0;
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h381d5909__0;
    VlWide<3>/*95:0*/ __Vtemp_h4cb60341__0;
    VlWide<3>/*95:0*/ __Vtemp_h8e4f9973__0;
    VlWide<3>/*95:0*/ __Vtemp_h658b815c__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b3faf9c__0;
    // Body
    vlSelf->__VdfgTmp_h5dbe1e6a__0 = ((1U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                       ? (3U & (vlSelf->PvuTop__DOT__dot_decoder__DOT___barrel_shifter_io_result_o 
                                                >> 0x1dU))
                                       : 0U);
    PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0 
        = ((0U != vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac) 
           & ((~ (IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)) 
              & (vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
                 & ((IData)(vlSelf->__VdfgTmp_h71c5bb7f__0) 
                    >> 5U))));
    vlSelf->__VdfgTmp_h5fa00eca__0 = ((~ (IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT___GEN)) 
                                      & ((0U == ((0U 
                                                  == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)
                                                   ? 0U
                                                   : 
                                                  ((((1U 
                                                      & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                      ? (IData)(vlSelf->__VdfgTmp_h71c5bb7f__0)
                                                      : 0U) 
                                                    << 2U) 
                                                   | (IData)(vlSelf->__VdfgTmp_h5dbe1e6a__0))))) 
                                         & ((0U != vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac) 
                                            & ((~ (IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)) 
                                               & ((0U 
                                                   != vlSelf->PvuTop__DOT__dot_decoder__DOT___operand_0_T_6) 
                                                  & (0U 
                                                     == vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0))))));
    vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((0U == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                      ? 0U : ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h5dbe1e6a__0))))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((0U 
                                                                           == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                                                           ? 0U
                                                                           : 
                                                                          ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)
                                                                            ? 0U
                                                                            : (IData)(vlSelf->__VdfgTmp_h5dbe1e6a__0))))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                         ? 0x1fU : 
                                        ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)
                                          ? 0x1fU : 
                                         ((1U & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                           ? (~ (IData)(vlSelf->__VdfgTmp_h71c5bb7f__0))
                                           : 0x1fU))))
                      : ((IData)(2U) + ((0U == vlSelf->PvuTop__DOT____Vcellout__dot_decoder__io_Frac)
                                         ? 0U : ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT__isNaR)
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & vlSelf->PvuTop__DOT__dot_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                   ? (IData)(vlSelf->__VdfgTmp_h71c5bb7f__0)
                                                   : 0U))))) 
                    - (IData)(2U)));
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h381d5909__0, vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_h381d5909__0[0U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_h381d5909__0[1U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h381d5909__0[2U]);
    } else {
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h4cb60341__0, PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_h4cb60341__0[0U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_h4cb60341__0[1U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h4cb60341__0[2U]);
    } else {
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h8e4f9973__0, PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h8e4f9973__0[0U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h8e4f9973__0[1U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h8e4f9973__0[2U]);
    } else {
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h658b815c__0, PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_h658b815c__0[0U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_h658b815c__0[1U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h658b815c__0[2U]);
    } else {
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h9b3faf9c__0, PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_h9b3faf9c__0[0U];
        vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h9b3faf9c__0[1U];
        vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h9b3faf9c__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___barrel_shifter_io_result_o[0U])))))));
    vlSelf->__VdfgTmp_hd9892f2b__0 = ((IData)(vlSelf->PvuTop__DOT__dot_decoder__DOT___GEN)
                                       ? (0x80000000U 
                                          | (0x7fffffffU 
                                             & ((IData)(1U) 
                                                + (~ PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___value_after_round_0_T))))
                                       : PvuTop__DOT__dot_converter__DOT__posit_encoder__DOT___value_after_round_0_T);
    PvuTop__DOT__dot_converted_decoder__DOT____VdfgTmp_h27f16fb5__0 
        = ((IData)(vlSelf->__VdfgTmp_h4c868811__0) ? 0U
            : ((IData)(vlSelf->__VdfgTmp_h5fa00eca__0)
                ? 0x40000000U : ((0U == vlSelf->PvuTop__DOT__dot_converter__DOT____Vcellinp__posit_encoder__io_pir_frac)
                                  ? 0U : (0x7fffffffU 
                                          & vlSelf->__VdfgTmp_hd9892f2b__0))));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___GEN 
        = ((IData)(vlSelf->__VdfgTmp_h4c868811__0) 
           | ((~ (IData)(vlSelf->__VdfgTmp_h5fa00eca__0)) 
              & ((0U != vlSelf->PvuTop__DOT__dot_converter__DOT____Vcellinp__posit_encoder__io_pir_frac) 
                 & (vlSelf->__VdfgTmp_hd9892f2b__0 
                    >> 0x1fU))));
    if (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___GEN) {
        vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR 
            = (0U == PvuTop__DOT__dot_converted_decoder__DOT____VdfgTmp_h27f16fb5__0);
        vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6 
            = (0x7fffffffU & ((IData)(1U) + ((IData)(vlSelf->__VdfgTmp_h4c868811__0)
                                              ? 0x7fffffffU
                                              : ((IData)(vlSelf->__VdfgTmp_h5fa00eca__0)
                                                  ? 0x3fffffffU
                                                  : 
                                                 ((0U 
                                                   == vlSelf->PvuTop__DOT__dot_converter__DOT____Vcellinp__posit_encoder__io_pir_frac)
                                                   ? 0x7fffffffU
                                                   : 
                                                  (~ vlSelf->__VdfgTmp_hd9892f2b__0))))));
    } else {
        vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR = 0U;
        vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6 
            = (0x7fffffffU & PvuTop__DOT__dot_converted_decoder__DOT____VdfgTmp_h27f16fb5__0);
    }
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
        = (0x7fffffffU & ((- (IData)((1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6 
                                            >> 0x1eU)))) 
                          ^ vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1eU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffeU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | (IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1dU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffdU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 1U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1cU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffffbU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 2U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1bU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffff7U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 3U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x1aU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffefU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 4U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x19U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffdfU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 5U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x18U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffffbfU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 6U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x17U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffff7fU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 7U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x16U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffeffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 8U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x15U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffdffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 9U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x14U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffffbffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xaU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x13U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffff7ffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xbU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x12U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffefffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xcU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x11U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffdfffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xdU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0x10U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fffbfffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xeU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xfU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fff7fffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0xfU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xeU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffeffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x10U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xdU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffdffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x11U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xcU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ffbffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x12U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xbU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7ff7ffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x13U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 0xaU));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fefffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x14U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 9U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fdfffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x15U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 8U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7fbfffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x16U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 7U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7f7fffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x17U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 6U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7effffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x18U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 5U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7dffffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x19U));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 4U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x7bffffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1aU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 3U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x77ffffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1bU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 2U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x6fffffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1cU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i 
                 >> 1U));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x5fffffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1dU));
    PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0 
        = (1U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT____Vcellinp__lzcModule__in_i);
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp 
        = ((0x3fffffffU & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
           | ((IData)(PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT____Vlvbound_hefa3c05c__0) 
              << 0x1eU));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__73(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__73\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h02666a72__0;
    // Body
    __Vtemp_h02666a72__0 = ((0x40000000U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp) 
                            | (((IData)((0U != (0x30000000U 
                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h02666a72__0);
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__74(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__74\n"); );
    // Init
    IData/*30:0*/ PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h4b569c5e__0;
    VlWide<3>/*95:0*/ __Vtemp_hb826a198__0;
    // Body
    __Vtemp_h4b569c5e__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & ((0x800000U 
                                                              & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                              ? 
                                                             ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xdU) 
                                                              | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x13U))
                                                              : 
                                                             ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_h4b569c5e__0[1U] = ((((0x2000000U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                   ? ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 3U) | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1dU))
                                   : ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 2U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & ((0x800000U 
                                                                  & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xdU) 
                                                                  | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x13U))
                                                                  : 
                                                                 ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_hb826a198__0[2U] = ((0x7c0U & (((0x20000000U 
                                             & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                             ? ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xfU) 
                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x11U))
                                             : ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))) 
                                           << 6U)) 
                                | ((0x3eU & (((0x8000000U 
                                               & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                   | (1U & (((0x2000000U 
                                              & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                              ? ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                              : ((vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                            >> 4U))));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h4b569c5e__0[0U];
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h4b569c5e__0[1U];
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_hb826a198__0[2U])))));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x7800000U | ((0xf8000000U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[4U]) 
                         | ((((0x10000000U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                               ? 0x1cU : 0x1dU) << 0x11U) 
                            | ((((0x4000000U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                  ? 0x1aU : 0x1bU) 
                                << 0xcU) | ((((0x1000000U 
                                               & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x18U
                                               : 0x19U) 
                                             << 7U) 
                                            | ((((0x400000U 
                                                  & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x16U
                                                  : 0x17U) 
                                                << 2U) 
                                               | (((0x100000U 
                                                    & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__in_tmp)
                                                    ? 0x14U
                                                    : 0x15U) 
                                                  >> 3U)))))));
    PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2 
        = (0x7fffffffU & ((0x10U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6 
                              << 0x10U) : vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6));
    vlSelf->__VdfgTmp_hae506208__0 = ((0x40000000U 
                                       & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6)
                                       ? (0x1fU & (
                                                   vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                   - (IData)(1U)))
                                       : (0x20U | (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ 
                                                       vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U])))));
    PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 
        = (0x7fffffffU & ((8U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2 
                              << 8U) : PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_3_T_2));
    PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
        = (0x7fffffffU & ((4U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2 
                              << 4U) : PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_2_T_2));
    PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
        = (0x7fffffffU & ((2U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2 
                              << 2U) : PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_1_T_2));
    vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___barrel_shifter_io_result_o 
        = (0x7fffffffU & ((1U & ((IData)(1U) + vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__index_nodes[0U]))
                           ? (PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2 
                              << 1U) : PvuTop__DOT__dot_converted_decoder__DOT__barrel_shifter__DOT___temp_results_0_T_2));
    vlSelf->PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h91c3a767__0 
        = ((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
            ? 0U : (0x7ffffffU & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___barrel_shifter_io_result_o 
                                  >> 2U)));
}

VL_INLINE_OPT void VPvuTop___024root___ico_comb__TOP__77(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___ico_comb__TOP__77\n"); );
    // Init
    IData/*31:0*/ PvuTop__DOT___GEN_119;
    PvuTop__DOT___GEN_119 = 0;
    IData/*31:0*/ PvuTop__DOT____VdfgTmp_hae954db3__0;
    PvuTop__DOT____VdfgTmp_hae954db3__0 = 0;
    IData/*30:0*/ PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T;
    PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T = 0;
    CData/*0:0*/ PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0;
    PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0 = 0;
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2);
    VlWide<3>/*89:0*/ PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2;
    VL_ZERO_W(90, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2);
    VlWide<3>/*95:0*/ __Vtemp_hd5170e32__0;
    VlWide<3>/*95:0*/ __Vtemp_hab9252c1__0;
    VlWide<3>/*95:0*/ __Vtemp_h962ced69__0;
    VlWide<3>/*95:0*/ __Vtemp_hfb984936__0;
    VlWide<3>/*95:0*/ __Vtemp_h0bfcd180__0;
    // Body
    PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0 
        = (((~ (IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)) 
            & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes) 
           & ((IData)(vlSelf->__VdfgTmp_hae506208__0) 
              >> 5U));
    vlSelf->__VdfgTmp_hd9250a07__0 = ((1U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                       ? (3U & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___barrel_shifter_io_result_o 
                                                >> 0x1dU))
                                       : 0U);
    vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount 
        = (0x1fU & (((IData)(PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0)
                      ? ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                                         ? 0x1fU : 
                                        ((1U & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                          ? (~ (IData)(vlSelf->__VdfgTmp_hae506208__0))
                                          : 0x1fU)))
                      : ((IData)(2U) + ((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                                         ? 0U : ((1U 
                                                  & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                  ? (IData)(vlSelf->__VdfgTmp_hae506208__0)
                                                  : 0U)))) 
                    - (IData)(2U)));
    vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                                      ? 0U : (IData)(vlSelf->__VdfgTmp_hd9250a07__0)))) 
                    << 0x39U) | ((QData)((IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                 << 0x1eU)));
    vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U] 
        = ((((IData)(PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0)
              ? 1U : 0x7ffffffeU) << 0x1bU) | (IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                                                                           ? 0U
                                                                           : (IData)(vlSelf->__VdfgTmp_hd9250a07__0)))) 
                                                         << 0x39U) 
                                                        | ((QData)((IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h91c3a767__0)) 
                                                           << 0x1eU)) 
                                                       >> 0x20U)));
    vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U] 
        = (((IData)(PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h1c349387__0)
             ? 1U : 0x7ffffffeU) >> 5U);
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hd5170e32__0, vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i, 0x10U);
    if ((0x10U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = __Vtemp_hd5170e32__0[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = __Vtemp_hd5170e32__0[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hd5170e32__0[2U]);
    } else {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U] 
            = vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U] 
            = vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U] 
            = (0x3ffffffU & vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_operand_i[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hab9252c1__0, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2, 8U);
    if ((8U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = __Vtemp_hab9252c1__0[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = __Vtemp_hab9252c1__0[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hab9252c1__0[2U]);
    } else {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_3_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h962ced69__0, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2, 4U);
    if ((4U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = __Vtemp_h962ced69__0[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = __Vtemp_h962ced69__0[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & __Vtemp_h962ced69__0[2U]);
    } else {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_2_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_hfb984936__0, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2, 2U);
    if ((2U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = __Vtemp_hfb984936__0[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = __Vtemp_hfb984936__0[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & __Vtemp_hfb984936__0[2U]);
    } else {
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[0U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[1U];
        PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_1_T_2[2U]);
    }
    VL_SHIFTR_WWI(90,90,32, __Vtemp_h0bfcd180__0, PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2, 1U);
    if ((1U & (IData)(vlSelf->PvuTop__DOT__dot_encoder__DOT____Vcellinp__barrel_shifter__io_shift_amount))) {
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = __Vtemp_h0bfcd180__0[0U];
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = __Vtemp_h0bfcd180__0[1U];
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & __Vtemp_h0bfcd180__0[2U]);
    } else {
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[0U];
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[1U] 
            = PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[1U];
        vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[2U] 
            = (0x3ffffffU & PvuTop__DOT__dot_encoder__DOT__barrel_shifter__DOT___temp_results_0_T_2[2U]);
    }
    PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T 
        = (0x7fffffffU & (((vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[1U] 
                            << 2U) | (vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                      >> 0x1eU)) + 
                          (1U & ((vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U] 
                                  >> 0x1dU) & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x5fffffffU 
                                                        & vlSelf->PvuTop__DOT__dot_encoder__DOT___barrel_shifter_io_result_o[0U])))))));
    vlSelf->PvuTop__DOT____Vcellout__dot_encoder__io_posit 
        = (((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___GEN) 
            & (0U == ((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                       ? 0U : (((IData)((0U != vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6)) 
                                << 0x1bU) | (0x7ffffffU 
                                             & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___barrel_shifter_io_result_o 
                                                >> 2U))))))
            ? 0x80000000U : (((~ (IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___GEN)) 
                              & ((0U == ((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                                          ? 0U : ((
                                                   ((1U 
                                                     & vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__lzcModule__DOT__gen_lzc__DOT__sel_nodes)
                                                     ? (IData)(vlSelf->__VdfgTmp_hae506208__0)
                                                     : 0U) 
                                                   << 2U) 
                                                  | (IData)(vlSelf->__VdfgTmp_hd9250a07__0)))) 
                                 & ((~ (IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)) 
                                    & ((0U != vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6) 
                                       & (0U == vlSelf->PvuTop__DOT__dot_encoder__DOT____VdfgTmp_h91c3a767__0)))))
                              ? 0x40000000U : ((0U 
                                                == 
                                                ((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT__isNaR)
                                                  ? 0U
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___operand_0_T_6)) 
                                                   << 0x1bU) 
                                                  | (0x7ffffffU 
                                                     & (vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___barrel_shifter_io_result_o 
                                                        >> 2U)))))
                                                ? 0U
                                                : ((IData)(vlSelf->PvuTop__DOT__dot_converted_decoder__DOT___GEN)
                                                    ? 
                                                   (0x80000000U 
                                                    | (0x7fffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T))))
                                                    : PvuTop__DOT__dot_encoder__DOT___value_after_round_0_T))));
    PvuTop__DOT___GEN_119 = ((((0x1fU >= (0x3fU & ((IData)(0x20U) 
                                                   - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                ? ((IData)(1U) << (0x3fU 
                                                   & ((IData)(0x20U) 
                                                      - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                : 0U) - (IData)(1U)) 
                             & vlSelf->PvuTop__DOT____Vcellout__dot_encoder__io_posit);
    vlSelf->PvuTop__DOT__shifted = ((0x1fU >= (0x3fU 
                                               & ((IData)(0x20U) 
                                                  - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                     ? (vlSelf->PvuTop__DOT____Vcellout__dot_encoder__io_posit 
                                        >> (0x3fU & 
                                            ((IData)(0x20U) 
                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                     : 0U);
    PvuTop__DOT____VdfgTmp_hae954db3__0 = (vlSelf->PvuTop__DOT__shifted 
                                           + (1U & 
                                              ((IData)(
                                                       ((QData)((IData)(PvuTop__DOT___GEN_119)) 
                                                        >> 
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH)) 
                                                            - (IData)(1U))))) 
                                               & ((0U 
                                                   != 
                                                   ((((0x1fU 
                                                       >= 
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH)) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH)) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U)) 
                                                    & PvuTop__DOT___GEN_119)) 
                                                  | vlSelf->PvuTop__DOT__shifted))));
    vlSelf->io_posit_dot_o = (((5U == (IData)(vlSelf->io_op)) 
                               & (IData)(vlSelf->io_Outposit))
                               ? ((IData)(vlSelf->PvuTop__DOT___GEN_62)
                                   ? vlSelf->PvuTop__DOT____Vcellout__dot_encoder__io_posit
                                   : ((0x1fU >= (0x3fU 
                                                 & ((IData)(0x20U) 
                                                    - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                       ? (PvuTop__DOT____VdfgTmp_hae954db3__0 
                                          << (0x3fU 
                                              & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->PvuTop__DOT__ACTUAL_DST_POSIT_WIDTH))))
                                       : 0U)) : 0U);
}

VL_INLINE_OPT void VPvuTop___024root___nba_sequent__TOP__0(VPvuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPvuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPvuTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*32:0*/ __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMax;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMax = 0;
    QData/*32:0*/ __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMin;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMin = 0;
    QData/*32:0*/ __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax = 0;
    QData/*32:0*/ __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin = 0;
    CData/*0:0*/ __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchHasData;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchHasData = 0;
    CData/*1:0*/ __Vdly__PvuTop__DOT__quantizeInt8__DOT__state;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__state = 0;
    // Body
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__state = vlSelf->PvuTop__DOT__quantizeInt8__DOT__state;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchHasData 
        = vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin 
        = vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMin;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax 
        = vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMax;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMin 
        = vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMin;
    __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMax 
        = vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMax;
    if (vlSelf->reset) {
        __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMax = 0x7fULL;
        __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMin = 0x1ffffff80ULL;
        vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale = 1ULL;
        vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset = 0ULL;
        __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax = 0x1ffffff80ULL;
        __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin = 0x7fULL;
        __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchHasData = 0U;
        __Vdly__PvuTop__DOT__quantizeInt8__DOT__state = 0U;
    } else {
        vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_15 
            = (0U == (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__state));
        vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_17 
            = (1U & (((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                      | ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                         & (~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)))) 
                     | (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)));
        vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_18 
            = (1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                     & (~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData))));
        vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_19 
            = (2U == (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__state));
        vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_16 
            = (1U == (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__state));
        vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_20 
            = ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_15) 
               | (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_16));
        if ((1U & (~ ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_20) 
                      | (~ (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_19) 
                             & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                            & VL_GTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMax, vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMax))))))) {
            __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMax 
                = vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMax;
        }
        if ((1U & (~ ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_20) 
                      | (~ (((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_19) 
                             & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                            & VL_LTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMin, vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMin))))))) {
            __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMin 
                = vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMin;
        }
        if ((1U & (~ ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_20) 
                      | (~ ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_19) 
                            & (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData))))))) {
            vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T 
                = (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMax 
                                     - vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMin));
            vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T_7 
                = (0x1ffffffffULL & (VL_GTS_IQQ(33, 0ULL, vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T)
                                      ? (- vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T)
                                      : vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T));
            vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                = (0x1ffffffffULL & (vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMax 
                                     + vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMin));
            vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_21 
                = ((0ULL == vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T_7) 
                   | (0U == (0x1ffffffU & (IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T_7 
                                                   >> 8U)))));
            if (vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_21) {
                vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale = 1ULL;
                vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset = 0ULL;
            } else {
                vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                    = (0x1ffffffffULL & VL_DIV_QQQ(33, 
                                                   (0x1ffffffffULL 
                                                    & (0x7fULL 
                                                       + vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___range_T_7)), 0xffULL));
                vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalOffset 
                    = (((QData)((IData)((1U & (IData)(
                                                      (vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                                                       >> 0x20U))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT__unnamedblk2__DOT___mid_T 
                                                     >> 1U))));
            }
        }
        if (vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_15) {
            __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax = 0x1ffffff80ULL;
            __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin = 0x7fULL;
        } else if (vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_16) {
            if ((1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                       & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                          | VL_GTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMax))))) {
                __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax 
                    = vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10;
            } else if ((1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                              & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMax))))) {
                __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax 
                    = vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7;
            } else if ((1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                              & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMax))))) {
                __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax 
                    = vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4;
            } else if ((1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                              & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_GTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMax))))) {
                __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax 
                    = vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1;
            }
            if ((1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                       & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                          | VL_LTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMin))))) {
                __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin 
                    = vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_10;
            } else if ((1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                              & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMin))))) {
                __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin 
                    = vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_7;
            } else if ((1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                              & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMin))))) {
                __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin 
                    = vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_4;
            } else if ((1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                              & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | VL_LTS_IQQ(33, vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1, vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMin))))) {
                __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin 
                    = vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_1;
            }
        }
        __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchHasData 
            = (1U & ((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_15)) 
                     & ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_16)
                         ? ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)
                             ? ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_18) 
                                | (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_17))
                             : (((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData)) 
                                 | (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_18)) 
                                | (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__unnamedblk1__DOT___GEN_17)))
                         : (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData))));
        __Vdly__PvuTop__DOT__quantizeInt8__DOT__state 
            = (3U & (0x39U >> (7U & ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT__state) 
                                     << 1U))));
    }
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMax 
        = __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMax;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalMin 
        = __Vdly__PvuTop__DOT__quantizeInt8__DOT__globalMin;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMax 
        = __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMax;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchMin 
        = __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchMin;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__batchHasData 
        = __Vdly__PvuTop__DOT__quantizeInt8__DOT__batchHasData;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT__state = __Vdly__PvuTop__DOT__quantizeInt8__DOT__state;
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_13 
        = (((QData)((IData)((1U & (IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                                         >> 1U))));
    vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_12 
        = (((QData)((IData)((1U & (IData)((vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale 
                                           >> 0x20U))))) 
            << 0x21U) | vlSelf->PvuTop__DOT__quantizeInt8__DOT__globalScale);
}

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
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_100)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h87baa85a__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_0)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h87baa85a__0))));
    vlSelf->io_int_o_1 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_h792c5c44__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_100)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h10c27d8c__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_3)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h10c27d8c__0))));
    vlSelf->io_int_o_2 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (2U < (IData)(vlSelf->PvuTop__DOT__ACTUAL_VECTOR_SIZE)))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_100)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)) 
                                                & ((IData)(vlSelf->__VdfgTmp_h0453aeb4__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_6)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_h0453aeb4__0))));
    vlSelf->io_int_o_3 = ((1U & ((~ ((0xaU == (IData)(vlSelf->io_op)) 
                                     & (IData)(vlSelf->PvuTop__DOT____VdfgTmp_ha10fc7a1__0))) 
                                 | (IData)(vlSelf->PvuTop__DOT___GEN_100)))
                           ? 0U : (((- (IData)(((~ (IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)) 
                                                & ((IData)(vlSelf->__VdfgTmp_hee1354a9__0) 
                                                   >> 7U)))) 
                                    << 8U) | ((IData)(vlSelf->PvuTop__DOT__quantizeInt8__DOT___GEN_9)
                                               ? 0U
                                               : (IData)(vlSelf->__VdfgTmp_hee1354a9__0))));
}

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
                VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 9355, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 9355, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/wuxy/BPVU/vsrc/PvuTop.sv", 9355, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->io_src_posit_width & 0xc0U))) {
        Verilated::overWidthError("io_src_posit_width");}
    if (VL_UNLIKELY((vlSelf->io_vector_size & 0xf8U))) {
        Verilated::overWidthError("io_vector_size");}
    if (VL_UNLIKELY((vlSelf->io_dst_posit_width & 0xc0U))) {
        Verilated::overWidthError("io_dst_posit_width");}
}
#endif  // VL_DEBUG
